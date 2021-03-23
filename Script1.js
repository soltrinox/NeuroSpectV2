var string = "test,is,working,well\ntest2,is,working,aswell\ntest3,finally,works";
console.log(string);

var array = string.split('\n');
console.log(array[0]);

for (var i = 0; i < array.length; i++) {
    var testArray = array[i].split(',');
    console.log(testArray[0] + " " + testArray[1]);
}