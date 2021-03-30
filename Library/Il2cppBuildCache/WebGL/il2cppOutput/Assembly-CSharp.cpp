#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<System.Int32,System.Single>
struct Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Linq.IOrderedEnumerable`1<System.Int32>
struct IOrderedEnumerable_1_t03754D99BBB1FDA73448A78019BBC47767A5153D;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// System.Collections.Generic.List`1<System.Int32>[]
struct List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DataStorage
struct DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Demographics
struct Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B;
// DisplayMemoryIcons
struct DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B;
// DisplayScore
struct DisplayScore_tE966894ADF4B522CAC9EA53868A9A82B03FD5009;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// EncInstr
struct EncInstr_tCEB6D3749C90AEA1C7CA7B84C2B5412D92168FA7;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GotWrongInter
struct GotWrongInter_t7E34DC6CF8EE24EB5D25C39A580C07EFB746C516;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// InstructionsToGame
struct InstructionsToGame_t0A49B8D3748AC6A63E9CCA2426B210AF1DCE62B9;
// Instructiosn
struct Instructiosn_tE86560452B6ACA0673516A4238C679CC16DA52B8;
// Intro
struct Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// RecallGame
struct RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E;
// RecallInstructions
struct RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SceneChanger
struct SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// ShapeSpawner
struct ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705;
// Skip
struct Skip_t9875F8A8A29D782CF32D60376D8BED17BDE14914;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// StartMemGame
struct StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C;
// System.String
struct String_t;
// Test
struct Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Timer
struct Timer_t32ADF3155A88C37628B80D227C821651666DD405;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIOnHoverEvent
struct UIOnHoverEvent_t4F6B07075E80E41FF582B7C4B49BE592E3524163;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// Intro/<Delay>d__1
struct U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// RecallGame/<>c
struct U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3;
// RecallGame/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727;
// RecallGame/<Delay>d__18
struct U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4;
// RecallInstructions/<Delay>d__3
struct U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317;
// SceneChanger/<Fading>d__3
struct U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233;
// ShapeSpawner/<WaitForSpawn>d__26
struct U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822;
// StartMemGame/<Delay>d__7
struct U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620;
// Timer/<DelayBetween>d__3
struct U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C;
IL2CPP_EXTERN_C String_t* _stringLiteral09F99BDC7EC87EE88A91CC0928FC9C7239049DBE;
IL2CPP_EXTERN_C String_t* _stringLiteral17045E5D5EBFE78C2F3D25CFA4E449849CBC5E2F;
IL2CPP_EXTERN_C String_t* _stringLiteral1A23AA468FF756DFCDEB9586D68E0364288ADED8;
IL2CPP_EXTERN_C String_t* _stringLiteral1AC3E8EC0D1F213A1C43DDF7B0D9C98DFD06292F;
IL2CPP_EXTERN_C String_t* _stringLiteral1AFEB08BE3C2079DEE53E917B9C3769C568605E7;
IL2CPP_EXTERN_C String_t* _stringLiteral1BADCCF1255DF64C6534522AE13C18F2593C99D7;
IL2CPP_EXTERN_C String_t* _stringLiteral1ED78733EB37F9C0AC9B8E77F9E9788872DE41AB;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral32A9F9239088A1751B80340B1436999AD9B1B985;
IL2CPP_EXTERN_C String_t* _stringLiteral37DF2CCBF0C23E6CBBBED76FE900F12FCCDE36EC;
IL2CPP_EXTERN_C String_t* _stringLiteral3D5CB2FB89C01B07DB086ABDC609D431DD43121C;
IL2CPP_EXTERN_C String_t* _stringLiteral4B1233F1B76125FF71B1432AF50110C4C3853BCA;
IL2CPP_EXTERN_C String_t* _stringLiteral512DE94630C94F7512ADE8C7782EA5EB664185AD;
IL2CPP_EXTERN_C String_t* _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
IL2CPP_EXTERN_C String_t* _stringLiteral64D24090833D0F2767E49072F66203DC9464A384;
IL2CPP_EXTERN_C String_t* _stringLiteral651F2718554170C6DD8FA76C8A6FC97F1843F5C4;
IL2CPP_EXTERN_C String_t* _stringLiteral6A6A1BD1FBE5C298527487EFFF66BED1BC5B47A4;
IL2CPP_EXTERN_C String_t* _stringLiteral720BEF15138E75C4449A64530B28EB227C1D7A57;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7923BB5D7D0B736ACBEFB5700E964283C04EDC2A;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB53D65B097ACF1F141DEAE0184DC1BCFB14B07;
IL2CPP_EXTERN_C String_t* _stringLiteral85EBBB27E1E15D9E907A9AAE8E7F36E28119891C;
IL2CPP_EXTERN_C String_t* _stringLiteral98A9EF6E94796AFC2467A765A523D5119176186F;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteralA0E08B68E8A78BD7A06E0806711166B4EE15B76E;
IL2CPP_EXTERN_C String_t* _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C;
IL2CPP_EXTERN_C String_t* _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5;
IL2CPP_EXTERN_C String_t* _stringLiteralCC091E6AC7C30E72A4E30DA9B8FEA368061996A7;
IL2CPP_EXTERN_C String_t* _stringLiteralD89FEEE34C09548A29E70367E180DA383B402CE3;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE115B3EAA91BBBD438DC54430A40161469A0C69C;
IL2CPP_EXTERN_C String_t* _stringLiteralE3089C971EF72A3DD61F3EA222350C26014A69AF;
IL2CPP_EXTERN_C String_t* _stringLiteralF59AA1906A30460F14B8ED7C1521E856DF885451;
IL2CPP_EXTERN_C String_t* _stringLiteralF7209A31EF4030A0AFC64226B1EE7DC0AE6B2228;
IL2CPP_EXTERN_C String_t* _stringLiteralF8EFD6D4A0C23D451381130B9EEB287C00B8BCCF;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFB548747CF0F35FFBF15F9A93E4061FD2A6A3A;
IL2CPP_EXTERN_C String_t* _stringLiteralFC33A2F86F1B1BDD5EDCB58FCD832954D6519521;
IL2CPP_EXTERN_C String_t* _stringLiteralFD86AEF28D705AA8A25976C7699985BB7FF060A5;
IL2CPP_EXTERN_C String_t* _stringLiteralFD88F1B353070715E47025140C3481BA8871E4BD;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mED55C272DBBCBA516683357C99E00546328A21CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDE9611363446B76CFA0E37324D7D9AAD7A94D5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m4DC8B0E32A8AF8D039B9A2D0F885DF11E58880B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mC444DB96CBDBD65850F1CC7541496A1138121FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m85439814027F66F874585FC4EC7D58421D93195E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneChanger_U3CFadingU3Eb__3_0_m36803192F003B65AEC902E23620FB3D120B270A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayBetweenU3Ed__3_System_Collections_IEnumerator_Reset_mE4F0D4A7D240720A5B9D45C1E219FE878A0B814B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayU3Ed__18_System_Collections_IEnumerator_Reset_m6A0FB2B1F6C3546FFB8A132E6BB6BAEC29959247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayU3Ed__1_System_Collections_IEnumerator_Reset_m2E17B335AE13EAD877851F1A7376EF2CEA2917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayU3Ed__3_System_Collections_IEnumerator_Reset_m5961583FE2423CB0B3C7550AEC2D2466477A1FB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayU3Ed__7_System_Collections_IEnumerator_Reset_mB59BBC04F529836DF58B5D254170F5A50A130681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadingU3Ed__3_System_Collections_IEnumerator_Reset_m26243911C5D4BE210C192E8883B9B45F85A31C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInstantiateU3Eb__20_0_m89106FCE2D6BD5F69BF9E0748CA7F8CF6A8094CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CInstantiateU3Eb__1_m170F9740145A1A27C18C3F31FF9A08A52E73AE2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForSpawnU3Ed__26_System_Collections_IEnumerator_Reset_m5492C2E60685CF6C5B43088A77D5238099DBA122_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct  List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____items_1)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__items_1() const { return ____items_1; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields, ____emptyArray_5)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct  List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7, ____items_1)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get__items_1() const { return ____items_1; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_StaticFields, ____emptyArray_5)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct  List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____items_1)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__items_1() const { return ____items_1; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields, ____emptyArray_5)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Random
struct  Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.WWWForm
struct  WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___formData_0)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_formData_0() const { return ___formData_0; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_0), (void*)value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fieldNames_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fileNames_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___types_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_types_3() const { return ___types_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___boundary_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundary_4), (void*)value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEngine.UI.Dropdown/OptionData
struct  OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857  : public RuntimeObject
{
public:
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Image_1;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Image_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Image_1() const { return ___m_Image_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}
};


// Intro/<Delay>d__1
struct  U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA  : public RuntimeObject
{
public:
	// System.Int32 Intro/<Delay>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Intro/<Delay>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Intro Intro/<Delay>d__1::<>4__this
	Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA, ___U3CU3E4__this_2)); }
	inline Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// RecallGame/<>c
struct  U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_StaticFields
{
public:
	// RecallGame/<>c RecallGame/<>c::<>9
	U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3 * ___U3CU3E9_0;
	// System.Func`2<System.Int32,System.Single> RecallGame/<>c::<>9__20_0
	Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_1), (void*)value);
	}
};


// RecallGame/<>c__DisplayClass20_0
struct  U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727  : public RuntimeObject
{
public:
	// UnityEngine.UI.Button RecallGame/<>c__DisplayClass20_0::button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button_0;
	// RecallGame RecallGame/<>c__DisplayClass20_0::<>4__this
	RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_button_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727, ___button_0)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_button_0() const { return ___button_0; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_button_0() { return &___button_0; }
	inline void set_button_0(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___button_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727, ___U3CU3E4__this_1)); }
	inline RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// RecallGame/<Delay>d__18
struct  U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4  : public RuntimeObject
{
public:
	// System.Int32 RecallGame/<Delay>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RecallGame/<Delay>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// RecallGame RecallGame/<Delay>d__18::<>4__this
	RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4, ___U3CU3E4__this_2)); }
	inline RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// RecallInstructions/<Delay>d__3
struct  U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317  : public RuntimeObject
{
public:
	// System.Int32 RecallInstructions/<Delay>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RecallInstructions/<Delay>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// RecallInstructions RecallInstructions/<Delay>d__3::<>4__this
	RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317, ___U3CU3E4__this_2)); }
	inline RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// SceneChanger/<Fading>d__3
struct  U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233  : public RuntimeObject
{
public:
	// System.Int32 SceneChanger/<Fading>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SceneChanger/<Fading>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SceneChanger SceneChanger/<Fading>d__3::<>4__this
	SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233, ___U3CU3E4__this_2)); }
	inline SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ShapeSpawner/<WaitForSpawn>d__26
struct  U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822  : public RuntimeObject
{
public:
	// System.Int32 ShapeSpawner/<WaitForSpawn>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ShapeSpawner/<WaitForSpawn>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ShapeSpawner ShapeSpawner/<WaitForSpawn>d__26::<>4__this
	ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822, ___U3CU3E4__this_2)); }
	inline ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// StartMemGame/<Delay>d__7
struct  U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620  : public RuntimeObject
{
public:
	// System.Int32 StartMemGame/<Delay>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object StartMemGame/<Delay>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// StartMemGame StartMemGame/<Delay>d__7::<>4__this
	StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620, ___U3CU3E4__this_2)); }
	inline StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Timer/<DelayBetween>d__3
struct  U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF  : public RuntimeObject
{
public:
	// System.Int32 Timer/<DelayBetween>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Timer/<DelayBetween>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>
struct  Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___list_0)); }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * get_list_0() const { return ___list_0; }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___current_3)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_current_3() const { return ___current_3; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>
struct  Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3, ___list_0)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_list_0() const { return ___list_0; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3, ___current_3)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_current_3() const { return ___current_3; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitUntil
struct  WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct  Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Func`1<System.Boolean>
struct  Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Single>
struct  Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// DataStorage
struct  DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> DataStorage::_chosenList
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ____chosenList_4;
	// System.Int32 DataStorage::_finalScoreAttention
	int32_t ____finalScoreAttention_5;
	// System.Int32 DataStorage::_finalScoreRecall
	int32_t ____finalScoreRecall_6;
	// System.Collections.Generic.List`1<System.String> DataStorage::_attentionData
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____attentionData_7;
	// System.Collections.Generic.List`1<System.String> DataStorage::_recallData
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____recallData_8;
	// System.String DataStorage::_age
	String_t* ____age_9;
	// System.String DataStorage::_gender
	String_t* ____gender_10;
	// System.String DataStorage::_race
	String_t* ____race_11;

public:
	inline static int32_t get_offset_of__chosenList_4() { return static_cast<int32_t>(offsetof(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields, ____chosenList_4)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get__chosenList_4() const { return ____chosenList_4; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of__chosenList_4() { return &____chosenList_4; }
	inline void set__chosenList_4(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		____chosenList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____chosenList_4), (void*)value);
	}

	inline static int32_t get_offset_of__finalScoreAttention_5() { return static_cast<int32_t>(offsetof(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields, ____finalScoreAttention_5)); }
	inline int32_t get__finalScoreAttention_5() const { return ____finalScoreAttention_5; }
	inline int32_t* get_address_of__finalScoreAttention_5() { return &____finalScoreAttention_5; }
	inline void set__finalScoreAttention_5(int32_t value)
	{
		____finalScoreAttention_5 = value;
	}

	inline static int32_t get_offset_of__finalScoreRecall_6() { return static_cast<int32_t>(offsetof(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields, ____finalScoreRecall_6)); }
	inline int32_t get__finalScoreRecall_6() const { return ____finalScoreRecall_6; }
	inline int32_t* get_address_of__finalScoreRecall_6() { return &____finalScoreRecall_6; }
	inline void set__finalScoreRecall_6(int32_t value)
	{
		____finalScoreRecall_6 = value;
	}

	inline static int32_t get_offset_of__attentionData_7() { return static_cast<int32_t>(offsetof(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields, ____attentionData_7)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__attentionData_7() const { return ____attentionData_7; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__attentionData_7() { return &____attentionData_7; }
	inline void set__attentionData_7(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____attentionData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____attentionData_7), (void*)value);
	}

	inline static int32_t get_offset_of__recallData_8() { return static_cast<int32_t>(offsetof(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields, ____recallData_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__recallData_8() const { return ____recallData_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__recallData_8() { return &____recallData_8; }
	inline void set__recallData_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____recallData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recallData_8), (void*)value);
	}

	inline static int32_t get_offset_of__age_9() { return static_cast<int32_t>(offsetof(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields, ____age_9)); }
	inline String_t* get__age_9() const { return ____age_9; }
	inline String_t** get_address_of__age_9() { return &____age_9; }
	inline void set__age_9(String_t* value)
	{
		____age_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____age_9), (void*)value);
	}

	inline static int32_t get_offset_of__gender_10() { return static_cast<int32_t>(offsetof(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields, ____gender_10)); }
	inline String_t* get__gender_10() const { return ____gender_10; }
	inline String_t** get_address_of__gender_10() { return &____gender_10; }
	inline void set__gender_10(String_t* value)
	{
		____gender_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gender_10), (void*)value);
	}

	inline static int32_t get_offset_of__race_11() { return static_cast<int32_t>(offsetof(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields, ____race_11)); }
	inline String_t* get__race_11() const { return ____race_11; }
	inline String_t** get_address_of__race_11() { return &____race_11; }
	inline void set__race_11(String_t* value)
	{
		____race_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____race_11), (void*)value);
	}
};


// Demographics
struct  Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Dropdown Demographics::age
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___age_4;
	// UnityEngine.UI.Dropdown Demographics::gender
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___gender_5;
	// UnityEngine.UI.Dropdown Demographics::race
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___race_6;

public:
	inline static int32_t get_offset_of_age_4() { return static_cast<int32_t>(offsetof(Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B, ___age_4)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_age_4() const { return ___age_4; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_age_4() { return &___age_4; }
	inline void set_age_4(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___age_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___age_4), (void*)value);
	}

	inline static int32_t get_offset_of_gender_5() { return static_cast<int32_t>(offsetof(Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B, ___gender_5)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_gender_5() const { return ___gender_5; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_gender_5() { return &___gender_5; }
	inline void set_gender_5(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___gender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gender_5), (void*)value);
	}

	inline static int32_t get_offset_of_race_6() { return static_cast<int32_t>(offsetof(Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B, ___race_6)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_race_6() const { return ___race_6; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_race_6() { return &___race_6; }
	inline void set_race_6(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___race_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___race_6), (void*)value);
	}
};

struct Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_StaticFields
{
public:
	// System.String Demographics::_age
	String_t* ____age_7;
	// System.String Demographics::_gender
	String_t* ____gender_8;
	// System.String Demographics::_race
	String_t* ____race_9;

public:
	inline static int32_t get_offset_of__age_7() { return static_cast<int32_t>(offsetof(Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_StaticFields, ____age_7)); }
	inline String_t* get__age_7() const { return ____age_7; }
	inline String_t** get_address_of__age_7() { return &____age_7; }
	inline void set__age_7(String_t* value)
	{
		____age_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____age_7), (void*)value);
	}

	inline static int32_t get_offset_of__gender_8() { return static_cast<int32_t>(offsetof(Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_StaticFields, ____gender_8)); }
	inline String_t* get__gender_8() const { return ____gender_8; }
	inline String_t** get_address_of__gender_8() { return &____gender_8; }
	inline void set__gender_8(String_t* value)
	{
		____gender_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gender_8), (void*)value);
	}

	inline static int32_t get_offset_of__race_9() { return static_cast<int32_t>(offsetof(Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_StaticFields, ____race_9)); }
	inline String_t* get__race_9() const { return ____race_9; }
	inline String_t** get_address_of__race_9() { return &____race_9; }
	inline void set__race_9(String_t* value)
	{
		____race_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____race_9), (void*)value);
	}
};


// DisplayMemoryIcons
struct  DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> DisplayMemoryIcons::allImgs
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___allImgs_4;
	// System.Collections.Generic.List`1<System.Int32> DisplayMemoryIcons::chosenNums
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___chosenNums_6;
	// UnityEngine.Sprite DisplayMemoryIcons::mySprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___mySprite_7;
	// UnityEngine.SpriteRenderer[] DisplayMemoryIcons::sr
	SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* ___sr_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DisplayMemoryIcons::gameObjects
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___gameObjects_9;
	// UnityEngine.GameObject DisplayMemoryIcons::canvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___canvas_10;

public:
	inline static int32_t get_offset_of_allImgs_4() { return static_cast<int32_t>(offsetof(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B, ___allImgs_4)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_allImgs_4() const { return ___allImgs_4; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_allImgs_4() { return &___allImgs_4; }
	inline void set_allImgs_4(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___allImgs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allImgs_4), (void*)value);
	}

	inline static int32_t get_offset_of_chosenNums_6() { return static_cast<int32_t>(offsetof(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B, ___chosenNums_6)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_chosenNums_6() const { return ___chosenNums_6; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_chosenNums_6() { return &___chosenNums_6; }
	inline void set_chosenNums_6(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___chosenNums_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chosenNums_6), (void*)value);
	}

	inline static int32_t get_offset_of_mySprite_7() { return static_cast<int32_t>(offsetof(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B, ___mySprite_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_mySprite_7() const { return ___mySprite_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_mySprite_7() { return &___mySprite_7; }
	inline void set_mySprite_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___mySprite_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mySprite_7), (void*)value);
	}

	inline static int32_t get_offset_of_sr_8() { return static_cast<int32_t>(offsetof(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B, ___sr_8)); }
	inline SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* get_sr_8() const { return ___sr_8; }
	inline SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF** get_address_of_sr_8() { return &___sr_8; }
	inline void set_sr_8(SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* value)
	{
		___sr_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sr_8), (void*)value);
	}

	inline static int32_t get_offset_of_gameObjects_9() { return static_cast<int32_t>(offsetof(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B, ___gameObjects_9)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_gameObjects_9() const { return ___gameObjects_9; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_gameObjects_9() { return &___gameObjects_9; }
	inline void set_gameObjects_9(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___gameObjects_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObjects_9), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_10() { return static_cast<int32_t>(offsetof(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B, ___canvas_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_canvas_10() const { return ___canvas_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_canvas_10() { return &___canvas_10; }
	inline void set_canvas_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___canvas_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_10), (void*)value);
	}
};

struct DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> DisplayMemoryIcons::chosenList
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___chosenList_5;

public:
	inline static int32_t get_offset_of_chosenList_5() { return static_cast<int32_t>(offsetof(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_StaticFields, ___chosenList_5)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_chosenList_5() const { return ___chosenList_5; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_chosenList_5() { return &___chosenList_5; }
	inline void set_chosenList_5(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___chosenList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chosenList_5), (void*)value);
	}
};


// DisplayScore
struct  DisplayScore_tE966894ADF4B522CAC9EA53868A9A82B03FD5009  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text DisplayScore::attentionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___attentionText_4;
	// UnityEngine.UI.Text DisplayScore::recallText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___recallText_5;
	// UnityEngine.UI.Text DisplayScore::code
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___code_6;

public:
	inline static int32_t get_offset_of_attentionText_4() { return static_cast<int32_t>(offsetof(DisplayScore_tE966894ADF4B522CAC9EA53868A9A82B03FD5009, ___attentionText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_attentionText_4() const { return ___attentionText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_attentionText_4() { return &___attentionText_4; }
	inline void set_attentionText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___attentionText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attentionText_4), (void*)value);
	}

	inline static int32_t get_offset_of_recallText_5() { return static_cast<int32_t>(offsetof(DisplayScore_tE966894ADF4B522CAC9EA53868A9A82B03FD5009, ___recallText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_recallText_5() const { return ___recallText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_recallText_5() { return &___recallText_5; }
	inline void set_recallText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___recallText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recallText_5), (void*)value);
	}

	inline static int32_t get_offset_of_code_6() { return static_cast<int32_t>(offsetof(DisplayScore_tE966894ADF4B522CAC9EA53868A9A82B03FD5009, ___code_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_code_6() const { return ___code_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_code_6() { return &___code_6; }
	inline void set_code_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___code_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_6), (void*)value);
	}
};


// EncInstr
struct  EncInstr_tCEB6D3749C90AEA1C7CA7B84C2B5412D92168FA7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> EncInstr::chosenList
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___chosenList_4;
	// UnityEngine.GameObject EncInstr::currObj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currObj_5;
	// System.Single EncInstr::timePassed
	float ___timePassed_6;
	// System.Int32 EncInstr::objNum
	int32_t ___objNum_7;
	// UnityEngine.Sprite EncInstr::mySprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___mySprite_8;
	// UnityEngine.SpriteRenderer[] EncInstr::sr
	SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* ___sr_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EncInstr::gameObjects
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___gameObjects_10;

public:
	inline static int32_t get_offset_of_chosenList_4() { return static_cast<int32_t>(offsetof(EncInstr_tCEB6D3749C90AEA1C7CA7B84C2B5412D92168FA7, ___chosenList_4)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_chosenList_4() const { return ___chosenList_4; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_chosenList_4() { return &___chosenList_4; }
	inline void set_chosenList_4(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___chosenList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chosenList_4), (void*)value);
	}

	inline static int32_t get_offset_of_currObj_5() { return static_cast<int32_t>(offsetof(EncInstr_tCEB6D3749C90AEA1C7CA7B84C2B5412D92168FA7, ___currObj_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currObj_5() const { return ___currObj_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currObj_5() { return &___currObj_5; }
	inline void set_currObj_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currObj_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currObj_5), (void*)value);
	}

	inline static int32_t get_offset_of_timePassed_6() { return static_cast<int32_t>(offsetof(EncInstr_tCEB6D3749C90AEA1C7CA7B84C2B5412D92168FA7, ___timePassed_6)); }
	inline float get_timePassed_6() const { return ___timePassed_6; }
	inline float* get_address_of_timePassed_6() { return &___timePassed_6; }
	inline void set_timePassed_6(float value)
	{
		___timePassed_6 = value;
	}

	inline static int32_t get_offset_of_objNum_7() { return static_cast<int32_t>(offsetof(EncInstr_tCEB6D3749C90AEA1C7CA7B84C2B5412D92168FA7, ___objNum_7)); }
	inline int32_t get_objNum_7() const { return ___objNum_7; }
	inline int32_t* get_address_of_objNum_7() { return &___objNum_7; }
	inline void set_objNum_7(int32_t value)
	{
		___objNum_7 = value;
	}

	inline static int32_t get_offset_of_mySprite_8() { return static_cast<int32_t>(offsetof(EncInstr_tCEB6D3749C90AEA1C7CA7B84C2B5412D92168FA7, ___mySprite_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_mySprite_8() const { return ___mySprite_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_mySprite_8() { return &___mySprite_8; }
	inline void set_mySprite_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___mySprite_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mySprite_8), (void*)value);
	}

	inline static int32_t get_offset_of_sr_9() { return static_cast<int32_t>(offsetof(EncInstr_tCEB6D3749C90AEA1C7CA7B84C2B5412D92168FA7, ___sr_9)); }
	inline SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* get_sr_9() const { return ___sr_9; }
	inline SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF** get_address_of_sr_9() { return &___sr_9; }
	inline void set_sr_9(SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* value)
	{
		___sr_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sr_9), (void*)value);
	}

	inline static int32_t get_offset_of_gameObjects_10() { return static_cast<int32_t>(offsetof(EncInstr_tCEB6D3749C90AEA1C7CA7B84C2B5412D92168FA7, ___gameObjects_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_gameObjects_10() const { return ___gameObjects_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_gameObjects_10() { return &___gameObjects_10; }
	inline void set_gameObjects_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___gameObjects_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObjects_10), (void*)value);
	}
};


// GotWrongInter
struct  GotWrongInter_t7E34DC6CF8EE24EB5D25C39A580C07EFB746C516  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// InstructionsToGame
struct  InstructionsToGame_t0A49B8D3748AC6A63E9CCA2426B210AF1DCE62B9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Instructiosn
struct  Instructiosn_tE86560452B6ACA0673516A4238C679CC16DA52B8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Intro
struct  Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Intro::changeScene
	bool ___changeScene_4;

public:
	inline static int32_t get_offset_of_changeScene_4() { return static_cast<int32_t>(offsetof(Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5, ___changeScene_4)); }
	inline bool get_changeScene_4() const { return ___changeScene_4; }
	inline bool* get_address_of_changeScene_4() { return &___changeScene_4; }
	inline void set_changeScene_4(bool value)
	{
		___changeScene_4 = value;
	}
};


// RecallGame
struct  RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean RecallGame::startGame
	bool ___startGame_4;
	// System.Single RecallGame::timeLeft
	float ___timeLeft_5;
	// System.Single RecallGame::widthDec
	float ___widthDec_6;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> RecallGame::allButtons
	List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * ___allButtons_7;
	// UnityEngine.GameObject RecallGame::timerBar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___timerBar_8;
	// System.Int32 RecallGame::iteration
	int32_t ___iteration_9;
	// UnityEngine.Texture2D RecallGame::correctImg
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___correctImg_10;
	// UnityEngine.Texture2D RecallGame::clickedImg
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___clickedImg_11;
	// System.Int32 RecallGame::correctButton
	int32_t ___correctButton_12;
	// System.Boolean RecallGame::selected
	bool ___selected_13;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> RecallGame::allImgs
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___allImgs_14;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> RecallGame::chosenList
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___chosenList_15;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> RecallGame::notChosen
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___notChosen_16;

public:
	inline static int32_t get_offset_of_startGame_4() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___startGame_4)); }
	inline bool get_startGame_4() const { return ___startGame_4; }
	inline bool* get_address_of_startGame_4() { return &___startGame_4; }
	inline void set_startGame_4(bool value)
	{
		___startGame_4 = value;
	}

	inline static int32_t get_offset_of_timeLeft_5() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___timeLeft_5)); }
	inline float get_timeLeft_5() const { return ___timeLeft_5; }
	inline float* get_address_of_timeLeft_5() { return &___timeLeft_5; }
	inline void set_timeLeft_5(float value)
	{
		___timeLeft_5 = value;
	}

	inline static int32_t get_offset_of_widthDec_6() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___widthDec_6)); }
	inline float get_widthDec_6() const { return ___widthDec_6; }
	inline float* get_address_of_widthDec_6() { return &___widthDec_6; }
	inline void set_widthDec_6(float value)
	{
		___widthDec_6 = value;
	}

	inline static int32_t get_offset_of_allButtons_7() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___allButtons_7)); }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * get_allButtons_7() const { return ___allButtons_7; }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E ** get_address_of_allButtons_7() { return &___allButtons_7; }
	inline void set_allButtons_7(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * value)
	{
		___allButtons_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allButtons_7), (void*)value);
	}

	inline static int32_t get_offset_of_timerBar_8() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___timerBar_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_timerBar_8() const { return ___timerBar_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_timerBar_8() { return &___timerBar_8; }
	inline void set_timerBar_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___timerBar_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerBar_8), (void*)value);
	}

	inline static int32_t get_offset_of_iteration_9() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___iteration_9)); }
	inline int32_t get_iteration_9() const { return ___iteration_9; }
	inline int32_t* get_address_of_iteration_9() { return &___iteration_9; }
	inline void set_iteration_9(int32_t value)
	{
		___iteration_9 = value;
	}

	inline static int32_t get_offset_of_correctImg_10() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___correctImg_10)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_correctImg_10() const { return ___correctImg_10; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_correctImg_10() { return &___correctImg_10; }
	inline void set_correctImg_10(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___correctImg_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___correctImg_10), (void*)value);
	}

	inline static int32_t get_offset_of_clickedImg_11() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___clickedImg_11)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_clickedImg_11() const { return ___clickedImg_11; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_clickedImg_11() { return &___clickedImg_11; }
	inline void set_clickedImg_11(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___clickedImg_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clickedImg_11), (void*)value);
	}

	inline static int32_t get_offset_of_correctButton_12() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___correctButton_12)); }
	inline int32_t get_correctButton_12() const { return ___correctButton_12; }
	inline int32_t* get_address_of_correctButton_12() { return &___correctButton_12; }
	inline void set_correctButton_12(int32_t value)
	{
		___correctButton_12 = value;
	}

	inline static int32_t get_offset_of_selected_13() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___selected_13)); }
	inline bool get_selected_13() const { return ___selected_13; }
	inline bool* get_address_of_selected_13() { return &___selected_13; }
	inline void set_selected_13(bool value)
	{
		___selected_13 = value;
	}

	inline static int32_t get_offset_of_allImgs_14() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___allImgs_14)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_allImgs_14() const { return ___allImgs_14; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_allImgs_14() { return &___allImgs_14; }
	inline void set_allImgs_14(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___allImgs_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allImgs_14), (void*)value);
	}

	inline static int32_t get_offset_of_chosenList_15() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___chosenList_15)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_chosenList_15() const { return ___chosenList_15; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_chosenList_15() { return &___chosenList_15; }
	inline void set_chosenList_15(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___chosenList_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chosenList_15), (void*)value);
	}

	inline static int32_t get_offset_of_notChosen_16() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E, ___notChosen_16)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_notChosen_16() const { return ___notChosen_16; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_notChosen_16() { return &___notChosen_16; }
	inline void set_notChosen_16(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___notChosen_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notChosen_16), (void*)value);
	}
};

struct RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields
{
public:
	// System.Int32 RecallGame::numCorrect
	int32_t ___numCorrect_17;
	// System.Int32 RecallGame::numWrong
	int32_t ___numWrong_18;
	// System.Int32 RecallGame::numTimesUp
	int32_t ___numTimesUp_19;
	// System.Collections.Generic.List`1<System.String> RecallGame::recall_data
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___recall_data_20;

public:
	inline static int32_t get_offset_of_numCorrect_17() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields, ___numCorrect_17)); }
	inline int32_t get_numCorrect_17() const { return ___numCorrect_17; }
	inline int32_t* get_address_of_numCorrect_17() { return &___numCorrect_17; }
	inline void set_numCorrect_17(int32_t value)
	{
		___numCorrect_17 = value;
	}

	inline static int32_t get_offset_of_numWrong_18() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields, ___numWrong_18)); }
	inline int32_t get_numWrong_18() const { return ___numWrong_18; }
	inline int32_t* get_address_of_numWrong_18() { return &___numWrong_18; }
	inline void set_numWrong_18(int32_t value)
	{
		___numWrong_18 = value;
	}

	inline static int32_t get_offset_of_numTimesUp_19() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields, ___numTimesUp_19)); }
	inline int32_t get_numTimesUp_19() const { return ___numTimesUp_19; }
	inline int32_t* get_address_of_numTimesUp_19() { return &___numTimesUp_19; }
	inline void set_numTimesUp_19(int32_t value)
	{
		___numTimesUp_19 = value;
	}

	inline static int32_t get_offset_of_recall_data_20() { return static_cast<int32_t>(offsetof(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields, ___recall_data_20)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_recall_data_20() const { return ___recall_data_20; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_recall_data_20() { return &___recall_data_20; }
	inline void set_recall_data_20(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___recall_data_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recall_data_20), (void*)value);
	}
};


// RecallInstructions
struct  RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text RecallInstructions::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_4;
	// System.Boolean RecallInstructions::start
	bool ___start_5;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556, ___text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_4() const { return ___text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}

	inline static int32_t get_offset_of_start_5() { return static_cast<int32_t>(offsetof(RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556, ___start_5)); }
	inline bool get_start_5() const { return ___start_5; }
	inline bool* get_address_of_start_5() { return &___start_5; }
	inline void set_start_5(bool value)
	{
		___start_5 = value;
	}
};


// SceneChanger
struct  SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator SceneChanger::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_4;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068, ___anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_4() const { return ___anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_4), (void*)value);
	}
};


// ShapeSpawner
struct  ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ShapeSpawner::nextUpdate
	float ___nextUpdate_4;
	// System.Boolean ShapeSpawner::beginSpawn
	bool ___beginSpawn_5;
	// System.Single ShapeSpawner::timeOfAppearance
	float ___timeOfAppearance_6;
	// System.Single ShapeSpawner::timeShown
	float ___timeShown_7;
	// System.Single ShapeSpawner::factorOfDecrease
	float ___factorOfDecrease_8;
	// System.Int32 ShapeSpawner::iterations
	int32_t ___iterations_9;
	// System.Boolean ShapeSpawner::firstIter
	bool ___firstIter_10;
	// System.Boolean ShapeSpawner::choiceSelected
	bool ___choiceSelected_11;
	// System.Boolean ShapeSpawner::textAppear
	bool ___textAppear_12;
	// System.Single ShapeSpawner::timeOfText
	float ___timeOfText_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ShapeSpawner::arrayOfShapes
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___arrayOfShapes_14;
	// UnityEngine.GameObject ShapeSpawner::shape1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shape1_15;
	// UnityEngine.GameObject ShapeSpawner::shape2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shape2_16;
	// UnityEngine.UI.Text ShapeSpawner::correctText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___correctText_17;
	// UnityEngine.UI.Text ShapeSpawner::wrongText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___wrongText_18;
	// UnityEngine.GameObject ShapeSpawner::shape1Obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shape1Obj_19;
	// UnityEngine.GameObject ShapeSpawner::shape2Obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shape2Obj_20;
	// UnityEngine.Color ShapeSpawner::color1
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1_21;
	// UnityEngine.Color ShapeSpawner::color2
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2_22;
	// System.Int32 ShapeSpawner::randInt1
	int32_t ___randInt1_23;
	// System.Int32 ShapeSpawner::randInt2
	int32_t ___randInt2_24;

public:
	inline static int32_t get_offset_of_nextUpdate_4() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___nextUpdate_4)); }
	inline float get_nextUpdate_4() const { return ___nextUpdate_4; }
	inline float* get_address_of_nextUpdate_4() { return &___nextUpdate_4; }
	inline void set_nextUpdate_4(float value)
	{
		___nextUpdate_4 = value;
	}

	inline static int32_t get_offset_of_beginSpawn_5() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___beginSpawn_5)); }
	inline bool get_beginSpawn_5() const { return ___beginSpawn_5; }
	inline bool* get_address_of_beginSpawn_5() { return &___beginSpawn_5; }
	inline void set_beginSpawn_5(bool value)
	{
		___beginSpawn_5 = value;
	}

	inline static int32_t get_offset_of_timeOfAppearance_6() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___timeOfAppearance_6)); }
	inline float get_timeOfAppearance_6() const { return ___timeOfAppearance_6; }
	inline float* get_address_of_timeOfAppearance_6() { return &___timeOfAppearance_6; }
	inline void set_timeOfAppearance_6(float value)
	{
		___timeOfAppearance_6 = value;
	}

	inline static int32_t get_offset_of_timeShown_7() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___timeShown_7)); }
	inline float get_timeShown_7() const { return ___timeShown_7; }
	inline float* get_address_of_timeShown_7() { return &___timeShown_7; }
	inline void set_timeShown_7(float value)
	{
		___timeShown_7 = value;
	}

	inline static int32_t get_offset_of_factorOfDecrease_8() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___factorOfDecrease_8)); }
	inline float get_factorOfDecrease_8() const { return ___factorOfDecrease_8; }
	inline float* get_address_of_factorOfDecrease_8() { return &___factorOfDecrease_8; }
	inline void set_factorOfDecrease_8(float value)
	{
		___factorOfDecrease_8 = value;
	}

	inline static int32_t get_offset_of_iterations_9() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___iterations_9)); }
	inline int32_t get_iterations_9() const { return ___iterations_9; }
	inline int32_t* get_address_of_iterations_9() { return &___iterations_9; }
	inline void set_iterations_9(int32_t value)
	{
		___iterations_9 = value;
	}

	inline static int32_t get_offset_of_firstIter_10() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___firstIter_10)); }
	inline bool get_firstIter_10() const { return ___firstIter_10; }
	inline bool* get_address_of_firstIter_10() { return &___firstIter_10; }
	inline void set_firstIter_10(bool value)
	{
		___firstIter_10 = value;
	}

	inline static int32_t get_offset_of_choiceSelected_11() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___choiceSelected_11)); }
	inline bool get_choiceSelected_11() const { return ___choiceSelected_11; }
	inline bool* get_address_of_choiceSelected_11() { return &___choiceSelected_11; }
	inline void set_choiceSelected_11(bool value)
	{
		___choiceSelected_11 = value;
	}

	inline static int32_t get_offset_of_textAppear_12() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___textAppear_12)); }
	inline bool get_textAppear_12() const { return ___textAppear_12; }
	inline bool* get_address_of_textAppear_12() { return &___textAppear_12; }
	inline void set_textAppear_12(bool value)
	{
		___textAppear_12 = value;
	}

	inline static int32_t get_offset_of_timeOfText_13() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___timeOfText_13)); }
	inline float get_timeOfText_13() const { return ___timeOfText_13; }
	inline float* get_address_of_timeOfText_13() { return &___timeOfText_13; }
	inline void set_timeOfText_13(float value)
	{
		___timeOfText_13 = value;
	}

	inline static int32_t get_offset_of_arrayOfShapes_14() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___arrayOfShapes_14)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_arrayOfShapes_14() const { return ___arrayOfShapes_14; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_arrayOfShapes_14() { return &___arrayOfShapes_14; }
	inline void set_arrayOfShapes_14(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___arrayOfShapes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrayOfShapes_14), (void*)value);
	}

	inline static int32_t get_offset_of_shape1_15() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___shape1_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shape1_15() const { return ___shape1_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shape1_15() { return &___shape1_15; }
	inline void set_shape1_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shape1_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shape1_15), (void*)value);
	}

	inline static int32_t get_offset_of_shape2_16() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___shape2_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shape2_16() const { return ___shape2_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shape2_16() { return &___shape2_16; }
	inline void set_shape2_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shape2_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shape2_16), (void*)value);
	}

	inline static int32_t get_offset_of_correctText_17() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___correctText_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_correctText_17() const { return ___correctText_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_correctText_17() { return &___correctText_17; }
	inline void set_correctText_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___correctText_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___correctText_17), (void*)value);
	}

	inline static int32_t get_offset_of_wrongText_18() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___wrongText_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_wrongText_18() const { return ___wrongText_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_wrongText_18() { return &___wrongText_18; }
	inline void set_wrongText_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___wrongText_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrongText_18), (void*)value);
	}

	inline static int32_t get_offset_of_shape1Obj_19() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___shape1Obj_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shape1Obj_19() const { return ___shape1Obj_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shape1Obj_19() { return &___shape1Obj_19; }
	inline void set_shape1Obj_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shape1Obj_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shape1Obj_19), (void*)value);
	}

	inline static int32_t get_offset_of_shape2Obj_20() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___shape2Obj_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shape2Obj_20() const { return ___shape2Obj_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shape2Obj_20() { return &___shape2Obj_20; }
	inline void set_shape2Obj_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shape2Obj_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shape2Obj_20), (void*)value);
	}

	inline static int32_t get_offset_of_color1_21() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___color1_21)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color1_21() const { return ___color1_21; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color1_21() { return &___color1_21; }
	inline void set_color1_21(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color1_21 = value;
	}

	inline static int32_t get_offset_of_color2_22() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___color2_22)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color2_22() const { return ___color2_22; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color2_22() { return &___color2_22; }
	inline void set_color2_22(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color2_22 = value;
	}

	inline static int32_t get_offset_of_randInt1_23() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___randInt1_23)); }
	inline int32_t get_randInt1_23() const { return ___randInt1_23; }
	inline int32_t* get_address_of_randInt1_23() { return &___randInt1_23; }
	inline void set_randInt1_23(int32_t value)
	{
		___randInt1_23 = value;
	}

	inline static int32_t get_offset_of_randInt2_24() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705, ___randInt2_24)); }
	inline int32_t get_randInt2_24() const { return ___randInt2_24; }
	inline int32_t* get_address_of_randInt2_24() { return &___randInt2_24; }
	inline void set_randInt2_24(int32_t value)
	{
		___randInt2_24 = value;
	}
};

struct ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Int32> ShapeSpawner::correct
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___correct_25;
	// System.Collections.Generic.List`1<System.Int32> ShapeSpawner::wrong
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___wrong_26;
	// System.Collections.Generic.List`1<System.Int32> ShapeSpawner::timesUp
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___timesUp_27;
	// System.Collections.Generic.List`1<System.String> ShapeSpawner::attention_data
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___attention_data_28;

public:
	inline static int32_t get_offset_of_correct_25() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields, ___correct_25)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_correct_25() const { return ___correct_25; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_correct_25() { return &___correct_25; }
	inline void set_correct_25(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___correct_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___correct_25), (void*)value);
	}

	inline static int32_t get_offset_of_wrong_26() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields, ___wrong_26)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_wrong_26() const { return ___wrong_26; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_wrong_26() { return &___wrong_26; }
	inline void set_wrong_26(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___wrong_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrong_26), (void*)value);
	}

	inline static int32_t get_offset_of_timesUp_27() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields, ___timesUp_27)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_timesUp_27() const { return ___timesUp_27; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_timesUp_27() { return &___timesUp_27; }
	inline void set_timesUp_27(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___timesUp_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timesUp_27), (void*)value);
	}

	inline static int32_t get_offset_of_attention_data_28() { return static_cast<int32_t>(offsetof(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields, ___attention_data_28)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_attention_data_28() const { return ___attention_data_28; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_attention_data_28() { return &___attention_data_28; }
	inline void set_attention_data_28(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___attention_data_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attention_data_28), (void*)value);
	}
};


// Skip
struct  Skip_t9875F8A8A29D782CF32D60376D8BED17BDE14914  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// StartMemGame
struct  StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> StartMemGame::gameObjs
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___gameObjs_4;
	// System.Boolean StartMemGame::delayComplete
	bool ___delayComplete_5;
	// System.Single StartMemGame::timePassed
	float ___timePassed_6;
	// System.Int32 StartMemGame::processNum
	int32_t ___processNum_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> StartMemGame::objsWithoutCurr
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___objsWithoutCurr_8;
	// UnityEngine.Vector3 StartMemGame::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_9;

public:
	inline static int32_t get_offset_of_gameObjs_4() { return static_cast<int32_t>(offsetof(StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C, ___gameObjs_4)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_gameObjs_4() const { return ___gameObjs_4; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_gameObjs_4() { return &___gameObjs_4; }
	inline void set_gameObjs_4(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___gameObjs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObjs_4), (void*)value);
	}

	inline static int32_t get_offset_of_delayComplete_5() { return static_cast<int32_t>(offsetof(StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C, ___delayComplete_5)); }
	inline bool get_delayComplete_5() const { return ___delayComplete_5; }
	inline bool* get_address_of_delayComplete_5() { return &___delayComplete_5; }
	inline void set_delayComplete_5(bool value)
	{
		___delayComplete_5 = value;
	}

	inline static int32_t get_offset_of_timePassed_6() { return static_cast<int32_t>(offsetof(StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C, ___timePassed_6)); }
	inline float get_timePassed_6() const { return ___timePassed_6; }
	inline float* get_address_of_timePassed_6() { return &___timePassed_6; }
	inline void set_timePassed_6(float value)
	{
		___timePassed_6 = value;
	}

	inline static int32_t get_offset_of_processNum_7() { return static_cast<int32_t>(offsetof(StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C, ___processNum_7)); }
	inline int32_t get_processNum_7() const { return ___processNum_7; }
	inline int32_t* get_address_of_processNum_7() { return &___processNum_7; }
	inline void set_processNum_7(int32_t value)
	{
		___processNum_7 = value;
	}

	inline static int32_t get_offset_of_objsWithoutCurr_8() { return static_cast<int32_t>(offsetof(StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C, ___objsWithoutCurr_8)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_objsWithoutCurr_8() const { return ___objsWithoutCurr_8; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_objsWithoutCurr_8() { return &___objsWithoutCurr_8; }
	inline void set_objsWithoutCurr_8(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___objsWithoutCurr_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objsWithoutCurr_8), (void*)value);
	}

	inline static int32_t get_offset_of_pos_9() { return static_cast<int32_t>(offsetof(StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C, ___pos_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_9() const { return ___pos_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_9() { return &___pos_9; }
	inline void set_pos_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_9 = value;
	}
};


// Test
struct  Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Test::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_4;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5, ___text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_4() const { return ___text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}
};


// Timer
struct  Timer_t32ADF3155A88C37628B80D227C821651666DD405  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Timer::timerBar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___timerBar_4;
	// UnityEngine.Vector3 Timer::currScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currScale_5;
	// System.Single Timer::maxTime
	float ___maxTime_6;

public:
	inline static int32_t get_offset_of_timerBar_4() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___timerBar_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_timerBar_4() const { return ___timerBar_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_timerBar_4() { return &___timerBar_4; }
	inline void set_timerBar_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___timerBar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerBar_4), (void*)value);
	}

	inline static int32_t get_offset_of_currScale_5() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___currScale_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currScale_5() const { return ___currScale_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currScale_5() { return &___currScale_5; }
	inline void set_currScale_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currScale_5 = value;
	}

	inline static int32_t get_offset_of_maxTime_6() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___maxTime_6)); }
	inline float get_maxTime_6() const { return ___maxTime_6; }
	inline float* get_address_of_maxTime_6() { return &___maxTime_6; }
	inline void set_maxTime_6(float value)
	{
		___maxTime_6 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIOnHoverEvent
struct  UIOnHoverEvent_t4F6B07075E80E41FF582B7C4B49BE592E3524163  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 UIOnHoverEvent::cachedScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cachedScale_4;

public:
	inline static int32_t get_offset_of_cachedScale_4() { return static_cast<int32_t>(offsetof(UIOnHoverEvent_t4F6B07075E80E41FF582B7C4B49BE592E3524163, ___cachedScale_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_cachedScale_4() const { return ___cachedScale_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_cachedScale_4() { return &___cachedScale_4; }
	inline void set_cachedScale_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___cachedScale_4 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.Dropdown
struct  Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_34;

public:
	inline static int32_t get_offset_of_s_NoOptionData_34() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_34)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_34() const { return ___s_NoOptionData_34; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_34() { return &___s_NoOptionData_34; }
	inline void set_s_NoOptionData_34(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_34), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * m_Items[1];

public:
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.List`1<System.Int32>[]
struct List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * m_Items[1];

public:
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Int32,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m4DC8B0E32A8AF8D039B9A2D0F885DF11E58880B6_gshared (Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Int32,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mED55C272DBBCBA516683357C99E00546328A21CF_gshared (RuntimeObject* ___source0, Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * ___keySelector1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * Enumerable_ToList_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDE9611363446B76CFA0E37324D7D9AAD7A94D5A3_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Texture2D>::get_Count()
inline int32_t List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Texture2D>::GetEnumerator()
inline Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3  List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577 (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3  (*) (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>::get_Current()
inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_inline (Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 * __this, const RuntimeMethod* method)
{
	return ((  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * (*) (Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>::MoveNext()
inline bool Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518 (Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>::Dispose()
inline void Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A (Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
inline bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Texture2D>::get_Item(System.Int32)
inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * (*) (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 DisplayMemoryIcons::subCategs(System.String,System.Collections.Generic.List`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplayMemoryIcons_subCategs_mB20903382DB63486D642A548B83E99767538F797 (DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B * __this, String_t* ___imgName0, List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___list1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Add(!0)
inline void List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
inline bool List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Sprite_Create_m9817936760193300A6049A788C3446C7ADB49C6B (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot2, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::.ctor()
inline void List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.Int32>[] ShapeSpawner::returnScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* ShapeSpawner_returnScore_m4CA2D20FF538C87124FD0E7738D1CC7787241647 (const RuntimeMethod* method);
// System.Int32[] RecallGame::returnScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* RecallGame_returnScore_m2661624D60D7A67D7E92F78D3497E3154E060371 (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared)(__this, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, String_t* ___fieldName0, int32_t ___i1, const RuntimeMethod* method);
// System.String DisplayScore::GetBaseAPIURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayScore_GetBaseAPIURL_mF5F384BEFEB6A9C3D46F8BEBF179C15BC0A2919E (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Post_m5F29B83B6FEDEAEAAC938DD26AE484A2750DB646 (String_t* ___uri0, WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * ___formData1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void DisplayScore::NextScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayScore_NextScreen_m2945CB654730FD62B8EC7FB55FD60EB5126F4FF0 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void InstructionsToGame::Fading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionsToGame_Fading_m1D900D554326D089EFC1A6D7C1D213E07E479D4C (InstructionsToGame_t0A49B8D3748AC6A63E9CCA2426B210AF1DCE62B9 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void Intro/<Delay>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__1__ctor_m56AD78AEF83952568B7542437B9A564592663F90 (U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator Intro::Delay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Intro_Delay_mF14389FEF6AADC1899A23AEEE6B29F0FAC48AFD8 (Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void RecallGame/<Delay>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__18__ctor_m7189709945CBF4FE520378B974532A1F2DE9A39A (U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.UI.Button>::GetEnumerator()
inline Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::get_Current()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_inline (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::MoveNext()
inline bool Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691 (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::Dispose()
inline void Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500 (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Func`2<System.Int32,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4DC8B0E32A8AF8D039B9A2D0F885DF11E58880B6 (Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m4DC8B0E32A8AF8D039B9A2D0F885DF11E58880B6_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Int32,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_OrderBy_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mED55C272DBBCBA516683357C99E00546328A21CF (RuntimeObject* ___source0, Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 *, const RuntimeMethod*))Enumerable_OrderBy_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mED55C272DBBCBA516683357C99E00546328A21CF_gshared)(___source0, ___keySelector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * Enumerable_ToList_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDE9611363446B76CFA0E37324D7D9AAD7A94D5A3 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDE9611363446B76CFA0E37324D7D9AAD7A94D5A3_gshared)(___source0, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m85439814027F66F874585FC4EC7D58421D93195E (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * __this, int32_t ___index0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *, int32_t, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Item(System.Int32)
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Count()
inline int32_t List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void RecallGame/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mB13090906D61A48F30EC28A5FE4D933102EF6AC1 (U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Texture2D>::Contains(!0)
inline bool List_1_Contains_mC444DB96CBDBD65850F1CC7541496A1138121FC9 (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Collections.IEnumerator RecallGame::Delay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecallGame_Delay_m1077B941FBB1B6F4DEAA366F7EF45ED71CCB8C84 (RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Void RecallGame::Instantiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallGame_Instantiate_m2151018CD4DD65E11BBC5448E9DB6126BE331464 (RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Button>::.ctor()
inline void List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795 (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.IEnumerator RecallInstructions::Delay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecallInstructions_Delay_m5B1E8849DEDE406CEE2B46A26C841860B9696086 (RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556 * __this, const RuntimeMethod* method);
// System.Void RecallInstructions/<Delay>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__3__ctor_mB9CD89EADD4517F6459675C88F7C91F990C99AE5 (U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Collections.IEnumerator SceneChanger::Fading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneChanger_Fading_mEC9DACAF5C33007F5DA21038E2D48A8D3F25391C (SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * __this, const RuntimeMethod* method);
// System.Void SceneChanger/<Fading>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadingU3Ed__3__ctor_m11338BF210E7A8A0574755400624A810E05EAA5C (U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// System.Void ShapeSpawner/<WaitForSpawn>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSpawnU3Ed__26__ctor_mAFE4173C93A3F1CE5982A512C3B80D74F3FA8B2C (U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Collections.IEnumerator ShapeSpawner::WaitForSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShapeSpawner_WaitForSpawn_m2519B9769CB6E88CB862DF9DBEFDD9350BE6945D (ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::Equals(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_Equals_mB531F532B5F7BE6168CFD4A6C89358C16F058D00 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___other0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_gshared)(__this, ___index0, ___value1, method);
}
// System.String ShapeSpawner::return_shape(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3 (ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * __this, int32_t ___randint0, const RuntimeMethod* method);
// System.String ShapeSpawner::return_color(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF (ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * __this, int32_t ___randint0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void ShapeSpawner::SpawnShapes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeSpawner_SpawnShapes_m0A004447622B6EC2851EE9119DE43547B703F3B2 (ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator StartMemGame::Delay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartMemGame_Delay_m3D1BA64FE3C79A0496CAC887B308514015742AD8 (StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * __this, const RuntimeMethod* method);
// System.Void StartMemGame/<Delay>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__7__ctor_m456B463304B6E2027E556748BD06107471D836A2 (U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Timer/<DelayBetween>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayBetweenU3Ed__3__ctor_mEBEF3AA67218FEBDAE56F404F0222A04C139DFC2 (U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator Timer::DelayBetween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Timer_DelayBetween_m7D88B54EAB4C54510C816DF7EB4024F8883FF1F7 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void RecallGame/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF3CDF5E1B05FB73F9E28097AE82DA022B8628005 (U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.Void RecallGame::onClick(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallGame_onClick_m3340D78E9669165E6DF0DCC76AB39777F6C5B5C2 (RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___clickedButton0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL InsertData(char*, char*, char*, char*, char*, char*, char*, int32_t, int32_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL GetToken();
IL2CPP_EXTERN_C char* DEFAULT_CALL GetBaseAPIURL();
IL2CPP_EXTERN_C void DEFAULT_CALL NextScreen();
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<UnityEngine.Texture2D> DataStorage::get_chosenList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * DataStorage_get_chosenList_m5D912793C3EE14D9E65AC6ADC4264C816CC8F180 (DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _chosenList;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_0 = ((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->get__chosenList_4();
		return L_0;
	}
}
// System.Void DataStorage::set_chosenList(System.Collections.Generic.List`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_set_chosenList_mF19168C6ED89C0B381FA77C34EC33E627642154C (DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD * __this, List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _chosenList = value;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_0 = ___value0;
		((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->set__chosenList_4(L_0);
		// }
		return;
	}
}
// System.Int32 DataStorage::get_finalScoreAttention()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataStorage_get_finalScoreAttention_m87D1641BFCF473017162D2096A06624B2A0C4715 (DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _finalScoreAttention;
		int32_t L_0 = ((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->get__finalScoreAttention_5();
		return L_0;
	}
}
// System.Void DataStorage::set_finalScoreAttention(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_set_finalScoreAttention_m1DA207B883DE45E8BADACF637466720876CFB16E (DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _finalScoreAttention = value;
		int32_t L_0 = ___value0;
		((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->set__finalScoreAttention_5(L_0);
		// }
		return;
	}
}
// System.Int32 DataStorage::get_finalScoreRecall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataStorage_get_finalScoreRecall_m1CC3468D10376E81FDEC9E29BDFD3993322C2661 (DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _finalScoreRecall;
		int32_t L_0 = ((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->get__finalScoreRecall_6();
		return L_0;
	}
}
// System.Void DataStorage::set_finalScoreRecall(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_set_finalScoreRecall_m1E368F4B7D19D12460127345B90EB36E49B855E8 (DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _finalScoreRecall = value;
		int32_t L_0 = ___value0;
		((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->set__finalScoreRecall_6(L_0);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> DataStorage::get_attentionData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * DataStorage_get_attentionData_m99FFD2BA52F9090CEC18527EA36CE60ADCD21420 (DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _attentionData;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->get__attentionData_7();
		return L_0;
	}
}
// System.Void DataStorage::set_attentionData(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_set_attentionData_mAC35F2E76F29F8F77245B7254CCD4C94B8F10A8B (DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _attentionData = value;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->set__attentionData_7(L_0);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> DataStorage::get_recallData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * DataStorage_get_recallData_mDBCC4388A3F0F6D6A73349CE1C32A1B66175F7AF (DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _recallData;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->get__recallData_8();
		return L_0;
	}
}
// System.Void DataStorage::set_recallData(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_set_recallData_m6A4A7DC64268C5E9B4F97B9470E4049A0CDD226F (DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _recallData = value;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->set__recallData_8(L_0);
		// }
		return;
	}
}
// System.Void DataStorage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage__ctor_mFF02E078AFDB652FB09592DEB197E4BBA5B14EA1 (DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Demographics::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demographics_Update_m94B186D275F4DB97BBF6A03A70821228C727AB1D (Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _age = age.options[age.value].text;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_0 = __this->get_age_4();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_1;
		L_1 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_0, /*hidden argument*/NULL);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_2 = __this->get_age_4();
		int32_t L_3;
		L_3 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_2, /*hidden argument*/NULL);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_4;
		L_4 = List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline(L_1, L_3, /*hidden argument*/List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		String_t* L_5;
		L_5 = OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline(L_4, /*hidden argument*/NULL);
		((Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_StaticFields*)il2cpp_codegen_static_fields_for(Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_il2cpp_TypeInfo_var))->set__age_7(L_5);
		// _gender = gender.options[gender.value].text;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_6 = __this->get_gender_5();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_7;
		L_7 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_6, /*hidden argument*/NULL);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_8 = __this->get_gender_5();
		int32_t L_9;
		L_9 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_8, /*hidden argument*/NULL);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_10;
		L_10 = List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline(L_7, L_9, /*hidden argument*/List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		String_t* L_11;
		L_11 = OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline(L_10, /*hidden argument*/NULL);
		((Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_StaticFields*)il2cpp_codegen_static_fields_for(Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_il2cpp_TypeInfo_var))->set__gender_8(L_11);
		// _race = race.options[race.value].text;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_12 = __this->get_race_6();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_13;
		L_13 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_12, /*hidden argument*/NULL);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_14 = __this->get_race_6();
		int32_t L_15;
		L_15 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_14, /*hidden argument*/NULL);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_16;
		L_16 = List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline(L_13, L_15, /*hidden argument*/List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		String_t* L_17;
		L_17 = OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline(L_16, /*hidden argument*/NULL);
		((Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_StaticFields*)il2cpp_codegen_static_fields_for(Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_il2cpp_TypeInfo_var))->set__race_9(L_17);
		// DataStorage._age = _age;
		String_t* L_18 = ((Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_StaticFields*)il2cpp_codegen_static_fields_for(Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_il2cpp_TypeInfo_var))->get__age_7();
		((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->set__age_9(L_18);
		// DataStorage._gender = _gender;
		String_t* L_19 = ((Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_StaticFields*)il2cpp_codegen_static_fields_for(Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_il2cpp_TypeInfo_var))->get__gender_8();
		((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->set__gender_10(L_19);
		// DataStorage._race = _race;
		String_t* L_20 = ((Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_StaticFields*)il2cpp_codegen_static_fields_for(Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B_il2cpp_TypeInfo_var))->get__race_9();
		((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->set__race_11(L_20);
		// }
		return;
	}
}
// System.Void Demographics::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demographics_onClick_m4036D3E651BA2D138903EC4075B671C43EEB6BA9 (Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(3);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Demographics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demographics__ctor_mBE29F94913D70A3FD49059353FA59D6018E3D89B (Demographics_tCA61D961B40A71D001CDEEC81F3C3B7D0630A76B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 DisplayMemoryIcons::subCategs(System.String,System.Collections.Generic.List`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplayMemoryIcons_subCategs_mB20903382DB63486D642A548B83E99767538F797 (DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B * __this, String_t* ___imgName0, List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___list1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// int count = 0;
		V_0 = 0;
		// string[] categ = imgName.Split('-');
		String_t* L_0 = ___imgName0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (list.Count > 0)
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_4 = ___list1;
		int32_t L_5;
		L_5 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_4, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		// foreach (Texture2D tex in list)
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_6 = ___list1;
		Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3  L_7;
		L_7 = List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577(L_6, /*hidden argument*/List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0054;
		}

IL_0026:
		{
			// foreach (Texture2D tex in list)
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8;
			L_8 = Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_inline((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_RuntimeMethod_var);
			// string[] categ2 = tex.ToString().Split('-');
			String_t* L_9;
			L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = L_10;
			(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12;
			L_12 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_9, L_11, /*hidden argument*/NULL);
			V_3 = L_12;
			// if (categ[2].Equals(categ2[2]))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = V_1;
			int32_t L_14 = 2;
			String_t* L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = V_3;
			int32_t L_17 = 2;
			String_t* L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
			bool L_19;
			L_19 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_15, L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0054;
			}
		}

IL_0050:
		{
			// count++;
			int32_t L_20 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		}

IL_0054:
		{
			// foreach (Texture2D tex in list)
			bool L_21;
			L_21 = Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_0026;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x6D, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
	}

IL_006d:
	{
		// return count;
		int32_t L_22 = V_0;
		return L_22;
	}
}
// System.Void DisplayMemoryIcons::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayMemoryIcons_Start_m2CFB5F5FBA0675A56F5CF2FB6EC75334337C9F91 (DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// for (int i = 0; i < allImgs.Count; i++)
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		// chosenNums.Add(i);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_chosenNums_6();
		int32_t L_1 = V_0;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_0, L_1, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// for (int i = 0; i < allImgs.Count; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0014:
	{
		// for (int i = 0; i < allImgs.Count; i++)
		int32_t L_3 = V_0;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_4 = __this->get_allImgs_4();
		int32_t L_5;
		L_5 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_4, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int num = 0; num < 30; num++)
		V_1 = 0;
		goto IL_00c1;
	}

IL_0029:
	{
		// int randNum = Random.Range(0, allImgs.Count);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_6 = __this->get_allImgs_4();
		int32_t L_7;
		L_7 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_6, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		int32_t L_8;
		L_8 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// if(!chosenNums.Contains(randNum))
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_9 = __this->get_chosenNums_6();
		int32_t L_10 = V_2;
		bool L_11;
		L_11 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_9, L_10, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		// num--;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		// continue;
		goto IL_00bd;
	}

IL_004f:
	{
		// if (subCategs(allImgs[randNum].ToString(), chosenList) >= 2)
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_13 = __this->get_allImgs_4();
		int32_t L_14 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15;
		L_15 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		IL2CPP_RUNTIME_CLASS_INIT(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_17 = ((DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_StaticFields*)il2cpp_codegen_static_fields_for(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var))->get_chosenList_5();
		int32_t L_18;
		L_18 = DisplayMemoryIcons_subCategs_mB20903382DB63486D642A548B83E99767538F797(__this, L_16, L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)2)))
		{
			goto IL_009a;
		}
	}
	{
		// Debug.Log(subCategs(allImgs[randNum].ToString(), chosenList));
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_19 = __this->get_allImgs_4();
		int32_t L_20 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21;
		L_21 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		String_t* L_22;
		L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_23 = ((DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_StaticFields*)il2cpp_codegen_static_fields_for(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var))->get_chosenList_5();
		int32_t L_24;
		L_24 = DisplayMemoryIcons_subCategs_mB20903382DB63486D642A548B83E99767538F797(__this, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_25);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_26, /*hidden argument*/NULL);
		// num--;
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
		// continue;
		goto IL_00bd;
	}

IL_009a:
	{
		// chosenList.Add(allImgs[randNum]);
		IL2CPP_RUNTIME_CLASS_INIT(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_28 = ((DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_StaticFields*)il2cpp_codegen_static_fields_for(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var))->get_chosenList_5();
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_29 = __this->get_allImgs_4();
		int32_t L_30 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31;
		L_31 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F(L_28, L_31, /*hidden argument*/List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		// chosenNums.Remove(randNum);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_32 = __this->get_chosenNums_6();
		int32_t L_33 = V_2;
		bool L_34;
		L_34 = List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F(L_32, L_33, /*hidden argument*/List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
	}

IL_00bd:
	{
		// for (int num = 0; num < 30; num++)
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00c1:
	{
		// for (int num = 0; num < 30; num++)
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)30))))
		{
			goto IL_0029;
		}
	}
	{
		// sr = new SpriteRenderer[gameObjects.Count];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_37 = __this->get_gameObjects_9();
		int32_t L_38;
		L_38 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_37, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_39 = (SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF*)(SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF*)SZArrayNew(SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF_il2cpp_TypeInfo_var, (uint32_t)L_38);
		__this->set_sr_8(L_39);
		// for(int j = 0; j < gameObjects.Count; j++)
		V_3 = 0;
		goto IL_0100;
	}

IL_00e3:
	{
		// sr[j] = gameObjects[j].AddComponent<SpriteRenderer>() as SpriteRenderer;
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_40 = __this->get_sr_8();
		int32_t L_41 = V_3;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_42 = __this->get_gameObjects_9();
		int32_t L_43 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_42, L_43, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_45;
		L_45 = GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359(L_44, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		ArrayElementTypeCheck (L_40, L_45);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41), (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF *)L_45);
		// for(int j = 0; j < gameObjects.Count; j++)
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_0100:
	{
		// for(int j = 0; j < gameObjects.Count; j++)
		int32_t L_47 = V_3;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_48 = __this->get_gameObjects_9();
		int32_t L_49;
		L_49 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_48, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_00e3;
		}
	}
	{
		// for (int index = 0; index < chosenList.Count; index++) {
		V_4 = 0;
		goto IL_0186;
	}

IL_0113:
	{
		// mySprite = Sprite.Create(chosenList[index], new Rect(0.0f, 0.0f, chosenList[index].width, chosenList[index].height), new Vector2(0.0f, 0.0f));
		IL2CPP_RUNTIME_CLASS_INIT(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_50 = ((DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_StaticFields*)il2cpp_codegen_static_fields_for(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var))->get_chosenList_5();
		int32_t L_51 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_52;
		L_52 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_50, L_51, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_53 = ((DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_StaticFields*)il2cpp_codegen_static_fields_for(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var))->get_chosenList_5();
		int32_t L_54 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_55;
		L_55 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_53, L_54, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		int32_t L_56;
		L_56 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_55);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_57 = ((DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_StaticFields*)il2cpp_codegen_static_fields_for(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var))->get_chosenList_5();
		int32_t L_58 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_59;
		L_59 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_57, L_58, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		int32_t L_60;
		L_60 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_59);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_61), (0.0f), (0.0f), ((float)((float)L_56)), ((float)((float)L_60)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_62), (0.0f), (0.0f), /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_63;
		L_63 = Sprite_Create_m9817936760193300A6049A788C3446C7ADB49C6B(L_52, L_61, L_62, /*hidden argument*/NULL);
		__this->set_mySprite_7(L_63);
		// sr[index].sprite = mySprite;
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_64 = __this->get_sr_8();
		int32_t L_65 = V_4;
		int32_t L_66 = L_65;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_68 = __this->get_mySprite_7();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_67, L_68, /*hidden argument*/NULL);
		// for (int index = 0; index < chosenList.Count; index++) {
		int32_t L_69 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_0186:
	{
		// for (int index = 0; index < chosenList.Count; index++) {
		int32_t L_70 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_71 = ((DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_StaticFields*)il2cpp_codegen_static_fields_for(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var))->get_chosenList_5();
		int32_t L_72;
		L_72 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_71, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		if ((((int32_t)L_70) < ((int32_t)L_72)))
		{
			goto IL_0113;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DisplayMemoryIcons::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayMemoryIcons_Update_m72AC3490028896D1D8C855D923E0373E2D3D1CC5 (DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// float ratio = (float) Screen.width / (float) Screen.height;
		int32_t L_0;
		L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		V_0 = ((float)((float)((float)((float)L_0))/(float)((float)((float)L_1))));
		// Debug.Log(Screen.width + ", " + Screen.height + ", " + ratio);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_3;
		ArrayElementTypeCheck (L_6, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		int32_t L_8;
		L_8 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		V_1 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_7;
		ArrayElementTypeCheck (L_10, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		String_t* L_12;
		L_12 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_12);
		String_t* L_13;
		L_13 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
		// if (ratio < (1522f / 676f))
		float L_14 = V_0;
		if ((!(((float)L_14) < ((float)(2.25147939f)))))
		{
			goto IL_00a0;
		}
	}
	{
		// if (Screen.width > 1522f)
		int32_t L_15;
		L_15 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_15))) > ((float)(1522.0f)))))
		{
			goto IL_00d2;
		}
	}
	{
		// canvas.transform.localScale = new Vector3(1522f / Screen.width, 1522f / Screen.width, 1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_canvas_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_19;
		L_19 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), ((float)((float)(1522.0f)/(float)((float)((float)L_18)))), ((float)((float)(1522.0f)/(float)((float)((float)L_19)))), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_17, L_20, /*hidden argument*/NULL);
		// } else
		return;
	}

IL_00a0:
	{
		// canvas.transform.localScale = new Vector3(Screen.width / 1522f, Screen.width / 1522f, 1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_canvas_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_24;
		L_24 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), ((float)((float)((float)((float)L_23))/(float)(1522.0f))), ((float)((float)((float)((float)L_24))/(float)(1522.0f))), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_22, L_25, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void DisplayMemoryIcons::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayMemoryIcons__ctor_mD5C143EED58C8107E65FB8B8DACA3C1C1197A5C6 (DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<int> chosenNums = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_chosenNums_6(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DisplayMemoryIcons::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayMemoryIcons__cctor_m095D85E80FBE6022AE190BA2D64D1E810DEBA6E4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<Texture2D> chosenList = new List<Texture2D>();
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_0 = (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *)il2cpp_codegen_object_new(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var);
		List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC(L_0, /*hidden argument*/List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var);
		((DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_StaticFields*)il2cpp_codegen_static_fields_for(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var))->set_chosenList_5(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DisplayScore::InsertData(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayScore_InsertData_m765305787263845B9CCA35882C61D48040C4107E (String_t* ___tableName0, String_t* ___code1, String_t* ___age2, String_t* ___race3, String_t* ___gender4, String_t* ___attentionData5, String_t* ___recallData6, int32_t ___attentionScore7, int32_t ___recallScore8, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, char*, char*, char*, char*, int32_t, int32_t);

	// Marshaling of parameter '___tableName0' to native representation
	char* ____tableName0_marshaled = NULL;
	____tableName0_marshaled = il2cpp_codegen_marshal_string(___tableName0);

	// Marshaling of parameter '___code1' to native representation
	char* ____code1_marshaled = NULL;
	____code1_marshaled = il2cpp_codegen_marshal_string(___code1);

	// Marshaling of parameter '___age2' to native representation
	char* ____age2_marshaled = NULL;
	____age2_marshaled = il2cpp_codegen_marshal_string(___age2);

	// Marshaling of parameter '___race3' to native representation
	char* ____race3_marshaled = NULL;
	____race3_marshaled = il2cpp_codegen_marshal_string(___race3);

	// Marshaling of parameter '___gender4' to native representation
	char* ____gender4_marshaled = NULL;
	____gender4_marshaled = il2cpp_codegen_marshal_string(___gender4);

	// Marshaling of parameter '___attentionData5' to native representation
	char* ____attentionData5_marshaled = NULL;
	____attentionData5_marshaled = il2cpp_codegen_marshal_string(___attentionData5);

	// Marshaling of parameter '___recallData6' to native representation
	char* ____recallData6_marshaled = NULL;
	____recallData6_marshaled = il2cpp_codegen_marshal_string(___recallData6);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InsertData)(____tableName0_marshaled, ____code1_marshaled, ____age2_marshaled, ____race3_marshaled, ____gender4_marshaled, ____attentionData5_marshaled, ____recallData6_marshaled, ___attentionScore7, ___recallScore8);

	// Marshaling cleanup of parameter '___tableName0' native representation
	il2cpp_codegen_marshal_free(____tableName0_marshaled);
	____tableName0_marshaled = NULL;

	// Marshaling cleanup of parameter '___code1' native representation
	il2cpp_codegen_marshal_free(____code1_marshaled);
	____code1_marshaled = NULL;

	// Marshaling cleanup of parameter '___age2' native representation
	il2cpp_codegen_marshal_free(____age2_marshaled);
	____age2_marshaled = NULL;

	// Marshaling cleanup of parameter '___race3' native representation
	il2cpp_codegen_marshal_free(____race3_marshaled);
	____race3_marshaled = NULL;

	// Marshaling cleanup of parameter '___gender4' native representation
	il2cpp_codegen_marshal_free(____gender4_marshaled);
	____gender4_marshaled = NULL;

	// Marshaling cleanup of parameter '___attentionData5' native representation
	il2cpp_codegen_marshal_free(____attentionData5_marshaled);
	____attentionData5_marshaled = NULL;

	// Marshaling cleanup of parameter '___recallData6' native representation
	il2cpp_codegen_marshal_free(____recallData6_marshaled);
	____recallData6_marshaled = NULL;

}
// System.String DisplayScore::GetToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayScore_GetToken_m8A4AA13932E047BD2492A40BCE0ACEFE9A22E407 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(GetToken)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String DisplayScore::GetBaseAPIURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayScore_GetBaseAPIURL_mF5F384BEFEB6A9C3D46F8BEBF179C15BC0A2919E (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(GetBaseAPIURL)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void DisplayScore::NextScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayScore_NextScreen_m2945CB654730FD62B8EC7FB55FD60EB5126F4FF0 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NextScreen)();

}
// System.Void DisplayScore::StringCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayScore_StringCallback_mB01A366B343B47AFAF1A27559EDB38A5EE40F8CA (DisplayScore_tE966894ADF4B522CAC9EA53868A9A82B03FD5009 * __this, String_t* ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(info);
		String_t* L_0 = ___info0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DisplayScore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayScore_Start_mD7EB0F50866ECBBE57519ACD04A4D41184830110 (DisplayScore_tE966894ADF4B522CAC9EA53868A9A82B03FD5009 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BADCCF1255DF64C6534522AE13C18F2593C99D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32A9F9239088A1751B80340B1436999AD9B1B985);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B1233F1B76125FF71B1432AF50110C4C3853BCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral512DE94630C94F7512ADE8C7782EA5EB664185AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A6A1BD1FBE5C298527487EFFF66BED1BC5B47A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BB53D65B097ACF1F141DEAE0184DC1BCFB14B07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98A9EF6E94796AFC2467A765A523D5119176186F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC33A2F86F1B1BDD5EDCB58FCD832954D6519521);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD86AEF28D705AA8A25976C7699985BB7FF060A5);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * V_7 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_8 = NULL;
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_12;
	memset((&V_12), 0, sizeof(V_12));
	String_t* V_13 = NULL;
	String_t* V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// List<int>[] attentionScoreTotal = ShapeSpawner.returnScore();
		IL2CPP_RUNTIME_CLASS_INIT(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* L_0;
		L_0 = ShapeSpawner_returnScore_m4CA2D20FF538C87124FD0E7738D1CC7787241647(/*hidden argument*/NULL);
		// int[] recallScoreTotal = RecallGame.returnScore();
		IL2CPP_RUNTIME_CLASS_INIT(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1;
		L_1 = RecallGame_returnScore_m2661624D60D7A67D7E92F78D3497E3154E060371(/*hidden argument*/NULL);
		V_0 = L_1;
		// int attentionScore = 0;
		V_1 = 0;
		// foreach(int num in attentionScoreTotal[0])
		int32_t L_2 = 0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_4;
		L_4 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_3, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		V_9 = L_4;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_0018:
		{
			// foreach(int num in attentionScoreTotal[0])
			int32_t L_5;
			L_5 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_9), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
			V_10 = L_5;
			// attentionScore += num;
			int32_t L_6 = V_1;
			int32_t L_7 = V_10;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		}

IL_0026:
		{
			// foreach(int num in attentionScoreTotal[0])
			bool L_8;
			L_8 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0018;
			}
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_9), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
		// System.Random generator = new System.Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_9 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_9, /*hidden argument*/NULL);
		// string codeStr = generator.Next(100000, 1000000).ToString("D6");
		int32_t L_10;
		L_10 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_9, ((int32_t)100000), ((int32_t)1000000));
		V_11 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_11), _stringLiteral7BB53D65B097ACF1F141DEAE0184DC1BCFB14B07, /*hidden argument*/NULL);
		V_2 = L_11;
		// int recallScore = recallScoreTotal[0];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = V_0;
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = L_14;
		// attentionText.text = "Attention: You're Final Score was " + attentionScore + "/100!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_attentionText_4();
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralFC33A2F86F1B1BDD5EDCB58FCD832954D6519521, L_16, _stringLiteral98A9EF6E94796AFC2467A765A523D5119176186F, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_17);
		// recallText.text = "Recall: You're Final Score was " + recallScore + "/30!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = __this->get_recallText_5();
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral6A6A1BD1FBE5C298527487EFFF66BED1BC5B47A4, L_19, _stringLiteralFD86AEF28D705AA8A25976C7699985BB7FF060A5, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_20);
		// List<string> attentionData = DataStorage._attentionData;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_21 = ((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->get__attentionData_7();
		// List<string> recallData = DataStorage._recallData;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_22 = ((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->get__recallData_8();
		V_4 = L_22;
		// string age = DataStorage._age;
		String_t* L_23 = ((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->get__age_9();
		// string race = DataStorage._race;
		String_t* L_24 = ((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->get__race_11();
		// string gender = DataStorage._gender;
		String_t* L_25 = ((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->get__gender_10();
		// string attention = "";
		V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string recall = "";
		V_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// code.text += " " + codeStr;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_26 = __this->get_code_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = L_26;
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_27);
		String_t* L_29 = V_2;
		String_t* L_30;
		L_30 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_28, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_29, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_30);
		// foreach (string a in attentionData)
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_31;
		L_31 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_21, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_12 = L_31;
	}

IL_00f7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0112;
		}

IL_00f9:
		{
			// foreach (string a in attentionData)
			String_t* L_32;
			L_32 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_12), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_13 = L_32;
			// attention += (a + "\n");
			String_t* L_33 = V_5;
			String_t* L_34 = V_13;
			String_t* L_35;
			L_35 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_33, L_34, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
			V_5 = L_35;
		}

IL_0112:
		{
			// foreach (string a in attentionData)
			bool L_36;
			L_36 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_12), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_36)
			{
				goto IL_00f9;
			}
		}

IL_011b:
		{
			IL2CPP_LEAVE(0x12B, FINALLY_011d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011d;
	}

FINALLY_011d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_12), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(285)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(285)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12B, IL_012b)
	}

IL_012b:
	{
		// foreach (string r in recallData)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_37 = V_4;
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_38;
		L_38 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_37, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_12 = L_38;
	}

IL_0134:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014f;
		}

IL_0136:
		{
			// foreach (string r in recallData)
			String_t* L_39;
			L_39 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_12), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_14 = L_39;
			// recall += (r + "\n");
			String_t* L_40 = V_6;
			String_t* L_41 = V_14;
			String_t* L_42;
			L_42 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_40, L_41, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
			V_6 = L_42;
		}

IL_014f:
		{
			// foreach (string r in recallData)
			bool L_43;
			L_43 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_12), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_43)
			{
				goto IL_0136;
			}
		}

IL_0158:
		{
			IL2CPP_LEAVE(0x168, FINALLY_015a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_015a;
	}

FINALLY_015a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_12), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(346)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(346)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x168, IL_0168)
	}

IL_0168:
	{
		// WWWForm form = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_44 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_44, /*hidden argument*/NULL);
		V_7 = L_44;
		// form.AddField("recallScore", recallScore);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_45 = V_7;
		int32_t L_46 = V_3;
		WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C(L_45, _stringLiteral4B1233F1B76125FF71B1432AF50110C4C3853BCA, L_46, /*hidden argument*/NULL);
		// form.AddField("attentionScore", attentionScore);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_47 = V_7;
		int32_t L_48 = V_1;
		WWWForm_AddField_m20BED9E7C237D585E5D040A5D815D9C7DC16990C(L_47, _stringLiteral512DE94630C94F7512ADE8C7782EA5EB664185AD, L_48, /*hidden argument*/NULL);
		// string path = GetBaseAPIURL() + "/api/assessments/neurospect";
		String_t* L_49;
		L_49 = DisplayScore_GetBaseAPIURL_mF5F384BEFEB6A9C3D46F8BEBF179C15BC0A2919E(/*hidden argument*/NULL);
		String_t* L_50;
		L_50 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_49, _stringLiteral32A9F9239088A1751B80340B1436999AD9B1B985, /*hidden argument*/NULL);
		// UnityWebRequest www = UnityWebRequest.Post(path, form);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_51 = V_7;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_52;
		L_52 = UnityWebRequest_Post_m5F29B83B6FEDEAEAAC938DD26AE484A2750DB646(L_50, L_51, /*hidden argument*/NULL);
		V_8 = L_52;
		// www.SetRequestHeader("Authorization", "TOKEN " + GetBaseAPIURL());
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_53 = V_8;
		String_t* L_54;
		L_54 = DisplayScore_GetBaseAPIURL_mF5F384BEFEB6A9C3D46F8BEBF179C15BC0A2919E(/*hidden argument*/NULL);
		String_t* L_55;
		L_55 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1BADCCF1255DF64C6534522AE13C18F2593C99D7, L_54, /*hidden argument*/NULL);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_53, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_55, /*hidden argument*/NULL);
		// www.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_56 = V_8;
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_57;
		L_57 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_56, /*hidden argument*/NULL);
		// if (www.result != UnityWebRequest.Result.Success)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_58 = V_8;
		int32_t L_59;
		L_59 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_58, /*hidden argument*/NULL);
		if ((((int32_t)L_59) == ((int32_t)1)))
		{
			goto IL_01dc;
		}
	}
	{
		// Debug.Log(www.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_60 = V_8;
		String_t* L_61;
		L_61 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_61, /*hidden argument*/NULL);
		// }
		goto IL_01e6;
	}

IL_01dc:
	{
		// Debug.Log("Success");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890, /*hidden argument*/NULL);
	}

IL_01e6:
	{
		// NextScreen();
		DisplayScore_NextScreen_m2945CB654730FD62B8EC7FB55FD60EB5126F4FF0(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DisplayScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayScore__ctor_m228E5C39DB7609780E820370E69270E5498A4DA1 (DisplayScore_tE966894ADF4B522CAC9EA53868A9A82B03FD5009 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EncInstr::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncInstr_Start_mA5F9274BCC3FA0753793C64E3755959A5976B022 (EncInstr_tCEB6D3749C90AEA1C7CA7B84C2B5412D92168FA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// sr = new SpriteRenderer[gameObjects.Count];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_gameObjects_10();
		int32_t L_1;
		L_1 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_0, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_2 = (SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF*)(SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF*)SZArrayNew(SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set_sr_9(L_2);
		// for (int j = 0; j < gameObjects.Count; j++)
		V_0 = 0;
		goto IL_0037;
	}

IL_001a:
	{
		// sr[j] = gameObjects[j].AddComponent<SpriteRenderer>() as SpriteRenderer;
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_3 = __this->get_sr_9();
		int32_t L_4 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_gameObjects_10();
		int32_t L_6 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_8;
		L_8 = GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359(L_7, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		ArrayElementTypeCheck (L_3, L_8);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF *)L_8);
		// for (int j = 0; j < gameObjects.Count; j++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0037:
	{
		// for (int j = 0; j < gameObjects.Count; j++)
		int32_t L_10 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_11 = __this->get_gameObjects_10();
		int32_t L_12;
		L_12 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_11, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		// for (int index = 0; index < chosenList.Count; index++)
		V_1 = 0;
		goto IL_00f4;
	}

IL_004c:
	{
		// Vector3 shift = new Vector3(0.0f, 0.0f, 0.0f);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// mySprite = Sprite.Create(chosenList[index], new Rect(0.0f, 0.0f, chosenList[index].width, chosenList[index].height), new Vector2(0.0f, 0.0f));
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_13 = __this->get_chosenList_4();
		int32_t L_14 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15;
		L_15 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_16 = __this->get_chosenList_4();
		int32_t L_17 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18;
		L_18 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_20 = __this->get_chosenList_4();
		int32_t L_21 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22;
		L_22 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_20, L_21, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		int32_t L_23;
		L_23 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_22);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_24), (0.0f), (0.0f), ((float)((float)L_19)), ((float)((float)L_23)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_25), (0.0f), (0.0f), /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_26;
		L_26 = Sprite_Create_m9817936760193300A6049A788C3446C7ADB49C6B(L_15, L_24, L_25, /*hidden argument*/NULL);
		__this->set_mySprite_8(L_26);
		// sr[index].sprite = mySprite;
		SpriteRendererU5BU5D_t45BF125944C2F3974C568E650FCCDB591E5ABFBF* L_27 = __this->get_sr_9();
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_31 = __this->get_mySprite_8();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_30, L_31, /*hidden argument*/NULL);
		// gameObjects[index].transform.position += shift;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_32 = __this->get_gameObjects_10();
		int32_t L_33 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_32, L_33, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = L_35;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_37, L_38, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_36, L_39, /*hidden argument*/NULL);
		// for (int index = 0; index < chosenList.Count; index++)
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00f4:
	{
		// for (int index = 0; index < chosenList.Count; index++)
		int32_t L_41 = V_1;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_42 = __this->get_chosenList_4();
		int32_t L_43;
		L_43 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_42, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_004c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EncInstr::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncInstr_Update_m829A5444A06F6DFBC4C91A80F6DE6858626EFE59 (EncInstr_tCEB6D3749C90AEA1C7CA7B84C2B5412D92168FA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (timePassed < 1.0f)
		float L_0 = __this->get_timePassed_6();
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		// timePassed += Time.deltaTime;
		float L_1 = __this->get_timePassed_6();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timePassed_6(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
	}

IL_001f:
	{
		// if (objNum >= 4 && timePassed >= 1.0f)
		int32_t L_3 = __this->get_objNum_7();
		if ((((int32_t)L_3) < ((int32_t)4)))
		{
			goto IL_003c;
		}
	}
	{
		float L_4 = __this->get_timePassed_6();
		if ((!(((float)L_4) >= ((float)(1.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		// SceneManager.LoadScene(4);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(4, /*hidden argument*/NULL);
		// } else if(objNum < 4)
		return;
	}

IL_003c:
	{
		// } else if(objNum < 4)
		int32_t L_5 = __this->get_objNum_7();
		if ((((int32_t)L_5) >= ((int32_t)4)))
		{
			goto IL_0232;
		}
	}
	{
		// if (timePassed >= 1.0f && timePassed < 2.0f)
		float L_6 = __this->get_timePassed_6();
		if ((!(((float)L_6) >= ((float)(1.0f)))))
		{
			goto IL_010b;
		}
	}
	{
		float L_7 = __this->get_timePassed_6();
		if ((!(((float)L_7) < ((float)(2.0f)))))
		{
			goto IL_010b;
		}
	}
	{
		// timePassed += Time.deltaTime;
		float L_8 = __this->get_timePassed_6();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timePassed_6(((float)il2cpp_codegen_add((float)L_8, (float)L_9)));
		// float valIncrease = 5f - (objNum * 5);
		int32_t L_10 = __this->get_objNum_7();
		V_0 = ((float)il2cpp_codegen_subtract((float)(5.0f), (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)5))))));
		// Vector3 posTo = new Vector3(valIncrease * Time.deltaTime, -2.5f * Time.deltaTime, -10 * Time.deltaTime);
		float L_11 = V_0;
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), ((float)il2cpp_codegen_multiply((float)(-2.5f), (float)L_13)), ((float)il2cpp_codegen_multiply((float)(-10.0f), (float)L_14)), /*hidden argument*/NULL);
		// gameObjects[objNum].transform.localScale += new Vector3(Time.deltaTime, Time.deltaTime);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = __this->get_gameObjects_10();
		int32_t L_16 = __this->get_objNum_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = L_18;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_19, /*hidden argument*/NULL);
		float L_21;
		L_21 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_22;
		L_22 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_23), L_21, L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_20, L_23, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_19, L_24, /*hidden argument*/NULL);
		// gameObjects[objNum].transform.position += posTo;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_25 = __this->get_gameObjects_10();
		int32_t L_26 = __this->get_objNum_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_25, L_26, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = L_28;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_30, L_31, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_29, L_32, /*hidden argument*/NULL);
		// }
		return;
	}

IL_010b:
	{
		// else if (timePassed >= 2.0f && timePassed < 3.0f)
		float L_33 = __this->get_timePassed_6();
		if ((!(((float)L_33) >= ((float)(2.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		float L_34 = __this->get_timePassed_6();
		if ((!(((float)L_34) < ((float)(3.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		// timePassed += Time.deltaTime;
		float L_35 = __this->get_timePassed_6();
		float L_36;
		L_36 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timePassed_6(((float)il2cpp_codegen_add((float)L_35, (float)L_36)));
		// }
		return;
	}

IL_0138:
	{
		// else if (timePassed >= 3.0f && timePassed < 4.0f)
		float L_37 = __this->get_timePassed_6();
		if ((!(((float)L_37) >= ((float)(3.0f)))))
		{
			goto IL_020c;
		}
	}
	{
		float L_38 = __this->get_timePassed_6();
		if ((!(((float)L_38) < ((float)(4.0f)))))
		{
			goto IL_020c;
		}
	}
	{
		// float valIncrease = 5f - (objNum * 5);
		int32_t L_39 = __this->get_objNum_7();
		V_2 = ((float)il2cpp_codegen_subtract((float)(5.0f), (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_39, (int32_t)5))))));
		// timePassed += Time.deltaTime;
		float L_40 = __this->get_timePassed_6();
		float L_41;
		L_41 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timePassed_6(((float)il2cpp_codegen_add((float)L_40, (float)L_41)));
		// Vector3 posTo = new Vector3(valIncrease * Time.deltaTime, -2.5f * Time.deltaTime, -10 * Time.deltaTime);
		float L_42 = V_2;
		float L_43;
		L_43 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_44;
		L_44 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_45;
		L_45 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), ((float)il2cpp_codegen_multiply((float)L_42, (float)L_43)), ((float)il2cpp_codegen_multiply((float)(-2.5f), (float)L_44)), ((float)il2cpp_codegen_multiply((float)(-10.0f), (float)L_45)), /*hidden argument*/NULL);
		// gameObjects[objNum].transform.localScale += new Vector3(-1 * Time.deltaTime, -1 * Time.deltaTime, 0.0f);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_46 = __this->get_gameObjects_10();
		int32_t L_47 = __this->get_objNum_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_46, L_47, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50 = L_49;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_50, /*hidden argument*/NULL);
		float L_52;
		L_52 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_53;
		L_53 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_54), ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_52)), ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_53)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_51, L_54, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_50, L_55, /*hidden argument*/NULL);
		// gameObjects[objNum].transform.position -= posTo;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_56 = __this->get_gameObjects_10();
		int32_t L_57 = __this->get_objNum_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_56, L_57, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_58, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = L_59;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_61, L_62, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_60, L_63, /*hidden argument*/NULL);
		// }
		return;
	}

IL_020c:
	{
		// else if (timePassed >= 4.0f)
		float L_64 = __this->get_timePassed_6();
		if ((!(((float)L_64) >= ((float)(4.0f)))))
		{
			goto IL_0232;
		}
	}
	{
		// timePassed = 0.0f;
		__this->set_timePassed_6((0.0f));
		// objNum++;
		int32_t L_65 = __this->get_objNum_7();
		__this->set_objNum_7(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1)));
	}

IL_0232:
	{
		// }
		return;
	}
}
// System.Void EncInstr::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncInstr__ctor_mE23EF19310049F8E087D601C42E31898AC8EF5C4 (EncInstr_tCEB6D3749C90AEA1C7CA7B84C2B5412D92168FA7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GotWrongInter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GotWrongInter_Start_mFF8B6A22F8E714BFCCE86E0CB5A6A99F1F1EB88F (GotWrongInter_t7E34DC6CF8EE24EB5D25C39A580C07EFB746C516 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GotWrongInter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GotWrongInter_Update_m34F42DBE4649737FB51EBFD8C1F76EB2DD017429 (GotWrongInter_t7E34DC6CF8EE24EB5D25C39A580C07EFB746C516 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// SceneManager.LoadScene(5);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(5, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void GotWrongInter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GotWrongInter__ctor_m65914D606060CACF6219D2C08AD45D9741625DEF (GotWrongInter_t7E34DC6CF8EE24EB5D25C39A580C07EFB746C516 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InstructionsToGame::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionsToGame_Update_m5EEF7685F7AF50E7DE6C19330B05E14983B2C1AD (InstructionsToGame_t0A49B8D3748AC6A63E9CCA2426B210AF1DCE62B9 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Fading();
		InstructionsToGame_Fading_m1D900D554326D089EFC1A6D7C1D213E07E479D4C(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void InstructionsToGame::Fading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionsToGame_Fading_m1D900D554326D089EFC1A6D7C1D213E07E479D4C (InstructionsToGame_t0A49B8D3748AC6A63E9CCA2426B210AF1DCE62B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int sceneNum = SceneManager.GetActiveScene().buildIndex;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneNum + 1);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InstructionsToGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionsToGame__ctor_m2F8AFDA19EE541896B79B29BF2A0EA68718C440C (InstructionsToGame_t0A49B8D3748AC6A63E9CCA2426B210AF1DCE62B9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Instructiosn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructiosn_Start_m835154FBEB0929BFBC4ADD4ABDCDBC4E56434CD8 (Instructiosn_tE86560452B6ACA0673516A4238C679CC16DA52B8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Instructiosn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructiosn_Update_mF8C3640CFA15F7F7F754122B0BFD24234749AACF (Instructiosn_tE86560452B6ACA0673516A4238C679CC16DA52B8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Instructiosn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructiosn__ctor_m2C09869E4F32A6BA9E66E3490AE23B8CE0E624EF (Instructiosn_tE86560452B6ACA0673516A4238C679CC16DA52B8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator Intro::Delay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Intro_Delay_mF14389FEF6AADC1899A23AEEE6B29F0FAC48AFD8 (Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA * L_0 = (U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA *)il2cpp_codegen_object_new(U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA_il2cpp_TypeInfo_var);
		U3CDelayU3Ed__1__ctor_m56AD78AEF83952568B7542437B9A564592663F90(L_0, 0, /*hidden argument*/NULL);
		U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Intro::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intro_Start_m00DAE6088AFCCF0FC477EBB2F1B66504D5A410E8 (Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Delay());
		RuntimeObject* L_0;
		L_0 = Intro_Delay_mF14389FEF6AADC1899A23AEEE6B29F0FAC48AFD8(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Intro::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intro_Update_m3679180E7B047DD87B4722C7A3F5C20CC3627C30 (Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(changeScene)
		bool L_0 = __this->get_changeScene_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// SceneManager.LoadScene(2);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(2, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Intro::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intro__ctor_m33EE647A02A5B11927122D4C534667D61613F372 (Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32[] RecallGame::returnScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* RecallGame_returnScore_m2661624D60D7A67D7E92F78D3497E3154E060371 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int[] finalScore = new int[3];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		// finalScore[0] = numCorrect;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		int32_t L_2 = ((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->get_numCorrect_17();
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_2);
		// finalScore[1] = numWrong;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = L_1;
		int32_t L_4 = ((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->get_numWrong_18();
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_4);
		// finalScore[2] = numTimesUp;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_3;
		int32_t L_6 = ((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->get_numTimesUp_19();
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)L_6);
		// return finalScore;
		return L_5;
	}
}
// System.Collections.IEnumerator RecallGame::Delay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecallGame_Delay_m1077B941FBB1B6F4DEAA366F7EF45ED71CCB8C84 (RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4 * L_0 = (U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4 *)il2cpp_codegen_object_new(U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4_il2cpp_TypeInfo_var);
		U3CDelayU3Ed__18__ctor_m7189709945CBF4FE520378B974532A1F2DE9A39A(L_0, 0, /*hidden argument*/NULL);
		U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void RecallGame::onClick(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallGame_onClick_m3340D78E9669165E6DF0DCC76AB39777F6C5B5C2 (RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___clickedButton0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selected = true;
		__this->set_selected_13((bool)1);
		// clickedImg = clickedButton.GetComponent<Image>().sprite.texture;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = ___clickedButton0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_0, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2;
		L_2 = Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline(L_1, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3;
		L_3 = Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB(L_2, /*hidden argument*/NULL);
		__this->set_clickedImg_11(L_3);
		// Debug.Log(clickedImg.ToString() + ", " + correctImg.ToString());
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = __this->get_clickedImg_11();
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = __this->get_correctImg_10();
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// if (clickedButton.GetComponent<Image>().sprite.texture.ToString().Equals(correctImg.ToString()))
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = ___clickedButton0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10;
		L_10 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_9, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_11;
		L_11 = Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline(L_10, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12;
		L_12 = Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB(L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = __this->get_correctImg_10();
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		bool L_16;
		L_16 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_13, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		// numCorrect++;
		IL2CPP_RUNTIME_CLASS_INIT(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		int32_t L_17 = ((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->get_numCorrect_17();
		((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->set_numCorrect_17(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		// } else
		return;
	}

IL_0076:
	{
		// numWrong++;
		IL2CPP_RUNTIME_CLASS_INIT(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		int32_t L_18 = ((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->get_numWrong_18();
		((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->set_numWrong_18(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		// }
		return;
	}
}
// System.Void RecallGame::Instantiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallGame_Instantiate_m2151018CD4DD65E11BBC5448E9DB6126BE331464 (RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mED55C272DBBCBA516683357C99E00546328A21CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDE9611363446B76CFA0E37324D7D9AAD7A94D5A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m4DC8B0E32A8AF8D039B9A2D0F885DF11E58880B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m85439814027F66F874585FC4EC7D58421D93195E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInstantiateU3Eb__20_0_m89106FCE2D6BD5F69BF9E0748CA7F8CF6A8094CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3CInstantiateU3Eb__1_m170F9740145A1A27C18C3F31FF9A08A52E73AE2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17045E5D5EBFE78C2F3D25CFA4E449849CBC5E2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AC3E8EC0D1F213A1C43DDF7B0D9C98DFD06292F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D5CB2FB89C01B07DB086ABDC609D431DD43121C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7923BB5D7D0B736ACBEFB5700E964283C04EDC2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E08B68E8A78BD7A06E0806711166B4EE15B76E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89FEEE34C09548A29E70367E180DA383B402CE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3089C971EF72A3DD61F3EA222350C26014A69AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59AA1906A30460F14B8ED7C1521E856DF885451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7209A31EF4030A0AFC64226B1EE7DC0AE6B2228);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8EFD6D4A0C23D451381130B9EEB287C00B8BCCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD88F1B353070715E47025140C3481BA8871E4BD);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * V_0 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * V_6 = NULL;
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * V_7 = NULL;
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * V_8 = NULL;
	int32_t V_9 = 0;
	Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_12 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_13 = NULL;
	int32_t V_14 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_15 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_16 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_17 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_18 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_19 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_20 = NULL;
	int32_t V_21 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_22 = NULL;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727 * V_25 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 6);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * G_B47_0 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * G_B47_1 = NULL;
	Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * G_B46_0 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * G_B46_1 = NULL;
	{
		// foreach(Button button in allButtons)
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_0 = __this->get_allButtons_7();
		Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  L_1;
		L_1 = List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC(L_0, /*hidden argument*/List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		V_10 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000f:
		{
			// foreach(Button button in allButtons)
			Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2;
			L_2 = Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_inline((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_10), /*hidden argument*/Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
			// button.gameObject.SetActive(true);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
			L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		}

IL_0021:
		{
			// foreach(Button button in allButtons)
			bool L_4;
			L_4 = Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_10), /*hidden argument*/Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000f;
			}
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_10), /*hidden argument*/Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		// List<Button> buttonList = allButtons;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_5 = __this->get_allButtons_7();
		// List<Texture2D> displayedImgs = new List<Texture2D>();
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_6 = (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *)il2cpp_codegen_object_new(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var);
		List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC(L_6, /*hidden argument*/List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var);
		V_0 = L_6;
		// List<int> orderOfImgs = new List<int>{ 0, 1, 2, 3, 4, 5 };
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_7, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_8 = L_7;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_8, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_9 = L_8;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_9, 1, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_10 = L_9;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_10, 2, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_11 = L_10;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_11, 3, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_12 = L_11;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_12, 4, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_13 = L_12;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_13, 5, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		V_1 = L_13;
		// Debug.Log(iteration + ": Beginning");
		int32_t* L_14 = __this->get_address_of_iteration_9();
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_15, _stringLiteralA0E08B68E8A78BD7A06E0806711166B4EE15B76E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_16, /*hidden argument*/NULL);
		// correctImg = chosenList[iteration];
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_17 = __this->get_chosenList_15();
		int32_t L_18 = __this->get_iteration_9();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19;
		L_19 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		__this->set_correctImg_10(L_19);
		// string[] categorizationCorrect = correctImg.ToString().Split('-');
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = __this->get_correctImg_10();
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = L_22;
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24;
		L_24 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_21, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		// Debug.Log(iteration + ": Add Correct Img");
		int32_t* L_25 = __this->get_address_of_iteration_9();
		String_t* L_26;
		L_26 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_25, /*hidden argument*/NULL);
		String_t* L_27;
		L_27 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_26, _stringLiteral3D5CB2FB89C01B07DB086ABDC609D431DD43121C, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_27, /*hidden argument*/NULL);
		// List<Texture2D> sameSubCateg = new List<Texture2D>();
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_28 = (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *)il2cpp_codegen_object_new(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var);
		List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC(L_28, /*hidden argument*/List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var);
		V_3 = L_28;
		// foreach(Texture2D img in notChosen)
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_29 = __this->get_notChosen_16();
		Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3  L_30;
		L_30 = List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577(L_29, /*hidden argument*/List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577_RuntimeMethod_var);
		V_11 = L_30;
	}

IL_00f1:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0147;
		}

IL_00f3:
		{
			// foreach(Texture2D img in notChosen)
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31;
			L_31 = Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_inline((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_11), /*hidden argument*/Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_RuntimeMethod_var);
			V_12 = L_31;
			// string[] categorization = img.ToString().Split('-');
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_32 = V_12;
			String_t* L_33;
			L_33 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_34 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_35 = L_34;
			(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36;
			L_36 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_33, L_35, /*hidden argument*/NULL);
			V_13 = L_36;
			// if(categorization[0].Equals(categorizationCorrect[0]) && categorization[1].Equals(categorizationCorrect[1]) && categorization[2].Equals(categorizationCorrect[2]))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = V_13;
			int32_t L_38 = 0;
			String_t* L_39 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = V_2;
			int32_t L_41 = 0;
			String_t* L_42 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
			bool L_43;
			L_43 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_39, L_42, /*hidden argument*/NULL);
			if (!L_43)
			{
				goto IL_0147;
			}
		}

IL_0123:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = V_13;
			int32_t L_45 = 1;
			String_t* L_46 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = V_2;
			int32_t L_48 = 1;
			String_t* L_49 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
			bool L_50;
			L_50 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_46, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_0147;
			}
		}

IL_0131:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = V_13;
			int32_t L_52 = 2;
			String_t* L_53 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_54 = V_2;
			int32_t L_55 = 2;
			String_t* L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
			bool L_57;
			L_57 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_53, L_56, /*hidden argument*/NULL);
			if (!L_57)
			{
				goto IL_0147;
			}
		}

IL_013f:
		{
			// sameSubCateg.Add(img);
			List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_58 = V_3;
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_59 = V_12;
			List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F(L_58, L_59, /*hidden argument*/List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		}

IL_0147:
		{
			// foreach(Texture2D img in notChosen)
			bool L_60;
			L_60 = Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_11), /*hidden argument*/Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518_RuntimeMethod_var);
			if (L_60)
			{
				goto IL_00f3;
			}
		}

IL_0150:
		{
			IL2CPP_LEAVE(0x160, FINALLY_0152);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0152;
	}

FINALLY_0152:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_11), /*hidden argument*/Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(338)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(338)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x160, IL_0160)
	}

IL_0160:
	{
		// Debug.Log(iteration + ": Find Sub Categs");
		int32_t* L_61 = __this->get_address_of_iteration_9();
		String_t* L_62;
		L_62 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_61, /*hidden argument*/NULL);
		String_t* L_63;
		L_63 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_62, _stringLiteral1AC3E8EC0D1F213A1C43DDF7B0D9C98DFD06292F, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_63, /*hidden argument*/NULL);
		// Debug.Log(correctImg.ToString());
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_64 = __this->get_correctImg_10();
		String_t* L_65;
		L_65 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_64);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_65, /*hidden argument*/NULL);
		// Debug.Log("Num of sub categs: " + sameSubCateg.Count);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_66 = V_3;
		int32_t L_67;
		L_67 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_66, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		V_14 = L_67;
		String_t* L_68;
		L_68 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_14), /*hidden argument*/NULL);
		String_t* L_69;
		L_69 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF7209A31EF4030A0AFC64226B1EE7DC0AE6B2228, L_68, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_69, /*hidden argument*/NULL);
		// int rand1 = Random.Range(0, sameSubCateg.Count);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_70 = V_3;
		int32_t L_71;
		L_71 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_70, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		int32_t L_72;
		L_72 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_71, /*hidden argument*/NULL);
		V_4 = L_72;
		// int rand2 = Random.Range(0, sameSubCateg.Count);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_73 = V_3;
		int32_t L_74;
		L_74 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_73, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		int32_t L_75;
		L_75 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_74, /*hidden argument*/NULL);
		V_5 = L_75;
		goto IL_01d4;
	}

IL_01c6:
	{
		// rand2 = Random.Range(0, sameSubCateg.Count);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_76 = V_3;
		int32_t L_77;
		L_77 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_76, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		int32_t L_78;
		L_78 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_77, /*hidden argument*/NULL);
		V_5 = L_78;
	}

IL_01d4:
	{
		// while(rand2 == rand1)
		int32_t L_79 = V_5;
		int32_t L_80 = V_4;
		if ((((int32_t)L_79) == ((int32_t)L_80)))
		{
			goto IL_01c6;
		}
	}
	{
		// displayedImgs.Add(sameSubCateg[rand1]);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_81 = V_0;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_82 = V_3;
		int32_t L_83 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_84;
		L_84 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_82, L_83, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F(L_81, L_84, /*hidden argument*/List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		// displayedImgs.Add(sameSubCateg[rand2]);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_85 = V_0;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_86 = V_3;
		int32_t L_87 = V_5;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_88;
		L_88 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_86, L_87, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F(L_85, L_88, /*hidden argument*/List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		// displayedImgs.Add(correctImg);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_89 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_90 = __this->get_correctImg_10();
		List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F(L_89, L_90, /*hidden argument*/List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		// Debug.Log(iteration + ": Choose Sub Categs");
		int32_t* L_91 = __this->get_address_of_iteration_9();
		String_t* L_92;
		L_92 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_91, /*hidden argument*/NULL);
		String_t* L_93;
		L_93 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_92, _stringLiteralFD88F1B353070715E47025140C3481BA8871E4BD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_93, /*hidden argument*/NULL);
		// List<Texture2D> sameCateg = new List<Texture2D>();
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_94 = (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *)il2cpp_codegen_object_new(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var);
		List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC(L_94, /*hidden argument*/List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var);
		V_6 = L_94;
		// foreach (Texture2D img in notChosen)
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_95 = __this->get_notChosen_16();
		Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3  L_96;
		L_96 = List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577(L_95, /*hidden argument*/List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577_RuntimeMethod_var);
		V_11 = L_96;
	}

IL_0230:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0287;
		}

IL_0232:
		{
			// foreach (Texture2D img in notChosen)
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_97;
			L_97 = Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_inline((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_11), /*hidden argument*/Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_RuntimeMethod_var);
			V_15 = L_97;
			// string[] categorization = img.ToString().Split('-');
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_98 = V_15;
			String_t* L_99;
			L_99 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_98);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_100 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_101 = L_100;
			(L_101)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_102;
			L_102 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_99, L_101, /*hidden argument*/NULL);
			V_16 = L_102;
			// if (categorization[0].Equals(categorizationCorrect[0]) && categorization[1].Equals(categorizationCorrect[1]) && !categorization[2].Equals(categorizationCorrect[2]))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_103 = V_16;
			int32_t L_104 = 0;
			String_t* L_105 = (L_103)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_104));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_106 = V_2;
			int32_t L_107 = 0;
			String_t* L_108 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_107));
			bool L_109;
			L_109 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_105, L_108, /*hidden argument*/NULL);
			if (!L_109)
			{
				goto IL_0287;
			}
		}

IL_0262:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_110 = V_16;
			int32_t L_111 = 1;
			String_t* L_112 = (L_110)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_111));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_113 = V_2;
			int32_t L_114 = 1;
			String_t* L_115 = (L_113)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_114));
			bool L_116;
			L_116 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_112, L_115, /*hidden argument*/NULL);
			if (!L_116)
			{
				goto IL_0287;
			}
		}

IL_0270:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_117 = V_16;
			int32_t L_118 = 2;
			String_t* L_119 = (L_117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_120 = V_2;
			int32_t L_121 = 2;
			String_t* L_122 = (L_120)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_121));
			bool L_123;
			L_123 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_119, L_122, /*hidden argument*/NULL);
			if (L_123)
			{
				goto IL_0287;
			}
		}

IL_027e:
		{
			// sameCateg.Add(img);
			List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_124 = V_6;
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_125 = V_15;
			List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F(L_124, L_125, /*hidden argument*/List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		}

IL_0287:
		{
			// foreach (Texture2D img in notChosen)
			bool L_126;
			L_126 = Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_11), /*hidden argument*/Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518_RuntimeMethod_var);
			if (L_126)
			{
				goto IL_0232;
			}
		}

IL_0290:
		{
			IL2CPP_LEAVE(0x2A0, FINALLY_0292);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0292;
	}

FINALLY_0292:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_11), /*hidden argument*/Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(658)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(658)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A0, IL_02a0)
	}

IL_02a0:
	{
		// Debug.Log(iteration + ": Find Categs");
		int32_t* L_127 = __this->get_address_of_iteration_9();
		String_t* L_128;
		L_128 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_127, /*hidden argument*/NULL);
		String_t* L_129;
		L_129 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_128, _stringLiteral7923BB5D7D0B736ACBEFB5700E964283C04EDC2A, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_129, /*hidden argument*/NULL);
		// displayedImgs.Add(sameCateg[Random.Range(0, sameCateg.Count)]);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_130 = V_0;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_131 = V_6;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_132 = V_6;
		int32_t L_133;
		L_133 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_132, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		int32_t L_134;
		L_134 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_133, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_135;
		L_135 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_131, L_134, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F(L_130, L_135, /*hidden argument*/List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		// Debug.Log(iteration + ": Choose Categs");
		int32_t* L_136 = __this->get_address_of_iteration_9();
		String_t* L_137;
		L_137 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_136, /*hidden argument*/NULL);
		String_t* L_138;
		L_138 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_137, _stringLiteralF59AA1906A30460F14B8ED7C1521E856DF885451, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_138, /*hidden argument*/NULL);
		// List<Texture2D> sameGeneral = new List<Texture2D>();
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_139 = (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *)il2cpp_codegen_object_new(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var);
		List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC(L_139, /*hidden argument*/List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var);
		V_7 = L_139;
		// foreach (Texture2D img in notChosen)
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_140 = __this->get_notChosen_16();
		Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3  L_141;
		L_141 = List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577(L_140, /*hidden argument*/List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577_RuntimeMethod_var);
		V_11 = L_141;
	}

IL_0302:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0359;
		}

IL_0304:
		{
			// foreach (Texture2D img in notChosen)
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_142;
			L_142 = Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_inline((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_11), /*hidden argument*/Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_RuntimeMethod_var);
			V_17 = L_142;
			// string[] categorization = img.ToString().Split('-');
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_143 = V_17;
			String_t* L_144;
			L_144 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_143);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_145 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_146 = L_145;
			(L_146)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_147;
			L_147 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_144, L_146, /*hidden argument*/NULL);
			V_18 = L_147;
			// if (categorization[0].Equals(categorizationCorrect[0]) && !categorization[1].Equals(categorizationCorrect[1]) && !categorization[2].Equals(categorizationCorrect[2]))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_148 = V_18;
			int32_t L_149 = 0;
			String_t* L_150 = (L_148)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_149));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_151 = V_2;
			int32_t L_152 = 0;
			String_t* L_153 = (L_151)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_152));
			bool L_154;
			L_154 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_150, L_153, /*hidden argument*/NULL);
			if (!L_154)
			{
				goto IL_0359;
			}
		}

IL_0334:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_155 = V_18;
			int32_t L_156 = 1;
			String_t* L_157 = (L_155)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_156));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_158 = V_2;
			int32_t L_159 = 1;
			String_t* L_160 = (L_158)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_159));
			bool L_161;
			L_161 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_157, L_160, /*hidden argument*/NULL);
			if (L_161)
			{
				goto IL_0359;
			}
		}

IL_0342:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_162 = V_18;
			int32_t L_163 = 2;
			String_t* L_164 = (L_162)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_163));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_165 = V_2;
			int32_t L_166 = 2;
			String_t* L_167 = (L_165)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_166));
			bool L_168;
			L_168 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_164, L_167, /*hidden argument*/NULL);
			if (L_168)
			{
				goto IL_0359;
			}
		}

IL_0350:
		{
			// sameGeneral.Add(img);
			List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_169 = V_7;
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_170 = V_17;
			List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F(L_169, L_170, /*hidden argument*/List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		}

IL_0359:
		{
			// foreach (Texture2D img in notChosen)
			bool L_171;
			L_171 = Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_11), /*hidden argument*/Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518_RuntimeMethod_var);
			if (L_171)
			{
				goto IL_0304;
			}
		}

IL_0362:
		{
			IL2CPP_LEAVE(0x372, FINALLY_0364);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0364;
	}

FINALLY_0364:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_11), /*hidden argument*/Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(868)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(868)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x372, IL_0372)
	}

IL_0372:
	{
		// Debug.Log(iteration + ": Find Generals");
		int32_t* L_172 = __this->get_address_of_iteration_9();
		String_t* L_173;
		L_173 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_172, /*hidden argument*/NULL);
		String_t* L_174;
		L_174 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_173, _stringLiteralD89FEEE34C09548A29E70367E180DA383B402CE3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_174, /*hidden argument*/NULL);
		// displayedImgs.Add(sameGeneral[Random.Range(0, sameGeneral.Count)]);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_175 = V_0;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_176 = V_7;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_177 = V_7;
		int32_t L_178;
		L_178 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_177, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		int32_t L_179;
		L_179 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_178, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_180;
		L_180 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_176, L_179, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F(L_175, L_180, /*hidden argument*/List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		// Debug.Log(iteration + ": Choose Generals");
		int32_t* L_181 = __this->get_address_of_iteration_9();
		String_t* L_182;
		L_182 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_181, /*hidden argument*/NULL);
		String_t* L_183;
		L_183 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_182, _stringLiteralF8EFD6D4A0C23D451381130B9EEB287C00B8BCCF, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_183, /*hidden argument*/NULL);
		// List<Texture2D> different = new List<Texture2D>();
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_184 = (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *)il2cpp_codegen_object_new(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var);
		List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC(L_184, /*hidden argument*/List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var);
		V_8 = L_184;
		// foreach (Texture2D img in notChosen)
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_185 = __this->get_notChosen_16();
		Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3  L_186;
		L_186 = List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577(L_185, /*hidden argument*/List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577_RuntimeMethod_var);
		V_11 = L_186;
	}

IL_03d4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_042b;
		}

IL_03d6:
		{
			// foreach (Texture2D img in notChosen)
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_187;
			L_187 = Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_inline((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_11), /*hidden argument*/Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_RuntimeMethod_var);
			V_19 = L_187;
			// string[] categorization = img.ToString().Split('-');
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_188 = V_19;
			String_t* L_189;
			L_189 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_188);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_190 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_191 = L_190;
			(L_191)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_192;
			L_192 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_189, L_191, /*hidden argument*/NULL);
			V_20 = L_192;
			// if (!categorization[0].Equals(categorizationCorrect[0]) && !categorization[1].Equals(categorizationCorrect[1]) && !categorization[2].Equals(categorizationCorrect[2]))
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_193 = V_20;
			int32_t L_194 = 0;
			String_t* L_195 = (L_193)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_194));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_196 = V_2;
			int32_t L_197 = 0;
			String_t* L_198 = (L_196)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_197));
			bool L_199;
			L_199 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_195, L_198, /*hidden argument*/NULL);
			if (L_199)
			{
				goto IL_042b;
			}
		}

IL_0406:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_200 = V_20;
			int32_t L_201 = 1;
			String_t* L_202 = (L_200)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_201));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_203 = V_2;
			int32_t L_204 = 1;
			String_t* L_205 = (L_203)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_204));
			bool L_206;
			L_206 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_202, L_205, /*hidden argument*/NULL);
			if (L_206)
			{
				goto IL_042b;
			}
		}

IL_0414:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_207 = V_20;
			int32_t L_208 = 2;
			String_t* L_209 = (L_207)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_208));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_210 = V_2;
			int32_t L_211 = 2;
			String_t* L_212 = (L_210)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_211));
			bool L_213;
			L_213 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_209, L_212, /*hidden argument*/NULL);
			if (L_213)
			{
				goto IL_042b;
			}
		}

IL_0422:
		{
			// different.Add(img);
			List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_214 = V_8;
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_215 = V_19;
			List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F(L_214, L_215, /*hidden argument*/List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		}

IL_042b:
		{
			// foreach (Texture2D img in notChosen)
			bool L_216;
			L_216 = Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_11), /*hidden argument*/Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518_RuntimeMethod_var);
			if (L_216)
			{
				goto IL_03d6;
			}
		}

IL_0434:
		{
			IL2CPP_LEAVE(0x444, FINALLY_0436);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0436;
	}

FINALLY_0436:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_11), /*hidden argument*/Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1078)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1078)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x444, IL_0444)
	}

IL_0444:
	{
		// Debug.Log(iteration + ": Find Other");
		int32_t* L_217 = __this->get_address_of_iteration_9();
		String_t* L_218;
		L_218 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_217, /*hidden argument*/NULL);
		String_t* L_219;
		L_219 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_218, _stringLiteralE3089C971EF72A3DD61F3EA222350C26014A69AF, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_219, /*hidden argument*/NULL);
		// displayedImgs.Add(different[Random.Range(0, different.Count)]);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_220 = V_0;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_221 = V_8;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_222 = V_8;
		int32_t L_223;
		L_223 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_222, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		int32_t L_224;
		L_224 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_223, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_225;
		L_225 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_221, L_224, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F(L_220, L_225, /*hidden argument*/List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		// Debug.Log(iteration + ": Choose Other");
		int32_t* L_226 = __this->get_address_of_iteration_9();
		String_t* L_227;
		L_227 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_226, /*hidden argument*/NULL);
		String_t* L_228;
		L_228 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_227, _stringLiteral17045E5D5EBFE78C2F3D25CFA4E449849CBC5E2F, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_228, /*hidden argument*/NULL);
		// orderOfImgs = orderOfImgs.OrderBy(x => Random.value).ToList();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_229 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_il2cpp_TypeInfo_var);
		Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * L_230 = ((U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_il2cpp_TypeInfo_var))->get_U3CU3E9__20_0_1();
		Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * L_231 = L_230;
		G_B46_0 = L_231;
		G_B46_1 = L_229;
		if (L_231)
		{
			G_B47_0 = L_231;
			G_B47_1 = L_229;
			goto IL_04b2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_il2cpp_TypeInfo_var);
		U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3 * L_232 = ((U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * L_233 = (Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 *)il2cpp_codegen_object_new(Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6_il2cpp_TypeInfo_var);
		Func_2__ctor_m4DC8B0E32A8AF8D039B9A2D0F885DF11E58880B6(L_233, L_232, (intptr_t)((intptr_t)U3CU3Ec_U3CInstantiateU3Eb__20_0_m89106FCE2D6BD5F69BF9E0748CA7F8CF6A8094CE_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4DC8B0E32A8AF8D039B9A2D0F885DF11E58880B6_RuntimeMethod_var);
		Func_2_t1452DFFA61F60F54CF3A78C987C4F98906EFD2B6 * L_234 = L_233;
		((U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_il2cpp_TypeInfo_var))->set_U3CU3E9__20_0_1(L_234);
		G_B47_0 = L_234;
		G_B47_1 = G_B46_1;
	}

IL_04b2:
	{
		RuntimeObject* L_235;
		L_235 = Enumerable_OrderBy_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mED55C272DBBCBA516683357C99E00546328A21CF(G_B47_1, G_B47_0, /*hidden argument*/Enumerable_OrderBy_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mED55C272DBBCBA516683357C99E00546328A21CF_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_236;
		L_236 = Enumerable_ToList_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDE9611363446B76CFA0E37324D7D9AAD7A94D5A3(L_235, /*hidden argument*/Enumerable_ToList_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDE9611363446B76CFA0E37324D7D9AAD7A94D5A3_RuntimeMethod_var);
		V_1 = L_236;
		// for(int i = 0; i < displayedImgs.Count; i++)
		V_21 = 0;
		goto IL_0507;
	}

IL_04c2:
	{
		// Texture2D element1 = displayedImgs[i];
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_237 = V_0;
		int32_t L_238 = V_21;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_239;
		L_239 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_237, L_238, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		V_22 = L_239;
		// Texture2D element2 = displayedImgs[orderOfImgs[i]];
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_240 = V_0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_241 = V_1;
		int32_t L_242 = V_21;
		int32_t L_243;
		L_243 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_241, L_242, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_244;
		L_244 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_240, L_243, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		// displayedImgs[i] = displayedImgs[orderOfImgs[i]];
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_245 = V_0;
		int32_t L_246 = V_21;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_247 = V_0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_248 = V_1;
		int32_t L_249 = V_21;
		int32_t L_250;
		L_250 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_248, L_249, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_251;
		L_251 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_247, L_250, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		List_1_set_Item_m85439814027F66F874585FC4EC7D58421D93195E(L_245, L_246, L_251, /*hidden argument*/List_1_set_Item_m85439814027F66F874585FC4EC7D58421D93195E_RuntimeMethod_var);
		// displayedImgs[orderOfImgs[i]] = element1;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_252 = V_0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_253 = V_1;
		int32_t L_254 = V_21;
		int32_t L_255;
		L_255 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_253, L_254, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_256 = V_22;
		List_1_set_Item_m85439814027F66F874585FC4EC7D58421D93195E(L_252, L_255, L_256, /*hidden argument*/List_1_set_Item_m85439814027F66F874585FC4EC7D58421D93195E_RuntimeMethod_var);
		// for(int i = 0; i < displayedImgs.Count; i++)
		int32_t L_257 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_257, (int32_t)1));
	}

IL_0507:
	{
		// for(int i = 0; i < displayedImgs.Count; i++)
		int32_t L_258 = V_21;
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_259 = V_0;
		int32_t L_260;
		L_260 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_259, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		if ((((int32_t)L_258) < ((int32_t)L_260)))
		{
			goto IL_04c2;
		}
	}
	{
		// for (int i = 0; i < allButtons.Count; i++)
		V_23 = 0;
		goto IL_057a;
	}

IL_0516:
	{
		// allButtons[i].GetComponent<Image>().sprite = Sprite.Create(displayedImgs[i], new Rect(0.0f, 0.0f, displayedImgs[i].width, displayedImgs[i].height), new Vector2(0.0f, 0.0f));
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_261 = __this->get_allButtons_7();
		int32_t L_262 = V_23;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_263;
		L_263 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_261, L_262, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_264;
		L_264 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_263, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_265 = V_0;
		int32_t L_266 = V_23;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_267;
		L_267 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_265, L_266, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_268 = V_0;
		int32_t L_269 = V_23;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_270;
		L_270 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_268, L_269, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		int32_t L_271;
		L_271 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_270);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_272 = V_0;
		int32_t L_273 = V_23;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_274;
		L_274 = List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_inline(L_272, L_273, /*hidden argument*/List_1_get_Item_m69B62B1F3FDC9F7B1D0906604855E457795130AB_RuntimeMethod_var);
		int32_t L_275;
		L_275 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_274);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_276;
		memset((&L_276), 0, sizeof(L_276));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_276), (0.0f), (0.0f), ((float)((float)L_271)), ((float)((float)L_275)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_277;
		memset((&L_277), 0, sizeof(L_277));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_277), (0.0f), (0.0f), /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_278;
		L_278 = Sprite_Create_m9817936760193300A6049A788C3446C7ADB49C6B(L_267, L_276, L_277, /*hidden argument*/NULL);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_264, L_278, /*hidden argument*/NULL);
		// for (int i = 0; i < allButtons.Count; i++)
		int32_t L_279 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_279, (int32_t)1));
	}

IL_057a:
	{
		// for (int i = 0; i < allButtons.Count; i++)
		int32_t L_280 = V_23;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_281 = __this->get_allButtons_7();
		int32_t L_282;
		L_282 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_281, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		if ((((int32_t)L_280) < ((int32_t)L_282)))
		{
			goto IL_0516;
		}
	}
	{
		// for (int i = 0; i < allButtons.Count; i++)
		V_24 = 0;
		goto IL_05d1;
	}

IL_058e:
	{
		// if (allButtons[i].GetComponent<Image>().sprite.texture.ToString().Equals(correctImg.ToString()))
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_283 = __this->get_allButtons_7();
		int32_t L_284 = V_24;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_285;
		L_285 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_283, L_284, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_286;
		L_286 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_285, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_287;
		L_287 = Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline(L_286, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_288;
		L_288 = Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB(L_287, /*hidden argument*/NULL);
		String_t* L_289;
		L_289 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_288);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_290 = __this->get_correctImg_10();
		String_t* L_291;
		L_291 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_290);
		bool L_292;
		L_292 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_289, L_291, /*hidden argument*/NULL);
		if (!L_292)
		{
			goto IL_05cb;
		}
	}
	{
		// correctButton = i;
		int32_t L_293 = V_24;
		__this->set_correctButton_12(L_293);
		// break;
		goto IL_05e0;
	}

IL_05cb:
	{
		// for (int i = 0; i < allButtons.Count; i++)
		int32_t L_294 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_294, (int32_t)1));
	}

IL_05d1:
	{
		// for (int i = 0; i < allButtons.Count; i++)
		int32_t L_295 = V_24;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_296 = __this->get_allButtons_7();
		int32_t L_297;
		L_297 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_296, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		if ((((int32_t)L_295) < ((int32_t)L_297)))
		{
			goto IL_058e;
		}
	}

IL_05e0:
	{
		// int index = 0;
		V_9 = 0;
		// foreach (Button button in allButtons)
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_298 = __this->get_allButtons_7();
		Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  L_299;
		L_299 = List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC(L_298, /*hidden argument*/List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		V_10 = L_299;
	}

IL_05f0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0633;
		}

IL_05f2:
		{
			U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727 * L_300 = (U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass20_0__ctor_mB13090906D61A48F30EC28A5FE4D933102EF6AC1(L_300, /*hidden argument*/NULL);
			V_25 = L_300;
			U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727 * L_301 = V_25;
			L_301->set_U3CU3E4__this_1(__this);
			// foreach (Button button in allButtons)
			U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727 * L_302 = V_25;
			Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_303;
			L_303 = Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_inline((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_10), /*hidden argument*/Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
			L_302->set_button_0(L_303);
			// button.onClick.AddListener(() => onClick(button));
			U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727 * L_304 = V_25;
			Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_305 = L_304->get_button_0();
			ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_306;
			L_306 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_305, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727 * L_307 = V_25;
			UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_308 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
			UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_308, L_307, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass20_0_U3CInstantiateU3Eb__1_m170F9740145A1A27C18C3F31FF9A08A52E73AE2A_RuntimeMethod_var), /*hidden argument*/NULL);
			UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_306, L_308, /*hidden argument*/NULL);
			// index++;
			int32_t L_309 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_309, (int32_t)1));
		}

IL_0633:
		{
			// foreach (Button button in allButtons)
			bool L_310;
			L_310 = Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_10), /*hidden argument*/Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
			if (L_310)
			{
				goto IL_05f2;
			}
		}

IL_063c:
		{
			IL2CPP_LEAVE(0x64C, FINALLY_063e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_063e;
	}

FINALLY_063e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_10), /*hidden argument*/Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1598)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1598)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x64C, IL_064c)
	}

IL_064c:
	{
		// }
		return;
	}
}
// System.Void RecallGame::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallGame_Start_mC0B50B2DE70B7B7F85E0DC525CCA7AF079B69505 (RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mC444DB96CBDBD65850F1CC7541496A1138121FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// widthDec = timerBar.transform.localScale.x / 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_timerBar_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		__this->set_widthDec_6(((float)((float)L_3/(float)(4.0f))));
		// this.chosenList = DisplayMemoryIcons.chosenList;
		IL2CPP_RUNTIME_CLASS_INIT(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var);
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_4 = ((DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_StaticFields*)il2cpp_codegen_static_fields_for(DisplayMemoryIcons_t3E1090B03F7B4A86B6FAA856A7F7D9B11541764B_il2cpp_TypeInfo_var))->get_chosenList_5();
		__this->set_chosenList_15(L_4);
		// foreach (Button button in allButtons)
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_5 = __this->get_allButtons_7();
		Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  L_6;
		L_6 = List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC(L_5, /*hidden argument*/List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_003a:
		{
			// foreach (Button button in allButtons)
			Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7;
			L_7 = Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_inline((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
			// button.gameObject.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
			L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		}

IL_004c:
		{
			// foreach (Button button in allButtons)
			bool L_9;
			L_9 = Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_003a;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x65, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		IL2CPP_END_FINALLY(87)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		// foreach (Texture2D img in this.allImgs)
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_10 = __this->get_allImgs_14();
		Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3  L_11;
		L_11 = List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577(L_10, /*hidden argument*/List_1_GetEnumerator_mF441EE0369754513AABDB6FF7F6FEDB29E828577_RuntimeMethod_var);
		V_1 = L_11;
	}

IL_0071:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0095;
		}

IL_0073:
		{
			// foreach (Texture2D img in this.allImgs)
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12;
			L_12 = Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_inline((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4EF2C234DD1870E98A54CC68F1ECEBB72EF854EA_RuntimeMethod_var);
			V_2 = L_12;
			// if(!chosenList.Contains(img))
			List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_13 = __this->get_chosenList_15();
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = V_2;
			bool L_15;
			L_15 = List_1_Contains_mC444DB96CBDBD65850F1CC7541496A1138121FC9(L_13, L_14, /*hidden argument*/List_1_Contains_mC444DB96CBDBD65850F1CC7541496A1138121FC9_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0095;
			}
		}

IL_0089:
		{
			// notChosen.Add(img);
			List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_16 = __this->get_notChosen_16();
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_17 = V_2;
			List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F(L_16, L_17, /*hidden argument*/List_1_Add_m9AF452292436C834FC154E6457CDD42B18FB310F_RuntimeMethod_var);
		}

IL_0095:
		{
			// foreach (Texture2D img in this.allImgs)
			bool L_18;
			L_18 = Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m01E5C3F27C632A4D5C46D9FFFDB1B53AB4826518_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0073;
			}
		}

IL_009e:
		{
			IL2CPP_LEAVE(0xAE, FINALLY_00a0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a0;
	}

FINALLY_00a0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A((Enumerator_t8E34EB5E41E817A59F53F5D25A5AB9084F0CA8D3 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m7EE5BB504EFA58380A09F7B7F219271D6B45411A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(160)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(160)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAE, IL_00ae)
	}

IL_00ae:
	{
		// StartCoroutine(Delay());
		RuntimeObject* L_19;
		L_19 = RecallGame_Delay_m1077B941FBB1B6F4DEAA366F7EF45ED71CCB8C84(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_20;
		L_20 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RecallGame::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallGame_Update_mA3980F6126EF00CCA083E26783EF112AB87326B7 (RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBFB548747CF0F35FFBF15F9A93E4061FD2A6A3A);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	bool V_2 = false;
	Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  V_3;
	memset((&V_3), 0, sizeof(V_3));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (startGame && iteration < chosenList.Count)
		bool L_0 = __this->get_startGame_4();
		if (!L_0)
		{
			goto IL_0408;
		}
	}
	{
		int32_t L_1 = __this->get_iteration_9();
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_2 = __this->get_chosenList_15();
		int32_t L_3;
		L_3 = List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_inline(L_2, /*hidden argument*/List_1_get_Count_mC0601A2601297DDBF0B461A2A8B8EF9528741B88_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0408;
		}
	}
	{
		// if (timeLeft < 4f && !selected && iteration < 30)
		float L_4 = __this->get_timeLeft_5();
		if ((!(((float)L_4) < ((float)(4.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		bool L_5 = __this->get_selected_13();
		if (L_5)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_6 = __this->get_iteration_9();
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)30))))
		{
			goto IL_0089;
		}
	}
	{
		// timeLeft += Time.deltaTime;
		float L_7 = __this->get_timeLeft_5();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeLeft_5(((float)il2cpp_codegen_add((float)L_7, (float)L_8)));
		// timerBar.transform.localScale -= new Vector3(Time.deltaTime * widthDec, 0.0f, 0.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_timerBar_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_14 = __this->get_widthDec_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_15, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_11, L_16, /*hidden argument*/NULL);
		// } else if(timeLeft < 4f && selected && iteration < 30)
		return;
	}

IL_0089:
	{
		// } else if(timeLeft < 4f && selected && iteration < 30)
		float L_17 = __this->get_timeLeft_5();
		if ((!(((float)L_17) < ((float)(4.0f)))))
		{
			goto IL_021c;
		}
	}
	{
		bool L_18 = __this->get_selected_13();
		if (!L_18)
		{
			goto IL_021c;
		}
	}
	{
		int32_t L_19 = __this->get_iteration_9();
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)30))))
		{
			goto IL_021c;
		}
	}
	{
		// string[] categorizationClicked = clickedImg.ToString().Split('-');
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = __this->get_clickedImg_11();
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = L_22;
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24;
		L_24 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_21, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
		// string[] categorizationCorrect = correctImg.ToString().Split('-');
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_25 = __this->get_correctImg_10();
		String_t* L_26;
		L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = L_27;
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29;
		L_29 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_26, L_28, /*hidden argument*/NULL);
		V_1 = L_29;
		// bool correct = clickedImg.ToString().Equals(correctImg.ToString());
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_30 = __this->get_clickedImg_11();
		String_t* L_31;
		L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_32 = __this->get_correctImg_10();
		String_t* L_33;
		L_33 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		bool L_34;
		L_34 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_31, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		// recall_data.Add(iteration + "," + categorizationCorrect[0] + "," + categorizationCorrect[1] + "," + categorizationCorrect[2]
		//                 + "," + categorizationCorrect[3] + "," + categorizationClicked[0] + "," + categorizationClicked[1] + ","
		//                 + categorizationClicked[2] + "," + categorizationClicked[3] + "," + correct.ToString() + "," + timeLeft.ToString() + "\n");
		IL2CPP_RUNTIME_CLASS_INIT(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_35 = ((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->get_recall_data_20();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)22));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		int32_t* L_38 = __this->get_address_of_iteration_9();
		String_t* L_39;
		L_39 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_38, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_39);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_37;
		ArrayElementTypeCheck (L_40, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = V_1;
		int32_t L_43 = 0;
		String_t* L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_44);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = L_41;
		ArrayElementTypeCheck (L_45, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_45;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = V_1;
		int32_t L_48 = 1;
		String_t* L_49 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_49);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50 = L_46;
		ArrayElementTypeCheck (L_50, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = L_50;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = V_1;
		int32_t L_53 = 2;
		String_t* L_54 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		ArrayElementTypeCheck (L_51, L_54);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_54);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = L_51;
		ArrayElementTypeCheck (L_55, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_55;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = V_1;
		int32_t L_58 = 3;
		String_t* L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_59);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = L_56;
		ArrayElementTypeCheck (L_60, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = L_60;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = V_0;
		int32_t L_63 = 0;
		String_t* L_64 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		ArrayElementTypeCheck (L_61, L_64);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_64);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_65 = L_61;
		ArrayElementTypeCheck (L_65, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_66 = L_65;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = V_0;
		int32_t L_68 = 1;
		String_t* L_69 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_69);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_70 = L_66;
		ArrayElementTypeCheck (L_70, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_72 = V_0;
		int32_t L_73 = 2;
		String_t* L_74 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)L_74);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_75 = L_71;
		ArrayElementTypeCheck (L_75, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_76 = L_75;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_77 = V_0;
		int32_t L_78 = 3;
		String_t* L_79 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		ArrayElementTypeCheck (L_76, L_79);
		(L_76)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)L_79);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = L_76;
		ArrayElementTypeCheck (L_80, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_80)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = L_80;
		String_t* L_82;
		L_82 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_2), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_81, L_82);
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)L_82);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_83 = L_81;
		ArrayElementTypeCheck (L_83, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_84 = L_83;
		float* L_85 = __this->get_address_of_timeLeft_5();
		String_t* L_86;
		L_86 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_85, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_84, L_86);
		(L_84)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)L_86);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_87 = L_84;
		ArrayElementTypeCheck (L_87, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_88;
		L_88 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_87, /*hidden argument*/NULL);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_35, L_88, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// timeLeft = 4f;
		__this->set_timeLeft_5((4.0f));
		// foreach(Button button in allButtons)
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_89 = __this->get_allButtons_7();
		Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  L_90;
		L_90 = List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC(L_89, /*hidden argument*/List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		V_3 = L_90;
	}

IL_01ed:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0200;
		}

IL_01ef:
		{
			// foreach(Button button in allButtons)
			Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_91;
			L_91 = Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_inline((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
			// button.onClick.RemoveAllListeners();
			ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_92;
			L_92 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_91, /*hidden argument*/NULL);
			UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_92, /*hidden argument*/NULL);
		}

IL_0200:
		{
			// foreach(Button button in allButtons)
			bool L_93;
			L_93 = Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
			if (L_93)
			{
				goto IL_01ef;
			}
		}

IL_0209:
		{
			IL2CPP_LEAVE(0x423, FINALLY_020e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_020e;
	}

FINALLY_020e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		IL2CPP_END_FINALLY(526)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(526)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x423, IL_0423)
	}

IL_021c:
	{
		// } else if(timeLeft >= 4f && timeLeft < 5f && !selected && iteration < 30)
		float L_94 = __this->get_timeLeft_5();
		if ((!(((float)L_94) >= ((float)(4.0f)))))
		{
			goto IL_025c;
		}
	}
	{
		float L_95 = __this->get_timeLeft_5();
		if ((!(((float)L_95) < ((float)(5.0f)))))
		{
			goto IL_025c;
		}
	}
	{
		bool L_96 = __this->get_selected_13();
		if (L_96)
		{
			goto IL_025c;
		}
	}
	{
		int32_t L_97 = __this->get_iteration_9();
		if ((((int32_t)L_97) >= ((int32_t)((int32_t)30))))
		{
			goto IL_025c;
		}
	}
	{
		// numTimesUp++;
		IL2CPP_RUNTIME_CLASS_INIT(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		int32_t L_98 = ((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->get_numTimesUp_19();
		((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->set_numTimesUp_19(((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1)));
		// selected = true;
		__this->set_selected_13((bool)1);
		// }
		return;
	}

IL_025c:
	{
		// else if(timeLeft >= 4f && timeLeft < 5f && selected && iteration < 30)
		float L_99 = __this->get_timeLeft_5();
		if ((!(((float)L_99) >= ((float)(4.0f)))))
		{
			goto IL_029b;
		}
	}
	{
		float L_100 = __this->get_timeLeft_5();
		if ((!(((float)L_100) < ((float)(5.0f)))))
		{
			goto IL_029b;
		}
	}
	{
		bool L_101 = __this->get_selected_13();
		if (!L_101)
		{
			goto IL_029b;
		}
	}
	{
		int32_t L_102 = __this->get_iteration_9();
		if ((((int32_t)L_102) >= ((int32_t)((int32_t)30))))
		{
			goto IL_029b;
		}
	}
	{
		// timeLeft += Time.deltaTime;
		float L_103 = __this->get_timeLeft_5();
		float L_104;
		L_104 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeLeft_5(((float)il2cpp_codegen_add((float)L_103, (float)L_104)));
		// } else if(timeLeft >= 5f && iteration < 30)
		return;
	}

IL_029b:
	{
		// } else if(timeLeft >= 5f && iteration < 30)
		float L_105 = __this->get_timeLeft_5();
		if ((!(((float)L_105) >= ((float)(5.0f)))))
		{
			goto IL_0423;
		}
	}
	{
		int32_t L_106 = __this->get_iteration_9();
		if ((((int32_t)L_106) >= ((int32_t)((int32_t)30))))
		{
			goto IL_0423;
		}
	}
	{
		// if(!selected && iteration > 0)
		bool L_107 = __this->get_selected_13();
		if (L_107)
		{
			goto IL_036d;
		}
	}
	{
		int32_t L_108 = __this->get_iteration_9();
		if ((((int32_t)L_108) <= ((int32_t)0)))
		{
			goto IL_036d;
		}
	}
	{
		// string[] categorizationCorrect = correctImg.ToString().Split('-');
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_109 = __this->get_correctImg_10();
		String_t* L_110;
		L_110 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_109);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_111 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_112 = L_111;
		(L_112)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_113;
		L_113 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_110, L_112, /*hidden argument*/NULL);
		V_4 = L_113;
		// recall_data.Add(iteration + "," + categorizationCorrect[0] + "," + categorizationCorrect[1] + "," + categorizationCorrect[2]
		//             + "," + categorizationCorrect[3] + "," + "Null" + "," + "Null" + "," +
		//             "," + "Null" + "," + "Null" + "," + "False" + "," + timeLeft.ToString() + "\n");
		IL2CPP_RUNTIME_CLASS_INIT(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_114 = ((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->get_recall_data_20();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_115 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_116 = L_115;
		int32_t* L_117 = __this->get_address_of_iteration_9();
		String_t* L_118;
		L_118 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_117, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_116, L_118);
		(L_116)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_118);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_119 = L_116;
		ArrayElementTypeCheck (L_119, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_119)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_120 = L_119;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_121 = V_4;
		int32_t L_122 = 0;
		String_t* L_123 = (L_121)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_122));
		ArrayElementTypeCheck (L_120, L_123);
		(L_120)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_123);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_124 = L_120;
		ArrayElementTypeCheck (L_124, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_124)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_125 = L_124;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_126 = V_4;
		int32_t L_127 = 1;
		String_t* L_128 = (L_126)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_127));
		ArrayElementTypeCheck (L_125, L_128);
		(L_125)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_128);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_129 = L_125;
		ArrayElementTypeCheck (L_129, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_129)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_130 = L_129;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_131 = V_4;
		int32_t L_132 = 2;
		String_t* L_133 = (L_131)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_132));
		ArrayElementTypeCheck (L_130, L_133);
		(L_130)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_133);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_134 = L_130;
		ArrayElementTypeCheck (L_134, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_134)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_135 = L_134;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_136 = V_4;
		int32_t L_137 = 3;
		String_t* L_138 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_137));
		ArrayElementTypeCheck (L_135, L_138);
		(L_135)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_138);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_139 = L_135;
		ArrayElementTypeCheck (L_139, _stringLiteralFBFB548747CF0F35FFBF15F9A93E4061FD2A6A3A);
		(L_139)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralFBFB548747CF0F35FFBF15F9A93E4061FD2A6A3A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_140 = L_139;
		float* L_141 = __this->get_address_of_timeLeft_5();
		String_t* L_142;
		L_142 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_141, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_140, L_142);
		(L_140)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_142);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_143 = L_140;
		ArrayElementTypeCheck (L_143, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_143)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_144;
		L_144 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_143, /*hidden argument*/NULL);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_114, L_144, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_036d:
	{
		// selected = false;
		__this->set_selected_13((bool)0);
		// foreach (Button button in allButtons)
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_145 = __this->get_allButtons_7();
		Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  L_146;
		L_146 = List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC(L_145, /*hidden argument*/List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		V_3 = L_146;
	}

IL_0380:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0394;
		}

IL_0382:
		{
			// foreach (Button button in allButtons)
			Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_147;
			L_147 = Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_inline((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
			// button.gameObject.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_148;
			L_148 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_147, /*hidden argument*/NULL);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_148, (bool)0, /*hidden argument*/NULL);
		}

IL_0394:
		{
			// foreach (Button button in allButtons)
			bool L_149;
			L_149 = Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
			if (L_149)
			{
				goto IL_0382;
			}
		}

IL_039d:
		{
			IL2CPP_LEAVE(0x3AD, FINALLY_039f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_039f;
	}

FINALLY_039f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		IL2CPP_END_FINALLY(927)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(927)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3AD, IL_03ad)
	}

IL_03ad:
	{
		// timeLeft = 0;
		__this->set_timeLeft_5((0.0f));
		// timerBar.transform.localScale = new Vector3(widthDec * 4, timerBar.transform.localScale.y, 1.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_150 = __this->get_timerBar_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_151;
		L_151 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_150, /*hidden argument*/NULL);
		float L_152 = __this->get_widthDec_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_153 = __this->get_timerBar_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_154;
		L_154 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_153, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_155;
		L_155 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_154, /*hidden argument*/NULL);
		float L_156 = L_155.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_157;
		memset((&L_157), 0, sizeof(L_157));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_157), ((float)il2cpp_codegen_multiply((float)L_152, (float)(4.0f))), L_156, (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_151, L_157, /*hidden argument*/NULL);
		// Instantiate();
		RecallGame_Instantiate_m2151018CD4DD65E11BBC5448E9DB6126BE331464(__this, /*hidden argument*/NULL);
		// iteration++;
		int32_t L_158 = __this->get_iteration_9();
		__this->set_iteration_9(((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)1)));
		// } else if(iteration >= 30)
		return;
	}

IL_0408:
	{
		// } else if(iteration >= 30)
		int32_t L_159 = __this->get_iteration_9();
		if ((((int32_t)L_159) < ((int32_t)((int32_t)30))))
		{
			goto IL_0423;
		}
	}
	{
		// DataStorage._recallData = recall_data;
		IL2CPP_RUNTIME_CLASS_INIT(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_160 = ((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->get_recall_data_20();
		((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->set__recallData_8(L_160);
		// SceneManager.LoadScene(10);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)10), /*hidden argument*/NULL);
	}

IL_0423:
	{
		// }
		return;
	}
}
// System.Void RecallGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallGame__ctor_m8B63A78E086E922438822B9D297F1C2E686E0DE9 (RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float timeLeft = 5f;
		__this->set_timeLeft_5((5.0f));
		// public List<Button> allButtons = new List<Button>();
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_0 = (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *)il2cpp_codegen_object_new(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_il2cpp_TypeInfo_var);
		List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795(L_0, /*hidden argument*/List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795_RuntimeMethod_var);
		__this->set_allButtons_7(L_0);
		// private List<Texture2D> notChosen = new List<Texture2D>();
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_1 = (List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 *)il2cpp_codegen_object_new(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_il2cpp_TypeInfo_var);
		List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC(L_1, /*hidden argument*/List_1__ctor_mD04CAD03BDE2013E799D002230D9D16EFD84FEFC_RuntimeMethod_var);
		__this->set_notChosen_16(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RecallGame::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallGame__cctor_mB9F72394AD1EAEFD1CDCA75443202BF5D1CEAFEE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int numCorrect = 0;
		((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->set_numCorrect_17(0);
		// private static int numWrong = 0;
		((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->set_numWrong_18(0);
		// private static int numTimesUp = 0;
		((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->set_numTimesUp_19(0);
		// public static List<string> recall_data = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		((RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_StaticFields*)il2cpp_codegen_static_fields_for(RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E_il2cpp_TypeInfo_var))->set_recall_data_20(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RecallInstructions::onCorrectClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallInstructions_onCorrectClick_m666DF6FCFD70C7AD8F168462DBFD1C38170FDCC7 (RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral651F2718554170C6DD8FA76C8A6FC97F1843F5C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = "Great! Get Ready to Start!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral651F2718554170C6DD8FA76C8A6FC97F1843F5C4);
		// StartCoroutine(Delay());
		RuntimeObject* L_1;
		L_1 = RecallInstructions_Delay_m5B1E8849DEDE406CEE2B46A26C841860B9696086(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator RecallInstructions::Delay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecallInstructions_Delay_m5B1E8849DEDE406CEE2B46A26C841860B9696086 (RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317 * L_0 = (U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317 *)il2cpp_codegen_object_new(U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317_il2cpp_TypeInfo_var);
		U3CDelayU3Ed__3__ctor_mB9CD89EADD4517F6459675C88F7C91F990C99AE5(L_0, 0, /*hidden argument*/NULL);
		U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void RecallInstructions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallInstructions_Update_m7F45A0394ABDCDA0CBDAAF053843443D8BD93842 (RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(start)
		bool L_0 = __this->get_start_5();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// SceneManager.LoadScene(9);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)9), /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void RecallInstructions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecallInstructions__ctor_m4B400CED77B1AC0817D7DCDE9330F8E448D856FE (RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneChanger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChanger_Start_m255DE1DCAED54EF2EBDCCD7D9599033F25EA0E9C (SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DF2CCBF0C23E6CBBBED76FE900F12FCCDE36EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("fade", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral37DF2CCBF0C23E6CBBBED76FE900F12FCCDE36EC, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneChanger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChanger_Update_mF6BF99EA451C811F9034C9BED999AA7773249918 (SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// StartCoroutine(Fading());
		RuntimeObject* L_1;
		L_1 = SceneChanger_Fading_mEC9DACAF5C33007F5DA21038E2D48A8D3F25391C(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SceneChanger::Fading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneChanger_Fading_mEC9DACAF5C33007F5DA21038E2D48A8D3F25391C (SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233 * L_0 = (U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233 *)il2cpp_codegen_object_new(U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233_il2cpp_TypeInfo_var);
		U3CFadingU3Ed__3__ctor_m11338BF210E7A8A0574755400624A810E05EAA5C(L_0, 0, /*hidden argument*/NULL);
		U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void SceneChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChanger__ctor_m11AE9A596EFE92EE1AA22BD7A48AB0C1D758AB1D (SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SceneChanger::<Fading>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneChanger_U3CFadingU3Eb__3_0_m36803192F003B65AEC902E23620FB3D120B270A9 (SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yield return new WaitUntil(() => GetComponent<SpriteRenderer>().color.a == 1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_a_3();
		return (bool)((((float)L_2) == ((float)(1.0f)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<System.Int32>[] ShapeSpawner::returnScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* ShapeSpawner_returnScore_m4CA2D20FF538C87124FD0E7738D1CC7787241647 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<int>[] finalScore = new List<int>[3];
		List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* L_0 = (List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C*)(List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C*)SZArrayNew(List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C_il2cpp_TypeInfo_var, (uint32_t)3);
		// finalScore[0] = correct;
		List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_correct_25();
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_2);
		// finalScore[1] = wrong;
		List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* L_3 = L_1;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_4 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_wrong_26();
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_4);
		// finalScore[2] = timesUp;
		List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* L_5 = L_3;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_timesUp_27();
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_6);
		// return finalScore;
		return L_5;
	}
}
// System.Collections.IEnumerator ShapeSpawner::WaitForSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShapeSpawner_WaitForSpawn_m2519B9769CB6E88CB862DF9DBEFDD9350BE6945D (ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822 * L_0 = (U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822 *)il2cpp_codegen_object_new(U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822_il2cpp_TypeInfo_var);
		U3CWaitForSpawnU3Ed__26__ctor_mAFE4173C93A3F1CE5982A512C3B80D74F3FA8B2C(L_0, 0, /*hidden argument*/NULL);
		U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ShapeSpawner::SpawnShapes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeSpawner_SpawnShapes_m0A004447622B6EC2851EE9119DE43547B703F3B2 (ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// randInt1 = Random.Range(0, arrayOfShapes.Count);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_arrayOfShapes_14();
		int32_t L_1;
		L_1 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_0, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_1, /*hidden argument*/NULL);
		__this->set_randInt1_23(L_2);
		// randInt2 = Random.Range(0, arrayOfShapes.Count);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get_arrayOfShapes_14();
		int32_t L_4;
		L_4 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_3, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_4, /*hidden argument*/NULL);
		__this->set_randInt2_24(L_5);
		// shape1Obj = Instantiate(arrayOfShapes[randInt1], shape1.transform.position, shape1.transform.rotation);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get_arrayOfShapes_14();
		int32_t L_7 = __this->get_randInt1_23();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_shape1_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_shape1_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_8, L_11, L_14, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_shape1Obj_19(L_15);
		// shape2Obj = Instantiate(arrayOfShapes[randInt2], shape2.transform.position, shape2.transform.rotation);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_16 = __this->get_arrayOfShapes_14();
		int32_t L_17 = __this->get_randInt2_24();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_shape2_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_shape2_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_23, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_18, L_21, L_24, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_shape2Obj_20(L_25);
		// color1 = shape1Obj.GetComponent<SpriteRenderer>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_shape1Obj_19();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_27;
		L_27 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_26, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_27, /*hidden argument*/NULL);
		__this->set_color1_21(L_28);
		// color2 = shape2Obj.GetComponent<SpriteRenderer>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_shape2Obj_20();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_30;
		L_30 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_29, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31;
		L_31 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_30, /*hidden argument*/NULL);
		__this->set_color2_22(L_31);
		// }
		return;
	}
}
// System.Void ShapeSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeSpawner_Start_m34EAFA4BD63CD066A910C73A1FD4DEE201064EF3 (ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// factorOfDecrease = (1.25f - 0.032f) / 25;
		__this->set_factorOfDecrease_8((0.0487200022f));
		// for(int i = 0; i < 25; i++)
		V_0 = 0;
		goto IL_0034;
	}

IL_000f:
	{
		// correct.Add(0);
		IL2CPP_RUNTIME_CLASS_INIT(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_correct_25();
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_0, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// wrong.Add(0);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_wrong_26();
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_1, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// timesUp.Add(0);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_timesUp_27();
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_2, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// for(int i = 0; i < 25; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0034:
	{
		// for(int i = 0; i < 25; i++)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)25))))
		{
			goto IL_000f;
		}
	}
	{
		// correctText.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_correctText_17();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// wrongText.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_wrongText_18();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// StartCoroutine(WaitForSpawn());
		RuntimeObject* L_9;
		L_9 = ShapeSpawner_WaitForSpawn_m2519B9769CB6E88CB862DF9DBEFDD9350BE6945D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_10;
		L_10 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String ShapeSpawner::return_shape(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3 (ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * __this, int32_t ___randint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A23AA468FF756DFCDEB9586D68E0364288ADED8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ED78733EB37F9C0AC9B8E77F9E9788872DE41AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64D24090833D0F2767E49072F66203DC9464A384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string shape = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if(randint % 4 == 0)
		int32_t L_0 = ___randint0;
		if (((int32_t)((int32_t)L_0%(int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		// shape = "Capsule";
		V_0 = _stringLiteral1ED78733EB37F9C0AC9B8E77F9E9788872DE41AB;
		// } else if(randint % 4 == 1)
		goto IL_003b;
	}

IL_0013:
	{
		// } else if(randint % 4 == 1)
		int32_t L_1 = ___randint0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1%(int32_t)4))) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		// shape = "Circle";
		V_0 = _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C;
		// } else if(randint % 4 == 2)
		goto IL_003b;
	}

IL_0021:
	{
		// } else if(randint % 4 == 2)
		int32_t L_2 = ___randint0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2%(int32_t)4))) == ((uint32_t)2))))
		{
			goto IL_002f;
		}
	}
	{
		// shape = "Diamond";
		V_0 = _stringLiteral1A23AA468FF756DFCDEB9586D68E0364288ADED8;
		// } else if(randint % 4 == 3)
		goto IL_003b;
	}

IL_002f:
	{
		// } else if(randint % 4 == 3)
		int32_t L_3 = ___randint0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_3%(int32_t)4))) == ((uint32_t)3))))
		{
			goto IL_003b;
		}
	}
	{
		// shape = "Square";
		V_0 = _stringLiteral64D24090833D0F2767E49072F66203DC9464A384;
	}

IL_003b:
	{
		// return shape;
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String ShapeSpawner::return_color(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF (ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * __this, int32_t ___randint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string shape = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if ((int) (randint / 4) == 0)
		int32_t L_0 = ___randint0;
		if (((int32_t)((int32_t)L_0/(int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		// shape = "Blue";
		V_0 = _stringLiteralC176B4F6F2542477D019DEF12376DA784C53AAFA;
		// }
		goto IL_002d;
	}

IL_0013:
	{
		// else if ((int) (randint / 4) == 1)
		int32_t L_1 = ___randint0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1/(int32_t)4))) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		// shape = "Green";
		V_0 = _stringLiteralC3DAD0127402D548D48FBAC7503BF9B6A239ECD5;
		// }
		goto IL_002d;
	}

IL_0021:
	{
		// else if ((int) (randint / 4) == 2)
		int32_t L_2 = ___randint0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2/(int32_t)4))) == ((uint32_t)2))))
		{
			goto IL_002d;
		}
	}
	{
		// shape = "Orange";
		V_0 = _stringLiteralB419CFD5B49CDCB4D22631C6EFC26C19DF54DC3C;
	}

IL_002d:
	{
		// return shape;
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void ShapeSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeSpawner_Update_mE17730EEB99D3440B7A59CD080F1C7DB455AF710 (ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09F99BDC7EC87EE88A91CC0928FC9C7239049DBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AFEB08BE3C2079DEE53E917B9C3769C568605E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral720BEF15138E75C4449A64530B28EB227C1D7A57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85EBBB27E1E15D9E907A9AAE8E7F36E28119891C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC091E6AC7C30E72A4E30DA9B8FEA368061996A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE115B3EAA91BBBD438DC54430A40161469A0C69C);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if(iterations == 4)
		int32_t L_0 = __this->get_iterations_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_004d;
		}
	}
	{
		// Debug.Log("Here");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE115B3EAA91BBBD438DC54430A40161469A0C69C, /*hidden argument*/NULL);
		// if(correct[0] >= 2)
		IL2CPP_RUNTIME_CLASS_INIT(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_correct_25();
		int32_t L_2;
		L_2 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_1, 0, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		if ((((int32_t)L_2) < ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		// timeOfAppearance = 1.25f;
		__this->set_timeOfAppearance_6((1.25f));
		// timeShown = 1.5f;
		__this->set_timeShown_7((1.5f));
		// } else if(correct[0] < 2)
		goto IL_004d;
	}

IL_0039:
	{
		// } else if(correct[0] < 2)
		IL2CPP_RUNTIME_CLASS_INIT(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_correct_25();
		int32_t L_4;
		L_4 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_3, 0, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		if ((((int32_t)L_4) >= ((int32_t)2)))
		{
			goto IL_004d;
		}
	}
	{
		// SceneManager.LoadScene(7);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(7, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if(timeOfText >= 0.75f)
		float L_5 = __this->get_timeOfText_13();
		if ((!(((float)L_5) >= ((float)(0.75f)))))
		{
			goto IL_008e;
		}
	}
	{
		// timeOfText = 0;
		__this->set_timeOfText_13((0.0f));
		// textAppear = false;
		__this->set_textAppear_12((bool)0);
		// correctText.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_correctText_17();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// wrongText.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_wrongText_18();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_008e:
	{
		// if (iterations < 100 && beginSpawn)
		int32_t L_10 = __this->get_iterations_9();
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)100))))
		{
			goto IL_0a10;
		}
	}
	{
		bool L_11 = __this->get_beginSpawn_5();
		if (!L_11)
		{
			goto IL_0a10;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.A) && !choiceSelected)
		bool L_12;
		L_12 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)97), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0437;
		}
	}
	{
		bool L_13 = __this->get_choiceSelected_11();
		if (L_13)
		{
			goto IL_0437;
		}
	}
	{
		// if (color1.Equals(color2))
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_14 = __this->get_address_of_color1_21();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = __this->get_color2_22();
		bool L_16;
		L_16 = Color_Equals_mB531F532B5F7BE6168CFD4A6C89358C16F058D00((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_027a;
		}
	}
	{
		// correct[iterations / 4] += 1;
		IL2CPP_RUNTIME_CLASS_INIT(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_17 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_correct_25();
		V_0 = L_17;
		int32_t L_18 = __this->get_iterations_9();
		V_1 = ((int32_t)((int32_t)L_18/(int32_t)4));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_19 = V_0;
		int32_t L_20 = V_1;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23;
		L_23 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_19, L_20, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		// choiceSelected = true;
		__this->set_choiceSelected_11((bool)1);
		// textAppear = true;
		__this->set_textAppear_12((bool)1);
		// correctText.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = __this->get_correctText_17();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)1, /*hidden argument*/NULL);
		// Debug.Log(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
		//                     + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "True,True,True,"
		//                     + timeOfAppearance.ToString() + "," + nextUpdate.ToString());
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		int32_t* L_28 = __this->get_address_of_iterations_9();
		String_t* L_29;
		L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_28, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_29);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_27;
		ArrayElementTypeCheck (L_30, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
		int32_t L_32 = __this->get_randInt1_23();
		String_t* L_33;
		L_33 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_32, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_31;
		ArrayElementTypeCheck (L_34, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		int32_t L_36 = __this->get_randInt1_23();
		String_t* L_37;
		L_37 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_36, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_37);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_35;
		ArrayElementTypeCheck (L_38, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_38;
		int32_t L_40 = __this->get_randInt2_24();
		String_t* L_41;
		L_41 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_40, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_41);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_39;
		ArrayElementTypeCheck (L_42, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = L_42;
		int32_t L_44 = __this->get_randInt2_24();
		String_t* L_45;
		L_45 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_44, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_45);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_43;
		ArrayElementTypeCheck (L_46, _stringLiteral85EBBB27E1E15D9E907A9AAE8E7F36E28119891C);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral85EBBB27E1E15D9E907A9AAE8E7F36E28119891C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = L_46;
		float* L_48 = __this->get_address_of_timeOfAppearance_6();
		String_t* L_49;
		L_49 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_48, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_47, L_49);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_49);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50 = L_47;
		ArrayElementTypeCheck (L_50, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = L_50;
		float* L_52 = __this->get_address_of_nextUpdate_4();
		String_t* L_53;
		L_53 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_52, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_51, L_53);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_53);
		String_t* L_54;
		L_54 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_54, /*hidden argument*/NULL);
		// attention_data.Add(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
		//                     + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "True,True,True,"
		//                     + timeOfAppearance.ToString() + "," + nextUpdate.ToString() + "\n");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_55 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_attention_data_28();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_56;
		int32_t* L_58 = __this->get_address_of_iterations_9();
		String_t* L_59;
		L_59 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_58, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_57, L_59);
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_59);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = L_57;
		ArrayElementTypeCheck (L_60, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = L_60;
		int32_t L_62 = __this->get_randInt1_23();
		String_t* L_63;
		L_63 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_62, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_63);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_61;
		ArrayElementTypeCheck (L_64, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_65 = L_64;
		int32_t L_66 = __this->get_randInt1_23();
		String_t* L_67;
		L_67 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_66, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_67);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_65;
		ArrayElementTypeCheck (L_68, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_69 = L_68;
		int32_t L_70 = __this->get_randInt2_24();
		String_t* L_71;
		L_71 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_70, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_69, L_71);
		(L_69)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_71);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_72 = L_69;
		ArrayElementTypeCheck (L_72, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_73 = L_72;
		int32_t L_74 = __this->get_randInt2_24();
		String_t* L_75;
		L_75 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_74, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_73, L_75);
		(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_75);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_76 = L_73;
		ArrayElementTypeCheck (L_76, _stringLiteral85EBBB27E1E15D9E907A9AAE8E7F36E28119891C);
		(L_76)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral85EBBB27E1E15D9E907A9AAE8E7F36E28119891C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_77 = L_76;
		float* L_78 = __this->get_address_of_timeOfAppearance_6();
		String_t* L_79;
		L_79 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_78, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_77, L_79);
		(L_77)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_79);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = L_77;
		ArrayElementTypeCheck (L_80, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_80)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = L_80;
		float* L_82 = __this->get_address_of_nextUpdate_4();
		String_t* L_83;
		L_83 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_82, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_81, L_83);
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_83);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_84 = L_81;
		ArrayElementTypeCheck (L_84, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_84)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_85;
		L_85 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_84, /*hidden argument*/NULL);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_55, L_85, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// } else if (!color1.Equals(color2))
		goto IL_07c3;
	}

IL_027a:
	{
		// } else if (!color1.Equals(color2))
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_86 = __this->get_address_of_color1_21();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_87 = __this->get_color2_22();
		bool L_88;
		L_88 = Color_Equals_mB531F532B5F7BE6168CFD4A6C89358C16F058D00((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_86, L_87, /*hidden argument*/NULL);
		if (L_88)
		{
			goto IL_07c3;
		}
	}
	{
		// wrong[iterations / 4] += 1;
		IL2CPP_RUNTIME_CLASS_INIT(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_89 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_wrong_26();
		V_0 = L_89;
		int32_t L_90 = __this->get_iterations_9();
		V_1 = ((int32_t)((int32_t)L_90/(int32_t)4));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_91 = V_0;
		int32_t L_92 = V_1;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_93 = V_0;
		int32_t L_94 = V_1;
		int32_t L_95;
		L_95 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_93, L_94, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_91, L_92, ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1)), /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		// choiceSelected = true;
		__this->set_choiceSelected_11((bool)1);
		// textAppear = true;
		__this->set_textAppear_12((bool)1);
		// wrongText.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_96 = __this->get_wrongText_18();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_97;
		L_97 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_96, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_97, (bool)1, /*hidden argument*/NULL);
		// Debug.Log(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
		//                     + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "False,True,False,"
		//                     + timeOfAppearance.ToString() + "," + nextUpdate.ToString());
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_98 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_99 = L_98;
		int32_t* L_100 = __this->get_address_of_iterations_9();
		String_t* L_101;
		L_101 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_100, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_99, L_101);
		(L_99)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_101);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_102 = L_99;
		ArrayElementTypeCheck (L_102, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_102)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_103 = L_102;
		int32_t L_104 = __this->get_randInt1_23();
		String_t* L_105;
		L_105 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_104, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_103, L_105);
		(L_103)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_105);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_106 = L_103;
		ArrayElementTypeCheck (L_106, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_106)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_107 = L_106;
		int32_t L_108 = __this->get_randInt1_23();
		String_t* L_109;
		L_109 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_108, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_107, L_109);
		(L_107)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_109);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_110 = L_107;
		ArrayElementTypeCheck (L_110, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_110)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_111 = L_110;
		int32_t L_112 = __this->get_randInt2_24();
		String_t* L_113;
		L_113 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_112, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_111, L_113);
		(L_111)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_113);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_114 = L_111;
		ArrayElementTypeCheck (L_114, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_114)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_115 = L_114;
		int32_t L_116 = __this->get_randInt2_24();
		String_t* L_117;
		L_117 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_116, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_115, L_117);
		(L_115)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_117);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_118 = L_115;
		ArrayElementTypeCheck (L_118, _stringLiteral1AFEB08BE3C2079DEE53E917B9C3769C568605E7);
		(L_118)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral1AFEB08BE3C2079DEE53E917B9C3769C568605E7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_119 = L_118;
		float* L_120 = __this->get_address_of_timeOfAppearance_6();
		String_t* L_121;
		L_121 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_120, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_119, L_121);
		(L_119)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_121);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_122 = L_119;
		ArrayElementTypeCheck (L_122, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_122)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_123 = L_122;
		float* L_124 = __this->get_address_of_nextUpdate_4();
		String_t* L_125;
		L_125 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_124, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_123, L_125);
		(L_123)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_125);
		String_t* L_126;
		L_126 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_123, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_126, /*hidden argument*/NULL);
		// attention_data.Add(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
		//                     + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "False,True,False,"
		//                     + timeOfAppearance.ToString() + "," + nextUpdate.ToString() + "\n");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_127 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_attention_data_28();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_128 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_129 = L_128;
		int32_t* L_130 = __this->get_address_of_iterations_9();
		String_t* L_131;
		L_131 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_130, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_129, L_131);
		(L_129)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_131);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_132 = L_129;
		ArrayElementTypeCheck (L_132, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_132)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_133 = L_132;
		int32_t L_134 = __this->get_randInt1_23();
		String_t* L_135;
		L_135 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_134, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_133, L_135);
		(L_133)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_135);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_136 = L_133;
		ArrayElementTypeCheck (L_136, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_136)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_137 = L_136;
		int32_t L_138 = __this->get_randInt1_23();
		String_t* L_139;
		L_139 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_138, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_137, L_139);
		(L_137)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_139);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_140 = L_137;
		ArrayElementTypeCheck (L_140, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_140)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_141 = L_140;
		int32_t L_142 = __this->get_randInt2_24();
		String_t* L_143;
		L_143 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_142, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_141, L_143);
		(L_141)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_143);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_144 = L_141;
		ArrayElementTypeCheck (L_144, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_144)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_145 = L_144;
		int32_t L_146 = __this->get_randInt2_24();
		String_t* L_147;
		L_147 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_146, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_145, L_147);
		(L_145)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_147);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_148 = L_145;
		ArrayElementTypeCheck (L_148, _stringLiteral1AFEB08BE3C2079DEE53E917B9C3769C568605E7);
		(L_148)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral1AFEB08BE3C2079DEE53E917B9C3769C568605E7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_149 = L_148;
		float* L_150 = __this->get_address_of_timeOfAppearance_6();
		String_t* L_151;
		L_151 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_150, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_149, L_151);
		(L_149)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_151);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_152 = L_149;
		ArrayElementTypeCheck (L_152, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_152)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_153 = L_152;
		float* L_154 = __this->get_address_of_nextUpdate_4();
		String_t* L_155;
		L_155 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_154, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_153, L_155);
		(L_153)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_155);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_156 = L_153;
		ArrayElementTypeCheck (L_156, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_156)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_157;
		L_157 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_156, /*hidden argument*/NULL);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_127, L_157, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// } else if (Input.GetKeyDown(KeyCode.D) && !choiceSelected)
		goto IL_07c3;
	}

IL_0437:
	{
		// } else if (Input.GetKeyDown(KeyCode.D) && !choiceSelected)
		bool L_158;
		L_158 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)100), /*hidden argument*/NULL);
		if (!L_158)
		{
			goto IL_07c3;
		}
	}
	{
		bool L_159 = __this->get_choiceSelected_11();
		if (L_159)
		{
			goto IL_07c3;
		}
	}
	{
		// if (color1.Equals(color2))
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_160 = __this->get_address_of_color1_21();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_161 = __this->get_color2_22();
		bool L_162;
		L_162 = Color_Equals_mB531F532B5F7BE6168CFD4A6C89358C16F058D00((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_160, L_161, /*hidden argument*/NULL);
		if (!L_162)
		{
			goto IL_060b;
		}
	}
	{
		// wrong[iterations / 4] += 1;
		IL2CPP_RUNTIME_CLASS_INIT(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_163 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_wrong_26();
		V_0 = L_163;
		int32_t L_164 = __this->get_iterations_9();
		V_1 = ((int32_t)((int32_t)L_164/(int32_t)4));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_165 = V_0;
		int32_t L_166 = V_1;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_167 = V_0;
		int32_t L_168 = V_1;
		int32_t L_169;
		L_169 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_167, L_168, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_165, L_166, ((int32_t)il2cpp_codegen_add((int32_t)L_169, (int32_t)1)), /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		// choiceSelected = true;
		__this->set_choiceSelected_11((bool)1);
		// textAppear = true;
		__this->set_textAppear_12((bool)1);
		// wrongText.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_170 = __this->get_wrongText_18();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_171;
		L_171 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_170, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_171, (bool)1, /*hidden argument*/NULL);
		// Debug.Log(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
		//                     + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "True,False,False,"
		//                     + timeOfAppearance.ToString() + "," + nextUpdate.ToString());
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_172 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_173 = L_172;
		int32_t* L_174 = __this->get_address_of_iterations_9();
		String_t* L_175;
		L_175 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_174, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_173, L_175);
		(L_173)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_175);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_176 = L_173;
		ArrayElementTypeCheck (L_176, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_176)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_177 = L_176;
		int32_t L_178 = __this->get_randInt1_23();
		String_t* L_179;
		L_179 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_178, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_177, L_179);
		(L_177)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_179);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_180 = L_177;
		ArrayElementTypeCheck (L_180, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_180)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_181 = L_180;
		int32_t L_182 = __this->get_randInt1_23();
		String_t* L_183;
		L_183 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_182, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_181, L_183);
		(L_181)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_183);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_184 = L_181;
		ArrayElementTypeCheck (L_184, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_184)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_185 = L_184;
		int32_t L_186 = __this->get_randInt2_24();
		String_t* L_187;
		L_187 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_186, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_185, L_187);
		(L_185)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_187);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_188 = L_185;
		ArrayElementTypeCheck (L_188, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_188)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_189 = L_188;
		int32_t L_190 = __this->get_randInt2_24();
		String_t* L_191;
		L_191 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_190, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_189, L_191);
		(L_189)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_191);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_192 = L_189;
		ArrayElementTypeCheck (L_192, _stringLiteral720BEF15138E75C4449A64530B28EB227C1D7A57);
		(L_192)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral720BEF15138E75C4449A64530B28EB227C1D7A57);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_193 = L_192;
		float* L_194 = __this->get_address_of_timeOfAppearance_6();
		String_t* L_195;
		L_195 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_194, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_193, L_195);
		(L_193)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_195);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_196 = L_193;
		ArrayElementTypeCheck (L_196, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_196)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_197 = L_196;
		float* L_198 = __this->get_address_of_nextUpdate_4();
		String_t* L_199;
		L_199 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_198, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_197, L_199);
		(L_197)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_199);
		String_t* L_200;
		L_200 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_197, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_200, /*hidden argument*/NULL);
		// attention_data.Add(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
		//                     + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "True,False,False,"
		//                     + timeOfAppearance.ToString() + "," + nextUpdate.ToString() + "\n");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_201 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_attention_data_28();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_202 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_203 = L_202;
		int32_t* L_204 = __this->get_address_of_iterations_9();
		String_t* L_205;
		L_205 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_204, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_203, L_205);
		(L_203)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_205);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_206 = L_203;
		ArrayElementTypeCheck (L_206, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_206)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_207 = L_206;
		int32_t L_208 = __this->get_randInt1_23();
		String_t* L_209;
		L_209 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_208, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_207, L_209);
		(L_207)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_209);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_210 = L_207;
		ArrayElementTypeCheck (L_210, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_210)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_211 = L_210;
		int32_t L_212 = __this->get_randInt1_23();
		String_t* L_213;
		L_213 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_212, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_211, L_213);
		(L_211)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_213);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_214 = L_211;
		ArrayElementTypeCheck (L_214, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_214)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_215 = L_214;
		int32_t L_216 = __this->get_randInt2_24();
		String_t* L_217;
		L_217 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_216, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_215, L_217);
		(L_215)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_217);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_218 = L_215;
		ArrayElementTypeCheck (L_218, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_218)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_219 = L_218;
		int32_t L_220 = __this->get_randInt2_24();
		String_t* L_221;
		L_221 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_220, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_219, L_221);
		(L_219)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_221);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_222 = L_219;
		ArrayElementTypeCheck (L_222, _stringLiteral720BEF15138E75C4449A64530B28EB227C1D7A57);
		(L_222)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral720BEF15138E75C4449A64530B28EB227C1D7A57);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_223 = L_222;
		float* L_224 = __this->get_address_of_timeOfAppearance_6();
		String_t* L_225;
		L_225 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_224, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_223, L_225);
		(L_223)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_225);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_226 = L_223;
		ArrayElementTypeCheck (L_226, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_226)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_227 = L_226;
		float* L_228 = __this->get_address_of_nextUpdate_4();
		String_t* L_229;
		L_229 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_228, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_227, L_229);
		(L_227)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_229);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_230 = L_227;
		ArrayElementTypeCheck (L_230, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_230)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_231;
		L_231 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_230, /*hidden argument*/NULL);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_201, L_231, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// } else if (!color1.Equals(color2))
		goto IL_07c3;
	}

IL_060b:
	{
		// } else if (!color1.Equals(color2))
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_232 = __this->get_address_of_color1_21();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_233 = __this->get_color2_22();
		bool L_234;
		L_234 = Color_Equals_mB531F532B5F7BE6168CFD4A6C89358C16F058D00((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_232, L_233, /*hidden argument*/NULL);
		if (L_234)
		{
			goto IL_07c3;
		}
	}
	{
		// correct[iterations / 4] += 1;
		IL2CPP_RUNTIME_CLASS_INIT(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_235 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_correct_25();
		V_0 = L_235;
		int32_t L_236 = __this->get_iterations_9();
		V_1 = ((int32_t)((int32_t)L_236/(int32_t)4));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_237 = V_0;
		int32_t L_238 = V_1;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_239 = V_0;
		int32_t L_240 = V_1;
		int32_t L_241;
		L_241 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_239, L_240, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_237, L_238, ((int32_t)il2cpp_codegen_add((int32_t)L_241, (int32_t)1)), /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		// choiceSelected = true;
		__this->set_choiceSelected_11((bool)1);
		// textAppear = true;
		__this->set_textAppear_12((bool)1);
		// correctText.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_242 = __this->get_correctText_17();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_243;
		L_243 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_242, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_243, (bool)1, /*hidden argument*/NULL);
		// Debug.Log(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
		//                     + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "False,False,True,"
		//                     + timeOfAppearance.ToString() + "," + nextUpdate.ToString());
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_244 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_245 = L_244;
		int32_t* L_246 = __this->get_address_of_iterations_9();
		String_t* L_247;
		L_247 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_246, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_245, L_247);
		(L_245)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_247);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_248 = L_245;
		ArrayElementTypeCheck (L_248, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_248)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_249 = L_248;
		int32_t L_250 = __this->get_randInt1_23();
		String_t* L_251;
		L_251 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_250, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_249, L_251);
		(L_249)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_251);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_252 = L_249;
		ArrayElementTypeCheck (L_252, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_252)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_253 = L_252;
		int32_t L_254 = __this->get_randInt1_23();
		String_t* L_255;
		L_255 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_254, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_253, L_255);
		(L_253)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_255);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_256 = L_253;
		ArrayElementTypeCheck (L_256, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_256)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_257 = L_256;
		int32_t L_258 = __this->get_randInt2_24();
		String_t* L_259;
		L_259 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_258, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_257, L_259);
		(L_257)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_259);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_260 = L_257;
		ArrayElementTypeCheck (L_260, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_260)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_261 = L_260;
		int32_t L_262 = __this->get_randInt2_24();
		String_t* L_263;
		L_263 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_262, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_261, L_263);
		(L_261)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_263);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_264 = L_261;
		ArrayElementTypeCheck (L_264, _stringLiteralCC091E6AC7C30E72A4E30DA9B8FEA368061996A7);
		(L_264)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralCC091E6AC7C30E72A4E30DA9B8FEA368061996A7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_265 = L_264;
		float* L_266 = __this->get_address_of_timeOfAppearance_6();
		String_t* L_267;
		L_267 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_266, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_265, L_267);
		(L_265)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_267);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_268 = L_265;
		ArrayElementTypeCheck (L_268, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_268)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_269 = L_268;
		float* L_270 = __this->get_address_of_nextUpdate_4();
		String_t* L_271;
		L_271 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_270, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_269, L_271);
		(L_269)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_271);
		String_t* L_272;
		L_272 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_269, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_272, /*hidden argument*/NULL);
		// attention_data.Add(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
		//                     + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "False,False,True,"
		//                     + timeOfAppearance.ToString() + "," + nextUpdate.ToString() + "\n");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_273 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_attention_data_28();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_274 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_275 = L_274;
		int32_t* L_276 = __this->get_address_of_iterations_9();
		String_t* L_277;
		L_277 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_276, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_275, L_277);
		(L_275)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_277);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_278 = L_275;
		ArrayElementTypeCheck (L_278, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_278)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_279 = L_278;
		int32_t L_280 = __this->get_randInt1_23();
		String_t* L_281;
		L_281 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_280, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_279, L_281);
		(L_279)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_281);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_282 = L_279;
		ArrayElementTypeCheck (L_282, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_282)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_283 = L_282;
		int32_t L_284 = __this->get_randInt1_23();
		String_t* L_285;
		L_285 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_284, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_283, L_285);
		(L_283)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_285);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_286 = L_283;
		ArrayElementTypeCheck (L_286, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_286)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_287 = L_286;
		int32_t L_288 = __this->get_randInt2_24();
		String_t* L_289;
		L_289 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_288, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_287, L_289);
		(L_287)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_289);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_290 = L_287;
		ArrayElementTypeCheck (L_290, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_290)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_291 = L_290;
		int32_t L_292 = __this->get_randInt2_24();
		String_t* L_293;
		L_293 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_292, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_291, L_293);
		(L_291)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_293);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_294 = L_291;
		ArrayElementTypeCheck (L_294, _stringLiteralCC091E6AC7C30E72A4E30DA9B8FEA368061996A7);
		(L_294)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralCC091E6AC7C30E72A4E30DA9B8FEA368061996A7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_295 = L_294;
		float* L_296 = __this->get_address_of_timeOfAppearance_6();
		String_t* L_297;
		L_297 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_296, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_295, L_297);
		(L_295)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_297);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_298 = L_295;
		ArrayElementTypeCheck (L_298, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_298)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_299 = L_298;
		float* L_300 = __this->get_address_of_nextUpdate_4();
		String_t* L_301;
		L_301 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_300, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_299, L_301);
		(L_299)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_301);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_302 = L_299;
		ArrayElementTypeCheck (L_302, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_302)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_303;
		L_303 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_302, /*hidden argument*/NULL);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_273, L_303, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_07c3:
	{
		// if(textAppear)
		bool L_304 = __this->get_textAppear_12();
		if (!L_304)
		{
			goto IL_07dd;
		}
	}
	{
		// timeOfText += Time.deltaTime;
		float L_305 = __this->get_timeOfText_13();
		float L_306;
		L_306 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeOfText_13(((float)il2cpp_codegen_add((float)L_305, (float)L_306)));
	}

IL_07dd:
	{
		// if (iterations % 4 == 0 && firstIter)
		int32_t L_307 = __this->get_iterations_9();
		if (((int32_t)((int32_t)L_307%(int32_t)4)))
		{
			goto IL_082e;
		}
	}
	{
		bool L_308 = __this->get_firstIter_10();
		if (!L_308)
		{
			goto IL_082e;
		}
	}
	{
		// Debug.Log(timeOfAppearance + ", " + iterations);
		float* L_309 = __this->get_address_of_timeOfAppearance_6();
		String_t* L_310;
		L_310 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_309, /*hidden argument*/NULL);
		int32_t* L_311 = __this->get_address_of_iterations_9();
		String_t* L_312;
		L_312 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_311, /*hidden argument*/NULL);
		String_t* L_313;
		L_313 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_310, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_312, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_313, /*hidden argument*/NULL);
		// timeOfAppearance -= factorOfDecrease;
		float L_314 = __this->get_timeOfAppearance_6();
		float L_315 = __this->get_factorOfDecrease_8();
		__this->set_timeOfAppearance_6(((float)il2cpp_codegen_subtract((float)L_314, (float)L_315)));
		// firstIter = false;
		__this->set_firstIter_10((bool)0);
	}

IL_082e:
	{
		// if (beginSpawn && nextUpdate >= timeOfAppearance)
		bool L_316 = __this->get_beginSpawn_5();
		if (!L_316)
		{
			goto IL_085a;
		}
	}
	{
		float L_317 = __this->get_nextUpdate_4();
		float L_318 = __this->get_timeOfAppearance_6();
		if ((!(((float)L_317) >= ((float)L_318))))
		{
			goto IL_085a;
		}
	}
	{
		// Destroy(shape1Obj);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_319 = __this->get_shape1Obj_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_319, /*hidden argument*/NULL);
		// Destroy(shape2Obj);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_320 = __this->get_shape2Obj_20();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_320, /*hidden argument*/NULL);
	}

IL_085a:
	{
		// if (beginSpawn && nextUpdate < timeShown)
		bool L_321 = __this->get_beginSpawn_5();
		if (!L_321)
		{
			goto IL_0883;
		}
	}
	{
		float L_322 = __this->get_nextUpdate_4();
		float L_323 = __this->get_timeShown_7();
		if ((!(((float)L_322) < ((float)L_323))))
		{
			goto IL_0883;
		}
	}
	{
		// nextUpdate += Time.deltaTime;
		float L_324 = __this->get_nextUpdate_4();
		float L_325;
		L_325 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_nextUpdate_4(((float)il2cpp_codegen_add((float)L_324, (float)L_325)));
		// }
		return;
	}

IL_0883:
	{
		// else if (beginSpawn && nextUpdate >= timeShown)
		bool L_326 = __this->get_beginSpawn_5();
		if (!L_326)
		{
			goto IL_0a2a;
		}
	}
	{
		float L_327 = __this->get_nextUpdate_4();
		float L_328 = __this->get_timeShown_7();
		if ((!(((float)L_327) >= ((float)L_328))))
		{
			goto IL_0a2a;
		}
	}
	{
		// if (!Input.GetKeyDown(KeyCode.A) && !Input.GetKeyDown(KeyCode.D) && !choiceSelected && iterations >= 0)
		bool L_329;
		L_329 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)97), /*hidden argument*/NULL);
		if (L_329)
		{
			goto IL_09d8;
		}
	}
	{
		bool L_330;
		L_330 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)100), /*hidden argument*/NULL);
		if (L_330)
		{
			goto IL_09d8;
		}
	}
	{
		bool L_331 = __this->get_choiceSelected_11();
		if (L_331)
		{
			goto IL_09d8;
		}
	}
	{
		int32_t L_332 = __this->get_iterations_9();
		if ((((int32_t)L_332) < ((int32_t)0)))
		{
			goto IL_09d8;
		}
	}
	{
		// timesUp[iterations / 4] += 1;
		IL2CPP_RUNTIME_CLASS_INIT(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_333 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_timesUp_27();
		V_0 = L_333;
		int32_t L_334 = __this->get_iterations_9();
		V_1 = ((int32_t)((int32_t)L_334/(int32_t)4));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_335 = V_0;
		int32_t L_336 = V_1;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_337 = V_0;
		int32_t L_338 = V_1;
		int32_t L_339;
		L_339 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_337, L_338, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_335, L_336, ((int32_t)il2cpp_codegen_add((int32_t)L_339, (int32_t)1)), /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		// bool equal = return_shape(randInt1).Equals(return_shape(randInt2));
		int32_t L_340 = __this->get_randInt1_23();
		String_t* L_341;
		L_341 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_340, /*hidden argument*/NULL);
		int32_t L_342 = __this->get_randInt2_24();
		String_t* L_343;
		L_343 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_342, /*hidden argument*/NULL);
		bool L_344;
		L_344 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_341, L_343, /*hidden argument*/NULL);
		V_2 = L_344;
		// attention_data.Add(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
		//                     + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + equal.ToString() + ",Null,False,"
		//                     + timeOfAppearance.ToString() + "," + nextUpdate.ToString() + "\n");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_345 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_attention_data_28();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_346 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_347 = L_346;
		int32_t* L_348 = __this->get_address_of_iterations_9();
		String_t* L_349;
		L_349 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_348, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_347, L_349);
		(L_347)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_349);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_350 = L_347;
		ArrayElementTypeCheck (L_350, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_350)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_351 = L_350;
		int32_t L_352 = __this->get_randInt1_23();
		String_t* L_353;
		L_353 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_352, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_351, L_353);
		(L_351)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_353);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_354 = L_351;
		ArrayElementTypeCheck (L_354, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_354)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_355 = L_354;
		int32_t L_356 = __this->get_randInt1_23();
		String_t* L_357;
		L_357 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_356, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_355, L_357);
		(L_355)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_357);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_358 = L_355;
		ArrayElementTypeCheck (L_358, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_358)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_359 = L_358;
		int32_t L_360 = __this->get_randInt2_24();
		String_t* L_361;
		L_361 = ShapeSpawner_return_shape_m57D04BD77C20A4A2237B5C0BA6206016D07819D3(__this, L_360, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_359, L_361);
		(L_359)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_361);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_362 = L_359;
		ArrayElementTypeCheck (L_362, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_362)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_363 = L_362;
		int32_t L_364 = __this->get_randInt2_24();
		String_t* L_365;
		L_365 = ShapeSpawner_return_color_m8875625A39906E974711F4BB96DD6BB4CD6955FF(__this, L_364, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_363, L_365);
		(L_363)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_365);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_366 = L_363;
		ArrayElementTypeCheck (L_366, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_366)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_367 = L_366;
		String_t* L_368;
		L_368 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_2), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_367, L_368);
		(L_367)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_368);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_369 = L_367;
		ArrayElementTypeCheck (L_369, _stringLiteral09F99BDC7EC87EE88A91CC0928FC9C7239049DBE);
		(L_369)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral09F99BDC7EC87EE88A91CC0928FC9C7239049DBE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_370 = L_369;
		float* L_371 = __this->get_address_of_timeOfAppearance_6();
		String_t* L_372;
		L_372 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_371, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_370, L_372);
		(L_370)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_372);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_373 = L_370;
		ArrayElementTypeCheck (L_373, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_373)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_374 = L_373;
		float* L_375 = __this->get_address_of_nextUpdate_4();
		String_t* L_376;
		L_376 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_375, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_374, L_376);
		(L_374)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)L_376);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_377 = L_374;
		ArrayElementTypeCheck (L_377, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_377)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_378;
		L_378 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_377, /*hidden argument*/NULL);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_345, L_378, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_09d8:
	{
		// iterations++;
		int32_t L_379 = __this->get_iterations_9();
		__this->set_iterations_9(((int32_t)il2cpp_codegen_add((int32_t)L_379, (int32_t)1)));
		// if (iterations < 100)
		int32_t L_380 = __this->get_iterations_9();
		if ((((int32_t)L_380) >= ((int32_t)((int32_t)100))))
		{
			goto IL_09f6;
		}
	}
	{
		// SpawnShapes();
		ShapeSpawner_SpawnShapes_m0A004447622B6EC2851EE9119DE43547B703F3B2(__this, /*hidden argument*/NULL);
	}

IL_09f6:
	{
		// choiceSelected = false;
		__this->set_choiceSelected_11((bool)0);
		// nextUpdate = 0;
		__this->set_nextUpdate_4((0.0f));
		// firstIter = true;
		__this->set_firstIter_10((bool)1);
		// }
		return;
	}

IL_0a10:
	{
		// else if (iterations >= 100)
		int32_t L_381 = __this->get_iterations_9();
		if ((((int32_t)L_381) < ((int32_t)((int32_t)100))))
		{
			goto IL_0a2a;
		}
	}
	{
		// DataStorage._attentionData = attention_data;
		IL2CPP_RUNTIME_CLASS_INIT(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_382 = ((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->get_attention_data_28();
		((DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_StaticFields*)il2cpp_codegen_static_fields_for(DataStorage_t96CE6901BF75098AF0E32C550A99BC71963043FD_il2cpp_TypeInfo_var))->set__attentionData_7(L_382);
		// SceneManager.LoadScene(8);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(8, /*hidden argument*/NULL);
	}

IL_0a2a:
	{
		// }
		return;
	}
}
// System.Void ShapeSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeSpawner__ctor_m74744678D8873697C3193161B3CE01DB8D585F76 (ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * __this, const RuntimeMethod* method)
{
	{
		// private float timeOfAppearance = 3f;
		__this->set_timeOfAppearance_6((3.0f));
		// private float timeShown = 3f;
		__this->set_timeShown_7((3.0f));
		// private int iterations = -1;
		__this->set_iterations_9((-1));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShapeSpawner::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeSpawner__cctor_mEC2FDD06C8B0AD832B823F48F8EC908113F2A822 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<int> correct = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->set_correct_25(L_0);
		// private static List<int> wrong = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_1, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->set_wrong_26(L_1);
		// private static List<int> timesUp = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_2, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->set_timesUp_27(L_2);
		// public static List<string> attention_data = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_3, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		((ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_StaticFields*)il2cpp_codegen_static_fields_for(ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705_il2cpp_TypeInfo_var))->set_attention_data_28(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Skip::onClickEnc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skip_onClickEnc_m8F5E7088294C51AC89FFADD9BBF931CC1C794B13 (Skip_t9875F8A8A29D782CF32D60376D8BED17BDE14914 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(5);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Skip::onClickAttention()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skip_onClickAttention_m99EB2C46DC0699A146CFC30B409376E1E4B2E938 (Skip_t9875F8A8A29D782CF32D60376D8BED17BDE14914 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(8);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Skip::onClickRecall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skip_onClickRecall_mC08817603DF8917CE9EF3071CD2AF2D5F27A44DD (Skip_t9875F8A8A29D782CF32D60376D8BED17BDE14914 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(10);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)10), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Skip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skip__ctor_m6CFD3F8D35508A92093B90FFE55FDB499F0E98A3 (Skip_t9875F8A8A29D782CF32D60376D8BED17BDE14914 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartMemGame::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMemGame_Start_mDA26DFB2A580DFF98FA70A84B6B174A54C435359 (StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pos = gameObjs[0].transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_gameObjs_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		__this->set_pos_9(L_3);
		// StartCoroutine(Delay());
		RuntimeObject* L_4;
		L_4 = StartMemGame_Delay_m3D1BA64FE3C79A0496CAC887B308514015742AD8(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator StartMemGame::Delay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartMemGame_Delay_m3D1BA64FE3C79A0496CAC887B308514015742AD8 (StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620 * L_0 = (U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620 *)il2cpp_codegen_object_new(U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620_il2cpp_TypeInfo_var);
		U3CDelayU3Ed__7__ctor_m456B463304B6E2027E556748BD06107471D836A2(L_0, 0, /*hidden argument*/NULL);
		U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void StartMemGame::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMemGame_Update_m5C9D8BF19374CF63D8953598300B34695430C637 (StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (delayComplete && processNum < 60)
		bool L_0 = __this->get_delayComplete_5();
		if (!L_0)
		{
			goto IL_0220;
		}
	}
	{
		int32_t L_1 = __this->get_processNum_7();
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)60))))
		{
			goto IL_0220;
		}
	}
	{
		// int objNum = (int)processNum / 2;
		int32_t L_2 = __this->get_processNum_7();
		V_0 = ((int32_t)((int32_t)L_2/(int32_t)2));
		// if (processNum % 2 == 0)
		int32_t L_3 = __this->get_processNum_7();
		if (((int32_t)((int32_t)L_3%(int32_t)2)))
		{
			goto IL_0120;
		}
	}
	{
		// gameObjs[objNum].transform.position -= pos * Time.deltaTime;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_gameObjs_4();
		int32_t L_5 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_pos_9();
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_9, L_12, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_13, /*hidden argument*/NULL);
		// gameObjs[objNum].transform.position += new Vector3(0, 0, -9f) * Time.deltaTime;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_14 = __this->get_gameObjs_4();
		int32_t L_15 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = L_17;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), (0.0f), (0.0f), (-9.0f), /*hidden argument*/NULL);
		float L_21;
		L_21 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_22, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_18, L_23, /*hidden argument*/NULL);
		// gameObjs[objNum].transform.localScale += new Vector3(1f, 1f, 1f) * Time.deltaTime;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_24 = __this->get_gameObjs_4();
		int32_t L_25 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_24, L_25, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = L_27;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_30), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		float L_31;
		L_31 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_29, L_32, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_28, L_33, /*hidden argument*/NULL);
		// timePassed += Time.deltaTime;
		float L_34 = __this->get_timePassed_6();
		float L_35;
		L_35 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timePassed_6(((float)il2cpp_codegen_add((float)L_34, (float)L_35)));
		// if(timePassed >= 1f)
		float L_36 = __this->get_timePassed_6();
		if ((!(((float)L_36) >= ((float)(1.0f)))))
		{
			goto IL_02a9;
		}
	}
	{
		// processNum++;
		int32_t L_37 = __this->get_processNum_7();
		__this->set_processNum_7(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
		// timePassed = 0;
		__this->set_timePassed_6((0.0f));
		// delayComplete = false;
		__this->set_delayComplete_5((bool)0);
		// } else if(processNum % 2 == 1)
		return;
	}

IL_0120:
	{
		// } else if(processNum % 2 == 1)
		int32_t L_38 = __this->get_processNum_7();
		if ((!(((uint32_t)((int32_t)((int32_t)L_38%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_02a9;
		}
	}
	{
		// gameObjs[objNum].transform.position += pos * Time.deltaTime;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_39 = __this->get_gameObjs_4();
		int32_t L_40 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_39, L_40, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43 = L_42;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = __this->get_pos_9();
		float L_46;
		L_46 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_45, L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_44, L_47, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_43, L_48, /*hidden argument*/NULL);
		// gameObjs[objNum].transform.position -= new Vector3(0, 0, -9f) * Time.deltaTime;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_49 = __this->get_gameObjs_4();
		int32_t L_50 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_49, L_50, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_51, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53 = L_52;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_53, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_55), (0.0f), (0.0f), (-9.0f), /*hidden argument*/NULL);
		float L_56;
		L_56 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_55, L_56, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_54, L_57, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_53, L_58, /*hidden argument*/NULL);
		// gameObjs[objNum].transform.localScale -= new Vector3(1f, 1f, 1f) * Time.deltaTime;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_59 = __this->get_gameObjs_4();
		int32_t L_60 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61;
		L_61 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_59, L_60, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_61, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63 = L_62;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_63, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_65), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		float L_66;
		L_66 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_65, L_66, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_64, L_67, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_63, L_68, /*hidden argument*/NULL);
		// timePassed += Time.deltaTime;
		float L_69 = __this->get_timePassed_6();
		float L_70;
		L_70 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timePassed_6(((float)il2cpp_codegen_add((float)L_69, (float)L_70)));
		// if (timePassed >= 1.0f)
		float L_71 = __this->get_timePassed_6();
		if ((!(((float)L_71) >= ((float)(1.0f)))))
		{
			goto IL_02a9;
		}
	}
	{
		// processNum++;
		int32_t L_72 = __this->get_processNum_7();
		__this->set_processNum_7(((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1)));
		// delayComplete = false;
		__this->set_delayComplete_5((bool)0);
		// timePassed = 0;
		__this->set_timePassed_6((0.0f));
		// } else if(!delayComplete && processNum >= 60)
		return;
	}

IL_0220:
	{
		// } else if(!delayComplete && processNum >= 60)
		bool L_73 = __this->get_delayComplete_5();
		if (L_73)
		{
			goto IL_0239;
		}
	}
	{
		int32_t L_74 = __this->get_processNum_7();
		if ((((int32_t)L_74) < ((int32_t)((int32_t)60))))
		{
			goto IL_0239;
		}
	}
	{
		// SceneManager.LoadScene(5);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(5, /*hidden argument*/NULL);
		// } else if(!delayComplete && processNum < 60)
		return;
	}

IL_0239:
	{
		// } else if(!delayComplete && processNum < 60)
		bool L_75 = __this->get_delayComplete_5();
		if (L_75)
		{
			goto IL_02a9;
		}
	}
	{
		int32_t L_76 = __this->get_processNum_7();
		if ((((int32_t)L_76) >= ((int32_t)((int32_t)60))))
		{
			goto IL_02a9;
		}
	}
	{
		// timePassed += Time.deltaTime;
		float L_77 = __this->get_timePassed_6();
		float L_78;
		L_78 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timePassed_6(((float)il2cpp_codegen_add((float)L_77, (float)L_78)));
		// if(timePassed >= 1.0f)
		float L_79 = __this->get_timePassed_6();
		if ((!(((float)L_79) >= ((float)(1.0f)))))
		{
			goto IL_02a9;
		}
	}
	{
		// if (processNum % 2 == 0)
		int32_t L_80 = __this->get_processNum_7();
		if (((int32_t)((int32_t)L_80%(int32_t)2)))
		{
			goto IL_0297;
		}
	}
	{
		// pos = gameObjs[processNum / 2].transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_81 = __this->get_gameObjs_4();
		int32_t L_82 = __this->get_processNum_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83;
		L_83 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_81, ((int32_t)((int32_t)L_82/(int32_t)2)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84;
		L_84 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_83, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		L_85 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_84, /*hidden argument*/NULL);
		__this->set_pos_9(L_85);
	}

IL_0297:
	{
		// timePassed = 0;
		__this->set_timePassed_6((0.0f));
		// delayComplete = true;
		__this->set_delayComplete_5((bool)1);
	}

IL_02a9:
	{
		// }
		return;
	}
}
// System.Void StartMemGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMemGame__ctor_mF35038B49A9237A9F9B5D1A480CB0813B0D4910E (StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> objsWithoutCurr = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_objsWithoutCurr_8(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Test::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_Start_m4D6FA0B24EBFD6471F4596A93EC95EC1EB5355D8 (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// text.text = Screen.width.ToString() + ", " + Screen.height.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_4();
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void Test::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_Update_m85FFE4CC559D42AAFA74D4DEAE19415052BB70D0 (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test__ctor_m1C2B5E11A339FD79C0C458FB86723E5F2B74545C (Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator Timer::DelayBetween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Timer_DelayBetween_m7D88B54EAB4C54510C816DF7EB4024F8883FF1F7 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF * L_0 = (U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF *)il2cpp_codegen_object_new(U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF_il2cpp_TypeInfo_var);
		U3CDelayBetweenU3Ed__3__ctor_mEBEF3AA67218FEBDAE56F404F0222A04C139DFC2(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_mF356578A412E0D4BE318BC567718C7DBD90E05F0 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// currScale = timerBar.transform.localScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_timerBar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		__this->set_currScale_5(L_2);
		// }
		return;
	}
}
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_m336594DF06E073C9CC317142E46E02AFC94A026C (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float ratio = (Time.deltaTime / maxTime);
		float L_0;
		L_0 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_1 = __this->get_maxTime_6();
		V_0 = ((float)((float)L_0/(float)L_1));
		// if (timerBar.transform.localScale.x > 0)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_timerBar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		// Vector3 scaleChange = new Vector3(ratio * currScale.x, 0.0f, 0.0f);
		float L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_currScale_5();
		float L_8 = L_7->get_x_2();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_8)), (0.0f), (0.0f), /*hidden argument*/NULL);
		// timerBar.transform.localScale -= scaleChange;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_timerBar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_13, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_11, L_14, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0064:
	{
		// timerBar.transform.localScale = currScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_timerBar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_currScale_5();
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_16, L_17, /*hidden argument*/NULL);
		// StartCoroutine(DelayBetween());
		RuntimeObject* L_18;
		L_18 = Timer_DelayBetween_m7D88B54EAB4C54510C816DF7EB4024F8883FF1F7(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_19;
		L_19 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m74709038BC88FE71F7D6C06D0FF352FBE17410E8 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// public float maxTime = 1.5f;
		__this->set_maxTime_6((1.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIOnHoverEvent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIOnHoverEvent_Start_m7CE29466670FFBD14986F7A0E9A579CA16740B48 (UIOnHoverEvent_t4F6B07075E80E41FF582B7C4B49BE592E3524163 * __this, const RuntimeMethod* method)
{
	{
		// cachedScale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_0, /*hidden argument*/NULL);
		__this->set_cachedScale_4(L_1);
		// }
		return;
	}
}
// System.Void UIOnHoverEvent::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIOnHoverEvent_OnPointerEnter_m15320B84CF5CB2A6FC5A6E3070FD747D45F703D3 (UIOnHoverEvent_t4F6B07075E80E41FF582B7C4B49BE592E3524163 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (1.5f), (1.5f), (1.5f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIOnHoverEvent::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIOnHoverEvent_OnPointerExit_m678A8D86D54A1CCCC859D4488F0087BBBBA00100 (UIOnHoverEvent_t4F6B07075E80E41FF582B7C4B49BE592E3524163 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// transform.localScale = cachedScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_cachedScale_4();
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIOnHoverEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIOnHoverEvent__ctor_m26E1460BB9C4A1457524F22ABE391A422C3D8FB5 (UIOnHoverEvent_t4F6B07075E80E41FF582B7C4B49BE592E3524163 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Intro/<Delay>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__1__ctor_m56AD78AEF83952568B7542437B9A564592663F90 (U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Intro/<Delay>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__1_System_IDisposable_Dispose_m309E1455407A1F455695F8A530CDE1EBD62DD142 (U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Intro/<Delay>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayU3Ed__1_MoveNext_mB20BE6402B58FA8EC4A5A5F73B034E7D1F39010F (U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// changeScene = true;
		Intro_t9B834997AA07101F349C32CFBD224C75E3E821A5 * L_5 = V_1;
		L_5->set_changeScene_4((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object Intro/<Delay>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFA111F0F84CE235F07DC8E7E1BC1FC9A998376DC (U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Intro/<Delay>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__1_System_Collections_IEnumerator_Reset_m2E17B335AE13EAD877851F1A7376EF2CEA2917B5 (U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayU3Ed__1_System_Collections_IEnumerator_Reset_m2E17B335AE13EAD877851F1A7376EF2CEA2917B5_RuntimeMethod_var)));
	}
}
// System.Object Intro/<Delay>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayU3Ed__1_System_Collections_IEnumerator_get_Current_mDE4407BD962EE54FF38D56E26A6B877D35758A21 (U3CDelayU3Ed__1_t906D72A411ABA2B52E1F82EC219AA031D5EA52DA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RecallGame/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDC46415D1F65FEC7E62DFB562616E12B20F7F452 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3 * L_0 = (U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3 *)il2cpp_codegen_object_new(U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF3CDF5E1B05FB73F9E28097AE82DA022B8628005(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void RecallGame/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF3CDF5E1B05FB73F9E28097AE82DA022B8628005 (U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single RecallGame/<>c::<Instantiate>b__20_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CInstantiateU3Eb__20_0_m89106FCE2D6BD5F69BF9E0748CA7F8CF6A8094CE (U3CU3Ec_tF4687609CDE3780DC9325582B6AD3F64CA0F05F3 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		// orderOfImgs = orderOfImgs.OrderBy(x => Random.value).ToList();
		float L_0;
		L_0 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RecallGame/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mB13090906D61A48F30EC28A5FE4D933102EF6AC1 (U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RecallGame/<>c__DisplayClass20_0::<Instantiate>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CInstantiateU3Eb__1_m170F9740145A1A27C18C3F31FF9A08A52E73AE2A (U3CU3Ec__DisplayClass20_0_t782B257A02F37A8D04D06836322562770CC6C727 * __this, const RuntimeMethod* method)
{
	{
		// button.onClick.AddListener(() => onClick(button));
		RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * L_0 = __this->get_U3CU3E4__this_1();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_button_0();
		RecallGame_onClick_m3340D78E9669165E6DF0DCC76AB39777F6C5B5C2(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RecallGame/<Delay>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__18__ctor_m7189709945CBF4FE520378B974532A1F2DE9A39A (U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RecallGame/<Delay>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__18_System_IDisposable_Dispose_mE11E1A51BD24A7ABBA497BC136861CD48829B895 (U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean RecallGame/<Delay>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayU3Ed__18_MoveNext_mFD043516CF81092CB37E46962DCA975862FBEE42 (U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(5.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// startGame = true;
		RecallGame_t73B3216DE44301E8FD22BCF47E3E5B4E9670479E * L_5 = V_1;
		L_5->set_startGame_4((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object RecallGame/<Delay>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD26F54273DC7E03101AE9D5C9AC3C11220B797D3 (U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RecallGame/<Delay>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__18_System_Collections_IEnumerator_Reset_m6A0FB2B1F6C3546FFB8A132E6BB6BAEC29959247 (U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayU3Ed__18_System_Collections_IEnumerator_Reset_m6A0FB2B1F6C3546FFB8A132E6BB6BAEC29959247_RuntimeMethod_var)));
	}
}
// System.Object RecallGame/<Delay>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayU3Ed__18_System_Collections_IEnumerator_get_Current_m818E2972B36575028820F7147E6EC1208FF67903 (U3CDelayU3Ed__18_t20A4FA8380D4F9A21AA1FB036999D52A8F4E99D4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RecallInstructions/<Delay>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__3__ctor_mB9CD89EADD4517F6459675C88F7C91F990C99AE5 (U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RecallInstructions/<Delay>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__3_System_IDisposable_Dispose_m9F3AA00D887A23038C7272B123780429BEB5F9A9 (U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean RecallInstructions/<Delay>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayU3Ed__3_MoveNext_mA94072159DBA2F85911749E6C657F0F9DE592B2E (U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// start = true;
		RecallInstructions_t635107B5F62D2DD4A61A37AA550B25CEF33F9556 * L_5 = V_1;
		L_5->set_start_5((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object RecallInstructions/<Delay>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m709B2D130353A7D8BCC909E9C414FAB091E4D397 (U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RecallInstructions/<Delay>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__3_System_Collections_IEnumerator_Reset_m5961583FE2423CB0B3C7550AEC2D2466477A1FB0 (U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayU3Ed__3_System_Collections_IEnumerator_Reset_m5961583FE2423CB0B3C7550AEC2D2466477A1FB0_RuntimeMethod_var)));
	}
}
// System.Object RecallInstructions/<Delay>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayU3Ed__3_System_Collections_IEnumerator_get_Current_m2A05149D83C49889A6B18A4174149FF793CA558E (U3CDelayU3Ed__3_t9A607364C0B83E65D250DF1506B0032BEB15F317 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneChanger/<Fading>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadingU3Ed__3__ctor_m11338BF210E7A8A0574755400624A810E05EAA5C (U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SceneChanger/<Fading>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadingU3Ed__3_System_IDisposable_Dispose_m7FC3D16B18D46F6C7563EB35D0549F360E3449ED (U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SceneChanger/<Fading>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadingU3Ed__3_MoveNext_m1F87E6FC19D0D78859D3AFC3761916C6B490A30D (U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneChanger_U3CFadingU3Eb__3_0_m36803192F003B65AEC902E23620FB3D120B270A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DF2CCBF0C23E6CBBBED76FE900F12FCCDE36EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// anim.SetBool("fade", true);
		SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * L_4 = V_1;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = L_4->get_anim_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_5, _stringLiteral37DF2CCBF0C23E6CBBBED76FE900F12FCCDE36EC, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitUntil(() => GetComponent<SpriteRenderer>().color.a == 1);
		SceneChanger_t6A30EA4853DA52DBD1479ADCBE7B3B6952D1E068 * L_6 = V_1;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_7, L_6, (intptr_t)((intptr_t)SceneChanger_U3CFadingU3Eb__3_0_m36803192F003B65AEC902E23620FB3D120B270A9_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_8 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object SceneChanger/<Fading>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadingU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB1FB8F2982B51E9D6A8A731987E0304894E0042D (U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SceneChanger/<Fading>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadingU3Ed__3_System_Collections_IEnumerator_Reset_m26243911C5D4BE210C192E8883B9B45F85A31C87 (U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadingU3Ed__3_System_Collections_IEnumerator_Reset_m26243911C5D4BE210C192E8883B9B45F85A31C87_RuntimeMethod_var)));
	}
}
// System.Object SceneChanger/<Fading>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadingU3Ed__3_System_Collections_IEnumerator_get_Current_m91D427C6490FA14F7D05C44C0EDA8F59F6647248 (U3CFadingU3Ed__3_t6D28ECC33EA99EC6509C1FE630F6FE2012BF5233 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShapeSpawner/<WaitForSpawn>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSpawnU3Ed__26__ctor_mAFE4173C93A3F1CE5982A512C3B80D74F3FA8B2C (U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ShapeSpawner/<WaitForSpawn>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSpawnU3Ed__26_System_IDisposable_Dispose_mAAD16DDC533ABC7F1A01A0457761B5723394F937 (U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ShapeSpawner/<WaitForSpawn>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForSpawnU3Ed__26_MoveNext_m50CFC7E9FDA9196E2F1F517A89D1622BB0B82B9D (U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// beginSpawn = true;
		ShapeSpawner_tE0FB6AB33415BABCCE287A57CB6065D067642705 * L_5 = V_1;
		L_5->set_beginSpawn_5((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object ShapeSpawner/<WaitForSpawn>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForSpawnU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8628426F39072DAEA4D921D0B8E617CB6FE10E27 (U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ShapeSpawner/<WaitForSpawn>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSpawnU3Ed__26_System_Collections_IEnumerator_Reset_m5492C2E60685CF6C5B43088A77D5238099DBA122 (U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForSpawnU3Ed__26_System_Collections_IEnumerator_Reset_m5492C2E60685CF6C5B43088A77D5238099DBA122_RuntimeMethod_var)));
	}
}
// System.Object ShapeSpawner/<WaitForSpawn>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForSpawnU3Ed__26_System_Collections_IEnumerator_get_Current_m0B1DB0DC8E71DF48B38BADF03930D9CB9AFDC720 (U3CWaitForSpawnU3Ed__26_t61A5BCDCCA6AD8D4C01C71AE46FC13A416051822 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartMemGame/<Delay>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__7__ctor_m456B463304B6E2027E556748BD06107471D836A2 (U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void StartMemGame/<Delay>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__7_System_IDisposable_Dispose_mC8345F24E7FC3E5E46615B2547AB17DBF6D761BB (U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean StartMemGame/<Delay>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayU3Ed__7_MoveNext_m13C9963A3A00954B6E2B2A83B82D28BE17769B79 (U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// delayComplete = true;
		StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * L_5 = V_1;
		L_5->set_delayComplete_5((bool)1);
		// objsWithoutCurr = gameObjs;
		StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * L_6 = V_1;
		StartMemGame_t86134C339D37C0D68B1ABC73CE456F663CBA5D5C * L_7 = V_1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = L_7->get_gameObjs_4();
		L_6->set_objsWithoutCurr_8(L_8);
		// }
		return (bool)0;
	}
}
// System.Object StartMemGame/<Delay>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCB6BB0FA9520938F5BFE649C32BB143CCEBE0D1B (U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void StartMemGame/<Delay>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayU3Ed__7_System_Collections_IEnumerator_Reset_mB59BBC04F529836DF58B5D254170F5A50A130681 (U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayU3Ed__7_System_Collections_IEnumerator_Reset_mB59BBC04F529836DF58B5D254170F5A50A130681_RuntimeMethod_var)));
	}
}
// System.Object StartMemGame/<Delay>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayU3Ed__7_System_Collections_IEnumerator_get_Current_mB1454E4B23F1AABC118BBB57E7F66DA9A476A180 (U3CDelayU3Ed__7_tC9E4FFE01F75921584C8F695051697D43B66F620 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Timer/<DelayBetween>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayBetweenU3Ed__3__ctor_mEBEF3AA67218FEBDAE56F404F0222A04C139DFC2 (U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Timer/<DelayBetween>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayBetweenU3Ed__3_System_IDisposable_Dispose_mE4848387607B6B9CFBC86F4F0C5A134091CE91AE (U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Timer/<DelayBetween>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayBetweenU3Ed__3_MoveNext_mFD9AFA21EE27A11228B09984F4C279CFAC54CB6D (U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object Timer/<DelayBetween>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayBetweenU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA2C8DE6AB7AE935C22CBACCCFCE59593AC02E4E1 (U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Timer/<DelayBetween>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayBetweenU3Ed__3_System_Collections_IEnumerator_Reset_mE4F0D4A7D240720A5B9D45C1E219FE878A0B814B (U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayBetweenU3Ed__3_System_Collections_IEnumerator_Reset_mE4F0D4A7D240720A5B9D45C1E219FE878A0B814B_RuntimeMethod_var)));
	}
}
// System.Object Timer/<DelayBetween>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayBetweenU3Ed__3_System_Collections_IEnumerator_get_Current_m3712ACD59B6A36696EB78874B517F584C8C9F4F4 (U3CDelayBetweenU3Ed__3_tFC185DFC2E7C7B04FA61045144062EC983B488FF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method)
{
	{
		// return m_Value;
		int32_t L_0 = __this->get_m_Value_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method)
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = __this->get_m_Text_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Sprite; }
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_m_Sprite_37();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
