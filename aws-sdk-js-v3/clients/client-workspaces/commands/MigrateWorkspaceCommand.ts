import { ServiceInputTypes, ServiceOutputTypes, WorkSpacesClientResolvedConfig } from "../WorkSpacesClient";
import { MigrateWorkspaceRequest, MigrateWorkspaceResult } from "../models/models_0";
import {
  deserializeAws_json1_1MigrateWorkspaceCommand,
  serializeAws_json1_1MigrateWorkspaceCommand,
} from "../protocols/Aws_json1_1";
import { getSerdePlugin } from "@aws-sdk/middleware-serde";
import { HttpRequest as __HttpRequest, HttpResponse as __HttpResponse } from "@aws-sdk/protocol-http";
import { Command as $Command } from "@aws-sdk/smithy-client";
import {
  FinalizeHandlerArguments,
  Handler,
  HandlerExecutionContext,
  MiddlewareStack,
  HttpHandlerOptions as __HttpHandlerOptions,
  MetadataBearer as __MetadataBearer,
  SerdeContext as __SerdeContext,
} from "@aws-sdk/types";

export type MigrateWorkspaceCommandInput = MigrateWorkspaceRequest;
export type MigrateWorkspaceCommandOutput = MigrateWorkspaceResult & __MetadataBearer;

/**
 * <p>Migrates a WorkSpace from one operating system or bundle type to another, while retaining the data on the user volume.</p>
 *
 *          <p>The migration process recreates the WorkSpace by using a new root volume from the target bundle image and the user volume
 *          from the last available snapshot of the original WorkSpace. During migration, the original <code>D:\Users\%USERNAME%</code>
 *          user profile folder is renamed to <code>D:\Users\%USERNAME%MMddyyTHHmmss%.NotMigrated</code>. A new <code>D:\Users\%USERNAME%\</code>
 *          folder is generated by the new OS. Certain files in the old user profile are moved to the new user profile.</p>
 *
 *          <p>For available migration scenarios, details about what happens during migration, and best practices, see
 *          <a href="https://docs.aws.amazon.com/workspaces/latest/adminguide/migrate-workspaces.html">Migrate a WorkSpace</a>.</p>
 */
export class MigrateWorkspaceCommand extends $Command<
  MigrateWorkspaceCommandInput,
  MigrateWorkspaceCommandOutput,
  WorkSpacesClientResolvedConfig
> {
  // Start section: command_properties
  // End section: command_properties

  constructor(readonly input: MigrateWorkspaceCommandInput) {
    // Start section: command_constructor
    super();
    // End section: command_constructor
  }

  /**
   * @internal
   */
  resolveMiddleware(
    clientStack: MiddlewareStack<ServiceInputTypes, ServiceOutputTypes>,
    configuration: WorkSpacesClientResolvedConfig,
    options?: __HttpHandlerOptions
  ): Handler<MigrateWorkspaceCommandInput, MigrateWorkspaceCommandOutput> {
    this.middlewareStack.use(getSerdePlugin(configuration, this.serialize, this.deserialize));

    const stack = clientStack.concat(this.middlewareStack);

    const { logger } = configuration;
    const clientName = "WorkSpacesClient";
    const commandName = "MigrateWorkspaceCommand";
    const handlerExecutionContext: HandlerExecutionContext = {
      logger,
      clientName,
      commandName,
      inputFilterSensitiveLog: MigrateWorkspaceRequest.filterSensitiveLog,
      outputFilterSensitiveLog: MigrateWorkspaceResult.filterSensitiveLog,
    };
    const { requestHandler } = configuration;
    return stack.resolve(
      (request: FinalizeHandlerArguments<any>) =>
        requestHandler.handle(request.request as __HttpRequest, options || {}),
      handlerExecutionContext
    );
  }

  private serialize(input: MigrateWorkspaceCommandInput, context: __SerdeContext): Promise<__HttpRequest> {
    return serializeAws_json1_1MigrateWorkspaceCommand(input, context);
  }

  private deserialize(output: __HttpResponse, context: __SerdeContext): Promise<MigrateWorkspaceCommandOutput> {
    return deserializeAws_json1_1MigrateWorkspaceCommand(output, context);
  }

  // Start section: command_body_extra
  // End section: command_body_extra
}