mergeInto(LibraryManager.library, {
    CheckCode: function (tableName, code) {
        var params = {
            TableName: Pointer_stringify(tableName),
            Key: {
                "code": Pointer_stringify(code)
            }
        };

        var awsConfig =
        {
            region: "us-east-2",
            endpoint: "https://dynamodb.us-east-2.amazonaws.com",
            accessKeyId: "AKIAZJJQRA2HH3T3FMGK",
            secretAccessKey: "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"
        };

        AWS.config.update(awsConfig);
        var docClient = new AWS.DynamoDB.DocumentClient();
        var returnStr = "Error";
        docClient.get(params, function (err, data) {
            if (err) {
                SendMessage('Main Camera', 'StringCallbackCode',
                    "false");
            }
            else {
                SendMessage('Main Camera', 'StringCallbackCode',
                    "true");
            }
        });
    },
    InsertData: function (tableName, code, age, race, gender, attentionData, recallData) {
        var attentionRows = [];
        attentionRows = attentionData.toString().split('\n');
        var recallRows = [];
        recallRows = recallData.toString().split('\n');

        var params =
        {
            TableName: Pointer_stringify(tableName),
            Item:
            {
                "code": Pointer_stringify(code),
                "age": Pointer_stringify(age),
                "race": Pointer_stringify(race),
                "gender": Pointer_stringify(gender),
                "attentionData": Pointer_stringify(attentionRows),
                "recallData": Pointer_stringify(recallRows)
            }
        }

        var awsConfig =
        {
            region: "us-east-2",
            endpoint: "https://dynamodb.us-east-2.amazonaws.com",
            accessKeyId: "AKIAZJJQRA2HH3T3FMGK",
            secretAccessKey: "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"
        }


        AWS.config.update(awsConfig);
        var docClient = new AWS.DynamoDB.DocumentClient();
        var returnStr = "Error";
        docClient.put(params, function (err, data) {
            if (err) {
                returnStr = "Error: " + JSON.stringify(err, undefined, 2);
                SendMessage('Main Camera', 'StringCallback',
                    returnStr);
            }
            else {
                returnStr = "Inserted: " + JSON.stringify(data, undefined,
                    2);
                SendMessage('Main Camera', 'StringCallback',
                    returnStr);
            }
        });
    }
});