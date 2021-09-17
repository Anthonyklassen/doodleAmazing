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

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32Enum>>
struct Action_1_t3F33BA23F48680C33B0548529D71272BDA538F34;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<Firebase.DependencyStatus>
struct TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF;
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
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
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E;
// UnityEngine.UI.AspectRatioFitter
struct AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CaptureImage
struct CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DontDestroy
struct DontDestroy_t13C147FA457B88ED65FCFCC5D20DECEDAFB7F26D;
// FirebaseInit
struct FirebaseInit_t492C94AB7382A5B89864B2AA462E8C3E79298544;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GenerateDefaultMaze
struct GenerateDefaultMaze_t22E38CB3C08BDA885F8017BFB1FCA8C78A0AF533;
// GenerateMaze
struct GenerateMaze_tB60FF351F841496FC4ECA8848E6E5AAB1B82E4AD;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// ItemDetails
struct ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936;
// ListCreator
struct ListCreator_t4F758936C98D1C41C7185A9A830A745860C001A2;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MoveController
struct MoveController_t7BF45911D54A4C24CDE06C2AE40D0B0E6FD5AE21;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// TakePhoto
struct TakePhoto_tFF86D1D0CDD1478215F793E43903986781387DCE;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Timer
struct Timer_t32ADF3155A88C37628B80D227C821651666DD405;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIController
struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// Victory
struct Victory_t838077B02EFDB081190078B614A641B3A2EA4F2E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WebCamTexture
struct WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62;
// WinGoal
struct WinGoal_tC58A3147999A033909927F85431A09C59DE909A7;
// WinTutorial
struct WinTutorial_tA3BE4752AA8CB4AB23AC87443A8C3B829F84EE7B;
// FirebaseInit/<>c
struct U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAnalytics_tD795458723B5E379F9A54AD400832DE6A96369A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral00676896B649BB017B6DB444D5927788CF7E6EF2;
IL2CPP_EXTERN_C String_t* _stringLiteral0F4C54CDA5F09B3A18F779B2956E4AA1A294FE82;
IL2CPP_EXTERN_C String_t* _stringLiteral126228D40E4B44C2450E1391A5CBBAB8D2E4E9D9;
IL2CPP_EXTERN_C String_t* _stringLiteral13692F0C568791E2AC25422982AE54A34EAD7010;
IL2CPP_EXTERN_C String_t* _stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteral43D9F7275E270582D83C15A95CEE78A24DFA363A;
IL2CPP_EXTERN_C String_t* _stringLiteral44AA1015A62DF9D5C0D580A7C81DAD04F25B39A9;
IL2CPP_EXTERN_C String_t* _stringLiteral4B327EFA753C76E405A89EF912A90ADEA0B617CA;
IL2CPP_EXTERN_C String_t* _stringLiteral5955F36E723A50D5EE1B4F509B72AE31E331BB07;
IL2CPP_EXTERN_C String_t* _stringLiteral678D8BAD1753BD3ED0E3098E4B84C7BE2CD256D4;
IL2CPP_EXTERN_C String_t* _stringLiteral6FBBB7F137687266D4932C11856F0D3BD149954F;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral901D1356B178132318EA2EF49CBB053FFB1AFC15;
IL2CPP_EXTERN_C String_t* _stringLiteral919D699294DB1AB213E0B3ACB4B93FA9A57FDE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralA4DE8697793F6E6DB3E4DC7C6D332B3E007CE583;
IL2CPP_EXTERN_C String_t* _stringLiteralBCFB79292511F9C00336E5826B278A1B73D3766E;
IL2CPP_EXTERN_C String_t* _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralC5394559D3C47AFA7C02EA7CC33C5D30E9191046;
IL2CPP_EXTERN_C String_t* _stringLiteralC92FBE0E65ECB6D36FC220FE483E4D1E395897EE;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCF77E7B86CB9C737A2C73A8E261849D8BD9AF725;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralFE487FDEBA312AD122C49C8A51541A377AC77428;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m9FCBC7F226B662953885B20040A51C363F1B2643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936_m6779064920309BF36BE81A7A66E48A6151F6F7FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_mF8709846EB76DCB02B5D666D68B03FE6A0028289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_mF521FDD80E8C5426126BF14DC991A7C5E7332750_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 ;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E;

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

struct Il2CppArrayBounds;

// System.Array


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

// FirebaseInit/<>c
struct  U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_StaticFields
{
public:
	// FirebaseInit/<>c FirebaseInit/<>c::<>9
	U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6 * ___U3CU3E9_0;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> FirebaseInit/<>c::<>9__0_0
	Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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


// UnityEngine.Collision
struct  Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Rigidbody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
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

// Firebase.DependencyStatus
struct  DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13 
{
public:
	// System.Int32 Firebase.DependencyStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.FilterMode
struct  FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19, ___value___2)); }
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

// UnityEngine.RigidbodyConstraints
struct  RigidbodyConstraints_tB1AC534C460083518E5C8664CE62334E3B5A0F97 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyConstraints_tB1AC534C460083518E5C8664CE62334E3B5A0F97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.WebCamKind
struct  WebCamKind_t27EA4C0DCCBC088C1C35CC9BB08F0BCF22A890F2 
{
public:
	// System.Int32 UnityEngine.WebCamKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebCamKind_t27EA4C0DCCBC088C1C35CC9BB08F0BCF22A890F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.AspectRatioFitter/AspectMode
struct  AspectMode_t36213FA489787D7A0D888D00CD344AD5349CD563 
{
public:
	// System.Int32 UnityEngine.UI.AspectRatioFitter/AspectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AspectMode_t36213FA489787D7A0D888D00CD344AD5349CD563, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct  Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
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


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// UnityEngine.WebCamDevice
struct  WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.WebCamDevice::m_DepthCameraName
	String_t* ___m_DepthCameraName_1;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_2;
	// UnityEngine.WebCamKind UnityEngine.WebCamDevice::m_Kind
	int32_t ___m_Kind_3;
	// UnityEngine.Resolution[] UnityEngine.WebCamDevice::m_Resolutions
	ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* ___m_Resolutions_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthCameraName_1() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_DepthCameraName_1)); }
	inline String_t* get_m_DepthCameraName_1() const { return ___m_DepthCameraName_1; }
	inline String_t** get_address_of_m_DepthCameraName_1() { return &___m_DepthCameraName_1; }
	inline void set_m_DepthCameraName_1(String_t* value)
	{
		___m_DepthCameraName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DepthCameraName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_Kind_3() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Kind_3)); }
	inline int32_t get_m_Kind_3() const { return ___m_Kind_3; }
	inline int32_t* get_address_of_m_Kind_3() { return &___m_Kind_3; }
	inline void set_m_Kind_3(int32_t value)
	{
		___m_Kind_3 = value;
	}

	inline static int32_t get_offset_of_m_Resolutions_4() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Resolutions_4)); }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* get_m_Resolutions_4() const { return ___m_Resolutions_4; }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597** get_address_of_m_Resolutions_4() { return &___m_Resolutions_4; }
	inline void set_m_Resolutions_4(ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* value)
	{
		___m_Resolutions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resolutions_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * ___m_Resolutions_4;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * ___m_Resolutions_4;
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct  Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0  : public MulticastDelegate_t
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


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.WebCamTexture
struct  WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// UnityEngine.RectTransform
struct  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// CameraController
struct  CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.WebCamTexture CameraController::mCamera
	WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * ___mCamera_4;
	// UnityEngine.GameObject CameraController::plane
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___plane_5;

public:
	inline static int32_t get_offset_of_mCamera_4() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___mCamera_4)); }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * get_mCamera_4() const { return ___mCamera_4; }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 ** get_address_of_mCamera_4() { return &___mCamera_4; }
	inline void set_mCamera_4(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * value)
	{
		___mCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of_plane_5() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___plane_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_plane_5() const { return ___plane_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_plane_5() { return &___plane_5; }
	inline void set_plane_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___plane_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plane_5), (void*)value);
	}
};


// CaptureImage
struct  CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.RawImage CaptureImage::image
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___image_4;
	// UnityEngine.UI.RawImage CaptureImage::textureImage
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___textureImage_5;
	// UnityEngine.Texture2D CaptureImage::doodlePhoto
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___doodlePhoto_6;
	// UnityEngine.RectTransform CaptureImage::imageParent
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___imageParent_7;
	// UnityEngine.UI.AspectRatioFitter CaptureImage::imageFitter
	AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * ___imageFitter_8;
	// UnityEngine.GameObject CaptureImage::shutterButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shutterButton_9;
	// UnityEngine.UI.Text CaptureImage::title
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___title_10;
	// UnityEngine.GameObject CaptureImage::useImagePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___useImagePanel_11;
	// UnityEngine.GameObject CaptureImage::menuButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menuButton_12;
	// UnityEngine.Vector3 CaptureImage::rotationVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotationVector_13;
	// UnityEngine.Rect CaptureImage::defaultRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___defaultRect_14;
	// UnityEngine.Rect CaptureImage::fixedRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___fixedRect_15;
	// UnityEngine.WebCamTexture CaptureImage::cameraTexture
	WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * ___cameraTexture_16;

public:
	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___image_4)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_image_4() const { return ___image_4; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_4), (void*)value);
	}

	inline static int32_t get_offset_of_textureImage_5() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___textureImage_5)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_textureImage_5() const { return ___textureImage_5; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_textureImage_5() { return &___textureImage_5; }
	inline void set_textureImage_5(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___textureImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_doodlePhoto_6() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___doodlePhoto_6)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_doodlePhoto_6() const { return ___doodlePhoto_6; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_doodlePhoto_6() { return &___doodlePhoto_6; }
	inline void set_doodlePhoto_6(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___doodlePhoto_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___doodlePhoto_6), (void*)value);
	}

	inline static int32_t get_offset_of_imageParent_7() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___imageParent_7)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_imageParent_7() const { return ___imageParent_7; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_imageParent_7() { return &___imageParent_7; }
	inline void set_imageParent_7(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___imageParent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageParent_7), (void*)value);
	}

	inline static int32_t get_offset_of_imageFitter_8() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___imageFitter_8)); }
	inline AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * get_imageFitter_8() const { return ___imageFitter_8; }
	inline AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 ** get_address_of_imageFitter_8() { return &___imageFitter_8; }
	inline void set_imageFitter_8(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * value)
	{
		___imageFitter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageFitter_8), (void*)value);
	}

	inline static int32_t get_offset_of_shutterButton_9() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___shutterButton_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shutterButton_9() const { return ___shutterButton_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shutterButton_9() { return &___shutterButton_9; }
	inline void set_shutterButton_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shutterButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shutterButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_title_10() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___title_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_title_10() const { return ___title_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_title_10() { return &___title_10; }
	inline void set_title_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___title_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_10), (void*)value);
	}

	inline static int32_t get_offset_of_useImagePanel_11() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___useImagePanel_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_useImagePanel_11() const { return ___useImagePanel_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_useImagePanel_11() { return &___useImagePanel_11; }
	inline void set_useImagePanel_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___useImagePanel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___useImagePanel_11), (void*)value);
	}

	inline static int32_t get_offset_of_menuButton_12() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___menuButton_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_menuButton_12() const { return ___menuButton_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_menuButton_12() { return &___menuButton_12; }
	inline void set_menuButton_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___menuButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_rotationVector_13() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___rotationVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotationVector_13() const { return ___rotationVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotationVector_13() { return &___rotationVector_13; }
	inline void set_rotationVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotationVector_13 = value;
	}

	inline static int32_t get_offset_of_defaultRect_14() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___defaultRect_14)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_defaultRect_14() const { return ___defaultRect_14; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_defaultRect_14() { return &___defaultRect_14; }
	inline void set_defaultRect_14(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___defaultRect_14 = value;
	}

	inline static int32_t get_offset_of_fixedRect_15() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___fixedRect_15)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_fixedRect_15() const { return ___fixedRect_15; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_fixedRect_15() { return &___fixedRect_15; }
	inline void set_fixedRect_15(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___fixedRect_15 = value;
	}

	inline static int32_t get_offset_of_cameraTexture_16() { return static_cast<int32_t>(offsetof(CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9, ___cameraTexture_16)); }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * get_cameraTexture_16() const { return ___cameraTexture_16; }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 ** get_address_of_cameraTexture_16() { return &___cameraTexture_16; }
	inline void set_cameraTexture_16(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * value)
	{
		___cameraTexture_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraTexture_16), (void*)value);
	}
};


// DontDestroy
struct  DontDestroy_t13C147FA457B88ED65FCFCC5D20DECEDAFB7F26D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// FirebaseInit
struct  FirebaseInit_t492C94AB7382A5B89864B2AA462E8C3E79298544  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GenerateDefaultMaze
struct  GenerateDefaultMaze_t22E38CB3C08BDA885F8017BFB1FCA8C78A0AF533  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D[] GenerateDefaultMaze::images
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___images_4;
	// UnityEngine.Texture2D GenerateDefaultMaze::image
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image_5;
	// UnityEngine.UI.RawImage GenerateDefaultMaze::doodle
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___doodle_6;
	// UnityEngine.GameObject GenerateDefaultMaze::wallObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wallObject_7;
	// UnityEngine.GameObject GenerateDefaultMaze::groundObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___groundObject_8;
	// UnityEngine.GameObject GenerateDefaultMaze::ballObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ballObject_9;
	// UnityEngine.GameObject GenerateDefaultMaze::goalObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___goalObject_10;

public:
	inline static int32_t get_offset_of_images_4() { return static_cast<int32_t>(offsetof(GenerateDefaultMaze_t22E38CB3C08BDA885F8017BFB1FCA8C78A0AF533, ___images_4)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_images_4() const { return ___images_4; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_images_4() { return &___images_4; }
	inline void set_images_4(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___images_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___images_4), (void*)value);
	}

	inline static int32_t get_offset_of_image_5() { return static_cast<int32_t>(offsetof(GenerateDefaultMaze_t22E38CB3C08BDA885F8017BFB1FCA8C78A0AF533, ___image_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_image_5() const { return ___image_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_image_5() { return &___image_5; }
	inline void set_image_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___image_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_5), (void*)value);
	}

	inline static int32_t get_offset_of_doodle_6() { return static_cast<int32_t>(offsetof(GenerateDefaultMaze_t22E38CB3C08BDA885F8017BFB1FCA8C78A0AF533, ___doodle_6)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_doodle_6() const { return ___doodle_6; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_doodle_6() { return &___doodle_6; }
	inline void set_doodle_6(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___doodle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___doodle_6), (void*)value);
	}

	inline static int32_t get_offset_of_wallObject_7() { return static_cast<int32_t>(offsetof(GenerateDefaultMaze_t22E38CB3C08BDA885F8017BFB1FCA8C78A0AF533, ___wallObject_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wallObject_7() const { return ___wallObject_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wallObject_7() { return &___wallObject_7; }
	inline void set_wallObject_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wallObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallObject_7), (void*)value);
	}

	inline static int32_t get_offset_of_groundObject_8() { return static_cast<int32_t>(offsetof(GenerateDefaultMaze_t22E38CB3C08BDA885F8017BFB1FCA8C78A0AF533, ___groundObject_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_groundObject_8() const { return ___groundObject_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_groundObject_8() { return &___groundObject_8; }
	inline void set_groundObject_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___groundObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundObject_8), (void*)value);
	}

	inline static int32_t get_offset_of_ballObject_9() { return static_cast<int32_t>(offsetof(GenerateDefaultMaze_t22E38CB3C08BDA885F8017BFB1FCA8C78A0AF533, ___ballObject_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ballObject_9() const { return ___ballObject_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ballObject_9() { return &___ballObject_9; }
	inline void set_ballObject_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ballObject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ballObject_9), (void*)value);
	}

	inline static int32_t get_offset_of_goalObject_10() { return static_cast<int32_t>(offsetof(GenerateDefaultMaze_t22E38CB3C08BDA885F8017BFB1FCA8C78A0AF533, ___goalObject_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_goalObject_10() const { return ___goalObject_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_goalObject_10() { return &___goalObject_10; }
	inline void set_goalObject_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___goalObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goalObject_10), (void*)value);
	}
};


// GenerateMaze
struct  GenerateMaze_tB60FF351F841496FC4ECA8848E6E5AAB1B82E4AD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D[] GenerateMaze::images
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___images_4;
	// UnityEngine.Texture2D GenerateMaze::image
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image_5;
	// UnityEngine.UI.RawImage GenerateMaze::doodle
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___doodle_6;
	// System.Byte[] GenerateMaze::imageData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___imageData_7;
	// UnityEngine.GameObject GenerateMaze::wallObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wallObject_8;
	// UnityEngine.GameObject GenerateMaze::groundObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___groundObject_9;
	// UnityEngine.GameObject GenerateMaze::ballObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ballObject_10;
	// UnityEngine.GameObject GenerateMaze::goalObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___goalObject_11;

public:
	inline static int32_t get_offset_of_images_4() { return static_cast<int32_t>(offsetof(GenerateMaze_tB60FF351F841496FC4ECA8848E6E5AAB1B82E4AD, ___images_4)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_images_4() const { return ___images_4; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_images_4() { return &___images_4; }
	inline void set_images_4(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___images_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___images_4), (void*)value);
	}

	inline static int32_t get_offset_of_image_5() { return static_cast<int32_t>(offsetof(GenerateMaze_tB60FF351F841496FC4ECA8848E6E5AAB1B82E4AD, ___image_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_image_5() const { return ___image_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_image_5() { return &___image_5; }
	inline void set_image_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___image_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_5), (void*)value);
	}

	inline static int32_t get_offset_of_doodle_6() { return static_cast<int32_t>(offsetof(GenerateMaze_tB60FF351F841496FC4ECA8848E6E5AAB1B82E4AD, ___doodle_6)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_doodle_6() const { return ___doodle_6; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_doodle_6() { return &___doodle_6; }
	inline void set_doodle_6(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___doodle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___doodle_6), (void*)value);
	}

	inline static int32_t get_offset_of_imageData_7() { return static_cast<int32_t>(offsetof(GenerateMaze_tB60FF351F841496FC4ECA8848E6E5AAB1B82E4AD, ___imageData_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_imageData_7() const { return ___imageData_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_imageData_7() { return &___imageData_7; }
	inline void set_imageData_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___imageData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageData_7), (void*)value);
	}

	inline static int32_t get_offset_of_wallObject_8() { return static_cast<int32_t>(offsetof(GenerateMaze_tB60FF351F841496FC4ECA8848E6E5AAB1B82E4AD, ___wallObject_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wallObject_8() const { return ___wallObject_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wallObject_8() { return &___wallObject_8; }
	inline void set_wallObject_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wallObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallObject_8), (void*)value);
	}

	inline static int32_t get_offset_of_groundObject_9() { return static_cast<int32_t>(offsetof(GenerateMaze_tB60FF351F841496FC4ECA8848E6E5AAB1B82E4AD, ___groundObject_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_groundObject_9() const { return ___groundObject_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_groundObject_9() { return &___groundObject_9; }
	inline void set_groundObject_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___groundObject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundObject_9), (void*)value);
	}

	inline static int32_t get_offset_of_ballObject_10() { return static_cast<int32_t>(offsetof(GenerateMaze_tB60FF351F841496FC4ECA8848E6E5AAB1B82E4AD, ___ballObject_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ballObject_10() const { return ___ballObject_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ballObject_10() { return &___ballObject_10; }
	inline void set_ballObject_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ballObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ballObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_goalObject_11() { return static_cast<int32_t>(offsetof(GenerateMaze_tB60FF351F841496FC4ECA8848E6E5AAB1B82E4AD, ___goalObject_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_goalObject_11() const { return ___goalObject_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_goalObject_11() { return &___goalObject_11; }
	inline void set_goalObject_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___goalObject_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goalObject_11), (void*)value);
	}
};


// ItemDetails
struct  ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ItemDetails::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_4;
	// UnityEngine.UI.Text ItemDetails::description
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___description_5;
	// UnityEngine.UI.Image ItemDetails::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_6;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936, ___text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_4() const { return ___text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}

	inline static int32_t get_offset_of_description_5() { return static_cast<int32_t>(offsetof(ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936, ___description_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_description_5() const { return ___description_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_description_5() { return &___description_5; }
	inline void set_description_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___description_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_5), (void*)value);
	}

	inline static int32_t get_offset_of_image_6() { return static_cast<int32_t>(offsetof(ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936, ___image_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_6() const { return ___image_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_6() { return &___image_6; }
	inline void set_image_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_6), (void*)value);
	}
};


// ListCreator
struct  ListCreator_t4F758936C98D1C41C7185A9A830A745860C001A2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform ListCreator::SpawnPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___SpawnPoint_4;
	// UnityEngine.GameObject ListCreator::item
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item_5;
	// UnityEngine.RectTransform ListCreator::content
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___content_6;
	// System.Int32 ListCreator::numberOfItems
	int32_t ___numberOfItems_7;
	// System.String[] ListCreator::itemNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___itemNames_8;
	// System.String[] ListCreator::itemDescriptions
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___itemDescriptions_9;
	// UnityEngine.Sprite[] ListCreator::itemImages
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___itemImages_10;
	// System.Int32 ListCreator::listItemPixelHeight
	int32_t ___listItemPixelHeight_11;

public:
	inline static int32_t get_offset_of_SpawnPoint_4() { return static_cast<int32_t>(offsetof(ListCreator_t4F758936C98D1C41C7185A9A830A745860C001A2, ___SpawnPoint_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_SpawnPoint_4() const { return ___SpawnPoint_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_SpawnPoint_4() { return &___SpawnPoint_4; }
	inline void set_SpawnPoint_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___SpawnPoint_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpawnPoint_4), (void*)value);
	}

	inline static int32_t get_offset_of_item_5() { return static_cast<int32_t>(offsetof(ListCreator_t4F758936C98D1C41C7185A9A830A745860C001A2, ___item_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_item_5() const { return ___item_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_item_5() { return &___item_5; }
	inline void set_item_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___item_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_5), (void*)value);
	}

	inline static int32_t get_offset_of_content_6() { return static_cast<int32_t>(offsetof(ListCreator_t4F758936C98D1C41C7185A9A830A745860C001A2, ___content_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_content_6() const { return ___content_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_content_6() { return &___content_6; }
	inline void set_content_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___content_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberOfItems_7() { return static_cast<int32_t>(offsetof(ListCreator_t4F758936C98D1C41C7185A9A830A745860C001A2, ___numberOfItems_7)); }
	inline int32_t get_numberOfItems_7() const { return ___numberOfItems_7; }
	inline int32_t* get_address_of_numberOfItems_7() { return &___numberOfItems_7; }
	inline void set_numberOfItems_7(int32_t value)
	{
		___numberOfItems_7 = value;
	}

	inline static int32_t get_offset_of_itemNames_8() { return static_cast<int32_t>(offsetof(ListCreator_t4F758936C98D1C41C7185A9A830A745860C001A2, ___itemNames_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_itemNames_8() const { return ___itemNames_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_itemNames_8() { return &___itemNames_8; }
	inline void set_itemNames_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___itemNames_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemNames_8), (void*)value);
	}

	inline static int32_t get_offset_of_itemDescriptions_9() { return static_cast<int32_t>(offsetof(ListCreator_t4F758936C98D1C41C7185A9A830A745860C001A2, ___itemDescriptions_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_itemDescriptions_9() const { return ___itemDescriptions_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_itemDescriptions_9() { return &___itemDescriptions_9; }
	inline void set_itemDescriptions_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___itemDescriptions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemDescriptions_9), (void*)value);
	}

	inline static int32_t get_offset_of_itemImages_10() { return static_cast<int32_t>(offsetof(ListCreator_t4F758936C98D1C41C7185A9A830A745860C001A2, ___itemImages_10)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_itemImages_10() const { return ___itemImages_10; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_itemImages_10() { return &___itemImages_10; }
	inline void set_itemImages_10(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___itemImages_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemImages_10), (void*)value);
	}

	inline static int32_t get_offset_of_listItemPixelHeight_11() { return static_cast<int32_t>(offsetof(ListCreator_t4F758936C98D1C41C7185A9A830A745860C001A2, ___listItemPixelHeight_11)); }
	inline int32_t get_listItemPixelHeight_11() const { return ___listItemPixelHeight_11; }
	inline int32_t* get_address_of_listItemPixelHeight_11() { return &___listItemPixelHeight_11; }
	inline void set_listItemPixelHeight_11(int32_t value)
	{
		___listItemPixelHeight_11 = value;
	}
};


// MoveController
struct  MoveController_t7BF45911D54A4C24CDE06C2AE40D0B0E6FD5AE21  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MoveController::speed
	float ___speed_4;
	// UnityEngine.Rigidbody MoveController::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_5;
	// UnityEngine.GameObject MoveController::menuButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menuButton_6;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(MoveController_t7BF45911D54A4C24CDE06C2AE40D0B0E6FD5AE21, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(MoveController_t7BF45911D54A4C24CDE06C2AE40D0B0E6FD5AE21, ___rb_5)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}

	inline static int32_t get_offset_of_menuButton_6() { return static_cast<int32_t>(offsetof(MoveController_t7BF45911D54A4C24CDE06C2AE40D0B0E6FD5AE21, ___menuButton_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_menuButton_6() const { return ___menuButton_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_menuButton_6() { return &___menuButton_6; }
	inline void set_menuButton_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___menuButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuButton_6), (void*)value);
	}
};


// TakePhoto
struct  TakePhoto_tFF86D1D0CDD1478215F793E43903986781387DCE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean TakePhoto::camAvailable
	bool ___camAvailable_4;
	// UnityEngine.WebCamTexture TakePhoto::cameraTexture
	WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * ___cameraTexture_5;
	// UnityEngine.Texture TakePhoto::defaultBackground
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___defaultBackground_6;
	// UnityEngine.UI.RawImage TakePhoto::background
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___background_7;
	// UnityEngine.UI.AspectRatioFitter TakePhoto::fit
	AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * ___fit_8;
	// System.Boolean TakePhoto::frontFacing
	bool ___frontFacing_9;

public:
	inline static int32_t get_offset_of_camAvailable_4() { return static_cast<int32_t>(offsetof(TakePhoto_tFF86D1D0CDD1478215F793E43903986781387DCE, ___camAvailable_4)); }
	inline bool get_camAvailable_4() const { return ___camAvailable_4; }
	inline bool* get_address_of_camAvailable_4() { return &___camAvailable_4; }
	inline void set_camAvailable_4(bool value)
	{
		___camAvailable_4 = value;
	}

	inline static int32_t get_offset_of_cameraTexture_5() { return static_cast<int32_t>(offsetof(TakePhoto_tFF86D1D0CDD1478215F793E43903986781387DCE, ___cameraTexture_5)); }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * get_cameraTexture_5() const { return ___cameraTexture_5; }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 ** get_address_of_cameraTexture_5() { return &___cameraTexture_5; }
	inline void set_cameraTexture_5(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * value)
	{
		___cameraTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBackground_6() { return static_cast<int32_t>(offsetof(TakePhoto_tFF86D1D0CDD1478215F793E43903986781387DCE, ___defaultBackground_6)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_defaultBackground_6() const { return ___defaultBackground_6; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_defaultBackground_6() { return &___defaultBackground_6; }
	inline void set_defaultBackground_6(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___defaultBackground_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBackground_6), (void*)value);
	}

	inline static int32_t get_offset_of_background_7() { return static_cast<int32_t>(offsetof(TakePhoto_tFF86D1D0CDD1478215F793E43903986781387DCE, ___background_7)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_background_7() const { return ___background_7; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_background_7() { return &___background_7; }
	inline void set_background_7(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___background_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_7), (void*)value);
	}

	inline static int32_t get_offset_of_fit_8() { return static_cast<int32_t>(offsetof(TakePhoto_tFF86D1D0CDD1478215F793E43903986781387DCE, ___fit_8)); }
	inline AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * get_fit_8() const { return ___fit_8; }
	inline AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 ** get_address_of_fit_8() { return &___fit_8; }
	inline void set_fit_8(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * value)
	{
		___fit_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fit_8), (void*)value);
	}

	inline static int32_t get_offset_of_frontFacing_9() { return static_cast<int32_t>(offsetof(TakePhoto_tFF86D1D0CDD1478215F793E43903986781387DCE, ___frontFacing_9)); }
	inline bool get_frontFacing_9() const { return ___frontFacing_9; }
	inline bool* get_address_of_frontFacing_9() { return &___frontFacing_9; }
	inline void set_frontFacing_9(bool value)
	{
		___frontFacing_9 = value;
	}
};


// Timer
struct  Timer_t32ADF3155A88C37628B80D227C821651666DD405  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Timer::timerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerText_4;
	// System.Boolean Timer::isFinished
	bool ___isFinished_5;
	// System.Boolean Timer::isPaused
	bool ___isPaused_6;
	// System.Single Timer::startTime
	float ___startTime_7;
	// System.Single Timer::pausedTime
	float ___pausedTime_9;
	// System.String Timer::minutes
	String_t* ___minutes_10;
	// System.String Timer::seconds
	String_t* ___seconds_11;

public:
	inline static int32_t get_offset_of_timerText_4() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___timerText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerText_4() const { return ___timerText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerText_4() { return &___timerText_4; }
	inline void set_timerText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerText_4), (void*)value);
	}

	inline static int32_t get_offset_of_isFinished_5() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___isFinished_5)); }
	inline bool get_isFinished_5() const { return ___isFinished_5; }
	inline bool* get_address_of_isFinished_5() { return &___isFinished_5; }
	inline void set_isFinished_5(bool value)
	{
		___isFinished_5 = value;
	}

	inline static int32_t get_offset_of_isPaused_6() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___isPaused_6)); }
	inline bool get_isPaused_6() const { return ___isPaused_6; }
	inline bool* get_address_of_isPaused_6() { return &___isPaused_6; }
	inline void set_isPaused_6(bool value)
	{
		___isPaused_6 = value;
	}

	inline static int32_t get_offset_of_startTime_7() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___startTime_7)); }
	inline float get_startTime_7() const { return ___startTime_7; }
	inline float* get_address_of_startTime_7() { return &___startTime_7; }
	inline void set_startTime_7(float value)
	{
		___startTime_7 = value;
	}

	inline static int32_t get_offset_of_pausedTime_9() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___pausedTime_9)); }
	inline float get_pausedTime_9() const { return ___pausedTime_9; }
	inline float* get_address_of_pausedTime_9() { return &___pausedTime_9; }
	inline void set_pausedTime_9(float value)
	{
		___pausedTime_9 = value;
	}

	inline static int32_t get_offset_of_minutes_10() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___minutes_10)); }
	inline String_t* get_minutes_10() const { return ___minutes_10; }
	inline String_t** get_address_of_minutes_10() { return &___minutes_10; }
	inline void set_minutes_10(String_t* value)
	{
		___minutes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minutes_10), (void*)value);
	}

	inline static int32_t get_offset_of_seconds_11() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___seconds_11)); }
	inline String_t* get_seconds_11() const { return ___seconds_11; }
	inline String_t** get_address_of_seconds_11() { return &___seconds_11; }
	inline void set_seconds_11(String_t* value)
	{
		___seconds_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seconds_11), (void*)value);
	}
};

struct Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields
{
public:
	// System.Single Timer::currentTime
	float ___currentTime_8;

public:
	inline static int32_t get_offset_of_currentTime_8() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields, ___currentTime_8)); }
	inline float get_currentTime_8() const { return ___currentTime_8; }
	inline float* get_address_of_currentTime_8() { return &___currentTime_8; }
	inline void set_currentTime_8(float value)
	{
		___currentTime_8 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIController
struct  UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject UIController::menuPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menuPanel_4;
	// UnityEngine.GameObject UIController::menuButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menuButton_5;
	// UnityEngine.GameObject UIController::goalPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___goalPanel_6;
	// UnityEngine.GameObject UIController::tiltPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tiltPanel_7;
	// System.Int32 UIController::counter
	int32_t ___counter_8;

public:
	inline static int32_t get_offset_of_menuPanel_4() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___menuPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_menuPanel_4() const { return ___menuPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_menuPanel_4() { return &___menuPanel_4; }
	inline void set_menuPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___menuPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_menuButton_5() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___menuButton_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_menuButton_5() const { return ___menuButton_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_menuButton_5() { return &___menuButton_5; }
	inline void set_menuButton_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___menuButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_goalPanel_6() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___goalPanel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_goalPanel_6() const { return ___goalPanel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_goalPanel_6() { return &___goalPanel_6; }
	inline void set_goalPanel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___goalPanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goalPanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_tiltPanel_7() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___tiltPanel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tiltPanel_7() const { return ___tiltPanel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tiltPanel_7() { return &___tiltPanel_7; }
	inline void set_tiltPanel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tiltPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tiltPanel_7), (void*)value);
	}

	inline static int32_t get_offset_of_counter_8() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___counter_8)); }
	inline int32_t get_counter_8() const { return ___counter_8; }
	inline int32_t* get_address_of_counter_8() { return &___counter_8; }
	inline void set_counter_8(int32_t value)
	{
		___counter_8 = value;
	}
};


// Victory
struct  Victory_t838077B02EFDB081190078B614A641B3A2EA4F2E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Victory::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_4;
	// System.Single Victory::finalTime
	float ___finalTime_5;
	// System.String Victory::minutes
	String_t* ___minutes_6;
	// System.String Victory::seconds
	String_t* ___seconds_7;

public:
	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(Victory_t838077B02EFDB081190078B614A641B3A2EA4F2E, ___scoreText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_4), (void*)value);
	}

	inline static int32_t get_offset_of_finalTime_5() { return static_cast<int32_t>(offsetof(Victory_t838077B02EFDB081190078B614A641B3A2EA4F2E, ___finalTime_5)); }
	inline float get_finalTime_5() const { return ___finalTime_5; }
	inline float* get_address_of_finalTime_5() { return &___finalTime_5; }
	inline void set_finalTime_5(float value)
	{
		___finalTime_5 = value;
	}

	inline static int32_t get_offset_of_minutes_6() { return static_cast<int32_t>(offsetof(Victory_t838077B02EFDB081190078B614A641B3A2EA4F2E, ___minutes_6)); }
	inline String_t* get_minutes_6() const { return ___minutes_6; }
	inline String_t** get_address_of_minutes_6() { return &___minutes_6; }
	inline void set_minutes_6(String_t* value)
	{
		___minutes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minutes_6), (void*)value);
	}

	inline static int32_t get_offset_of_seconds_7() { return static_cast<int32_t>(offsetof(Victory_t838077B02EFDB081190078B614A641B3A2EA4F2E, ___seconds_7)); }
	inline String_t* get_seconds_7() const { return ___seconds_7; }
	inline String_t** get_address_of_seconds_7() { return &___seconds_7; }
	inline void set_seconds_7(String_t* value)
	{
		___seconds_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seconds_7), (void*)value);
	}
};


// WinGoal
struct  WinGoal_tC58A3147999A033909927F85431A09C59DE909A7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WinTutorial
struct  WinTutorial_tA3BE4752AA8CB4AB23AC87443A8C3B829F84EE7B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject WinTutorial::tiltPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tiltPanel_4;
	// UnityEngine.GameObject WinTutorial::scoringPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scoringPanel_5;
	// UnityEngine.GameObject WinTutorial::menuButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menuButton_6;

public:
	inline static int32_t get_offset_of_tiltPanel_4() { return static_cast<int32_t>(offsetof(WinTutorial_tA3BE4752AA8CB4AB23AC87443A8C3B829F84EE7B, ___tiltPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tiltPanel_4() const { return ___tiltPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tiltPanel_4() { return &___tiltPanel_4; }
	inline void set_tiltPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tiltPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tiltPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_scoringPanel_5() { return static_cast<int32_t>(offsetof(WinTutorial_tA3BE4752AA8CB4AB23AC87443A8C3B829F84EE7B, ___scoringPanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scoringPanel_5() const { return ___scoringPanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scoringPanel_5() { return &___scoringPanel_5; }
	inline void set_scoringPanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scoringPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoringPanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_menuButton_6() { return static_cast<int32_t>(offsetof(WinTutorial_tA3BE4752AA8CB4AB23AC87443A8C3B829F84EE7B, ___menuButton_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_menuButton_6() const { return ___menuButton_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_menuButton_6() { return &___menuButton_6; }
	inline void set_menuButton_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___menuButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuButton_6), (void*)value);
	}
};


// UnityEngine.UI.AspectRatioFitter
struct  AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.AspectRatioFitter/AspectMode UnityEngine.UI.AspectRatioFitter::m_AspectMode
	int32_t ___m_AspectMode_4;
	// System.Single UnityEngine.UI.AspectRatioFitter::m_AspectRatio
	float ___m_AspectRatio_5;
	// UnityEngine.RectTransform UnityEngine.UI.AspectRatioFitter::m_Rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Rect_6;
	// System.Boolean UnityEngine.UI.AspectRatioFitter::m_DelayedSetDirty
	bool ___m_DelayedSetDirty_7;
	// System.Boolean UnityEngine.UI.AspectRatioFitter::m_DoesParentExist
	bool ___m_DoesParentExist_8;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.AspectRatioFitter::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_9;

public:
	inline static int32_t get_offset_of_m_AspectMode_4() { return static_cast<int32_t>(offsetof(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3, ___m_AspectMode_4)); }
	inline int32_t get_m_AspectMode_4() const { return ___m_AspectMode_4; }
	inline int32_t* get_address_of_m_AspectMode_4() { return &___m_AspectMode_4; }
	inline void set_m_AspectMode_4(int32_t value)
	{
		___m_AspectMode_4 = value;
	}

	inline static int32_t get_offset_of_m_AspectRatio_5() { return static_cast<int32_t>(offsetof(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3, ___m_AspectRatio_5)); }
	inline float get_m_AspectRatio_5() const { return ___m_AspectRatio_5; }
	inline float* get_address_of_m_AspectRatio_5() { return &___m_AspectRatio_5; }
	inline void set_m_AspectRatio_5(float value)
	{
		___m_AspectRatio_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3, ___m_Rect_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rect_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelayedSetDirty_7() { return static_cast<int32_t>(offsetof(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3, ___m_DelayedSetDirty_7)); }
	inline bool get_m_DelayedSetDirty_7() const { return ___m_DelayedSetDirty_7; }
	inline bool* get_address_of_m_DelayedSetDirty_7() { return &___m_DelayedSetDirty_7; }
	inline void set_m_DelayedSetDirty_7(bool value)
	{
		___m_DelayedSetDirty_7 = value;
	}

	inline static int32_t get_offset_of_m_DoesParentExist_8() { return static_cast<int32_t>(offsetof(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3, ___m_DoesParentExist_8)); }
	inline bool get_m_DoesParentExist_8() const { return ___m_DoesParentExist_8; }
	inline bool* get_address_of_m_DoesParentExist_8() { return &___m_DoesParentExist_8; }
	inline void set_m_DoesParentExist_8(bool value)
	{
		___m_DoesParentExist_8 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_9() { return static_cast<int32_t>(offsetof(AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3, ___m_Tracker_9)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_9() const { return ___m_Tracker_9; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_9() { return &___m_Tracker_9; }
	inline void set_m_Tracker_9(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_9 = value;
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


// UnityEngine.UI.RawImage
struct  RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * m_Items[1];

public:
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  m_Items[1];

public:
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32Enum>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_m51D0B58659F08BA98843FD542B3067BACA62879B_gshared (Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * __this, Action_1_t3F33BA23F48680C33B0548529D71272BDA538F34 * ___continuationAction0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_m6819D615D58318888B7B90D47A7252A81894344F (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_m8527994B54606AE71602DB93195D2BA44CEDC2B1 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.WebCamTexture::get_videoRotationAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamTexture_get_videoRotationAngle_m9B0EEDBECFA382495009929499D89B29F55D9714 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.AspectRatioFitter::set_aspectRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AspectRatioFitter_set_aspectRatio_mA12F8575EB30A7B2E734F188169FA7F91192BB67 (AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamTexture::get_videoVerticallyMirrored()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_videoVerticallyMirrored_m8ADBDC6A53EE4F84C6EEEE61B1B1A1E696C2B83D (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_uvRect_m529CC2006BBD8AB373C567F80F4FCABEBFF1242E (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99 (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.WebCamTexture::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* WebCamTexture_GetPixels_mC9271A80FD3D8DA59647ED25FF8A4C22A9AA77A0 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Pause_m28F48B76F0144DFC965ED28A9C03C70E6DB56F10 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::CheckAndFixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * FirebaseApp_CheckAndFixDependenciesAsync_m268BF2FC002D4D4CC247EF2636CDF7EBFF043009 (const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9FCBC7F226B662953885B20040A51C363F1B2643 (Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_mF8709846EB76DCB02B5D666D68B03FE6A0028289 (Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * __this, Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA *, Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 *, const RuntimeMethod*))Task_1_ContinueWith_m51D0B58659F08BA98843FD542B3067BACA62879B_gshared)(__this, ___continuationAction0, method);
}
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ItemDetails>()
inline ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936 * GameObject_GetComponent_TisItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936_m6779064920309BF36BE81A7A66E48A6151F6F7FB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mFF44DF454FDA13ADFD3CAA4958C4265E45BCF773 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* WebCamTexture_get_devices_m5E211AF8615AED8AAF97A669F41845FC85A0CD7C (const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamDevice_get_isFrontFacing_m43547AAF7B0729DB1962456A3EFF161B5E273E15 (WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * __this, const RuntimeMethod* method);
// System.String UnityEngine.WebCamDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4 (WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_m347047EDACC380416BF11424F5F42500DA3F08A0 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, String_t* ___deviceName0, int32_t ___requestedWidth1, int32_t ___requestedHeight2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214 (String_t* ___key0, float ___value1, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471 (String_t* ___key0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void FirebaseInit/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m00349C10A287884A282D579802E49F0C8B17C12D (U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalytics::SetAnalyticsCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_SetAnalyticsCollectionEnabled_m101E3CBEC1F3CBCD2514BECC6AAA1FD8CCDECCF8 (bool ___enabled0, const RuntimeMethod* method);
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
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_mBDE87C2FCF352957C2B86B67610667663422FBE6 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF77E7B86CB9C737A2C73A8E261849D8BD9AF725);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log ("Script has been started");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralCF77E7B86CB9C737A2C73A8E261849D8BD9AF725, /*hidden argument*/NULL);
		// plane = GameObject.FindWithTag ("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_plane_5(L_0);
		// mCamera = new WebCamTexture ();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_1 = (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 *)il2cpp_codegen_object_new(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m6819D615D58318888B7B90D47A7252A81894344F(L_1, /*hidden argument*/NULL);
		__this->set_mCamera_4(L_1);
		// plane.GetComponent<Renderer>().material.mainTexture = mCamera;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_plane_5();
		NullCheck(L_2);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_3;
		L_3 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_2, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_3);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4;
		L_4 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_3, /*hidden argument*/NULL);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_5 = __this->get_mCamera_4();
		NullCheck(L_4);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_4, L_5, /*hidden argument*/NULL);
		// mCamera.Play ();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_6 = __this->get_mCamera_4();
		NullCheck(L_6);
		WebCamTexture_Play_m8527994B54606AE71602DB93195D2BA44CEDC2B1(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_m3C257AC762117CFDDAD03C9C4FBBFDE51C61D534 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m07EC5A8C82742876097619BE7DD9043F47327DAE (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
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
// System.Void CaptureImage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureImage_Start_m77E76DE8AB4545F35710A55BB6872C3DC582DADA (CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraTexture = new WebCamTexture();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_0 = (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 *)il2cpp_codegen_object_new(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m6819D615D58318888B7B90D47A7252A81894344F(L_0, /*hidden argument*/NULL);
		__this->set_cameraTexture_16(L_0);
		// cameraTexture.filterMode = FilterMode.Trilinear;
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_1 = __this->get_cameraTexture_16();
		NullCheck(L_1);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(L_1, 2, /*hidden argument*/NULL);
		// cameraTexture.Play();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_2 = __this->get_cameraTexture_16();
		NullCheck(L_2);
		WebCamTexture_Play_m8527994B54606AE71602DB93195D2BA44CEDC2B1(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CaptureImage::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureImage_Update_m4E89C567562DFCAD9CBB42FD24028F212CF4AD03 (CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * G_B4_0 = NULL;
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * G_B3_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * G_B5_1 = NULL;
	{
		// if (cameraTexture.width < 100) {
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_0 = __this->get_cameraTexture_16();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)100))))
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// rotationVector.z = -cameraTexture.videoRotationAngle;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_rotationVector_13();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_3 = __this->get_cameraTexture_16();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = WebCamTexture_get_videoRotationAngle_m9B0EEDBECFA382495009929499D89B29F55D9714(L_3, /*hidden argument*/NULL);
		L_2->set_z_4(((float)((float)((-L_4)))));
		// image.rectTransform.localEulerAngles = rotationVector;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_5 = __this->get_image_4();
		NullCheck(L_5);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6;
		L_6 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_rotationVector_13();
		NullCheck(L_6);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_6, L_7, /*hidden argument*/NULL);
		// float videoRatio = (float)cameraTexture.width / (float)cameraTexture.height;
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_8 = __this->get_cameraTexture_16();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_10 = __this->get_cameraTexture_16();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		V_0 = ((float)((float)((float)((float)L_9))/(float)((float)((float)L_11))));
		// imageFitter.aspectRatio = videoRatio;
		AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * L_12 = __this->get_imageFitter_8();
		float L_13 = V_0;
		NullCheck(L_12);
		AspectRatioFitter_set_aspectRatio_mA12F8575EB30A7B2E734F188169FA7F91192BB67(L_12, L_13, /*hidden argument*/NULL);
		// image.uvRect = cameraTexture.videoVerticallyMirrored ? fixedRect : defaultRect;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_14 = __this->get_image_4();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_15 = __this->get_cameraTexture_16();
		NullCheck(L_15);
		bool L_16;
		L_16 = WebCamTexture_get_videoVerticallyMirrored_m8ADBDC6A53EE4F84C6EEEE61B1B1A1E696C2B83D(L_15, /*hidden argument*/NULL);
		G_B3_0 = L_14;
		if (L_16)
		{
			G_B4_0 = L_14;
			goto IL_007f;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17 = __this->get_defaultRect_14();
		G_B5_0 = L_17;
		G_B5_1 = G_B3_0;
		goto IL_0085;
	}

IL_007f:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_18 = __this->get_fixedRect_15();
		G_B5_0 = L_18;
		G_B5_1 = G_B4_0;
	}

IL_0085:
	{
		NullCheck(G_B5_1);
		RawImage_set_uvRect_m529CC2006BBD8AB373C567F80F4FCABEBFF1242E(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		// GetComponent<RawImage>().texture = cameraTexture;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_19;
		L_19 = Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A(__this, /*hidden argument*/Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_20 = __this->get_cameraTexture_16();
		NullCheck(L_19);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CaptureImage::Trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureImage_Trigger_m6BC25286C3F45727ED3A9AA002A0276B9BC7F1F2 (CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral126228D40E4B44C2450E1391A5CBBAB8D2E4E9D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC92FBE0E65ECB6D36FC220FE483E4D1E395897EE);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// shutterButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_shutterButton_9();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// menuButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_menuButton_12();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// useImagePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_useImagePanel_11();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// title.text = "Use this photo to generate your maze?";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_title_10();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral126228D40E4B44C2450E1391A5CBBAB8D2E4E9D9);
		// doodlePhoto = new Texture2D(cameraTexture.width, cameraTexture.height);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_4 = __this->get_cameraTexture_16();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_6 = __this->get_cameraTexture_16();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_8, L_5, L_7, /*hidden argument*/NULL);
		__this->set_doodlePhoto_6(L_8);
		// doodlePhoto.SetPixels(cameraTexture.GetPixels());
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = __this->get_doodlePhoto_6();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_10 = __this->get_cameraTexture_16();
		NullCheck(L_10);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11;
		L_11 = WebCamTexture_GetPixels_mC9271A80FD3D8DA59647ED25FF8A4C22A9AA77A0(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_9, L_11, /*hidden argument*/NULL);
		// doodlePhoto.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = __this->get_doodlePhoto_6();
		NullCheck(L_12);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_12, /*hidden argument*/NULL);
		// byte[] bytes = doodlePhoto.EncodeToPNG();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = __this->get_doodlePhoto_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// File.WriteAllBytes(Application.dataPath + "/Images/" + "Test" + ".png", bytes);
		String_t* L_15;
		L_15 = Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E(/*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_15, _stringLiteralC92FBE0E65ECB6D36FC220FE483E4D1E395897EE, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_0;
		File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_16, L_17, /*hidden argument*/NULL);
		// textureImage.texture = doodlePhoto;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_18 = __this->get_textureImage_5();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = __this->get_doodlePhoto_6();
		NullCheck(L_18);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_18, L_19, /*hidden argument*/NULL);
		// cameraTexture.Pause();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_20 = __this->get_cameraTexture_16();
		NullCheck(L_20);
		WebCamTexture_Pause_m28F48B76F0144DFC965ED28A9C03C70E6DB56F10(L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CaptureImage::ResetTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureImage_ResetTrigger_m6DEE0F5544DC94D947A7452B770EA192A4E1694D (CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00676896B649BB017B6DB444D5927788CF7E6EF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// shutterButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_shutterButton_9();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// menuButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_menuButton_12();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// useImagePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_useImagePanel_11();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// title.text = "Take a picture of your Doodle!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_title_10();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral00676896B649BB017B6DB444D5927788CF7E6EF2);
		// cameraTexture.Play();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_4 = __this->get_cameraTexture_16();
		NullCheck(L_4);
		WebCamTexture_Play_m8527994B54606AE71602DB93195D2BA44CEDC2B1(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CaptureImage::GoToGenerateMaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureImage_GoToGenerateMaze_mE7FB244D6A3DCB64FA6FEA798F0EF3D032819994 (CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44AA1015A62DF9D5C0D580A7C81DAD04F25B39A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GenerateMaze");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral44AA1015A62DF9D5C0D580A7C81DAD04F25B39A9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CaptureImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureImage__ctor_mDCAD0F44E641474D523641DC12A61654140E5E53 (CaptureImage_t76B6F6B627A53EB74928C02467194E227C0544F9 * __this, const RuntimeMethod* method)
{
	{
		// Vector3 rotationVector = new Vector3(0f, 0f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_rotationVector_13(L_0);
		// Rect defaultRect = new Rect(0f, 0f, 1f, 1f);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_1), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_defaultRect_14(L_1);
		// Rect fixedRect = new Rect(0f, 1f, 1f, -1f);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_2), (0.0f), (1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		__this->set_fixedRect_15(L_2);
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
// System.Void DontDestroy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DontDestroy_Awake_mFD3677E85209771C579A5FFF6E50A5DB7D5D7076 (DontDestroy_t13C147FA457B88ED65FCFCC5D20DECEDAFB7F26D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F4C54CDA5F09B3A18F779B2956E4AA1A294FE82);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject[] objs = GameObject.FindGameObjectsWithTag("DoodleImage");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral0F4C54CDA5F09B3A18F779B2956E4AA1A294FE82, /*hidden argument*/NULL);
		// if (objs.Length > 1)
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// DontDestroyOnLoad(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DontDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DontDestroy__ctor_mCDCDC2D7D6B681407E7391AE87E7DD8BE35A7A45 (DontDestroy_t13C147FA457B88ED65FCFCC5D20DECEDAFB7F26D * __this, const RuntimeMethod* method)
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
// System.Void FirebaseInit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseInit_Start_m992870B27CAEC723BE1359E4A844B1CA481C4583 (FirebaseInit_t492C94AB7382A5B89864B2AA462E8C3E79298544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m9FCBC7F226B662953885B20040A51C363F1B2643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_mF8709846EB76DCB02B5D666D68B03FE6A0028289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_0_mF521FDD80E8C5426126BF14DC991A7C5E7332750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * G_B2_0 = NULL;
	Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * G_B2_1 = NULL;
	Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * G_B1_0 = NULL;
	Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * G_B1_1 = NULL;
	{
		// FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
		// {
		//     FirebaseAnalytics.SetAnalyticsCollectionEnabled(true);
		// });
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * L_0;
		L_0 = FirebaseApp_CheckAndFixDependenciesAsync_m268BF2FC002D4D4CC247EF2636CDF7EBFF043009(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_il2cpp_TypeInfo_var);
		Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * L_1 = ((U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_il2cpp_TypeInfo_var);
		U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6 * L_3 = ((U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * L_4 = (Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 *)il2cpp_codegen_object_new(Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0_il2cpp_TypeInfo_var);
		Action_1__ctor_m9FCBC7F226B662953885B20040A51C363F1B2643(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__0_0_mF521FDD80E8C5426126BF14DC991A7C5E7332750_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9FCBC7F226B662953885B20040A51C363F1B2643_RuntimeMethod_var);
		Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * L_5 = L_4;
		((U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		NullCheck(G_B2_1);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = Task_1_ContinueWith_mF8709846EB76DCB02B5D666D68B03FE6A0028289(G_B2_1, G_B2_0, /*hidden argument*/Task_1_ContinueWith_mF8709846EB76DCB02B5D666D68B03FE6A0028289_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FirebaseInit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseInit__ctor_mCC915BAB38599EDF08976336A16599E8D9BB99F7 (FirebaseInit_t492C94AB7382A5B89864B2AA462E8C3E79298544 * __this, const RuntimeMethod* method)
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
// System.Void GenerateDefaultMaze::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateDefaultMaze_Start_mFD4CD8941953960DDD66100758B5407CF57C75CF (GenerateDefaultMaze_t22E38CB3C08BDA885F8017BFB1FCA8C78A0AF533 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5955F36E723A50D5EE1B4F509B72AE31E331BB07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCFB79292511F9C00336E5826B278A1B73D3766E);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_3 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_11 = NULL;
	int32_t V_12 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_16;
	memset((&V_16), 0, sizeof(V_16));
	{
		// image = images[1];
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_0 = __this->get_images_4();
		NullCheck(L_0);
		int32_t L_1 = 1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		__this->set_image_5(L_2);
		// Color[] pix = image.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = __this->get_image_5();
		NullCheck(L_3);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_4;
		L_4 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// int worldX = image.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = __this->get_image_5();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		V_1 = L_6;
		// int worldZ = image.height;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = __this->get_image_5();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		V_2 = L_8;
		// Vector3[] spawnPositions = new Vector3[pix.Length];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_9 = V_0;
		NullCheck(L_9);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		V_3 = L_10;
		// Vector3 startingSpawnPosition = new Vector3(-Mathf.Round(worldX / 2), 0, -Mathf.Round(worldZ / 2));
		int32_t L_11 = V_1;
		float L_12;
		L_12 = bankers_roundf(((float)((float)((int32_t)((int32_t)L_11/(int32_t)2)))));
		int32_t L_13 = V_2;
		float L_14;
		L_14 = bankers_roundf(((float)((float)((int32_t)((int32_t)L_13/(int32_t)2)))));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), ((-L_12)), (0.0f), ((-L_14)), /*hidden argument*/NULL);
		// Vector3 currentSpawnPos = startingSpawnPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_4;
		V_5 = L_15;
		// int counter = 0;
		V_6 = 0;
		// for (int z = 0; z < worldZ; z++){
		V_9 = 0;
		goto IL_00bb;
	}

IL_0067:
	{
		// for (int x = 0; x < worldX; x++){
		V_10 = 0;
		goto IL_0092;
	}

IL_006c:
	{
		// spawnPositions[counter] = currentSpawnPos;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_16 = V_3;
		int32_t L_17 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_5;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_18);
		// counter ++;
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		// currentSpawnPos.x++;
		float* L_20 = (&V_5)->get_address_of_x_2();
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		*((float*)L_21) = (float)((float)il2cpp_codegen_add((float)L_22, (float)(1.0f)));
		// for (int x = 0; x < worldX; x++){
		int32_t L_23 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0092:
	{
		// for (int x = 0; x < worldX; x++){
		int32_t L_24 = V_10;
		int32_t L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_006c;
		}
	}
	{
		// currentSpawnPos.x = startingSpawnPosition.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_4;
		float L_27 = L_26.get_x_2();
		(&V_5)->set_x_2(L_27);
		// currentSpawnPos.z++;
		float* L_28 = (&V_5)->get_address_of_z_4();
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		*((float*)L_29) = (float)((float)il2cpp_codegen_add((float)L_30, (float)(1.0f)));
		// for (int z = 0; z < worldZ; z++){
		int32_t L_31 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00bb:
	{
		// for (int z = 0; z < worldZ; z++){
		int32_t L_32 = V_9;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0067;
		}
	}
	{
		// counter = 0;
		V_6 = 0;
		// bool sphereFlag = false;
		V_7 = (bool)0;
		// bool goalFlag = false;
		V_8 = (bool)0;
		// foreach(Vector3 pos in spawnPositions){
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_34 = V_3;
		V_11 = L_34;
		V_12 = 0;
		goto IL_0244;
	}

IL_00d4:
	{
		// foreach(Vector3 pos in spawnPositions){
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_35 = V_11;
		int32_t L_36 = V_12;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_13 = L_38;
		// Color c = pix[counter];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_39 = V_0;
		int32_t L_40 = V_6;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_14 = L_42;
		// if (c.r < 0.25 && c.g < .25 && c.b < 0.25){
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = V_14;
		float L_44 = L_43.get_r_0();
		if ((!(((double)((double)((double)L_44))) < ((double)(0.25)))))
		{
			goto IL_0137;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45 = V_14;
		float L_46 = L_45.get_g_1();
		if ((!(((double)((double)((double)L_46))) < ((double)(0.25)))))
		{
			goto IL_0137;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_47 = V_14;
		float L_48 = L_47.get_b_2();
		if ((!(((double)((double)((double)L_48))) < ((double)(0.25)))))
		{
			goto IL_0137;
		}
	}
	{
		// Instantiate(wallObject, pos, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = __this->get_wallObject_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_13;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51;
		L_51 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52;
		L_52 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_49, L_50, L_51, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// } else {
		goto IL_014a;
	}

IL_0137:
	{
		// Instantiate(groundObject, pos, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = __this->get_groundObject_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = V_13;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55;
		L_55 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_53, L_54, L_55, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_014a:
	{
		// if (sphereFlag == false) {
		bool L_57 = V_7;
		if (L_57)
		{
			goto IL_01c1;
		}
	}
	{
		// if(c.b > .5 && c.r < .5 && c.g <.9){
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_58 = V_14;
		float L_59 = L_58.get_b_2();
		if ((!(((double)((double)((double)L_59))) > ((double)(0.5)))))
		{
			goto IL_01c1;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60 = V_14;
		float L_61 = L_60.get_r_0();
		if ((!(((double)((double)((double)L_61))) < ((double)(0.5)))))
		{
			goto IL_01c1;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_62 = V_14;
		float L_63 = L_62.get_g_1();
		if ((!(((double)((double)((double)L_63))) < ((double)(0.90000000000000002)))))
		{
			goto IL_01c1;
		}
	}
	{
		// Vector3 newPosition = new Vector3(pos.x, 2, pos.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = V_13;
		float L_65 = L_64.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_13;
		float L_67 = L_66.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_15), L_65, (2.0f), L_67, /*hidden argument*/NULL);
		// Debug.Log("Blue pixel spotted, adding sphere!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBCFB79292511F9C00336E5826B278A1B73D3766E, /*hidden argument*/NULL);
		// Instantiate(ballObject, newPosition, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = __this->get_ballObject_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = V_15;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_70;
		L_70 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71;
		L_71 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_68, L_69, L_70, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// sphereFlag = true;
		V_7 = (bool)1;
	}

IL_01c1:
	{
		// if (goalFlag == false) {
		bool L_72 = V_8;
		if (L_72)
		{
			goto IL_0238;
		}
	}
	{
		// if(c.b < .5 && c.r < .2 && c.g > .4){
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_73 = V_14;
		float L_74 = L_73.get_b_2();
		if ((!(((double)((double)((double)L_74))) < ((double)(0.5)))))
		{
			goto IL_0238;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_75 = V_14;
		float L_76 = L_75.get_r_0();
		if ((!(((double)((double)((double)L_76))) < ((double)(0.20000000000000001)))))
		{
			goto IL_0238;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_77 = V_14;
		float L_78 = L_77.get_g_1();
		if ((!(((double)((double)((double)L_78))) > ((double)(0.40000000000000002)))))
		{
			goto IL_0238;
		}
	}
	{
		// Vector3 newPosition = new Vector3(pos.x, 1, pos.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = V_13;
		float L_80 = L_79.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81 = V_13;
		float L_82 = L_81.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_16), L_80, (1.0f), L_82, /*hidden argument*/NULL);
		// Debug.Log("Green pixel spotted, adding sphere!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5955F36E723A50D5EE1B4F509B72AE31E331BB07, /*hidden argument*/NULL);
		// Instantiate(goalObject, newPosition, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83 = __this->get_goalObject_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = V_16;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_85;
		L_85 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_86;
		L_86 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_83, L_84, L_85, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goalFlag = true;
		V_8 = (bool)1;
	}

IL_0238:
	{
		// counter ++;
		int32_t L_87 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
		int32_t L_88 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
	}

IL_0244:
	{
		// foreach(Vector3 pos in spawnPositions){
		int32_t L_89 = V_12;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_90 = V_11;
		NullCheck(L_90);
		if ((((int32_t)L_89) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_90)->max_length))))))
		{
			goto IL_00d4;
		}
	}
	{
		// Debug.Log(counter);
		int32_t L_91 = V_6;
		int32_t L_92 = L_91;
		RuntimeObject * L_93 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_92);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_93, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GenerateDefaultMaze::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateDefaultMaze__ctor_mE96AFDFF1268BB53E2869386D0FEB4367FB4B6C3 (GenerateDefaultMaze_t22E38CB3C08BDA885F8017BFB1FCA8C78A0AF533 * __this, const RuntimeMethod* method)
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
// System.Void GenerateMaze::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateMaze_Start_mB4FCC51B0A547AF202E20360919424984132C54A (GenerateMaze_tB60FF351F841496FC4ECA8848E6E5AAB1B82E4AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F4C54CDA5F09B3A18F779B2956E4AA1A294FE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5955F36E723A50D5EE1B4F509B72AE31E331BB07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCFB79292511F9C00336E5826B278A1B73D3766E);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_3 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_11 = NULL;
	int32_t V_12 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_16;
	memset((&V_16), 0, sizeof(V_16));
	{
		// doodle = GameObject.FindWithTag("DoodleImage").GetComponent<RawImage>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral0F4C54CDA5F09B3A18F779B2956E4AA1A294FE82, /*hidden argument*/NULL);
		NullCheck(L_0);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_1;
		L_1 = GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7(L_0, /*hidden argument*/GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		__this->set_doodle_6(L_1);
		// image = (Texture2D)doodle.texture;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_2 = __this->get_doodle_6();
		NullCheck(L_2);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_3;
		L_3 = RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline(L_2, /*hidden argument*/NULL);
		__this->set_image_5(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)CastclassSealed((RuntimeObject*)L_3, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)));
		// Color[] pix = image.GetPixels();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = __this->get_image_5();
		NullCheck(L_4);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_5;
		L_5 = Texture2D_GetPixels_m702E1E59DE60A5A11197DA3F6474F9E6716D9699(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// int worldX = image.width;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = __this->get_image_5();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		V_1 = L_7;
		// int worldZ = image.height;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = __this->get_image_5();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		V_2 = L_9;
		// Vector3[] spawnPositions = new Vector3[pix.Length];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_10 = V_0;
		NullCheck(L_10);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))));
		V_3 = L_11;
		// Vector3 startingSpawnPosition = new Vector3(-Mathf.Round(worldX / 2), 0, -Mathf.Round(worldZ / 2));
		int32_t L_12 = V_1;
		float L_13;
		L_13 = bankers_roundf(((float)((float)((int32_t)((int32_t)L_12/(int32_t)2)))));
		int32_t L_14 = V_2;
		float L_15;
		L_15 = bankers_roundf(((float)((float)((int32_t)((int32_t)L_14/(int32_t)2)))));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), ((-L_13)), (0.0f), ((-L_15)), /*hidden argument*/NULL);
		// Vector3 currentSpawnPos = startingSpawnPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_4;
		V_5 = L_16;
		// int counter = 0;
		V_6 = 0;
		// for (int z = 0; z < worldZ; z++){
		V_9 = 0;
		goto IL_00d8;
	}

IL_0084:
	{
		// for (int x = 0; x < worldX; x++){
		V_10 = 0;
		goto IL_00af;
	}

IL_0089:
	{
		// spawnPositions[counter] = currentSpawnPos;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_17 = V_3;
		int32_t L_18 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_5;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_19);
		// counter ++;
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		// currentSpawnPos.x++;
		float* L_21 = (&V_5)->get_address_of_x_2();
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		*((float*)L_22) = (float)((float)il2cpp_codegen_add((float)L_23, (float)(1.0f)));
		// for (int x = 0; x < worldX; x++){
		int32_t L_24 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00af:
	{
		// for (int x = 0; x < worldX; x++){
		int32_t L_25 = V_10;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0089;
		}
	}
	{
		// currentSpawnPos.x = startingSpawnPosition.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_4;
		float L_28 = L_27.get_x_2();
		(&V_5)->set_x_2(L_28);
		// currentSpawnPos.z++;
		float* L_29 = (&V_5)->get_address_of_z_4();
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		*((float*)L_30) = (float)((float)il2cpp_codegen_add((float)L_31, (float)(1.0f)));
		// for (int z = 0; z < worldZ; z++){
		int32_t L_32 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00d8:
	{
		// for (int z = 0; z < worldZ; z++){
		int32_t L_33 = V_9;
		int32_t L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0084;
		}
	}
	{
		// counter = 0;
		V_6 = 0;
		// bool sphereFlag = false;
		V_7 = (bool)0;
		// bool goalFlag = false;
		V_8 = (bool)0;
		// foreach(Vector3 pos in spawnPositions){
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_35 = V_3;
		V_11 = L_35;
		V_12 = 0;
		goto IL_0261;
	}

IL_00f1:
	{
		// foreach(Vector3 pos in spawnPositions){
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_36 = V_11;
		int32_t L_37 = V_12;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_13 = L_39;
		// Color c = pix[counter];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_40 = V_0;
		int32_t L_41 = V_6;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_14 = L_43;
		// if (c.r < 0.5 && c.g < .5 && c.b < 0.5){
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44 = V_14;
		float L_45 = L_44.get_r_0();
		if ((!(((double)((double)((double)L_45))) < ((double)(0.5)))))
		{
			goto IL_0154;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46 = V_14;
		float L_47 = L_46.get_g_1();
		if ((!(((double)((double)((double)L_47))) < ((double)(0.5)))))
		{
			goto IL_0154;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48 = V_14;
		float L_49 = L_48.get_b_2();
		if ((!(((double)((double)((double)L_49))) < ((double)(0.5)))))
		{
			goto IL_0154;
		}
	}
	{
		// Instantiate(wallObject, pos, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_wallObject_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = V_13;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_52;
		L_52 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53;
		L_53 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_50, L_51, L_52, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// } else {
		goto IL_0167;
	}

IL_0154:
	{
		// Instantiate(groundObject, pos, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = __this->get_groundObject_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_13;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
		L_56 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57;
		L_57 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_54, L_55, L_56, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_0167:
	{
		// if (sphereFlag == false) {
		bool L_58 = V_7;
		if (L_58)
		{
			goto IL_01de;
		}
	}
	{
		// if(c.b > .9 && c.r < .9 && c.g <.9){
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_59 = V_14;
		float L_60 = L_59.get_b_2();
		if ((!(((double)((double)((double)L_60))) > ((double)(0.90000000000000002)))))
		{
			goto IL_01de;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_61 = V_14;
		float L_62 = L_61.get_r_0();
		if ((!(((double)((double)((double)L_62))) < ((double)(0.90000000000000002)))))
		{
			goto IL_01de;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_63 = V_14;
		float L_64 = L_63.get_g_1();
		if ((!(((double)((double)((double)L_64))) < ((double)(0.90000000000000002)))))
		{
			goto IL_01de;
		}
	}
	{
		// Vector3 newPosition = new Vector3(pos.x, 2, pos.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65 = V_13;
		float L_66 = L_65.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = V_13;
		float L_68 = L_67.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_15), L_66, (2.0f), L_68, /*hidden argument*/NULL);
		// Debug.Log("Blue pixel spotted, adding sphere!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBCFB79292511F9C00336E5826B278A1B73D3766E, /*hidden argument*/NULL);
		// Instantiate(ballObject, newPosition, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = __this->get_ballObject_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = V_15;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_71;
		L_71 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72;
		L_72 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_69, L_70, L_71, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// sphereFlag = true;
		V_7 = (bool)1;
	}

IL_01de:
	{
		// if (goalFlag == false) {
		bool L_73 = V_8;
		if (L_73)
		{
			goto IL_0255;
		}
	}
	{
		// if(c.b < .9 && c.r < .9 && c.g > .9){
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_74 = V_14;
		float L_75 = L_74.get_b_2();
		if ((!(((double)((double)((double)L_75))) < ((double)(0.90000000000000002)))))
		{
			goto IL_0255;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_76 = V_14;
		float L_77 = L_76.get_r_0();
		if ((!(((double)((double)((double)L_77))) < ((double)(0.90000000000000002)))))
		{
			goto IL_0255;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_78 = V_14;
		float L_79 = L_78.get_g_1();
		if ((!(((double)((double)((double)L_79))) > ((double)(0.90000000000000002)))))
		{
			goto IL_0255;
		}
	}
	{
		// Vector3 newPosition = new Vector3(pos.x, 1, pos.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = V_13;
		float L_81 = L_80.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82 = V_13;
		float L_83 = L_82.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_16), L_81, (1.0f), L_83, /*hidden argument*/NULL);
		// Debug.Log("Green pixel spotted, adding sphere!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5955F36E723A50D5EE1B4F509B72AE31E331BB07, /*hidden argument*/NULL);
		// Instantiate(goalObject, newPosition, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84 = __this->get_goalObject_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85 = V_16;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_86;
		L_86 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87;
		L_87 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_84, L_85, L_86, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goalFlag = true;
		V_8 = (bool)1;
	}

IL_0255:
	{
		// counter ++;
		int32_t L_88 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
		int32_t L_89 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_0261:
	{
		// foreach(Vector3 pos in spawnPositions){
		int32_t L_90 = V_12;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_91 = V_11;
		NullCheck(L_91);
		if ((((int32_t)L_90) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length))))))
		{
			goto IL_00f1;
		}
	}
	{
		// Debug.Log(counter);
		int32_t L_92 = V_6;
		int32_t L_93 = L_92;
		RuntimeObject * L_94 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_93);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_94, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GenerateMaze::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenerateMaze__ctor_m3541A3B58C78FDB1FA6FB91C8273F16A17CE181C (GenerateMaze_tB60FF351F841496FC4ECA8848E6E5AAB1B82E4AD * __this, const RuntimeMethod* method)
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
// System.Void ItemDetails::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemDetails_Start_m1BDC07C7432EE1DCBF7CB97129430112BFEB4CC9 (ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ItemDetails::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemDetails_Update_mBEA2464F6B1F839869886E5F03100DBE39362710 (ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ItemDetails::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemDetails__ctor_mBC1E889A64168FD98D189D22B1655762A9CC7A4B (ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936 * __this, const RuntimeMethod* method)
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
// System.Void ListCreator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListCreator_Start_mDE9E6579E677A398C17E96895B8E4B9EE30274F4 (ListCreator_t4F758936C98D1C41C7185A9A830A745860C001A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936_m6779064920309BF36BE81A7A66E48A6151F6F7FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// content.sizeDelta = new Vector2(0, numberOfItems * listItemPixelHeight);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_content_6();
		int32_t L_1 = __this->get_numberOfItems_7();
		int32_t L_2 = __this->get_listItemPixelHeight_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), (0.0f), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_0, L_3, /*hidden argument*/NULL);
		// for (int i = 0; i < numberOfItems; i++) {
		V_1 = 0;
		goto IL_00c7;
	}

IL_002a:
	{
		// spawnY = i * listItemPixelHeight;
		int32_t L_4 = V_1;
		int32_t L_5 = __this->get_listItemPixelHeight_11();
		V_0 = ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5))));
		// Vector3 pos = new Vector3(SpawnPoint.position.x, -spawnY, SpawnPoint.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_SpawnPoint_4();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		float L_9 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_SpawnPoint_4();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), L_8, ((-L_9)), L_12, /*hidden argument*/NULL);
		// GameObject SpawnedItem = Instantiate(item, pos, SpawnPoint.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_item_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_SpawnPoint_4();
		NullCheck(L_15);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_13, L_14, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// SpawnedItem.transform.SetParent(SpawnPoint, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_17;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_SpawnPoint_4();
		NullCheck(L_19);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_19, L_20, (bool)0, /*hidden argument*/NULL);
		// ItemDetails itemDetails = SpawnedItem.GetComponent<ItemDetails>();
		NullCheck(L_18);
		ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936 * L_21;
		L_21 = GameObject_GetComponent_TisItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936_m6779064920309BF36BE81A7A66E48A6151F6F7FB(L_18, /*hidden argument*/GameObject_GetComponent_TisItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936_m6779064920309BF36BE81A7A66E48A6151F6F7FB_RuntimeMethod_var);
		// itemDetails.text.text = itemNames[i];
		ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936 * L_22 = L_21;
		NullCheck(L_22);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = L_22->get_text_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = __this->get_itemNames_8();
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		String_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_27);
		// itemDetails.description.text = itemDescriptions[i];
		ItemDetails_t10F3B234085BA1E27EADB13A1C83A9F20A15D936 * L_28 = L_22;
		NullCheck(L_28);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = L_28->get_description_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = __this->get_itemDescriptions_9();
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_33);
		// itemDetails.image.sprite = itemImages[i];
		NullCheck(L_28);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_34 = L_28->get_image_6();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_35 = __this->get_itemImages_10();
		int32_t L_36 = V_1;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_34);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_34, L_38, /*hidden argument*/NULL);
		// for (int i = 0; i < numberOfItems; i++) {
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00c7:
	{
		// for (int i = 0; i < numberOfItems; i++) {
		int32_t L_40 = V_1;
		int32_t L_41 = __this->get_numberOfItems_7();
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_002a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ListCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListCreator__ctor_mAFFCF9C0F5C5CB6F3006F93F0AA1923107BCD6D9 (ListCreator_t4F758936C98D1C41C7185A9A830A745860C001A2 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private int numberOfItems = 6;
		__this->set_numberOfItems_7(6);
		// private int listItemPixelHeight = 360;
		__this->set_listItemPixelHeight_11(((int32_t)360));
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
// System.Void MoveController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveController_Start_mCFA43DF11575B4867E777FDC04D0D8A0D3AC48E1 (MoveController_t7BF45911D54A4C24CDE06C2AE40D0B0E6FD5AE21 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5394559D3C47AFA7C02EA7CC33C5D30E9191046);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rb_5(L_0);
		// menuButton = GameObject.Find("Menu Button");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC5394559D3C47AFA7C02EA7CC33C5D30E9191046, /*hidden argument*/NULL);
		__this->set_menuButton_6(L_1);
		// }
		return;
	}
}
// System.Void MoveController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveController_FixedUpdate_mB54C2292E0BB1D9CF316614906537BC64DE1D3D4 (MoveController_t7BF45911D54A4C24CDE06C2AE40D0B0E6FD5AE21 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (menuButton.activeSelf) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_menuButton_6();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// rb.constraints = RigidbodyConstraints.None;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2 = __this->get_rb_5();
		NullCheck(L_2);
		Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1(L_2, 0, /*hidden argument*/NULL);
		// rb.constraints = RigidbodyConstraints.FreezePositionY;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3 = __this->get_rb_5();
		NullCheck(L_3);
		Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1(L_3, 4, /*hidden argument*/NULL);
		// } else {
		goto IL_0034;
	}

IL_0027:
	{
		// rb.constraints = RigidbodyConstraints.FreezePositionX | RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezePositionZ;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_4 = __this->get_rb_5();
		NullCheck(L_4);
		Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1(L_4, ((int32_t)14), /*hidden argument*/NULL);
	}

IL_0034:
	{
		// Vector3 acc = Input.acceleration;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		V_0 = L_5;
		// rb.AddForce(acc.x * speed, 0, acc.y * speed);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6 = __this->get_rb_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		float L_9 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		float L_12 = __this->get_speed_4();
		NullCheck(L_6);
		Rigidbody_AddForce_mFF44DF454FDA13ADFD3CAA4958C4265E45BCF773(L_6, ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (0.0f), ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoveController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveController__ctor_m5F3752A4FA278FA0F3D24DF93256DF186B33FE3F (MoveController_t7BF45911D54A4C24CDE06C2AE40D0B0E6FD5AE21 * __this, const RuntimeMethod* method)
{
	{
		// float speed = 10F;
		__this->set_speed_4((10.0f));
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
// System.Void TakePhoto::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakePhoto_Start_mBE63EF1758D619FEF3115101F117992BCFFB137C (TakePhoto_tFF86D1D0CDD1478215F793E43903986781387DCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* V_0 = NULL;
	int32_t V_1 = 0;
	WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// defaultBackground = background.texture;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_0 = __this->get_background_7();
		NullCheck(L_0);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_1;
		L_1 = RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline(L_0, /*hidden argument*/NULL);
		__this->set_defaultBackground_6(L_1);
		// WebCamDevice[] devices = WebCamTexture.devices;
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_2;
		L_2 = WebCamTexture_get_devices_m5E211AF8615AED8AAF97A669F41845FC85A0CD7C(/*hidden argument*/NULL);
		V_0 = L_2;
		// if (devices.Length == 0)
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_3 = V_0;
		NullCheck(L_3);
		if ((((RuntimeArray*)L_3)->max_length))
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// for (int i = 0; i < devices.Length; i++)
		V_1 = 0;
		goto IL_0059;
	}

IL_0020:
	{
		// var curr = devices[i];
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// if (curr.isFrontFacing == frontFacing)
		bool L_8;
		L_8 = WebCamDevice_get_isFrontFacing_m43547AAF7B0729DB1962456A3EFF161B5E273E15((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)(&V_2), /*hidden argument*/NULL);
		bool L_9 = __this->get_frontFacing_9();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0055;
		}
	}
	{
		// cameraTexture = new WebCamTexture(curr.name, Screen.width, Screen.height);
		String_t* L_10;
		L_10 = WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)(&V_2), /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_12;
		L_12 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_13 = (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 *)il2cpp_codegen_object_new(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m347047EDACC380416BF11424F5F42500DA3F08A0(L_13, L_10, L_11, L_12, /*hidden argument*/NULL);
		__this->set_cameraTexture_5(L_13);
		// break;
		goto IL_005f;
	}

IL_0055:
	{
		// for (int i = 0; i < devices.Length; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0059:
	{
		// for (int i = 0; i < devices.Length; i++)
		int32_t L_15 = V_1;
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0020;
		}
	}

IL_005f:
	{
		// if (cameraTexture == null)
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_17 = __this->get_cameraTexture_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_006e;
		}
	}
	{
		// return;
		return;
	}

IL_006e:
	{
		// cameraTexture.Play (); // Start the camera
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_19 = __this->get_cameraTexture_5();
		NullCheck(L_19);
		WebCamTexture_Play_m8527994B54606AE71602DB93195D2BA44CEDC2B1(L_19, /*hidden argument*/NULL);
		// background.texture = cameraTexture; // Set the texture
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_20 = __this->get_background_7();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_21 = __this->get_cameraTexture_5();
		NullCheck(L_20);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_20, L_21, /*hidden argument*/NULL);
		// camAvailable = true; // Set the camAvailable for future purposes.
		__this->set_camAvailable_4((bool)1);
		// }
		return;
	}
}
// System.Void TakePhoto::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakePhoto_Update_m0F2C231F0A948B6EC119A2D09D36AB6FB6B43CD3 (TakePhoto_tFF86D1D0CDD1478215F793E43903986781387DCE * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float G_B5_0 = 0.0f;
	{
		// if (!camAvailable)
		bool L_0 = __this->get_camAvailable_4();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// float ratio = (float)cameraTexture.width / (float)cameraTexture.height;
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_1 = __this->get_cameraTexture_5();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_3 = __this->get_cameraTexture_5();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_3);
		V_0 = ((float)((float)((float)((float)L_2))/(float)((float)((float)L_4))));
		// fit.aspectRatio = ratio; // Set the aspect ratio
		AspectRatioFitter_tDF617A8ACD769EAE81CBB1716C95C6F4A1E1D2A3 * L_5 = __this->get_fit_8();
		float L_6 = V_0;
		NullCheck(L_5);
		AspectRatioFitter_set_aspectRatio_mA12F8575EB30A7B2E734F188169FA7F91192BB67(L_5, L_6, /*hidden argument*/NULL);
		// float scaleY = cameraTexture.videoVerticallyMirrored ? -1f : 1f; // Find if the camera is mirrored or not
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_7 = __this->get_cameraTexture_5();
		NullCheck(L_7);
		bool L_8;
		L_8 = WebCamTexture_get_videoVerticallyMirrored_m8ADBDC6A53EE4F84C6EEEE61B1B1A1E696C2B83D(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		G_B5_0 = (1.0f);
		goto IL_0048;
	}

IL_0043:
	{
		G_B5_0 = (-1.0f);
	}

IL_0048:
	{
		V_1 = G_B5_0;
		// background.rectTransform.localScale = new Vector3(1f, scaleY, 1f); // Swap the mirrored camera
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_9 = __this->get_background_7();
		NullCheck(L_9);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10;
		L_10 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_9, /*hidden argument*/NULL);
		float L_11 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), (1.0f), L_11, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_10, L_12, /*hidden argument*/NULL);
		// int orient = -cameraTexture.videoRotationAngle;
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_13 = __this->get_cameraTexture_5();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = WebCamTexture_get_videoRotationAngle_m9B0EEDBECFA382495009929499D89B29F55D9714(L_13, /*hidden argument*/NULL);
		V_2 = ((-L_14));
		// background.rectTransform.localEulerAngles = new Vector3(0,0, orient);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_15 = __this->get_background_7();
		NullCheck(L_15);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_16;
		L_16 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), (0.0f), (0.0f), ((float)((float)L_17)), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_16, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TakePhoto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakePhoto__ctor_m16F08102E72D36221396BCFAF8E47882D07406E3 (TakePhoto_tFF86D1D0CDD1478215F793E43903986781387DCE * __this, const RuntimeMethod* method)
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
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_mF356578A412E0D4BE318BC567718C7DBD90E05F0 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE487FDEBA312AD122C49C8A51541A377AC77428);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_startTime_7(L_0);
		// timerText = GameObject.Find("Timer Text").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFE487FDEBA312AD122C49C8A51541A377AC77428, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_timerText_4(L_2);
		// }
		return;
	}
}
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_m336594DF06E073C9CC317142E46E02AFC94A026C (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B327EFA753C76E405A89EF912A90ADEA0B617CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// if (isFinished || isPaused || gameObject.name != "Menu Canvas") {
		bool L_0 = __this->get_isFinished_5();
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = __this->get_isPaused_6();
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_3, _stringLiteral4B327EFA753C76E405A89EF912A90ADEA0B617CA, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}

IL_0027:
	{
		// return;
		return;
	}

IL_0028:
	{
		// currentTime = Time.time - startTime;
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_6 = __this->get_startTime_7();
		((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->set_currentTime_8(((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)));
		// minutes = ((int) currentTime / 60).ToString("00");
		float L_7 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_currentTime_8();
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7))/(int32_t)((int32_t)60)));
		String_t* L_8;
		L_8 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		__this->set_minutes_10(L_8);
		// seconds = (currentTime % 60).ToString("00.00");
		float L_9 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_currentTime_8();
		V_1 = (fmodf(L_9, (60.0f)));
		String_t* L_10;
		L_10 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_1), _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203, /*hidden argument*/NULL);
		__this->set_seconds_11(L_10);
		// timerText.text = minutes + ":" + seconds;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_timerText_4();
		String_t* L_12 = __this->get_minutes_10();
		String_t* L_13 = __this->get_seconds_11();
		String_t* L_14;
		L_14 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_12, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		// }
		return;
	}
}
// System.Void Timer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Pause_mF4AC9D3532BEEBB65FD2CB520B379C41246EA3F3 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// isPaused = !isPaused;
		bool L_0 = __this->get_isPaused_6();
		__this->set_isPaused_6((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// if (isPaused) {
		bool L_1 = __this->get_isPaused_6();
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// pausedTime = Time.time;
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_pausedTime_9(L_2);
		// }
		return;
	}

IL_0023:
	{
		// startTime += (Time.time - pausedTime);
		float L_3 = __this->get_startTime_7();
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_5 = __this->get_pausedTime_9();
		__this->set_startTime_7(((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)))));
		// }
		return;
	}
}
// System.Void Timer::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_OnCollisionEnter_m0F2DC91232B63EB442330195A10EECF6C24BCF29 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13692F0C568791E2AC25422982AE54A34EAD7010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isFinished = true;
		__this->set_isFinished_5((bool)1);
		// PlayerPrefs.SetFloat("score", currentTime);
		float L_0 = ((Timer_t32ADF3155A88C37628B80D227C821651666DD405_StaticFields*)il2cpp_codegen_static_fields_for(Timer_t32ADF3155A88C37628B80D227C821651666DD405_il2cpp_TypeInfo_var))->get_currentTime_8();
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("VictoryScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral13692F0C568791E2AC25422982AE54A34EAD7010, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m74709038BC88FE71F7D6C06D0FF352FBE17410E8 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
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
// System.Void UIController::GoToDefaultMaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_GoToDefaultMaze_m30732863D2E66DDC7F8379F476967C8905E4F9E1 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("SampleScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Restart_mA56F517BF98D7056A4FDF0AAA3980E988A8F9B50 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
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
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::GoToMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_GoToMainMenu_mC91EFB2AF21E8C93048269B9751290F1E53B936A (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::GoToTakePhoto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_GoToTakePhoto_mF2DEAD84954C4FCF84306B8125F4CB1E839524C8 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FBBB7F137687266D4932C11856F0D3BD149954F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TakePhotoScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral6FBBB7F137687266D4932C11856F0D3BD149954F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::GoToHighScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_GoToHighScores_m5D2504910C5036C78890E6F38DB684D49A13C42F (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral919D699294DB1AB213E0B3ACB4B93FA9A57FDE2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("HighScoreScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral919D699294DB1AB213E0B3ACB4B93FA9A57FDE2A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::GoToHowToPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_GoToHowToPlay_m0ABB20E266E1A45D29B00CD79BB1A39E9757FC67 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral678D8BAD1753BD3ED0E3098E4B84C7BE2CD256D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("HowToPlayScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral678D8BAD1753BD3ED0E3098E4B84C7BE2CD256D4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::ShowHideMenuPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ShowHideMenuPanel_m473E45509E48E4FDA67146D034D14ED6BFBB713E (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	{
		// if (counter % 2 == 0) {
		int32_t L_0 = __this->get_counter_8();
		if (((int32_t)((int32_t)L_0%(int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		// menuPanel.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_menuPanel_4();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// menuButton.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_menuButton_5();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// } else {
		goto IL_0050;
	}

IL_002e:
	{
		// menuPanel.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_menuPanel_4();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// menuButton.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_menuButton_5();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// counter++;
		int32_t L_9 = __this->get_counter_8();
		__this->set_counter_8(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// }
		return;
	}
}
// System.Void UIController::GoToTiltPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_GoToTiltPanel_m87985DC0AB92C0718ED7C4477F5259242E5E80EF (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	{
		// goalPanel.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_goalPanel_6();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// tiltPanel.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_tiltPanel_7();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// menuButton.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_menuButton_5();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::GoToNewDoodle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_GoToNewDoodle_mBB5A17E67D5078AF8868498F5A5339F817961DE1 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901D1356B178132318EA2EF49CBB053FFB1AFC15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("NewDoodleScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral901D1356B178132318EA2EF49CBB053FFB1AFC15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::GoToExistingMaze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_GoToExistingMaze_m4E69C39F26FB7AC83388FC303C302D348417CDB9 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4DE8697793F6E6DB3E4DC7C6D332B3E007CE583);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ExistingMazes");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralA4DE8697793F6E6DB3E4DC7C6D332B3E007CE583, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_m57DAF9FADDD58C79489BCF6474E55D3514E9BA21 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
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
// System.Void Victory::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Victory_Start_m16FE9F365457708B0FBB7C186BF2731B9D86724B (Victory_t838077B02EFDB081190078B614A641B3A2EA4F2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// finalTime = PlayerPrefs.GetFloat("score");
		float L_0;
		L_0 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, /*hidden argument*/NULL);
		__this->set_finalTime_5(L_0);
		// minutes = ((int) finalTime / 60).ToString("00");
		float L_1 = __this->get_finalTime_5();
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1))/(int32_t)((int32_t)60)));
		String_t* L_2;
		L_2 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		__this->set_minutes_6(L_2);
		// seconds = (finalTime % 60).ToString("00.00");
		float L_3 = __this->get_finalTime_5();
		V_1 = (fmodf(L_3, (60.0f)));
		String_t* L_4;
		L_4 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_1), _stringLiteralBE6CBE63FECDAD3A3044200A2B6E64268ED4D203, /*hidden argument*/NULL);
		__this->set_seconds_7(L_4);
		// scoreText.text = "Time: " + minutes + ":" + seconds;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_scoreText_4();
		String_t* L_6 = __this->get_minutes_6();
		String_t* L_7 = __this->get_seconds_7();
		String_t* L_8;
		L_8 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC, L_6, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// }
		return;
	}
}
// System.Void Victory::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Victory_Update_m2A711EB4FB5C23A1F2B4E26309BEA8D9D884F7A9 (Victory_t838077B02EFDB081190078B614A641B3A2EA4F2E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Victory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Victory__ctor_mE5D34070083F554560299A34FF29A5DDA801D5BE (Victory_t838077B02EFDB081190078B614A641B3A2EA4F2E * __this, const RuntimeMethod* method)
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
// System.Void WinGoal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinGoal_Start_mDB36E373B1608BC3760E7FBD6DB1CDC5642E72BC (WinGoal_tC58A3147999A033909927F85431A09C59DE909A7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WinGoal::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinGoal_Update_m750E3A2B1C63DB5F5F54D39555C57891E06878FE (WinGoal_tC58A3147999A033909927F85431A09C59DE909A7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WinGoal::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinGoal_OnCollisionEnter_m87A42C0DA120B66F32F4D259DE837F0BDECBD9C3 (WinGoal_tC58A3147999A033909927F85431A09C59DE909A7 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43D9F7275E270582D83C15A95CEE78A24DFA363A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "Goal"){
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral43D9F7275E270582D83C15A95CEE78A24DFA363A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void WinGoal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinGoal__ctor_m6349AD4DBD0C6BF92CCE5EB769808E304D9D272C (WinGoal_tC58A3147999A033909927F85431A09C59DE909A7 * __this, const RuntimeMethod* method)
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
// System.Void WinTutorial::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinTutorial_Start_mEE583DF3C68BCB26834740060A6FF4DB01DF944D (WinTutorial_tA3BE4752AA8CB4AB23AC87443A8C3B829F84EE7B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WinTutorial::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinTutorial_Update_m8E243ACC0718F700ED99A45F6844009DF9A3594F (WinTutorial_tA3BE4752AA8CB4AB23AC87443A8C3B829F84EE7B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WinTutorial::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinTutorial_OnCollisionEnter_m419D5DF3912AD028CB5372156F5BA52A81CC0C4C (WinTutorial_tA3BE4752AA8CB4AB23AC87443A8C3B829F84EE7B * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	{
		// tiltPanel.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_tiltPanel_4();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// scoringPanel.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_scoringPanel_5();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WinTutorial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinTutorial__ctor_m599C5C2A41E416EC87C933993479DD533189EAC3 (WinTutorial_tA3BE4752AA8CB4AB23AC87443A8C3B829F84EE7B * __this, const RuntimeMethod* method)
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
// System.Void FirebaseInit/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEABD3197A63956F425BF8878A74B21E9E1135371 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6 * L_0 = (U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6 *)il2cpp_codegen_object_new(U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m00349C10A287884A282D579802E49F0C8B17C12D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void FirebaseInit/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m00349C10A287884A282D579802E49F0C8B17C12D (U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FirebaseInit/<>c::<Start>b__0_0(System.Threading.Tasks.Task`1<Firebase.DependencyStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_0_mF521FDD80E8C5426126BF14DC991A7C5E7332750 (U3CU3Ec_tF2992C2AEE2F507A57E3913AAF6C94BE2E2476C6 * __this, Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalytics_tD795458723B5E379F9A54AD400832DE6A96369A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FirebaseAnalytics.SetAnalyticsCollectionEnabled(true);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalytics_tD795458723B5E379F9A54AD400832DE6A96369A7_il2cpp_TypeInfo_var);
		FirebaseAnalytics_SetAnalyticsCollectionEnabled_m101E3CBEC1F3CBCD2514BECC6AAA1FD8CCDECCF8((bool)1, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, const RuntimeMethod* method)
{
	{
		// return m_Texture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = __this->get_m_Texture_36();
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
