#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A;
// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0;
// Photon.Realtime.Demo.ConnectAndJoinRandomLb
struct ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788;
// LobbyManager
struct LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Platform
struct Platform_tE0375775CB67D8832F7B76160CD58F5FBBAC5A79;
// PlayerControls
struct PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3;
// PlayersAction
struct PlayersAction_tA8276555252BDD94DA8EBDD64B4352D81800B517;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// Photon.Realtime.Room
struct Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D;
// Sword
struct Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85;
// TestBody
struct TestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_tE9C5D44161066EEE105CF1C68A46B53371E75E35;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3710C45C1DDD89BC48E36D71C3C0F18B0E0E880D;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t62D51A72B9F1C91A2D811EE80DC9239BDD6F90CB;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>
struct List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>
struct List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>
struct List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t745FCA5180E853BD454A81B6D899CCA2BF6E3C2F;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t1D673277C302265BA143A7DD99DD859AF26CD431;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_tFF9526B5F79416765882A99F02C06F237631B787;
// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>
struct Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// Photon.Realtime.AppSettings
struct AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Experimental.Rendering.Universal.Light2D
struct Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Photon.Realtime.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t89D317370EE00C5999419F4004DC53A4C4A5F327;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t9F1E31D3B7381CCBBC704A54DCC3B73C44E33A54;
// Photon.Pun.PhotonStream
struct PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA;
// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43;
// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214;
// PlayerControls[]
struct PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Photon.Realtime.Region
struct Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0;
// Photon.Realtime.RegionHandler
struct RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB;
// Photon.Realtime.RoomOptions
struct RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F;
// UnityEngine.SortingLayer[]
struct SortingLayerU5BU5D_t38FB8CC491354ADBC2857A462F4E82CA256B1074;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral087B3B42AE270DE8C63648282340EB6ECDF2A621;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F;
IL2CPP_EXTERN_C String_t* _stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E;
IL2CPP_EXTERN_C String_t* _stringLiteral201C291A020EDEEDBB2718B7C6A49EC7AEEA04F2;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2C24EB5C5FDCF702DA7203A3BB6F48F680453B8B;
IL2CPP_EXTERN_C String_t* _stringLiteral318177751B7E74DD289B4A0DFEEED1417BCFDED2;
IL2CPP_EXTERN_C String_t* _stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF7F9CC2B74437B5A104CC67112E2838CFF01D8;
IL2CPP_EXTERN_C String_t* _stringLiteral3D2960ADEE26ABF35D01A7E5A6F803CB8D04B7A1;
IL2CPP_EXTERN_C String_t* _stringLiteral41CBCC11FADCCBB8E6B9FDFC14A29114B0D0C8F5;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75;
IL2CPP_EXTERN_C String_t* _stringLiteral5334DD52B9BCEF6E62ABDBF84A8FBA13308C4B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral59FB6E3A69D96C819E9495E7FE500DD5CB418E54;
IL2CPP_EXTERN_C String_t* _stringLiteral5BDAB71493423C3B77BD2925FF7B2A473E32FD0D;
IL2CPP_EXTERN_C String_t* _stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D;
IL2CPP_EXTERN_C String_t* _stringLiteral66AB0838075C56A54F8CB3E7AA02E3274380E897;
IL2CPP_EXTERN_C String_t* _stringLiteral692CFAB7F0E96FB317ECD81BE188FB45205CF29C;
IL2CPP_EXTERN_C String_t* _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54;
IL2CPP_EXTERN_C String_t* _stringLiteral6C00B0684A4D335938F3AE3B16574DC95FE0D6C2;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F;
IL2CPP_EXTERN_C String_t* _stringLiteral926A646AB5A68B4F9CE13C5B42BF00FE91E8C2D9;
IL2CPP_EXTERN_C String_t* _stringLiteral928901BEC1368C5634F6F9F970A2C1C0639DEE17;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB6D605A9087410128B41F667A579D1A26C21F6F6;
IL2CPP_EXTERN_C String_t* _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
IL2CPP_EXTERN_C String_t* _stringLiteralC968D338E400FE0CAA838F64C815E2DDB55118DC;
IL2CPP_EXTERN_C String_t* _stringLiteralD54BF7B9D65575B09BE05B9BE1E97F627F60C932;
IL2CPP_EXTERN_C String_t* _stringLiteralDA1F705778A325489228AC526C58287EAE07A387;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDEBB7823005183493B5C0CB3A84A421CEEB22AA1;
IL2CPP_EXTERN_C String_t* _stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m59F317983F5EF3E217C879BFC6FA0DD19294F5E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectAndJoinRandomLb_OnRegionPingCompleted_mD76EE8F39A7AE8EF7E071B9E1C5D1A52452FEF17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_m1573E3D0495C5C6D9E812428FC4E883D720A9246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3_m26B29BC4ABFC0F3FC0498AEE98DEA10FE4E35F0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85_m580025B496C8FA2FF4ADC713B0D4E8B5EEC36805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6_m15B8C0DC58BA98E614D14869C19C314028690980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3_mF7AEF7F889825219DE209881969347234A53B883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CameraController_Initialize_m70F835DDD1D5314B368D8D8689EA2CD384C64E86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraController_Start_mBDE87C2FCF352957C2B86B67610667663422FBE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraController_Update_m3C257AC762117CFDDAD03C9C4FBBFDE51C61D534_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraController__cctor_m4F364398115412A0E11E1A4206A8743E18C57CDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_OnConnectedToMaster_mCCF5E7C0A7A1A8486F3571F05B2E0662C7C939F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_OnDisconnected_m2576DA0537A899046151D7FA51E25AC367F800A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_OnJoinRandomFailed_m4BCA35CBE444C5AD28D7D713E92E893198F91B69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_OnJoinedRoom_mCE9BDE69A13EA84E9ACA73E064A695B9D3754E8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_OnRegionListReceived_m6F54D1CDC5C51EF9ED8C44E439E83210851CDA8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_OnRegionPingCompleted_mD76EE8F39A7AE8EF7E071B9E1C5D1A52452FEF17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_Start_m8784F9A942632995E527C9AAC79D40049C1B4421_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb_Update_m27F506BAFEF2C3264B9030218D0ADB86478750E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConnectAndJoinRandomLb__ctor_mD06217DD59635BD5DC39E8E14274D6604FDF85C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_OnLeftRoom_m05E570520EF1061C7049F738C8B92FF315E96DF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LobbyManager_OnConnectedToMaster_mF4F6B5A8B66499597F71A73F34B168E2DE406025_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LobbyManager_OnJoinedRoom_m2557D839437B33F09F02FC76DBB78AE7B73B36B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LobbyManager_SetSwordParameters_m59F37B0DA848989649EE7E524D8D802122CF87EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LobbyManager_SetSwordParameters_m8AE94E6A6E9E44DA44A677C2F5B39D3A2E04E371_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LobbyManager_StartNetwork_m0A4AE204F5F6397E9318C1CEFD6A6079F9A04ACA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LobbyManager_Start_m8D3C944B907AEA4ACAF73C3F5A082F9CCDB00DE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_ChangePhantom_m40767DC2DA06C8E5BAB13577F2A82C80667748B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_Start_m4912B5D8D6F513B06E333352D517EF7B01399974_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerControls_CheckSurroundings_m6595169336EECD68E45DBAA75D1ADBD6D3E50399_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerControls_Jump_m6BB174E3AA4DB2FBF57D152F7AD24CD91ECF1D7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerControls_OnCollisionEnter2D_mE5A5641AF2CC240050EF944BDCA35C12F064CB23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerControls_OnPhotonSerializeView_m6AE481CF30CC5A53DAC4FDAA6179AED94CE8DC35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerControls_SetAnims_m5C46394688AED0C75562CC5078C68CE37F5B7FD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerControls_Start_mB9489C35C70BB20AA18FC5359CFD9479116004D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerControls_Update_mA38B48E800B339AE629F0CA32238CD57E7271E84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayersAction_FindPlayer_m19991E1A1FF6D360DDA93F6EA1F16BD3CA03E772_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Sword_OnCollisionEnter2D_mB1243A1B4982AF708518929B7108F298D8B17B0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Sword_SetColor_mBBC1C9DE0E247F5134838F4AFA648C9829C078D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Sword_SetLength_m3D6C32B2EC95A7E9910B09721E111BB999D00BF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Sword_SetNullText_m7511CDB3F1EA636D251F1ECAECE0C449C5EF0141_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Sword_Start_mC43172D623D5F4D3715D9300977E93DF0E11C9F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TestBody_OnCollisionEnter2D_m4BE1715DFD1F7A4480062F80C48C84688FAF512B_MetadataUsageId;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
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


// Photon.Pun.PhotonStream
struct  PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonStream::writeData
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___writeData_0;
	// System.Object[] Photon.Pun.PhotonStream::readData
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___readData_1;
	// System.Int32 Photon.Pun.PhotonStream::currentItem
	int32_t ___currentItem_2;
	// System.Boolean Photon.Pun.PhotonStream::<IsWriting>k__BackingField
	bool ___U3CIsWritingU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_writeData_0() { return static_cast<int32_t>(offsetof(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA, ___writeData_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_writeData_0() const { return ___writeData_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_writeData_0() { return &___writeData_0; }
	inline void set_writeData_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___writeData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeData_0), (void*)value);
	}

	inline static int32_t get_offset_of_readData_1() { return static_cast<int32_t>(offsetof(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA, ___readData_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_readData_1() const { return ___readData_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_readData_1() { return &___readData_1; }
	inline void set_readData_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___readData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readData_1), (void*)value);
	}

	inline static int32_t get_offset_of_currentItem_2() { return static_cast<int32_t>(offsetof(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA, ___currentItem_2)); }
	inline int32_t get_currentItem_2() const { return ___currentItem_2; }
	inline int32_t* get_address_of_currentItem_2() { return &___currentItem_2; }
	inline void set_currentItem_2(int32_t value)
	{
		___currentItem_2 = value;
	}

	inline static int32_t get_offset_of_U3CIsWritingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA, ___U3CIsWritingU3Ek__BackingField_3)); }
	inline bool get_U3CIsWritingU3Ek__BackingField_3() const { return ___U3CIsWritingU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsWritingU3Ek__BackingField_3() { return &___U3CIsWritingU3Ek__BackingField_3; }
	inline void set_U3CIsWritingU3Ek__BackingField_3(bool value)
	{
		___U3CIsWritingU3Ek__BackingField_3 = value;
	}
};


// Photon.Realtime.Region
struct  Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.Region::<Code>k__BackingField
	String_t* ___U3CCodeU3Ek__BackingField_0;
	// System.String Photon.Realtime.Region::<Cluster>k__BackingField
	String_t* ___U3CClusterU3Ek__BackingField_1;
	// System.String Photon.Realtime.Region::<HostAndPort>k__BackingField
	String_t* ___U3CHostAndPortU3Ek__BackingField_2;
	// System.Int32 Photon.Realtime.Region::<Ping>k__BackingField
	int32_t ___U3CPingU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0, ___U3CCodeU3Ek__BackingField_0)); }
	inline String_t* get_U3CCodeU3Ek__BackingField_0() const { return ___U3CCodeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCodeU3Ek__BackingField_0() { return &___U3CCodeU3Ek__BackingField_0; }
	inline void set_U3CCodeU3Ek__BackingField_0(String_t* value)
	{
		___U3CCodeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCodeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClusterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0, ___U3CClusterU3Ek__BackingField_1)); }
	inline String_t* get_U3CClusterU3Ek__BackingField_1() const { return ___U3CClusterU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CClusterU3Ek__BackingField_1() { return &___U3CClusterU3Ek__BackingField_1; }
	inline void set_U3CClusterU3Ek__BackingField_1(String_t* value)
	{
		___U3CClusterU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClusterU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHostAndPortU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0, ___U3CHostAndPortU3Ek__BackingField_2)); }
	inline String_t* get_U3CHostAndPortU3Ek__BackingField_2() const { return ___U3CHostAndPortU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CHostAndPortU3Ek__BackingField_2() { return &___U3CHostAndPortU3Ek__BackingField_2; }
	inline void set_U3CHostAndPortU3Ek__BackingField_2(String_t* value)
	{
		___U3CHostAndPortU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHostAndPortU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0, ___U3CPingU3Ek__BackingField_3)); }
	inline int32_t get_U3CPingU3Ek__BackingField_3() const { return ___U3CPingU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CPingU3Ek__BackingField_3() { return &___U3CPingU3Ek__BackingField_3; }
	inline void set_U3CPingU3Ek__BackingField_3(int32_t value)
	{
		___U3CPingU3Ek__BackingField_3 = value;
	}
};


// Photon.Realtime.RegionHandler
struct  RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_t745FCA5180E853BD454A81B6D899CCA2BF6E3C2F * ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t1D673277C302265BA143A7DD99DD859AF26CD431 * ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 * ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_7;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_8;

public:
	inline static int32_t get_offset_of_U3CEnabledRegionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___U3CEnabledRegionsU3Ek__BackingField_1)); }
	inline List_1_t745FCA5180E853BD454A81B6D899CCA2BF6E3C2F * get_U3CEnabledRegionsU3Ek__BackingField_1() const { return ___U3CEnabledRegionsU3Ek__BackingField_1; }
	inline List_1_t745FCA5180E853BD454A81B6D899CCA2BF6E3C2F ** get_address_of_U3CEnabledRegionsU3Ek__BackingField_1() { return &___U3CEnabledRegionsU3Ek__BackingField_1; }
	inline void set_U3CEnabledRegionsU3Ek__BackingField_1(List_1_t745FCA5180E853BD454A81B6D899CCA2BF6E3C2F * value)
	{
		___U3CEnabledRegionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnabledRegionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_availableRegionCodes_2() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___availableRegionCodes_2)); }
	inline String_t* get_availableRegionCodes_2() const { return ___availableRegionCodes_2; }
	inline String_t** get_address_of_availableRegionCodes_2() { return &___availableRegionCodes_2; }
	inline void set_availableRegionCodes_2(String_t* value)
	{
		___availableRegionCodes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availableRegionCodes_2), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionCache_3() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___bestRegionCache_3)); }
	inline Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * get_bestRegionCache_3() const { return ___bestRegionCache_3; }
	inline Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 ** get_address_of_bestRegionCache_3() { return &___bestRegionCache_3; }
	inline void set_bestRegionCache_3(Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * value)
	{
		___bestRegionCache_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionCache_3), (void*)value);
	}

	inline static int32_t get_offset_of_pingerList_4() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___pingerList_4)); }
	inline List_1_t1D673277C302265BA143A7DD99DD859AF26CD431 * get_pingerList_4() const { return ___pingerList_4; }
	inline List_1_t1D673277C302265BA143A7DD99DD859AF26CD431 ** get_address_of_pingerList_4() { return &___pingerList_4; }
	inline void set_pingerList_4(List_1_t1D673277C302265BA143A7DD99DD859AF26CD431 * value)
	{
		___pingerList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pingerList_4), (void*)value);
	}

	inline static int32_t get_offset_of_onCompleteCall_5() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___onCompleteCall_5)); }
	inline Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 * get_onCompleteCall_5() const { return ___onCompleteCall_5; }
	inline Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 ** get_address_of_onCompleteCall_5() { return &___onCompleteCall_5; }
	inline void set_onCompleteCall_5(Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 * value)
	{
		___onCompleteCall_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleteCall_5), (void*)value);
	}

	inline static int32_t get_offset_of_previousPing_6() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___previousPing_6)); }
	inline int32_t get_previousPing_6() const { return ___previousPing_6; }
	inline int32_t* get_address_of_previousPing_6() { return &___previousPing_6; }
	inline void set_previousPing_6(int32_t value)
	{
		___previousPing_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPingingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___U3CIsPingingU3Ek__BackingField_7)); }
	inline bool get_U3CIsPingingU3Ek__BackingField_7() const { return ___U3CIsPingingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPingingU3Ek__BackingField_7() { return &___U3CIsPingingU3Ek__BackingField_7; }
	inline void set_U3CIsPingingU3Ek__BackingField_7(bool value)
	{
		___U3CIsPingingU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_previousSummaryProvided_8() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53, ___previousSummaryProvided_8)); }
	inline String_t* get_previousSummaryProvided_8() const { return ___previousSummaryProvided_8; }
	inline String_t** get_address_of_previousSummaryProvided_8() { return &___previousSummaryProvided_8; }
	inline void set_previousSummaryProvided_8(String_t* value)
	{
		___previousSummaryProvided_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousSummaryProvided_8), (void*)value);
	}
};

struct RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53_StaticFields
{
public:
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t * ___PingImplementation_0;

public:
	inline static int32_t get_offset_of_PingImplementation_0() { return static_cast<int32_t>(offsetof(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53_StaticFields, ___PingImplementation_0)); }
	inline Type_t * get_PingImplementation_0() const { return ___PingImplementation_0; }
	inline Type_t ** get_address_of_PingImplementation_0() { return &___PingImplementation_0; }
	inline void set_PingImplementation_0(Type_t * value)
	{
		___PingImplementation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingImplementation_0), (void*)value);
	}
};


// Photon.Realtime.RoomOptions
struct  RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585 * ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_12;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_13;

public:
	inline static int32_t get_offset_of_isVisible_0() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___isVisible_0)); }
	inline bool get_isVisible_0() const { return ___isVisible_0; }
	inline bool* get_address_of_isVisible_0() { return &___isVisible_0; }
	inline void set_isVisible_0(bool value)
	{
		___isVisible_0 = value;
	}

	inline static int32_t get_offset_of_isOpen_1() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___isOpen_1)); }
	inline bool get_isOpen_1() const { return ___isOpen_1; }
	inline bool* get_address_of_isOpen_1() { return &___isOpen_1; }
	inline void set_isOpen_1(bool value)
	{
		___isOpen_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___MaxPlayers_2)); }
	inline uint8_t get_MaxPlayers_2() const { return ___MaxPlayers_2; }
	inline uint8_t* get_address_of_MaxPlayers_2() { return &___MaxPlayers_2; }
	inline void set_MaxPlayers_2(uint8_t value)
	{
		___MaxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_EmptyRoomTtl_4() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___EmptyRoomTtl_4)); }
	inline int32_t get_EmptyRoomTtl_4() const { return ___EmptyRoomTtl_4; }
	inline int32_t* get_address_of_EmptyRoomTtl_4() { return &___EmptyRoomTtl_4; }
	inline void set_EmptyRoomTtl_4(int32_t value)
	{
		___EmptyRoomTtl_4 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeave_5() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___cleanupCacheOnLeave_5)); }
	inline bool get_cleanupCacheOnLeave_5() const { return ___cleanupCacheOnLeave_5; }
	inline bool* get_address_of_cleanupCacheOnLeave_5() { return &___cleanupCacheOnLeave_5; }
	inline void set_cleanupCacheOnLeave_5(bool value)
	{
		___cleanupCacheOnLeave_5 = value;
	}

	inline static int32_t get_offset_of_CustomRoomProperties_6() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___CustomRoomProperties_6)); }
	inline Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585 * get_CustomRoomProperties_6() const { return ___CustomRoomProperties_6; }
	inline Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585 ** get_address_of_CustomRoomProperties_6() { return &___CustomRoomProperties_6; }
	inline void set_CustomRoomProperties_6(Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585 * value)
	{
		___CustomRoomProperties_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomProperties_6), (void*)value);
	}

	inline static int32_t get_offset_of_CustomRoomPropertiesForLobby_7() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___CustomRoomPropertiesForLobby_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_CustomRoomPropertiesForLobby_7() const { return ___CustomRoomPropertiesForLobby_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_CustomRoomPropertiesForLobby_7() { return &___CustomRoomPropertiesForLobby_7; }
	inline void set_CustomRoomPropertiesForLobby_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___CustomRoomPropertiesForLobby_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomPropertiesForLobby_7), (void*)value);
	}

	inline static int32_t get_offset_of_Plugins_8() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___Plugins_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Plugins_8() const { return ___Plugins_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Plugins_8() { return &___Plugins_8; }
	inline void set_Plugins_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Plugins_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plugins_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CSuppressRoomEventsU3Ek__BackingField_9)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_9() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return &___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_9(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressPlayerInfoU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CSuppressPlayerInfoU3Ek__BackingField_10)); }
	inline bool get_U3CSuppressPlayerInfoU3Ek__BackingField_10() const { return ___U3CSuppressPlayerInfoU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CSuppressPlayerInfoU3Ek__BackingField_10() { return &___U3CSuppressPlayerInfoU3Ek__BackingField_10; }
	inline void set_U3CSuppressPlayerInfoU3Ek__BackingField_10(bool value)
	{
		___U3CSuppressPlayerInfoU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CPublishUserIdU3Ek__BackingField_11)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_11() const { return ___U3CPublishUserIdU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_11() { return &___U3CPublishUserIdU3Ek__BackingField_11; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_11(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CDeleteNullPropertiesU3Ek__BackingField_12)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_12() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_12() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_12; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_12(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_broadcastPropsChangeToAll_13() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___broadcastPropsChangeToAll_13)); }
	inline bool get_broadcastPropsChangeToAll_13() const { return ___broadcastPropsChangeToAll_13; }
	inline bool* get_address_of_broadcastPropsChangeToAll_13() { return &___broadcastPropsChangeToAll_13; }
	inline void set_broadcastPropsChangeToAll_13(bool value)
	{
		___broadcastPropsChangeToAll_13 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct  List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C, ____items_1)); }
	inline FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982* get__items_1() const { return ____items_1; }
	inline FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C_StaticFields, ____emptyArray_5)); }
	inline FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct  List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694, ____items_1)); }
	inline RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB* get__items_1() const { return ____items_1; }
	inline RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694_StaticFields, ____emptyArray_5)); }
	inline RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct  List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70, ____items_1)); }
	inline TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A* get__items_1() const { return ____items_1; }
	inline TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70_StaticFields, ____emptyArray_5)); }
	inline TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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

// Photon.Pun.PhotonMessageInfo
struct  PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786 
{
public:
	// System.Int32 Photon.Pun.PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// Photon.Realtime.Player Photon.Pun.PhotonMessageInfo::Sender
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___Sender_1;
	// Photon.Pun.PhotonView Photon.Pun.PhotonMessageInfo::photonView
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_2;

public:
	inline static int32_t get_offset_of_timeInt_0() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786, ___timeInt_0)); }
	inline int32_t get_timeInt_0() const { return ___timeInt_0; }
	inline int32_t* get_address_of_timeInt_0() { return &___timeInt_0; }
	inline void set_timeInt_0(int32_t value)
	{
		___timeInt_0 = value;
	}

	inline static int32_t get_offset_of_Sender_1() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786, ___Sender_1)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_Sender_1() const { return ___Sender_1; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_Sender_1() { return &___Sender_1; }
	inline void set_Sender_1(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___Sender_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sender_1), (void*)value);
	}

	inline static int32_t get_offset_of_photonView_2() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786, ___photonView_2)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_photonView_2() const { return ___photonView_2; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_photonView_2() { return &___photonView_2; }
	inline void set_photonView_2(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___photonView_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonView_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786_marshaled_pinvoke
{
	int32_t ___timeInt_0;
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___Sender_1;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_2;
};
// Native definition for COM marshalling of Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786_marshaled_com
{
	int32_t ___timeInt_0;
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___Sender_1;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_2;
};

// Photon.Realtime.PhotonPortDefinition
struct  PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0 
{
public:
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;

public:
	inline static int32_t get_offset_of_NameServerPort_1() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0, ___NameServerPort_1)); }
	inline uint16_t get_NameServerPort_1() const { return ___NameServerPort_1; }
	inline uint16_t* get_address_of_NameServerPort_1() { return &___NameServerPort_1; }
	inline void set_NameServerPort_1(uint16_t value)
	{
		___NameServerPort_1 = value;
	}

	inline static int32_t get_offset_of_MasterServerPort_2() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0, ___MasterServerPort_2)); }
	inline uint16_t get_MasterServerPort_2() const { return ___MasterServerPort_2; }
	inline uint16_t* get_address_of_MasterServerPort_2() { return &___MasterServerPort_2; }
	inline void set_MasterServerPort_2(uint16_t value)
	{
		___MasterServerPort_2 = value;
	}

	inline static int32_t get_offset_of_GameServerPort_3() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0, ___GameServerPort_3)); }
	inline uint16_t get_GameServerPort_3() const { return ___GameServerPort_3; }
	inline uint16_t* get_address_of_GameServerPort_3() { return &___GameServerPort_3; }
	inline void set_GameServerPort_3(uint16_t value)
	{
		___GameServerPort_3 = value;
	}
};

struct PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0_StaticFields
{
public:
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  ___AlternativeUdpPorts_0;

public:
	inline static int32_t get_offset_of_AlternativeUdpPorts_0() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0_StaticFields, ___AlternativeUdpPorts_0)); }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  get_AlternativeUdpPorts_0() const { return ___AlternativeUdpPorts_0; }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0 * get_address_of_AlternativeUdpPorts_0() { return &___AlternativeUdpPorts_0; }
	inline void set_AlternativeUdpPorts_0(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  value)
	{
		___AlternativeUdpPorts_0 = value;
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

// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.LayerMask
struct  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
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


// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_tF7BD755EE9A5E751E40A51419A3A3B5BC74958F4 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tF7BD755EE9A5E751E40A51419A3A3B5BC74958F4, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t233FFCC3ED641E3421E11C601F8E24CDB5C48916 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_t233FFCC3ED641E3421E11C601F8E24CDB5C48916, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_tA2DB3231DAE8FF0067F8AFCB88B26E51668A05FA 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_tA2DB3231DAE8FF0067F8AFCB88B26E51668A05FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.OwnershipOption
struct  OwnershipOption_tA73B63AF021F3A834648A00C392B4BDB197E9771 
{
public:
	// System.Int32 Photon.Pun.OwnershipOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OwnershipOption_tA73B63AF021F3A834648A00C392B4BDB197E9771, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonView_ObservableSearch
struct  ObservableSearch_t45D1FEF0FC92346CB3A3AEC86E2B9E8B59AE6C47 
{
public:
	// System.Int32 Photon.Pun.PhotonView_ObservableSearch::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObservableSearch_t45D1FEF0FC92346CB3A3AEC86E2B9E8B59AE6C47, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonView_OwnershipCacheState
struct  OwnershipCacheState_t4EAA183B79E2A458EF0F79F6BC00A1BE6804487C 
{
public:
	// System.Int32 Photon.Pun.PhotonView_OwnershipCacheState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OwnershipCacheState_t4EAA183B79E2A458EF0F79F6BC00A1BE6804487C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.ViewSynchronization
struct  ViewSynchronization_t9F4F7159BEC18584EC739EB1EA837517AF3BF1CD 
{
public:
	// System.Int32 Photon.Pun.ViewSynchronization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewSynchronization_t9F4F7159BEC18584EC739EB1EA837517AF3BF1CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.AuthModeOption
struct  AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8 
{
public:
	// System.Int32 Photon.Realtime.AuthModeOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ClientState
struct  ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE 
{
public:
	// System.Int32 Photon.Realtime.ClientState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.DisconnectCause
struct  DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6 
{
public:
	// System.Int32 Photon.Realtime.DisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.EncryptionMode
struct  EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD 
{
public:
	// System.Int32 Photon.Realtime.EncryptionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.JoinMode
struct  JoinMode_tEB839015698BA62F01451B47746D8CACCBCB4252 
{
public:
	// System.Byte Photon.Realtime.JoinMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoinMode_tEB839015698BA62F01451B47746D8CACCBCB4252, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.JoinType
struct  JoinType_t2B1031B1428F1DD0B093F43E3D4242D91E23FF65 
{
public:
	// System.Int32 Photon.Realtime.JoinType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoinType_t2B1031B1428F1DD0B093F43E3D4242D91E23FF65, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.LobbyType
struct  LobbyType_t398AB21E35E9CD63CD9E514CEC5475D70D1413C1 
{
public:
	// System.Byte Photon.Realtime.LobbyType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LobbyType_t398AB21E35E9CD63CD9E514CEC5475D70D1413C1, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.MatchmakingMode
struct  MatchmakingMode_tCA6C5633BA97E67DA426841F4915A3A76EDFE6DB 
{
public:
	// System.Byte Photon.Realtime.MatchmakingMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchmakingMode_tCA6C5633BA97E67DA426841F4915A3A76EDFE6DB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ServerConnection
struct  ServerConnection_t85511B4B2D222BF3E597E032A33940A848958DB2 
{
public:
	// System.Int32 Photon.Realtime.ServerConnection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerConnection_t85511B4B2D222BF3E597E032A33940A848958DB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.Bounds
struct  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Collision2D
struct  Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.Experimental.Rendering.Universal.Light2D_LightType
struct  LightType_t932AA0C9AE514928E47B04E01E108889E66CF5CD 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D_LightType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t932AA0C9AE514928E47B04E01E108889E66CF5CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.Light2D_PointLightQuality
struct  PointLightQuality_t71B86FB9E127F9DD2550B2C774BCB9F9DB404C55 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D_PointLightQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointLightQuality_t71B86FB9E127F9DD2550B2C774BCB9F9DB404C55, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ForceMode2D
struct  ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RigidbodyConstraints2D
struct  RigidbodyConstraints2D_t9B0EF89A1549D1EB17CADD272F004676C01F5437 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyConstraints2D_t9B0EF89A1549D1EB17CADD272F004676C01F5437, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.AppSettings
struct  AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_1;
	// System.String Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_2;
	// System.String Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_3;
	// System.Boolean Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_4;
	// System.String Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_5;
	// System.String Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_6;
	// System.String Photon.Realtime.AppSettings::Server
	String_t* ___Server_7;
	// System.Int32 Photon.Realtime.AppSettings::Port
	int32_t ___Port_8;
	// System.String Photon.Realtime.AppSettings::ProxyServer
	String_t* ___ProxyServer_9;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_10;
	// System.Boolean Photon.Realtime.AppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_11;
	// Photon.Realtime.AuthModeOption Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_12;
	// System.Boolean Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_13;
	// ExitGames.Client.Photon.DebugLevel Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_14;

public:
	inline static int32_t get_offset_of_AppIdRealtime_0() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppIdRealtime_0)); }
	inline String_t* get_AppIdRealtime_0() const { return ___AppIdRealtime_0; }
	inline String_t** get_address_of_AppIdRealtime_0() { return &___AppIdRealtime_0; }
	inline void set_AppIdRealtime_0(String_t* value)
	{
		___AppIdRealtime_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdRealtime_0), (void*)value);
	}

	inline static int32_t get_offset_of_AppIdChat_1() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppIdChat_1)); }
	inline String_t* get_AppIdChat_1() const { return ___AppIdChat_1; }
	inline String_t** get_address_of_AppIdChat_1() { return &___AppIdChat_1; }
	inline void set_AppIdChat_1(String_t* value)
	{
		___AppIdChat_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdChat_1), (void*)value);
	}

	inline static int32_t get_offset_of_AppIdVoice_2() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppIdVoice_2)); }
	inline String_t* get_AppIdVoice_2() const { return ___AppIdVoice_2; }
	inline String_t** get_address_of_AppIdVoice_2() { return &___AppIdVoice_2; }
	inline void set_AppIdVoice_2(String_t* value)
	{
		___AppIdVoice_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdVoice_2), (void*)value);
	}

	inline static int32_t get_offset_of_AppVersion_3() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppVersion_3)); }
	inline String_t* get_AppVersion_3() const { return ___AppVersion_3; }
	inline String_t** get_address_of_AppVersion_3() { return &___AppVersion_3; }
	inline void set_AppVersion_3(String_t* value)
	{
		___AppVersion_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppVersion_3), (void*)value);
	}

	inline static int32_t get_offset_of_UseNameServer_4() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___UseNameServer_4)); }
	inline bool get_UseNameServer_4() const { return ___UseNameServer_4; }
	inline bool* get_address_of_UseNameServer_4() { return &___UseNameServer_4; }
	inline void set_UseNameServer_4(bool value)
	{
		___UseNameServer_4 = value;
	}

	inline static int32_t get_offset_of_FixedRegion_5() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___FixedRegion_5)); }
	inline String_t* get_FixedRegion_5() const { return ___FixedRegion_5; }
	inline String_t** get_address_of_FixedRegion_5() { return &___FixedRegion_5; }
	inline void set_FixedRegion_5(String_t* value)
	{
		___FixedRegion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedRegion_5), (void*)value);
	}

	inline static int32_t get_offset_of_BestRegionSummaryFromStorage_6() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___BestRegionSummaryFromStorage_6)); }
	inline String_t* get_BestRegionSummaryFromStorage_6() const { return ___BestRegionSummaryFromStorage_6; }
	inline String_t** get_address_of_BestRegionSummaryFromStorage_6() { return &___BestRegionSummaryFromStorage_6; }
	inline void set_BestRegionSummaryFromStorage_6(String_t* value)
	{
		___BestRegionSummaryFromStorage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BestRegionSummaryFromStorage_6), (void*)value);
	}

	inline static int32_t get_offset_of_Server_7() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___Server_7)); }
	inline String_t* get_Server_7() const { return ___Server_7; }
	inline String_t** get_address_of_Server_7() { return &___Server_7; }
	inline void set_Server_7(String_t* value)
	{
		___Server_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Server_7), (void*)value);
	}

	inline static int32_t get_offset_of_Port_8() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___Port_8)); }
	inline int32_t get_Port_8() const { return ___Port_8; }
	inline int32_t* get_address_of_Port_8() { return &___Port_8; }
	inline void set_Port_8(int32_t value)
	{
		___Port_8 = value;
	}

	inline static int32_t get_offset_of_ProxyServer_9() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___ProxyServer_9)); }
	inline String_t* get_ProxyServer_9() const { return ___ProxyServer_9; }
	inline String_t** get_address_of_ProxyServer_9() { return &___ProxyServer_9; }
	inline void set_ProxyServer_9(String_t* value)
	{
		___ProxyServer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProxyServer_9), (void*)value);
	}

	inline static int32_t get_offset_of_Protocol_10() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___Protocol_10)); }
	inline uint8_t get_Protocol_10() const { return ___Protocol_10; }
	inline uint8_t* get_address_of_Protocol_10() { return &___Protocol_10; }
	inline void set_Protocol_10(uint8_t value)
	{
		___Protocol_10 = value;
	}

	inline static int32_t get_offset_of_EnableProtocolFallback_11() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___EnableProtocolFallback_11)); }
	inline bool get_EnableProtocolFallback_11() const { return ___EnableProtocolFallback_11; }
	inline bool* get_address_of_EnableProtocolFallback_11() { return &___EnableProtocolFallback_11; }
	inline void set_EnableProtocolFallback_11(bool value)
	{
		___EnableProtocolFallback_11 = value;
	}

	inline static int32_t get_offset_of_AuthMode_12() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AuthMode_12)); }
	inline int32_t get_AuthMode_12() const { return ___AuthMode_12; }
	inline int32_t* get_address_of_AuthMode_12() { return &___AuthMode_12; }
	inline void set_AuthMode_12(int32_t value)
	{
		___AuthMode_12 = value;
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_13() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___EnableLobbyStatistics_13)); }
	inline bool get_EnableLobbyStatistics_13() const { return ___EnableLobbyStatistics_13; }
	inline bool* get_address_of_EnableLobbyStatistics_13() { return &___EnableLobbyStatistics_13; }
	inline void set_EnableLobbyStatistics_13(bool value)
	{
		___EnableLobbyStatistics_13 = value;
	}

	inline static int32_t get_offset_of_NetworkLogging_14() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___NetworkLogging_14)); }
	inline uint8_t get_NetworkLogging_14() const { return ___NetworkLogging_14; }
	inline uint8_t* get_address_of_NetworkLogging_14() { return &___NetworkLogging_14; }
	inline void set_NetworkLogging_14(uint8_t value)
	{
		___NetworkLogging_14 = value;
	}
};


// Photon.Realtime.EnterRoomParams
struct  EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// Photon.Realtime.RoomOptions Photon.Realtime.EnterRoomParams::RoomOptions
	RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * ___RoomOptions_1;
	// Photon.Realtime.TypedLobby Photon.Realtime.EnterRoomParams::Lobby
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.EnterRoomParams::PlayerProperties
	Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585 * ___PlayerProperties_3;
	// System.Boolean Photon.Realtime.EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// Photon.Realtime.JoinMode Photon.Realtime.EnterRoomParams::JoinMode
	uint8_t ___JoinMode_5;
	// System.String[] Photon.Realtime.EnterRoomParams::ExpectedUsers
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___ExpectedUsers_6;

public:
	inline static int32_t get_offset_of_RoomName_0() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___RoomName_0)); }
	inline String_t* get_RoomName_0() const { return ___RoomName_0; }
	inline String_t** get_address_of_RoomName_0() { return &___RoomName_0; }
	inline void set_RoomName_0(String_t* value)
	{
		___RoomName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomName_0), (void*)value);
	}

	inline static int32_t get_offset_of_RoomOptions_1() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___RoomOptions_1)); }
	inline RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * get_RoomOptions_1() const { return ___RoomOptions_1; }
	inline RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F ** get_address_of_RoomOptions_1() { return &___RoomOptions_1; }
	inline void set_RoomOptions_1(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * value)
	{
		___RoomOptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomOptions_1), (void*)value);
	}

	inline static int32_t get_offset_of_Lobby_2() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___Lobby_2)); }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * get_Lobby_2() const { return ___Lobby_2; }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 ** get_address_of_Lobby_2() { return &___Lobby_2; }
	inline void set_Lobby_2(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * value)
	{
		___Lobby_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Lobby_2), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerProperties_3() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___PlayerProperties_3)); }
	inline Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585 * get_PlayerProperties_3() const { return ___PlayerProperties_3; }
	inline Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585 ** get_address_of_PlayerProperties_3() { return &___PlayerProperties_3; }
	inline void set_PlayerProperties_3(Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585 * value)
	{
		___PlayerProperties_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerProperties_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnGameServer_4() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___OnGameServer_4)); }
	inline bool get_OnGameServer_4() const { return ___OnGameServer_4; }
	inline bool* get_address_of_OnGameServer_4() { return &___OnGameServer_4; }
	inline void set_OnGameServer_4(bool value)
	{
		___OnGameServer_4 = value;
	}

	inline static int32_t get_offset_of_JoinMode_5() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___JoinMode_5)); }
	inline uint8_t get_JoinMode_5() const { return ___JoinMode_5; }
	inline uint8_t* get_address_of_JoinMode_5() { return &___JoinMode_5; }
	inline void set_JoinMode_5(uint8_t value)
	{
		___JoinMode_5 = value;
	}

	inline static int32_t get_offset_of_ExpectedUsers_6() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___ExpectedUsers_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_ExpectedUsers_6() const { return ___ExpectedUsers_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_ExpectedUsers_6() { return &___ExpectedUsers_6; }
	inline void set_ExpectedUsers_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___ExpectedUsers_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpectedUsers_6), (void*)value);
	}
};


// Photon.Realtime.OpJoinRandomRoomParams
struct  OpJoinRandomRoomParams_t89D317370EE00C5999419F4004DC53A4C4A5F327  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.OpJoinRandomRoomParams::ExpectedCustomRoomProperties
	Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585 * ___ExpectedCustomRoomProperties_0;
	// System.Byte Photon.Realtime.OpJoinRandomRoomParams::ExpectedMaxPlayers
	uint8_t ___ExpectedMaxPlayers_1;
	// Photon.Realtime.MatchmakingMode Photon.Realtime.OpJoinRandomRoomParams::MatchingType
	uint8_t ___MatchingType_2;
	// Photon.Realtime.TypedLobby Photon.Realtime.OpJoinRandomRoomParams::TypedLobby
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * ___TypedLobby_3;
	// System.String Photon.Realtime.OpJoinRandomRoomParams::SqlLobbyFilter
	String_t* ___SqlLobbyFilter_4;
	// System.String[] Photon.Realtime.OpJoinRandomRoomParams::ExpectedUsers
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___ExpectedUsers_5;

public:
	inline static int32_t get_offset_of_ExpectedCustomRoomProperties_0() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_t89D317370EE00C5999419F4004DC53A4C4A5F327, ___ExpectedCustomRoomProperties_0)); }
	inline Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585 * get_ExpectedCustomRoomProperties_0() const { return ___ExpectedCustomRoomProperties_0; }
	inline Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585 ** get_address_of_ExpectedCustomRoomProperties_0() { return &___ExpectedCustomRoomProperties_0; }
	inline void set_ExpectedCustomRoomProperties_0(Hashtable_tC6A8BA1F8417448809B71A5EAD2D3DA9BEE00585 * value)
	{
		___ExpectedCustomRoomProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpectedCustomRoomProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of_ExpectedMaxPlayers_1() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_t89D317370EE00C5999419F4004DC53A4C4A5F327, ___ExpectedMaxPlayers_1)); }
	inline uint8_t get_ExpectedMaxPlayers_1() const { return ___ExpectedMaxPlayers_1; }
	inline uint8_t* get_address_of_ExpectedMaxPlayers_1() { return &___ExpectedMaxPlayers_1; }
	inline void set_ExpectedMaxPlayers_1(uint8_t value)
	{
		___ExpectedMaxPlayers_1 = value;
	}

	inline static int32_t get_offset_of_MatchingType_2() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_t89D317370EE00C5999419F4004DC53A4C4A5F327, ___MatchingType_2)); }
	inline uint8_t get_MatchingType_2() const { return ___MatchingType_2; }
	inline uint8_t* get_address_of_MatchingType_2() { return &___MatchingType_2; }
	inline void set_MatchingType_2(uint8_t value)
	{
		___MatchingType_2 = value;
	}

	inline static int32_t get_offset_of_TypedLobby_3() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_t89D317370EE00C5999419F4004DC53A4C4A5F327, ___TypedLobby_3)); }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * get_TypedLobby_3() const { return ___TypedLobby_3; }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 ** get_address_of_TypedLobby_3() { return &___TypedLobby_3; }
	inline void set_TypedLobby_3(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * value)
	{
		___TypedLobby_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypedLobby_3), (void*)value);
	}

	inline static int32_t get_offset_of_SqlLobbyFilter_4() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_t89D317370EE00C5999419F4004DC53A4C4A5F327, ___SqlLobbyFilter_4)); }
	inline String_t* get_SqlLobbyFilter_4() const { return ___SqlLobbyFilter_4; }
	inline String_t** get_address_of_SqlLobbyFilter_4() { return &___SqlLobbyFilter_4; }
	inline void set_SqlLobbyFilter_4(String_t* value)
	{
		___SqlLobbyFilter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SqlLobbyFilter_4), (void*)value);
	}

	inline static int32_t get_offset_of_ExpectedUsers_5() { return static_cast<int32_t>(offsetof(OpJoinRandomRoomParams_t89D317370EE00C5999419F4004DC53A4C4A5F327, ___ExpectedUsers_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_ExpectedUsers_5() const { return ___ExpectedUsers_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_ExpectedUsers_5() { return &___ExpectedUsers_5; }
	inline void set_ExpectedUsers_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___ExpectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpectedUsers_5), (void*)value);
	}
};


// Photon.Realtime.TypedLobby
struct  TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.TypedLobby::Name
	String_t* ___Name_0;
	// Photon.Realtime.LobbyType Photon.Realtime.TypedLobby::Type
	uint8_t ___Type_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5, ___Type_1)); }
	inline uint8_t get_Type_1() const { return ___Type_1; }
	inline uint8_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(uint8_t value)
	{
		___Type_1 = value;
	}
};

struct TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_StaticFields
{
public:
	// Photon.Realtime.TypedLobby Photon.Realtime.TypedLobby::Default
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_StaticFields, ___Default_2)); }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * get_Default_2() const { return ___Default_2; }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_2), (void*)value);
	}
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

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct  Nullable_1_tC8BEE56A9FAAE68158805EF42F7BC09E868C9B29 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC8BEE56A9FAAE68158805EF42F7BC09E868C9B29, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC8BEE56A9FAAE68158805EF42F7BC09E868C9B29, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// Photon.Realtime.LoadBalancingClient
struct  LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A  : public RuntimeObject
{
public:
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * ___U3CAuthValuesU3Ek__BackingField_3;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_4;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_5;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tC8BEE56A9FAAE68158805EF42F7BC09E868C9B29  ___U3CExpectedProtocolU3Ek__BackingField_6;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject * ___tokenCache_7;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_8;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_9;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_11;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  ___ServerPortOverrides_12;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_13;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_15;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_16;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_17;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_18;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * ___StateChanged_19;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_tE9C5D44161066EEE105CF1C68A46B53371E75E35 * ___EventReceived_20;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t3710C45C1DDD89BC48E36D71C3C0F18B0E0E880D * ___OpResponseReceived_21;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 * ___ConnectionCallbackTargets_22;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 * ___MatchMakingCallbackTargets_23;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * ___InRoomCallbackTargets_24;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 * ___LobbyCallbackTargets_25;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * ___WebRpcCallbackTargets_26;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 * ___ErrorInfoCallbackTargets_27;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_28;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * ___U3CCurrentLobbyU3Ek__BackingField_29;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_30;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * ___lobbyStatistics_31;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3CLocalPlayerU3Ek__BackingField_32;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___U3CCurrentRoomU3Ek__BackingField_33;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_36;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_37;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * ___enterRoomParamsCache_38;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_t9F1E31D3B7381CCBBC704A54DCC3B73C44E33A54 * ___failedRoomEntryOperation_39;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___friendListRequested_41;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_43;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * ___RegionHandler_44;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_45;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_46;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_47;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient_CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 * ___callbackTargetChanges_48;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ___callbackTargets_49;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_50;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CLoadBalancingPeerU3Ek__BackingField_0)); }
	inline LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * get_U3CLoadBalancingPeerU3Ek__BackingField_0() const { return ___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 ** get_address_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return &___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline void set_U3CLoadBalancingPeerU3Ek__BackingField_0(LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * value)
	{
		___U3CLoadBalancingPeerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingPeerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CAppVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_1() const { return ___U3CAppVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_1() { return &___U3CAppVersionU3Ek__BackingField_1; }
	inline void set_U3CAppVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CAppIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_2() const { return ___U3CAppIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_2() { return &___U3CAppIdU3Ek__BackingField_2; }
	inline void set_U3CAppIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CAuthValuesU3Ek__BackingField_3)); }
	inline AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * get_U3CAuthValuesU3Ek__BackingField_3() const { return ___U3CAuthValuesU3Ek__BackingField_3; }
	inline AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A ** get_address_of_U3CAuthValuesU3Ek__BackingField_3() { return &___U3CAuthValuesU3Ek__BackingField_3; }
	inline void set_U3CAuthValuesU3Ek__BackingField_3(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * value)
	{
		___U3CAuthValuesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_AuthMode_4() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___AuthMode_4)); }
	inline int32_t get_AuthMode_4() const { return ___AuthMode_4; }
	inline int32_t* get_address_of_AuthMode_4() { return &___AuthMode_4; }
	inline void set_AuthMode_4(int32_t value)
	{
		___AuthMode_4 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_5() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___EncryptionMode_5)); }
	inline int32_t get_EncryptionMode_5() const { return ___EncryptionMode_5; }
	inline int32_t* get_address_of_EncryptionMode_5() { return &___EncryptionMode_5; }
	inline void set_EncryptionMode_5(int32_t value)
	{
		___EncryptionMode_5 = value;
	}

	inline static int32_t get_offset_of_U3CExpectedProtocolU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CExpectedProtocolU3Ek__BackingField_6)); }
	inline Nullable_1_tC8BEE56A9FAAE68158805EF42F7BC09E868C9B29  get_U3CExpectedProtocolU3Ek__BackingField_6() const { return ___U3CExpectedProtocolU3Ek__BackingField_6; }
	inline Nullable_1_tC8BEE56A9FAAE68158805EF42F7BC09E868C9B29 * get_address_of_U3CExpectedProtocolU3Ek__BackingField_6() { return &___U3CExpectedProtocolU3Ek__BackingField_6; }
	inline void set_U3CExpectedProtocolU3Ek__BackingField_6(Nullable_1_tC8BEE56A9FAAE68158805EF42F7BC09E868C9B29  value)
	{
		___U3CExpectedProtocolU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_tokenCache_7() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___tokenCache_7)); }
	inline RuntimeObject * get_tokenCache_7() const { return ___tokenCache_7; }
	inline RuntimeObject ** get_address_of_tokenCache_7() { return &___tokenCache_7; }
	inline void set_tokenCache_7(RuntimeObject * value)
	{
		___tokenCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenCache_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CIsUsingNameServerU3Ek__BackingField_8)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_8() const { return ___U3CIsUsingNameServerU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_8() { return &___U3CIsUsingNameServerU3Ek__BackingField_8; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_8(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_NameServerHost_9() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___NameServerHost_9)); }
	inline String_t* get_NameServerHost_9() const { return ___NameServerHost_9; }
	inline String_t** get_address_of_NameServerHost_9() { return &___NameServerHost_9; }
	inline void set_NameServerHost_9(String_t* value)
	{
		___NameServerHost_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_11)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_11() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_11() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_11; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_11(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_ServerPortOverrides_12() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ServerPortOverrides_12)); }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  get_ServerPortOverrides_12() const { return ___ServerPortOverrides_12; }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0 * get_address_of_ServerPortOverrides_12() { return &___ServerPortOverrides_12; }
	inline void set_ServerPortOverrides_12(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  value)
	{
		___ServerPortOverrides_12 = value;
	}

	inline static int32_t get_offset_of_U3CEnableProtocolFallbackU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CEnableProtocolFallbackU3Ek__BackingField_13)); }
	inline bool get_U3CEnableProtocolFallbackU3Ek__BackingField_13() const { return ___U3CEnableProtocolFallbackU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CEnableProtocolFallbackU3Ek__BackingField_13() { return &___U3CEnableProtocolFallbackU3Ek__BackingField_13; }
	inline void set_U3CEnableProtocolFallbackU3Ek__BackingField_13(bool value)
	{
		___U3CEnableProtocolFallbackU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CMasterServerAddressU3Ek__BackingField_14)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_14() const { return ___U3CMasterServerAddressU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_14() { return &___U3CMasterServerAddressU3Ek__BackingField_14; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_14(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMasterServerAddressU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CGameServerAddressU3Ek__BackingField_15)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_15() const { return ___U3CGameServerAddressU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_15() { return &___U3CGameServerAddressU3Ek__BackingField_15; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_15(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameServerAddressU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CServerU3Ek__BackingField_16)); }
	inline int32_t get_U3CServerU3Ek__BackingField_16() const { return ___U3CServerU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_16() { return &___U3CServerU3Ek__BackingField_16; }
	inline void set_U3CServerU3Ek__BackingField_16(int32_t value)
	{
		___U3CServerU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_ProxyServerAddress_17() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ProxyServerAddress_17)); }
	inline String_t* get_ProxyServerAddress_17() const { return ___ProxyServerAddress_17; }
	inline String_t** get_address_of_ProxyServerAddress_17() { return &___ProxyServerAddress_17; }
	inline void set_ProxyServerAddress_17(String_t* value)
	{
		___ProxyServerAddress_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProxyServerAddress_17), (void*)value);
	}

	inline static int32_t get_offset_of_state_18() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___state_18)); }
	inline int32_t get_state_18() const { return ___state_18; }
	inline int32_t* get_address_of_state_18() { return &___state_18; }
	inline void set_state_18(int32_t value)
	{
		___state_18 = value;
	}

	inline static int32_t get_offset_of_StateChanged_19() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___StateChanged_19)); }
	inline Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * get_StateChanged_19() const { return ___StateChanged_19; }
	inline Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 ** get_address_of_StateChanged_19() { return &___StateChanged_19; }
	inline void set_StateChanged_19(Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * value)
	{
		___StateChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_EventReceived_20() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___EventReceived_20)); }
	inline Action_1_tE9C5D44161066EEE105CF1C68A46B53371E75E35 * get_EventReceived_20() const { return ___EventReceived_20; }
	inline Action_1_tE9C5D44161066EEE105CF1C68A46B53371E75E35 ** get_address_of_EventReceived_20() { return &___EventReceived_20; }
	inline void set_EventReceived_20(Action_1_tE9C5D44161066EEE105CF1C68A46B53371E75E35 * value)
	{
		___EventReceived_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventReceived_20), (void*)value);
	}

	inline static int32_t get_offset_of_OpResponseReceived_21() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___OpResponseReceived_21)); }
	inline Action_1_t3710C45C1DDD89BC48E36D71C3C0F18B0E0E880D * get_OpResponseReceived_21() const { return ___OpResponseReceived_21; }
	inline Action_1_t3710C45C1DDD89BC48E36D71C3C0F18B0E0E880D ** get_address_of_OpResponseReceived_21() { return &___OpResponseReceived_21; }
	inline void set_OpResponseReceived_21(Action_1_t3710C45C1DDD89BC48E36D71C3C0F18B0E0E880D * value)
	{
		___OpResponseReceived_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpResponseReceived_21), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionCallbackTargets_22() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ConnectionCallbackTargets_22)); }
	inline ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 * get_ConnectionCallbackTargets_22() const { return ___ConnectionCallbackTargets_22; }
	inline ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 ** get_address_of_ConnectionCallbackTargets_22() { return &___ConnectionCallbackTargets_22; }
	inline void set_ConnectionCallbackTargets_22(ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 * value)
	{
		___ConnectionCallbackTargets_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionCallbackTargets_22), (void*)value);
	}

	inline static int32_t get_offset_of_MatchMakingCallbackTargets_23() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___MatchMakingCallbackTargets_23)); }
	inline MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 * get_MatchMakingCallbackTargets_23() const { return ___MatchMakingCallbackTargets_23; }
	inline MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 ** get_address_of_MatchMakingCallbackTargets_23() { return &___MatchMakingCallbackTargets_23; }
	inline void set_MatchMakingCallbackTargets_23(MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 * value)
	{
		___MatchMakingCallbackTargets_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchMakingCallbackTargets_23), (void*)value);
	}

	inline static int32_t get_offset_of_InRoomCallbackTargets_24() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___InRoomCallbackTargets_24)); }
	inline InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * get_InRoomCallbackTargets_24() const { return ___InRoomCallbackTargets_24; }
	inline InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 ** get_address_of_InRoomCallbackTargets_24() { return &___InRoomCallbackTargets_24; }
	inline void set_InRoomCallbackTargets_24(InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * value)
	{
		___InRoomCallbackTargets_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InRoomCallbackTargets_24), (void*)value);
	}

	inline static int32_t get_offset_of_LobbyCallbackTargets_25() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___LobbyCallbackTargets_25)); }
	inline LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 * get_LobbyCallbackTargets_25() const { return ___LobbyCallbackTargets_25; }
	inline LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 ** get_address_of_LobbyCallbackTargets_25() { return &___LobbyCallbackTargets_25; }
	inline void set_LobbyCallbackTargets_25(LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 * value)
	{
		___LobbyCallbackTargets_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LobbyCallbackTargets_25), (void*)value);
	}

	inline static int32_t get_offset_of_WebRpcCallbackTargets_26() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___WebRpcCallbackTargets_26)); }
	inline WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * get_WebRpcCallbackTargets_26() const { return ___WebRpcCallbackTargets_26; }
	inline WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 ** get_address_of_WebRpcCallbackTargets_26() { return &___WebRpcCallbackTargets_26; }
	inline void set_WebRpcCallbackTargets_26(WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * value)
	{
		___WebRpcCallbackTargets_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WebRpcCallbackTargets_26), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorInfoCallbackTargets_27() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ErrorInfoCallbackTargets_27)); }
	inline ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 * get_ErrorInfoCallbackTargets_27() const { return ___ErrorInfoCallbackTargets_27; }
	inline ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 ** get_address_of_ErrorInfoCallbackTargets_27() { return &___ErrorInfoCallbackTargets_27; }
	inline void set_ErrorInfoCallbackTargets_27(ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 * value)
	{
		___ErrorInfoCallbackTargets_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorInfoCallbackTargets_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CDisconnectedCauseU3Ek__BackingField_28)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_28() const { return ___U3CDisconnectedCauseU3Ek__BackingField_28; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_28() { return &___U3CDisconnectedCauseU3Ek__BackingField_28; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_28(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentLobbyU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCurrentLobbyU3Ek__BackingField_29)); }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * get_U3CCurrentLobbyU3Ek__BackingField_29() const { return ___U3CCurrentLobbyU3Ek__BackingField_29; }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 ** get_address_of_U3CCurrentLobbyU3Ek__BackingField_29() { return &___U3CCurrentLobbyU3Ek__BackingField_29; }
	inline void set_U3CCurrentLobbyU3Ek__BackingField_29(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * value)
	{
		___U3CCurrentLobbyU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentLobbyU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_30() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___EnableLobbyStatistics_30)); }
	inline bool get_EnableLobbyStatistics_30() const { return ___EnableLobbyStatistics_30; }
	inline bool* get_address_of_EnableLobbyStatistics_30() { return &___EnableLobbyStatistics_30; }
	inline void set_EnableLobbyStatistics_30(bool value)
	{
		___EnableLobbyStatistics_30 = value;
	}

	inline static int32_t get_offset_of_lobbyStatistics_31() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___lobbyStatistics_31)); }
	inline List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * get_lobbyStatistics_31() const { return ___lobbyStatistics_31; }
	inline List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 ** get_address_of_lobbyStatistics_31() { return &___lobbyStatistics_31; }
	inline void set_lobbyStatistics_31(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * value)
	{
		___lobbyStatistics_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobbyStatistics_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CLocalPlayerU3Ek__BackingField_32)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3CLocalPlayerU3Ek__BackingField_32() const { return ___U3CLocalPlayerU3Ek__BackingField_32; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_32() { return &___U3CLocalPlayerU3Ek__BackingField_32; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_32(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalPlayerU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentRoomU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCurrentRoomU3Ek__BackingField_33)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_U3CCurrentRoomU3Ek__BackingField_33() const { return ___U3CCurrentRoomU3Ek__BackingField_33; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_U3CCurrentRoomU3Ek__BackingField_33() { return &___U3CCurrentRoomU3Ek__BackingField_33; }
	inline void set_U3CCurrentRoomU3Ek__BackingField_33(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___U3CCurrentRoomU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentRoomU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CPlayersOnMasterCountU3Ek__BackingField_34)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_34() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_34; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_34() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_34; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_34(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CPlayersInRoomsCountU3Ek__BackingField_35)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_35() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_35() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_35; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_35(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CRoomsCountU3Ek__BackingField_36)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_36() const { return ___U3CRoomsCountU3Ek__BackingField_36; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_36() { return &___U3CRoomsCountU3Ek__BackingField_36; }
	inline void set_U3CRoomsCountU3Ek__BackingField_36(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_37() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___lastJoinType_37)); }
	inline int32_t get_lastJoinType_37() const { return ___lastJoinType_37; }
	inline int32_t* get_address_of_lastJoinType_37() { return &___lastJoinType_37; }
	inline void set_lastJoinType_37(int32_t value)
	{
		___lastJoinType_37 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_38() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___enterRoomParamsCache_38)); }
	inline EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * get_enterRoomParamsCache_38() const { return ___enterRoomParamsCache_38; }
	inline EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E ** get_address_of_enterRoomParamsCache_38() { return &___enterRoomParamsCache_38; }
	inline void set_enterRoomParamsCache_38(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * value)
	{
		___enterRoomParamsCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enterRoomParamsCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_failedRoomEntryOperation_39() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___failedRoomEntryOperation_39)); }
	inline OperationResponse_t9F1E31D3B7381CCBBC704A54DCC3B73C44E33A54 * get_failedRoomEntryOperation_39() const { return ___failedRoomEntryOperation_39; }
	inline OperationResponse_t9F1E31D3B7381CCBBC704A54DCC3B73C44E33A54 ** get_address_of_failedRoomEntryOperation_39() { return &___failedRoomEntryOperation_39; }
	inline void set_failedRoomEntryOperation_39(OperationResponse_t9F1E31D3B7381CCBBC704A54DCC3B73C44E33A54 * value)
	{
		___failedRoomEntryOperation_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failedRoomEntryOperation_39), (void*)value);
	}

	inline static int32_t get_offset_of_friendListRequested_41() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___friendListRequested_41)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_friendListRequested_41() const { return ___friendListRequested_41; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_friendListRequested_41() { return &___friendListRequested_41; }
	inline void set_friendListRequested_41(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___friendListRequested_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendListRequested_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCloudRegionU3Ek__BackingField_42)); }
	inline String_t* get_U3CCloudRegionU3Ek__BackingField_42() const { return ___U3CCloudRegionU3Ek__BackingField_42; }
	inline String_t** get_address_of_U3CCloudRegionU3Ek__BackingField_42() { return &___U3CCloudRegionU3Ek__BackingField_42; }
	inline void set_U3CCloudRegionU3Ek__BackingField_42(String_t* value)
	{
		___U3CCloudRegionU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloudRegionU3Ek__BackingField_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentClusterU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCurrentClusterU3Ek__BackingField_43)); }
	inline String_t* get_U3CCurrentClusterU3Ek__BackingField_43() const { return ___U3CCurrentClusterU3Ek__BackingField_43; }
	inline String_t** get_address_of_U3CCurrentClusterU3Ek__BackingField_43() { return &___U3CCurrentClusterU3Ek__BackingField_43; }
	inline void set_U3CCurrentClusterU3Ek__BackingField_43(String_t* value)
	{
		___U3CCurrentClusterU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentClusterU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_RegionHandler_44() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___RegionHandler_44)); }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * get_RegionHandler_44() const { return ___RegionHandler_44; }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 ** get_address_of_RegionHandler_44() { return &___RegionHandler_44; }
	inline void set_RegionHandler_44(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * value)
	{
		___RegionHandler_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegionHandler_44), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionSummaryFromStorage_45() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___bestRegionSummaryFromStorage_45)); }
	inline String_t* get_bestRegionSummaryFromStorage_45() const { return ___bestRegionSummaryFromStorage_45; }
	inline String_t** get_address_of_bestRegionSummaryFromStorage_45() { return &___bestRegionSummaryFromStorage_45; }
	inline void set_bestRegionSummaryFromStorage_45(String_t* value)
	{
		___bestRegionSummaryFromStorage_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionSummaryFromStorage_45), (void*)value);
	}

	inline static int32_t get_offset_of_SummaryToCache_46() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___SummaryToCache_46)); }
	inline String_t* get_SummaryToCache_46() const { return ___SummaryToCache_46; }
	inline String_t** get_address_of_SummaryToCache_46() { return &___SummaryToCache_46; }
	inline void set_SummaryToCache_46(String_t* value)
	{
		___SummaryToCache_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SummaryToCache_46), (void*)value);
	}

	inline static int32_t get_offset_of_connectToBestRegion_47() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___connectToBestRegion_47)); }
	inline bool get_connectToBestRegion_47() const { return ___connectToBestRegion_47; }
	inline bool* get_address_of_connectToBestRegion_47() { return &___connectToBestRegion_47; }
	inline void set_connectToBestRegion_47(bool value)
	{
		___connectToBestRegion_47 = value;
	}

	inline static int32_t get_offset_of_callbackTargetChanges_48() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___callbackTargetChanges_48)); }
	inline Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 * get_callbackTargetChanges_48() const { return ___callbackTargetChanges_48; }
	inline Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 ** get_address_of_callbackTargetChanges_48() { return &___callbackTargetChanges_48; }
	inline void set_callbackTargetChanges_48(Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 * value)
	{
		___callbackTargetChanges_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargetChanges_48), (void*)value);
	}

	inline static int32_t get_offset_of_callbackTargets_49() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___callbackTargets_49)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get_callbackTargets_49() const { return ___callbackTargets_49; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of_callbackTargets_49() { return &___callbackTargets_49; }
	inline void set_callbackTargets_49(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		___callbackTargets_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargets_49), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerPortInAppSettings_50() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___NameServerPortInAppSettings_50)); }
	inline int32_t get_NameServerPortInAppSettings_50() const { return ___NameServerPortInAppSettings_50; }
	inline int32_t* get_address_of_NameServerPortInAppSettings_50() { return &___NameServerPortInAppSettings_50; }
	inline void set_NameServerPortInAppSettings_50(int32_t value)
	{
		___NameServerPortInAppSettings_50 = value;
	}
};

struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_t62D51A72B9F1C91A2D811EE80DC9239BDD6F90CB * ___ProtocolToNameServerPort_10;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_10() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A_StaticFields, ___ProtocolToNameServerPort_10)); }
	inline Dictionary_2_t62D51A72B9F1C91A2D811EE80DC9239BDD6F90CB * get_ProtocolToNameServerPort_10() const { return ___ProtocolToNameServerPort_10; }
	inline Dictionary_2_t62D51A72B9F1C91A2D811EE80DC9239BDD6F90CB ** get_address_of_ProtocolToNameServerPort_10() { return &___ProtocolToNameServerPort_10; }
	inline void set_ProtocolToNameServerPort_10(Dictionary_2_t62D51A72B9F1C91A2D811EE80DC9239BDD6F90CB * value)
	{
		___ProtocolToNameServerPort_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_10), (void*)value);
	}
};


// System.Action`1<Photon.Realtime.RegionHandler>
struct  Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790  : public MulticastDelegate_t
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


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// CameraController
struct  CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean CameraController::_wasInitialized
	bool ____wasInitialized_6;
	// PlayerControls CameraController::_pc
	PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * ____pc_7;

public:
	inline static int32_t get_offset_of__wasInitialized_6() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ____wasInitialized_6)); }
	inline bool get__wasInitialized_6() const { return ____wasInitialized_6; }
	inline bool* get_address_of__wasInitialized_6() { return &____wasInitialized_6; }
	inline void set__wasInitialized_6(bool value)
	{
		____wasInitialized_6 = value;
	}

	inline static int32_t get_offset_of__pc_7() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ____pc_7)); }
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * get__pc_7() const { return ____pc_7; }
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 ** get_address_of__pc_7() { return &____pc_7; }
	inline void set__pc_7(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * value)
	{
		____pc_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pc_7), (void*)value);
	}
};

struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_StaticFields
{
public:
	// System.Single CameraController::LerpSpeed
	float ___LerpSpeed_4;
	// System.Single CameraController::MovementSpeed
	float ___MovementSpeed_5;

public:
	inline static int32_t get_offset_of_LerpSpeed_4() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_StaticFields, ___LerpSpeed_4)); }
	inline float get_LerpSpeed_4() const { return ___LerpSpeed_4; }
	inline float* get_address_of_LerpSpeed_4() { return &___LerpSpeed_4; }
	inline void set_LerpSpeed_4(float value)
	{
		___LerpSpeed_4 = value;
	}

	inline static int32_t get_offset_of_MovementSpeed_5() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_StaticFields, ___MovementSpeed_5)); }
	inline float get_MovementSpeed_5() const { return ___MovementSpeed_5; }
	inline float* get_address_of_MovementSpeed_5() { return &___MovementSpeed_5; }
	inline void set_MovementSpeed_5(float value)
	{
		___MovementSpeed_5 = value;
	}
};


// Photon.Pun.MonoBehaviourPun
struct  MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223, ___pvCache_4)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pvCache_4), (void*)value);
	}
};


// Photon.Pun.PhotonView
struct  PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Photon.Pun.PhotonView::ownerActorNr
	int32_t ___ownerActorNr_4;
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_5;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_6;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_7;
	// Photon.Pun.PhotonView_ObservableSearch Photon.Pun.PhotonView::observableSearch
	int32_t ___observableSearch_8;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___instantiationDataField_9;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___lastOnSerializeDataSent_10;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___syncValues_11;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___lastOnSerializeDataReceived_12;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_13;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_14;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___ObservedComponents_15;
	// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView_CallbackTargetChange> Photon.Pun.PhotonView::CallbackChangeQueue
	Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * ___CallbackChangeQueue_16;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy> Photon.Pun.PhotonView::OnPreNetDestroyCallbacks
	List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * ___OnPreNetDestroyCallbacks_17;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange> Photon.Pun.PhotonView::OnOwnerChangeCallbacks
	List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * ___OnOwnerChangeCallbacks_18;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange> Photon.Pun.PhotonView::OnControllerChangeCallbacks
	List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * ___OnControllerChangeCallbacks_19;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_20;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_21;
	// Photon.Realtime.Player Photon.Pun.PhotonView::owner
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___owner_22;
	// Photon.Realtime.Player Photon.Pun.PhotonView::controller
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___controller_23;
	// System.Int32 Photon.Pun.PhotonView::controllerActorNr
	int32_t ___controllerActorNr_24;
	// Photon.Pun.PhotonView_OwnershipCacheState Photon.Pun.PhotonView::ownershipCacheIsValid
	int32_t ___ownershipCacheIsValid_25;
	// System.Boolean Photon.Pun.PhotonView::amController
	bool ___amController_26;
	// System.Boolean Photon.Pun.PhotonView::<AmOwner>k__BackingField
	bool ___U3CAmOwnerU3Ek__BackingField_27;
	// System.Boolean Photon.Pun.PhotonView::didAwake
	bool ___didAwake_28;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_29;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_30;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* ___RpcMonoBehaviours_31;

public:
	inline static int32_t get_offset_of_ownerActorNr_4() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ownerActorNr_4)); }
	inline int32_t get_ownerActorNr_4() const { return ___ownerActorNr_4; }
	inline int32_t* get_address_of_ownerActorNr_4() { return &___ownerActorNr_4; }
	inline void set_ownerActorNr_4(int32_t value)
	{
		___ownerActorNr_4 = value;
	}

	inline static int32_t get_offset_of_Group_5() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___Group_5)); }
	inline uint8_t get_Group_5() const { return ___Group_5; }
	inline uint8_t* get_address_of_Group_5() { return &___Group_5; }
	inline void set_Group_5(uint8_t value)
	{
		___Group_5 = value;
	}

	inline static int32_t get_offset_of_mixedModeIsReliable_6() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___mixedModeIsReliable_6)); }
	inline bool get_mixedModeIsReliable_6() const { return ___mixedModeIsReliable_6; }
	inline bool* get_address_of_mixedModeIsReliable_6() { return &___mixedModeIsReliable_6; }
	inline void set_mixedModeIsReliable_6(bool value)
	{
		___mixedModeIsReliable_6 = value;
	}

	inline static int32_t get_offset_of_prefixField_7() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___prefixField_7)); }
	inline int32_t get_prefixField_7() const { return ___prefixField_7; }
	inline int32_t* get_address_of_prefixField_7() { return &___prefixField_7; }
	inline void set_prefixField_7(int32_t value)
	{
		___prefixField_7 = value;
	}

	inline static int32_t get_offset_of_observableSearch_8() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___observableSearch_8)); }
	inline int32_t get_observableSearch_8() const { return ___observableSearch_8; }
	inline int32_t* get_address_of_observableSearch_8() { return &___observableSearch_8; }
	inline void set_observableSearch_8(int32_t value)
	{
		___observableSearch_8 = value;
	}

	inline static int32_t get_offset_of_instantiationDataField_9() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___instantiationDataField_9)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_instantiationDataField_9() const { return ___instantiationDataField_9; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_instantiationDataField_9() { return &___instantiationDataField_9; }
	inline void set_instantiationDataField_9(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___instantiationDataField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instantiationDataField_9), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataSent_10() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___lastOnSerializeDataSent_10)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_lastOnSerializeDataSent_10() const { return ___lastOnSerializeDataSent_10; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_lastOnSerializeDataSent_10() { return &___lastOnSerializeDataSent_10; }
	inline void set_lastOnSerializeDataSent_10(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___lastOnSerializeDataSent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataSent_10), (void*)value);
	}

	inline static int32_t get_offset_of_syncValues_11() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___syncValues_11)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_syncValues_11() const { return ___syncValues_11; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_syncValues_11() { return &___syncValues_11; }
	inline void set_syncValues_11(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___syncValues_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncValues_11), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataReceived_12() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___lastOnSerializeDataReceived_12)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_lastOnSerializeDataReceived_12() const { return ___lastOnSerializeDataReceived_12; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_lastOnSerializeDataReceived_12() { return &___lastOnSerializeDataReceived_12; }
	inline void set_lastOnSerializeDataReceived_12(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___lastOnSerializeDataReceived_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataReceived_12), (void*)value);
	}

	inline static int32_t get_offset_of_Synchronization_13() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___Synchronization_13)); }
	inline int32_t get_Synchronization_13() const { return ___Synchronization_13; }
	inline int32_t* get_address_of_Synchronization_13() { return &___Synchronization_13; }
	inline void set_Synchronization_13(int32_t value)
	{
		___Synchronization_13 = value;
	}

	inline static int32_t get_offset_of_OwnershipTransfer_14() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OwnershipTransfer_14)); }
	inline int32_t get_OwnershipTransfer_14() const { return ___OwnershipTransfer_14; }
	inline int32_t* get_address_of_OwnershipTransfer_14() { return &___OwnershipTransfer_14; }
	inline void set_OwnershipTransfer_14(int32_t value)
	{
		___OwnershipTransfer_14 = value;
	}

	inline static int32_t get_offset_of_ObservedComponents_15() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ObservedComponents_15)); }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * get_ObservedComponents_15() const { return ___ObservedComponents_15; }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F ** get_address_of_ObservedComponents_15() { return &___ObservedComponents_15; }
	inline void set_ObservedComponents_15(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * value)
	{
		___ObservedComponents_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObservedComponents_15), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackChangeQueue_16() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___CallbackChangeQueue_16)); }
	inline Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * get_CallbackChangeQueue_16() const { return ___CallbackChangeQueue_16; }
	inline Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA ** get_address_of_CallbackChangeQueue_16() { return &___CallbackChangeQueue_16; }
	inline void set_CallbackChangeQueue_16(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * value)
	{
		___CallbackChangeQueue_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackChangeQueue_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnPreNetDestroyCallbacks_17() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnPreNetDestroyCallbacks_17)); }
	inline List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * get_OnPreNetDestroyCallbacks_17() const { return ___OnPreNetDestroyCallbacks_17; }
	inline List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 ** get_address_of_OnPreNetDestroyCallbacks_17() { return &___OnPreNetDestroyCallbacks_17; }
	inline void set_OnPreNetDestroyCallbacks_17(List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * value)
	{
		___OnPreNetDestroyCallbacks_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreNetDestroyCallbacks_17), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnerChangeCallbacks_18() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnOwnerChangeCallbacks_18)); }
	inline List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * get_OnOwnerChangeCallbacks_18() const { return ___OnOwnerChangeCallbacks_18; }
	inline List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 ** get_address_of_OnOwnerChangeCallbacks_18() { return &___OnOwnerChangeCallbacks_18; }
	inline void set_OnOwnerChangeCallbacks_18(List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * value)
	{
		___OnOwnerChangeCallbacks_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnerChangeCallbacks_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnControllerChangeCallbacks_19() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnControllerChangeCallbacks_19)); }
	inline List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * get_OnControllerChangeCallbacks_19() const { return ___OnControllerChangeCallbacks_19; }
	inline List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 ** get_address_of_OnControllerChangeCallbacks_19() { return &___OnControllerChangeCallbacks_19; }
	inline void set_OnControllerChangeCallbacks_19(List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * value)
	{
		___OnControllerChangeCallbacks_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnControllerChangeCallbacks_19), (void*)value);
	}

	inline static int32_t get_offset_of_viewIdField_20() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___viewIdField_20)); }
	inline int32_t get_viewIdField_20() const { return ___viewIdField_20; }
	inline int32_t* get_address_of_viewIdField_20() { return &___viewIdField_20; }
	inline void set_viewIdField_20(int32_t value)
	{
		___viewIdField_20 = value;
	}

	inline static int32_t get_offset_of_InstantiationId_21() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___InstantiationId_21)); }
	inline int32_t get_InstantiationId_21() const { return ___InstantiationId_21; }
	inline int32_t* get_address_of_InstantiationId_21() { return &___InstantiationId_21; }
	inline void set_InstantiationId_21(int32_t value)
	{
		___InstantiationId_21 = value;
	}

	inline static int32_t get_offset_of_owner_22() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___owner_22)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_owner_22() const { return ___owner_22; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_owner_22() { return &___owner_22; }
	inline void set_owner_22(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___owner_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_22), (void*)value);
	}

	inline static int32_t get_offset_of_controller_23() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___controller_23)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_controller_23() const { return ___controller_23; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_controller_23() { return &___controller_23; }
	inline void set_controller_23(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___controller_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_23), (void*)value);
	}

	inline static int32_t get_offset_of_controllerActorNr_24() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___controllerActorNr_24)); }
	inline int32_t get_controllerActorNr_24() const { return ___controllerActorNr_24; }
	inline int32_t* get_address_of_controllerActorNr_24() { return &___controllerActorNr_24; }
	inline void set_controllerActorNr_24(int32_t value)
	{
		___controllerActorNr_24 = value;
	}

	inline static int32_t get_offset_of_ownershipCacheIsValid_25() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ownershipCacheIsValid_25)); }
	inline int32_t get_ownershipCacheIsValid_25() const { return ___ownershipCacheIsValid_25; }
	inline int32_t* get_address_of_ownershipCacheIsValid_25() { return &___ownershipCacheIsValid_25; }
	inline void set_ownershipCacheIsValid_25(int32_t value)
	{
		___ownershipCacheIsValid_25 = value;
	}

	inline static int32_t get_offset_of_amController_26() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___amController_26)); }
	inline bool get_amController_26() const { return ___amController_26; }
	inline bool* get_address_of_amController_26() { return &___amController_26; }
	inline void set_amController_26(bool value)
	{
		___amController_26 = value;
	}

	inline static int32_t get_offset_of_U3CAmOwnerU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CAmOwnerU3Ek__BackingField_27)); }
	inline bool get_U3CAmOwnerU3Ek__BackingField_27() const { return ___U3CAmOwnerU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CAmOwnerU3Ek__BackingField_27() { return &___U3CAmOwnerU3Ek__BackingField_27; }
	inline void set_U3CAmOwnerU3Ek__BackingField_27(bool value)
	{
		___U3CAmOwnerU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_didAwake_28() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___didAwake_28)); }
	inline bool get_didAwake_28() const { return ___didAwake_28; }
	inline bool* get_address_of_didAwake_28() { return &___didAwake_28; }
	inline void set_didAwake_28(bool value)
	{
		___didAwake_28 = value;
	}

	inline static int32_t get_offset_of_isRuntimeInstantiated_29() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___isRuntimeInstantiated_29)); }
	inline bool get_isRuntimeInstantiated_29() const { return ___isRuntimeInstantiated_29; }
	inline bool* get_address_of_isRuntimeInstantiated_29() { return &___isRuntimeInstantiated_29; }
	inline void set_isRuntimeInstantiated_29(bool value)
	{
		___isRuntimeInstantiated_29 = value;
	}

	inline static int32_t get_offset_of_removedFromLocalViewList_30() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___removedFromLocalViewList_30)); }
	inline bool get_removedFromLocalViewList_30() const { return ___removedFromLocalViewList_30; }
	inline bool* get_address_of_removedFromLocalViewList_30() { return &___removedFromLocalViewList_30; }
	inline void set_removedFromLocalViewList_30(bool value)
	{
		___removedFromLocalViewList_30 = value;
	}

	inline static int32_t get_offset_of_RpcMonoBehaviours_31() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___RpcMonoBehaviours_31)); }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* get_RpcMonoBehaviours_31() const { return ___RpcMonoBehaviours_31; }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D** get_address_of_RpcMonoBehaviours_31() { return &___RpcMonoBehaviours_31; }
	inline void set_RpcMonoBehaviours_31(MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* value)
	{
		___RpcMonoBehaviours_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcMonoBehaviours_31), (void*)value);
	}
};


// Photon.Realtime.ConnectionHandler
struct  ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___U3CClientU3Ek__BackingField_4;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_5;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::startedAckingTimestamp
	int32_t ___startedAckingTimestamp_7;
	// System.Int32 Photon.Realtime.ConnectionHandler::deltaSinceStartedToAck
	int32_t ___deltaSinceStartedToAck_8;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_9;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_11;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___U3CClientU3Ek__BackingField_4)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_U3CClientU3Ek__BackingField_4() const { return ___U3CClientU3Ek__BackingField_4; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_U3CClientU3Ek__BackingField_4() { return &___U3CClientU3Ek__BackingField_4; }
	inline void set_U3CClientU3Ek__BackingField_4(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___U3CClientU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackThreadId_5() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___fallbackThreadId_5)); }
	inline uint8_t get_fallbackThreadId_5() const { return ___fallbackThreadId_5; }
	inline uint8_t* get_address_of_fallbackThreadId_5() { return &___fallbackThreadId_5; }
	inline void set_fallbackThreadId_5(uint8_t value)
	{
		___fallbackThreadId_5 = value;
	}

	inline static int32_t get_offset_of_didSendAcks_6() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___didSendAcks_6)); }
	inline bool get_didSendAcks_6() const { return ___didSendAcks_6; }
	inline bool* get_address_of_didSendAcks_6() { return &___didSendAcks_6; }
	inline void set_didSendAcks_6(bool value)
	{
		___didSendAcks_6 = value;
	}

	inline static int32_t get_offset_of_startedAckingTimestamp_7() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___startedAckingTimestamp_7)); }
	inline int32_t get_startedAckingTimestamp_7() const { return ___startedAckingTimestamp_7; }
	inline int32_t* get_address_of_startedAckingTimestamp_7() { return &___startedAckingTimestamp_7; }
	inline void set_startedAckingTimestamp_7(int32_t value)
	{
		___startedAckingTimestamp_7 = value;
	}

	inline static int32_t get_offset_of_deltaSinceStartedToAck_8() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___deltaSinceStartedToAck_8)); }
	inline int32_t get_deltaSinceStartedToAck_8() const { return ___deltaSinceStartedToAck_8; }
	inline int32_t* get_address_of_deltaSinceStartedToAck_8() { return &___deltaSinceStartedToAck_8; }
	inline void set_deltaSinceStartedToAck_8(int32_t value)
	{
		___deltaSinceStartedToAck_8 = value;
	}

	inline static int32_t get_offset_of_KeepAliveInBackground_9() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___KeepAliveInBackground_9)); }
	inline int32_t get_KeepAliveInBackground_9() const { return ___KeepAliveInBackground_9; }
	inline int32_t* get_address_of_KeepAliveInBackground_9() { return &___KeepAliveInBackground_9; }
	inline void set_KeepAliveInBackground_9(int32_t value)
	{
		___KeepAliveInBackground_9 = value;
	}

	inline static int32_t get_offset_of_U3CCountSendAcksOnlyU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___U3CCountSendAcksOnlyU3Ek__BackingField_10)); }
	inline int32_t get_U3CCountSendAcksOnlyU3Ek__BackingField_10() const { return ___U3CCountSendAcksOnlyU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CCountSendAcksOnlyU3Ek__BackingField_10() { return &___U3CCountSendAcksOnlyU3Ek__BackingField_10; }
	inline void set_U3CCountSendAcksOnlyU3Ek__BackingField_10(int32_t value)
	{
		___U3CCountSendAcksOnlyU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_ApplyDontDestroyOnLoad_11() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___ApplyDontDestroyOnLoad_11)); }
	inline bool get_ApplyDontDestroyOnLoad_11() const { return ___ApplyDontDestroyOnLoad_11; }
	inline bool* get_address_of_ApplyDontDestroyOnLoad_11() { return &___ApplyDontDestroyOnLoad_11; }
	inline void set_ApplyDontDestroyOnLoad_11(bool value)
	{
		___ApplyDontDestroyOnLoad_11 = value;
	}
};

struct ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_StaticFields
{
public:
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_12;

public:
	inline static int32_t get_offset_of_AppQuits_12() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_StaticFields, ___AppQuits_12)); }
	inline bool get_AppQuits_12() const { return ___AppQuits_12; }
	inline bool* get_address_of_AppQuits_12() { return &___AppQuits_12; }
	inline void set_AppQuits_12(bool value)
	{
		___AppQuits_12 = value;
	}
};


// Photon.Realtime.Demo.ConnectAndJoinRandomLb
struct  ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Realtime.AppSettings Photon.Realtime.Demo.ConnectAndJoinRandomLb::appSettings
	AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * ___appSettings_4;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Demo.ConnectAndJoinRandomLb::lbc
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___lbc_5;
	// Photon.Realtime.ConnectionHandler Photon.Realtime.Demo.ConnectAndJoinRandomLb::ch
	ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * ___ch_6;
	// UnityEngine.UI.Text Photon.Realtime.Demo.ConnectAndJoinRandomLb::StateUiText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___StateUiText_7;

public:
	inline static int32_t get_offset_of_appSettings_4() { return static_cast<int32_t>(offsetof(ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B, ___appSettings_4)); }
	inline AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * get_appSettings_4() const { return ___appSettings_4; }
	inline AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 ** get_address_of_appSettings_4() { return &___appSettings_4; }
	inline void set_appSettings_4(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * value)
	{
		___appSettings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appSettings_4), (void*)value);
	}

	inline static int32_t get_offset_of_lbc_5() { return static_cast<int32_t>(offsetof(ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B, ___lbc_5)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_lbc_5() const { return ___lbc_5; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_lbc_5() { return &___lbc_5; }
	inline void set_lbc_5(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___lbc_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lbc_5), (void*)value);
	}

	inline static int32_t get_offset_of_ch_6() { return static_cast<int32_t>(offsetof(ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B, ___ch_6)); }
	inline ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * get_ch_6() const { return ___ch_6; }
	inline ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE ** get_address_of_ch_6() { return &___ch_6; }
	inline void set_ch_6(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * value)
	{
		___ch_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ch_6), (void*)value);
	}

	inline static int32_t get_offset_of_StateUiText_7() { return static_cast<int32_t>(offsetof(ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B, ___StateUiText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_StateUiText_7() const { return ___StateUiText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_StateUiText_7() { return &___StateUiText_7; }
	inline void set_StateUiText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___StateUiText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateUiText_7), (void*)value);
	}
};


// Platform
struct  Platform_tE0375775CB67D8832F7B76160CD58F5FBBAC5A79  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Platform::IsPhantom
	bool ___IsPhantom_4;
	// UnityEngine.Animator Platform::_anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ____anim_5;

public:
	inline static int32_t get_offset_of_IsPhantom_4() { return static_cast<int32_t>(offsetof(Platform_tE0375775CB67D8832F7B76160CD58F5FBBAC5A79, ___IsPhantom_4)); }
	inline bool get_IsPhantom_4() const { return ___IsPhantom_4; }
	inline bool* get_address_of_IsPhantom_4() { return &___IsPhantom_4; }
	inline void set_IsPhantom_4(bool value)
	{
		___IsPhantom_4 = value;
	}

	inline static int32_t get_offset_of__anim_5() { return static_cast<int32_t>(offsetof(Platform_tE0375775CB67D8832F7B76160CD58F5FBBAC5A79, ____anim_5)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get__anim_5() const { return ____anim_5; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of__anim_5() { return &____anim_5; }
	inline void set__anim_5(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		____anim_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anim_5), (void*)value);
	}
};


// PlayerControls
struct  PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean PlayerControls::isBlocking
	bool ___isBlocking_4;
	// System.Boolean PlayerControls::isAttacking
	bool ___isAttacking_5;
	// System.Int32 PlayerControls::lifes
	int32_t ___lifes_6;
	// UnityEngine.GameObject PlayerControls::RedParticles
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RedParticles_7;
	// Sword PlayerControls::sword
	Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * ___sword_8;
	// UnityEngine.LayerMask PlayerControls::whatIsGround
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___whatIsGround_9;
	// UnityEngine.GameObject PlayerControls::wallCheck1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wallCheck1_10;
	// UnityEngine.GameObject PlayerControls::wallCheck2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wallCheck2_11;
	// System.Boolean PlayerControls::_isWalking
	bool ____isWalking_12;
	// System.Boolean PlayerControls::_isDashingRight
	bool ____isDashingRight_13;
	// System.Boolean PlayerControls::_isDashing
	bool ____isDashing_14;
	// System.Boolean PlayerControls::_jumpStarts
	bool ____jumpStarts_15;
	// System.Int32 PlayerControls::_walkingDir
	int32_t ____walkingDir_16;
	// System.Int32 PlayerControls::_swordCondition
	int32_t ____swordCondition_17;
	// System.Single PlayerControls::_boostSpeed
	float ____boostSpeed_18;
	// System.Single PlayerControls::_dashSpeed
	float ____dashSpeed_19;
	// System.Single PlayerControls::_defaultSpeed
	float ____defaultSpeed_20;
	// System.Single PlayerControls::_movementForce
	float ____movementForce_21;
	// System.Single PlayerControls::_rotateForce
	float ____rotateForce_22;
	// System.Single PlayerControls::_wallCheckDistance
	float ____wallCheckDistance_23;
	// System.Single PlayerControls::_groundCheckDistance
	float ____groundCheckDistance_24;
	// UnityEngine.Rigidbody2D PlayerControls::_rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ____rb_25;
	// UnityEngine.Animator PlayerControls::_anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ____anim_26;
	// Photon.Pun.PhotonView PlayerControls::_pv
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ____pv_27;
	// UnityEngine.UI.Text PlayerControls::_lifesText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____lifesText_28;

public:
	inline static int32_t get_offset_of_isBlocking_4() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___isBlocking_4)); }
	inline bool get_isBlocking_4() const { return ___isBlocking_4; }
	inline bool* get_address_of_isBlocking_4() { return &___isBlocking_4; }
	inline void set_isBlocking_4(bool value)
	{
		___isBlocking_4 = value;
	}

	inline static int32_t get_offset_of_isAttacking_5() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___isAttacking_5)); }
	inline bool get_isAttacking_5() const { return ___isAttacking_5; }
	inline bool* get_address_of_isAttacking_5() { return &___isAttacking_5; }
	inline void set_isAttacking_5(bool value)
	{
		___isAttacking_5 = value;
	}

	inline static int32_t get_offset_of_lifes_6() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___lifes_6)); }
	inline int32_t get_lifes_6() const { return ___lifes_6; }
	inline int32_t* get_address_of_lifes_6() { return &___lifes_6; }
	inline void set_lifes_6(int32_t value)
	{
		___lifes_6 = value;
	}

	inline static int32_t get_offset_of_RedParticles_7() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___RedParticles_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RedParticles_7() const { return ___RedParticles_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RedParticles_7() { return &___RedParticles_7; }
	inline void set_RedParticles_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RedParticles_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RedParticles_7), (void*)value);
	}

	inline static int32_t get_offset_of_sword_8() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___sword_8)); }
	inline Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * get_sword_8() const { return ___sword_8; }
	inline Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 ** get_address_of_sword_8() { return &___sword_8; }
	inline void set_sword_8(Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * value)
	{
		___sword_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sword_8), (void*)value);
	}

	inline static int32_t get_offset_of_whatIsGround_9() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___whatIsGround_9)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_whatIsGround_9() const { return ___whatIsGround_9; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_whatIsGround_9() { return &___whatIsGround_9; }
	inline void set_whatIsGround_9(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___whatIsGround_9 = value;
	}

	inline static int32_t get_offset_of_wallCheck1_10() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___wallCheck1_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wallCheck1_10() const { return ___wallCheck1_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wallCheck1_10() { return &___wallCheck1_10; }
	inline void set_wallCheck1_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wallCheck1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallCheck1_10), (void*)value);
	}

	inline static int32_t get_offset_of_wallCheck2_11() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___wallCheck2_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wallCheck2_11() const { return ___wallCheck2_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wallCheck2_11() { return &___wallCheck2_11; }
	inline void set_wallCheck2_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wallCheck2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallCheck2_11), (void*)value);
	}

	inline static int32_t get_offset_of__isWalking_12() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____isWalking_12)); }
	inline bool get__isWalking_12() const { return ____isWalking_12; }
	inline bool* get_address_of__isWalking_12() { return &____isWalking_12; }
	inline void set__isWalking_12(bool value)
	{
		____isWalking_12 = value;
	}

	inline static int32_t get_offset_of__isDashingRight_13() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____isDashingRight_13)); }
	inline bool get__isDashingRight_13() const { return ____isDashingRight_13; }
	inline bool* get_address_of__isDashingRight_13() { return &____isDashingRight_13; }
	inline void set__isDashingRight_13(bool value)
	{
		____isDashingRight_13 = value;
	}

	inline static int32_t get_offset_of__isDashing_14() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____isDashing_14)); }
	inline bool get__isDashing_14() const { return ____isDashing_14; }
	inline bool* get_address_of__isDashing_14() { return &____isDashing_14; }
	inline void set__isDashing_14(bool value)
	{
		____isDashing_14 = value;
	}

	inline static int32_t get_offset_of__jumpStarts_15() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____jumpStarts_15)); }
	inline bool get__jumpStarts_15() const { return ____jumpStarts_15; }
	inline bool* get_address_of__jumpStarts_15() { return &____jumpStarts_15; }
	inline void set__jumpStarts_15(bool value)
	{
		____jumpStarts_15 = value;
	}

	inline static int32_t get_offset_of__walkingDir_16() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____walkingDir_16)); }
	inline int32_t get__walkingDir_16() const { return ____walkingDir_16; }
	inline int32_t* get_address_of__walkingDir_16() { return &____walkingDir_16; }
	inline void set__walkingDir_16(int32_t value)
	{
		____walkingDir_16 = value;
	}

	inline static int32_t get_offset_of__swordCondition_17() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____swordCondition_17)); }
	inline int32_t get__swordCondition_17() const { return ____swordCondition_17; }
	inline int32_t* get_address_of__swordCondition_17() { return &____swordCondition_17; }
	inline void set__swordCondition_17(int32_t value)
	{
		____swordCondition_17 = value;
	}

	inline static int32_t get_offset_of__boostSpeed_18() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____boostSpeed_18)); }
	inline float get__boostSpeed_18() const { return ____boostSpeed_18; }
	inline float* get_address_of__boostSpeed_18() { return &____boostSpeed_18; }
	inline void set__boostSpeed_18(float value)
	{
		____boostSpeed_18 = value;
	}

	inline static int32_t get_offset_of__dashSpeed_19() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____dashSpeed_19)); }
	inline float get__dashSpeed_19() const { return ____dashSpeed_19; }
	inline float* get_address_of__dashSpeed_19() { return &____dashSpeed_19; }
	inline void set__dashSpeed_19(float value)
	{
		____dashSpeed_19 = value;
	}

	inline static int32_t get_offset_of__defaultSpeed_20() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____defaultSpeed_20)); }
	inline float get__defaultSpeed_20() const { return ____defaultSpeed_20; }
	inline float* get_address_of__defaultSpeed_20() { return &____defaultSpeed_20; }
	inline void set__defaultSpeed_20(float value)
	{
		____defaultSpeed_20 = value;
	}

	inline static int32_t get_offset_of__movementForce_21() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____movementForce_21)); }
	inline float get__movementForce_21() const { return ____movementForce_21; }
	inline float* get_address_of__movementForce_21() { return &____movementForce_21; }
	inline void set__movementForce_21(float value)
	{
		____movementForce_21 = value;
	}

	inline static int32_t get_offset_of__rotateForce_22() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____rotateForce_22)); }
	inline float get__rotateForce_22() const { return ____rotateForce_22; }
	inline float* get_address_of__rotateForce_22() { return &____rotateForce_22; }
	inline void set__rotateForce_22(float value)
	{
		____rotateForce_22 = value;
	}

	inline static int32_t get_offset_of__wallCheckDistance_23() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____wallCheckDistance_23)); }
	inline float get__wallCheckDistance_23() const { return ____wallCheckDistance_23; }
	inline float* get_address_of__wallCheckDistance_23() { return &____wallCheckDistance_23; }
	inline void set__wallCheckDistance_23(float value)
	{
		____wallCheckDistance_23 = value;
	}

	inline static int32_t get_offset_of__groundCheckDistance_24() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____groundCheckDistance_24)); }
	inline float get__groundCheckDistance_24() const { return ____groundCheckDistance_24; }
	inline float* get_address_of__groundCheckDistance_24() { return &____groundCheckDistance_24; }
	inline void set__groundCheckDistance_24(float value)
	{
		____groundCheckDistance_24 = value;
	}

	inline static int32_t get_offset_of__rb_25() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____rb_25)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get__rb_25() const { return ____rb_25; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of__rb_25() { return &____rb_25; }
	inline void set__rb_25(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		____rb_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rb_25), (void*)value);
	}

	inline static int32_t get_offset_of__anim_26() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____anim_26)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get__anim_26() const { return ____anim_26; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of__anim_26() { return &____anim_26; }
	inline void set__anim_26(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		____anim_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anim_26), (void*)value);
	}

	inline static int32_t get_offset_of__pv_27() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____pv_27)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get__pv_27() const { return ____pv_27; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of__pv_27() { return &____pv_27; }
	inline void set__pv_27(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		____pv_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pv_27), (void*)value);
	}

	inline static int32_t get_offset_of__lifesText_28() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ____lifesText_28)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__lifesText_28() const { return ____lifesText_28; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__lifesText_28() { return &____lifesText_28; }
	inline void set__lifesText_28(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____lifesText_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lifesText_28), (void*)value);
	}
};


// PlayersAction
struct  PlayersAction_tA8276555252BDD94DA8EBDD64B4352D81800B517  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PlayerControls PlayersAction::_my
	PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * ____my_4;

public:
	inline static int32_t get_offset_of__my_4() { return static_cast<int32_t>(offsetof(PlayersAction_tA8276555252BDD94DA8EBDD64B4352D81800B517, ____my_4)); }
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * get__my_4() const { return ____my_4; }
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 ** get_address_of__my_4() { return &____my_4; }
	inline void set__my_4(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * value)
	{
		____my_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____my_4), (void*)value);
	}
};


// Sword
struct  Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer Sword::sp
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sp_4;
	// UnityEngine.Experimental.Rendering.Universal.Light2D Sword::light2D
	Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * ___light2D_5;
	// PlayerControls Sword::playerControls
	PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * ___playerControls_6;
	// System.Boolean Sword::isAttacking
	bool ___isAttacking_7;
	// System.Int32 Sword::force
	int32_t ___force_8;
	// UnityEngine.UI.Text Sword::_damageText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____damageText_9;

public:
	inline static int32_t get_offset_of_sp_4() { return static_cast<int32_t>(offsetof(Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85, ___sp_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sp_4() const { return ___sp_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sp_4() { return &___sp_4; }
	inline void set_sp_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sp_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sp_4), (void*)value);
	}

	inline static int32_t get_offset_of_light2D_5() { return static_cast<int32_t>(offsetof(Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85, ___light2D_5)); }
	inline Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * get_light2D_5() const { return ___light2D_5; }
	inline Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF ** get_address_of_light2D_5() { return &___light2D_5; }
	inline void set_light2D_5(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * value)
	{
		___light2D_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___light2D_5), (void*)value);
	}

	inline static int32_t get_offset_of_playerControls_6() { return static_cast<int32_t>(offsetof(Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85, ___playerControls_6)); }
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * get_playerControls_6() const { return ___playerControls_6; }
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 ** get_address_of_playerControls_6() { return &___playerControls_6; }
	inline void set_playerControls_6(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * value)
	{
		___playerControls_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerControls_6), (void*)value);
	}

	inline static int32_t get_offset_of_isAttacking_7() { return static_cast<int32_t>(offsetof(Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85, ___isAttacking_7)); }
	inline bool get_isAttacking_7() const { return ___isAttacking_7; }
	inline bool* get_address_of_isAttacking_7() { return &___isAttacking_7; }
	inline void set_isAttacking_7(bool value)
	{
		___isAttacking_7 = value;
	}

	inline static int32_t get_offset_of_force_8() { return static_cast<int32_t>(offsetof(Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85, ___force_8)); }
	inline int32_t get_force_8() const { return ___force_8; }
	inline int32_t* get_address_of_force_8() { return &___force_8; }
	inline void set_force_8(int32_t value)
	{
		___force_8 = value;
	}

	inline static int32_t get_offset_of__damageText_9() { return static_cast<int32_t>(offsetof(Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85, ____damageText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__damageText_9() const { return ____damageText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__damageText_9() { return &____damageText_9; }
	inline void set__damageText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____damageText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____damageText_9), (void*)value);
	}
};


// TestBody
struct  TestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TestBody::RedParticles
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RedParticles_4;
	// UnityEngine.UI.Text TestBody::damageText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___damageText_5;

public:
	inline static int32_t get_offset_of_RedParticles_4() { return static_cast<int32_t>(offsetof(TestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6, ___RedParticles_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RedParticles_4() const { return ___RedParticles_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RedParticles_4() { return &___RedParticles_4; }
	inline void set_RedParticles_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RedParticles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RedParticles_4), (void*)value);
	}

	inline static int32_t get_offset_of_damageText_5() { return static_cast<int32_t>(offsetof(TestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6, ___damageText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_damageText_5() const { return ___damageText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_damageText_5() { return &___damageText_5; }
	inline void set_damageText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___damageText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___damageText_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.Experimental.Rendering.Universal.Light2D
struct  Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Experimental.Rendering.Universal.Light2D_LightType UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightType
	int32_t ___m_LightType_4;
	// UnityEngine.Experimental.Rendering.Universal.Light2D_LightType UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousLightType
	int32_t ___m_PreviousLightType_5;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_BlendStyleIndex
	int32_t ___m_BlendStyleIndex_6;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_FalloffIntensity
	float ___m_FalloffIntensity_7;
	// UnityEngine.Color UnityEngine.Experimental.Rendering.Universal.Light2D::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_8;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_Intensity
	float ___m_Intensity_9;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightVolumeOpacity
	float ___m_LightVolumeOpacity_10;
	// System.Int32[] UnityEngine.Experimental.Rendering.Universal.Light2D::m_ApplyToSortingLayers
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_ApplyToSortingLayers_11;
	// UnityEngine.Sprite UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightCookieSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_LightCookieSprite_12;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.Light2D::m_UseNormalMap
	bool ___m_UseNormalMap_13;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightOrder
	int32_t ___m_LightOrder_14;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.Light2D::m_AlphaBlendOnOverlap
	bool ___m_AlphaBlendOnOverlap_15;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousLightOrder
	int32_t ___m_PreviousLightOrder_16;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousBlendStyleIndex
	int32_t ___m_PreviousBlendStyleIndex_17;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousLightVolumeOpacity
	float ___m_PreviousLightVolumeOpacity_18;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousLightCookieSpriteExists
	bool ___m_PreviousLightCookieSpriteExists_19;
	// UnityEngine.Sprite UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousLightCookieSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PreviousLightCookieSprite_20;
	// UnityEngine.Mesh UnityEngine.Experimental.Rendering.Universal.Light2D::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_21;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightCullingIndex
	int32_t ___m_LightCullingIndex_22;
	// UnityEngine.Bounds UnityEngine.Experimental.Rendering.Universal.Light2D::m_LocalBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_LocalBounds_23;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShadowIntensity
	float ___m_ShadowIntensity_24;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShadowVolumeIntensity
	float ___m_ShadowVolumeIntensity_25;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightInnerAngle
	float ___m_PointLightInnerAngle_27;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightOuterAngle
	float ___m_PointLightOuterAngle_28;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightInnerRadius
	float ___m_PointLightInnerRadius_29;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightOuterRadius
	float ___m_PointLightOuterRadius_30;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightDistance
	float ___m_PointLightDistance_31;
	// UnityEngine.Experimental.Rendering.Universal.Light2D_PointLightQuality UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightQuality
	int32_t ___m_PointLightQuality_32;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightParametricSides
	int32_t ___m_ShapeLightParametricSides_33;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightParametricAngleOffset
	float ___m_ShapeLightParametricAngleOffset_34;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightParametricRadius
	float ___m_ShapeLightParametricRadius_35;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightFalloffSize
	float ___m_ShapeLightFalloffSize_36;
	// UnityEngine.Vector2 UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightFalloffOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_ShapeLightFalloffOffset_37;
	// UnityEngine.Vector3[] UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapePath
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_ShapePath_38;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightFalloffSize
	float ___m_PreviousShapeLightFalloffSize_39;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightParametricSides
	int32_t ___m_PreviousShapeLightParametricSides_40;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightParametricAngleOffset
	float ___m_PreviousShapeLightParametricAngleOffset_41;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightParametricRadius
	float ___m_PreviousShapeLightParametricRadius_42;
	// UnityEngine.Vector2 UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightFalloffOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousShapeLightFalloffOffset_43;

public:
	inline static int32_t get_offset_of_m_LightType_4() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightType_4)); }
	inline int32_t get_m_LightType_4() const { return ___m_LightType_4; }
	inline int32_t* get_address_of_m_LightType_4() { return &___m_LightType_4; }
	inline void set_m_LightType_4(int32_t value)
	{
		___m_LightType_4 = value;
	}

	inline static int32_t get_offset_of_m_PreviousLightType_5() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousLightType_5)); }
	inline int32_t get_m_PreviousLightType_5() const { return ___m_PreviousLightType_5; }
	inline int32_t* get_address_of_m_PreviousLightType_5() { return &___m_PreviousLightType_5; }
	inline void set_m_PreviousLightType_5(int32_t value)
	{
		___m_PreviousLightType_5 = value;
	}

	inline static int32_t get_offset_of_m_BlendStyleIndex_6() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_BlendStyleIndex_6)); }
	inline int32_t get_m_BlendStyleIndex_6() const { return ___m_BlendStyleIndex_6; }
	inline int32_t* get_address_of_m_BlendStyleIndex_6() { return &___m_BlendStyleIndex_6; }
	inline void set_m_BlendStyleIndex_6(int32_t value)
	{
		___m_BlendStyleIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_FalloffIntensity_7() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_FalloffIntensity_7)); }
	inline float get_m_FalloffIntensity_7() const { return ___m_FalloffIntensity_7; }
	inline float* get_address_of_m_FalloffIntensity_7() { return &___m_FalloffIntensity_7; }
	inline void set_m_FalloffIntensity_7(float value)
	{
		___m_FalloffIntensity_7 = value;
	}

	inline static int32_t get_offset_of_m_Color_8() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_Color_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_8() const { return ___m_Color_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_8() { return &___m_Color_8; }
	inline void set_m_Color_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_8 = value;
	}

	inline static int32_t get_offset_of_m_Intensity_9() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_Intensity_9)); }
	inline float get_m_Intensity_9() const { return ___m_Intensity_9; }
	inline float* get_address_of_m_Intensity_9() { return &___m_Intensity_9; }
	inline void set_m_Intensity_9(float value)
	{
		___m_Intensity_9 = value;
	}

	inline static int32_t get_offset_of_m_LightVolumeOpacity_10() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightVolumeOpacity_10)); }
	inline float get_m_LightVolumeOpacity_10() const { return ___m_LightVolumeOpacity_10; }
	inline float* get_address_of_m_LightVolumeOpacity_10() { return &___m_LightVolumeOpacity_10; }
	inline void set_m_LightVolumeOpacity_10(float value)
	{
		___m_LightVolumeOpacity_10 = value;
	}

	inline static int32_t get_offset_of_m_ApplyToSortingLayers_11() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ApplyToSortingLayers_11)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_ApplyToSortingLayers_11() const { return ___m_ApplyToSortingLayers_11; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_ApplyToSortingLayers_11() { return &___m_ApplyToSortingLayers_11; }
	inline void set_m_ApplyToSortingLayers_11(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_ApplyToSortingLayers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ApplyToSortingLayers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_LightCookieSprite_12() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightCookieSprite_12)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_LightCookieSprite_12() const { return ___m_LightCookieSprite_12; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_LightCookieSprite_12() { return &___m_LightCookieSprite_12; }
	inline void set_m_LightCookieSprite_12(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_LightCookieSprite_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LightCookieSprite_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_UseNormalMap_13() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_UseNormalMap_13)); }
	inline bool get_m_UseNormalMap_13() const { return ___m_UseNormalMap_13; }
	inline bool* get_address_of_m_UseNormalMap_13() { return &___m_UseNormalMap_13; }
	inline void set_m_UseNormalMap_13(bool value)
	{
		___m_UseNormalMap_13 = value;
	}

	inline static int32_t get_offset_of_m_LightOrder_14() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightOrder_14)); }
	inline int32_t get_m_LightOrder_14() const { return ___m_LightOrder_14; }
	inline int32_t* get_address_of_m_LightOrder_14() { return &___m_LightOrder_14; }
	inline void set_m_LightOrder_14(int32_t value)
	{
		___m_LightOrder_14 = value;
	}

	inline static int32_t get_offset_of_m_AlphaBlendOnOverlap_15() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_AlphaBlendOnOverlap_15)); }
	inline bool get_m_AlphaBlendOnOverlap_15() const { return ___m_AlphaBlendOnOverlap_15; }
	inline bool* get_address_of_m_AlphaBlendOnOverlap_15() { return &___m_AlphaBlendOnOverlap_15; }
	inline void set_m_AlphaBlendOnOverlap_15(bool value)
	{
		___m_AlphaBlendOnOverlap_15 = value;
	}

	inline static int32_t get_offset_of_m_PreviousLightOrder_16() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousLightOrder_16)); }
	inline int32_t get_m_PreviousLightOrder_16() const { return ___m_PreviousLightOrder_16; }
	inline int32_t* get_address_of_m_PreviousLightOrder_16() { return &___m_PreviousLightOrder_16; }
	inline void set_m_PreviousLightOrder_16(int32_t value)
	{
		___m_PreviousLightOrder_16 = value;
	}

	inline static int32_t get_offset_of_m_PreviousBlendStyleIndex_17() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousBlendStyleIndex_17)); }
	inline int32_t get_m_PreviousBlendStyleIndex_17() const { return ___m_PreviousBlendStyleIndex_17; }
	inline int32_t* get_address_of_m_PreviousBlendStyleIndex_17() { return &___m_PreviousBlendStyleIndex_17; }
	inline void set_m_PreviousBlendStyleIndex_17(int32_t value)
	{
		___m_PreviousBlendStyleIndex_17 = value;
	}

	inline static int32_t get_offset_of_m_PreviousLightVolumeOpacity_18() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousLightVolumeOpacity_18)); }
	inline float get_m_PreviousLightVolumeOpacity_18() const { return ___m_PreviousLightVolumeOpacity_18; }
	inline float* get_address_of_m_PreviousLightVolumeOpacity_18() { return &___m_PreviousLightVolumeOpacity_18; }
	inline void set_m_PreviousLightVolumeOpacity_18(float value)
	{
		___m_PreviousLightVolumeOpacity_18 = value;
	}

	inline static int32_t get_offset_of_m_PreviousLightCookieSpriteExists_19() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousLightCookieSpriteExists_19)); }
	inline bool get_m_PreviousLightCookieSpriteExists_19() const { return ___m_PreviousLightCookieSpriteExists_19; }
	inline bool* get_address_of_m_PreviousLightCookieSpriteExists_19() { return &___m_PreviousLightCookieSpriteExists_19; }
	inline void set_m_PreviousLightCookieSpriteExists_19(bool value)
	{
		___m_PreviousLightCookieSpriteExists_19 = value;
	}

	inline static int32_t get_offset_of_m_PreviousLightCookieSprite_20() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousLightCookieSprite_20)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PreviousLightCookieSprite_20() const { return ___m_PreviousLightCookieSprite_20; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PreviousLightCookieSprite_20() { return &___m_PreviousLightCookieSprite_20; }
	inline void set_m_PreviousLightCookieSprite_20(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PreviousLightCookieSprite_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreviousLightCookieSprite_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Mesh_21() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_Mesh_21)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_21() const { return ___m_Mesh_21; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_21() { return &___m_Mesh_21; }
	inline void set_m_Mesh_21(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_LightCullingIndex_22() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightCullingIndex_22)); }
	inline int32_t get_m_LightCullingIndex_22() const { return ___m_LightCullingIndex_22; }
	inline int32_t* get_address_of_m_LightCullingIndex_22() { return &___m_LightCullingIndex_22; }
	inline void set_m_LightCullingIndex_22(int32_t value)
	{
		___m_LightCullingIndex_22 = value;
	}

	inline static int32_t get_offset_of_m_LocalBounds_23() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LocalBounds_23)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_LocalBounds_23() const { return ___m_LocalBounds_23; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_LocalBounds_23() { return &___m_LocalBounds_23; }
	inline void set_m_LocalBounds_23(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_LocalBounds_23 = value;
	}

	inline static int32_t get_offset_of_m_ShadowIntensity_24() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShadowIntensity_24)); }
	inline float get_m_ShadowIntensity_24() const { return ___m_ShadowIntensity_24; }
	inline float* get_address_of_m_ShadowIntensity_24() { return &___m_ShadowIntensity_24; }
	inline void set_m_ShadowIntensity_24(float value)
	{
		___m_ShadowIntensity_24 = value;
	}

	inline static int32_t get_offset_of_m_ShadowVolumeIntensity_25() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShadowVolumeIntensity_25)); }
	inline float get_m_ShadowVolumeIntensity_25() const { return ___m_ShadowVolumeIntensity_25; }
	inline float* get_address_of_m_ShadowVolumeIntensity_25() { return &___m_ShadowVolumeIntensity_25; }
	inline void set_m_ShadowVolumeIntensity_25(float value)
	{
		___m_ShadowVolumeIntensity_25 = value;
	}

	inline static int32_t get_offset_of_m_PointLightInnerAngle_27() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightInnerAngle_27)); }
	inline float get_m_PointLightInnerAngle_27() const { return ___m_PointLightInnerAngle_27; }
	inline float* get_address_of_m_PointLightInnerAngle_27() { return &___m_PointLightInnerAngle_27; }
	inline void set_m_PointLightInnerAngle_27(float value)
	{
		___m_PointLightInnerAngle_27 = value;
	}

	inline static int32_t get_offset_of_m_PointLightOuterAngle_28() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightOuterAngle_28)); }
	inline float get_m_PointLightOuterAngle_28() const { return ___m_PointLightOuterAngle_28; }
	inline float* get_address_of_m_PointLightOuterAngle_28() { return &___m_PointLightOuterAngle_28; }
	inline void set_m_PointLightOuterAngle_28(float value)
	{
		___m_PointLightOuterAngle_28 = value;
	}

	inline static int32_t get_offset_of_m_PointLightInnerRadius_29() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightInnerRadius_29)); }
	inline float get_m_PointLightInnerRadius_29() const { return ___m_PointLightInnerRadius_29; }
	inline float* get_address_of_m_PointLightInnerRadius_29() { return &___m_PointLightInnerRadius_29; }
	inline void set_m_PointLightInnerRadius_29(float value)
	{
		___m_PointLightInnerRadius_29 = value;
	}

	inline static int32_t get_offset_of_m_PointLightOuterRadius_30() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightOuterRadius_30)); }
	inline float get_m_PointLightOuterRadius_30() const { return ___m_PointLightOuterRadius_30; }
	inline float* get_address_of_m_PointLightOuterRadius_30() { return &___m_PointLightOuterRadius_30; }
	inline void set_m_PointLightOuterRadius_30(float value)
	{
		___m_PointLightOuterRadius_30 = value;
	}

	inline static int32_t get_offset_of_m_PointLightDistance_31() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightDistance_31)); }
	inline float get_m_PointLightDistance_31() const { return ___m_PointLightDistance_31; }
	inline float* get_address_of_m_PointLightDistance_31() { return &___m_PointLightDistance_31; }
	inline void set_m_PointLightDistance_31(float value)
	{
		___m_PointLightDistance_31 = value;
	}

	inline static int32_t get_offset_of_m_PointLightQuality_32() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightQuality_32)); }
	inline int32_t get_m_PointLightQuality_32() const { return ___m_PointLightQuality_32; }
	inline int32_t* get_address_of_m_PointLightQuality_32() { return &___m_PointLightQuality_32; }
	inline void set_m_PointLightQuality_32(int32_t value)
	{
		___m_PointLightQuality_32 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightParametricSides_33() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightParametricSides_33)); }
	inline int32_t get_m_ShapeLightParametricSides_33() const { return ___m_ShapeLightParametricSides_33; }
	inline int32_t* get_address_of_m_ShapeLightParametricSides_33() { return &___m_ShapeLightParametricSides_33; }
	inline void set_m_ShapeLightParametricSides_33(int32_t value)
	{
		___m_ShapeLightParametricSides_33 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightParametricAngleOffset_34() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightParametricAngleOffset_34)); }
	inline float get_m_ShapeLightParametricAngleOffset_34() const { return ___m_ShapeLightParametricAngleOffset_34; }
	inline float* get_address_of_m_ShapeLightParametricAngleOffset_34() { return &___m_ShapeLightParametricAngleOffset_34; }
	inline void set_m_ShapeLightParametricAngleOffset_34(float value)
	{
		___m_ShapeLightParametricAngleOffset_34 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightParametricRadius_35() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightParametricRadius_35)); }
	inline float get_m_ShapeLightParametricRadius_35() const { return ___m_ShapeLightParametricRadius_35; }
	inline float* get_address_of_m_ShapeLightParametricRadius_35() { return &___m_ShapeLightParametricRadius_35; }
	inline void set_m_ShapeLightParametricRadius_35(float value)
	{
		___m_ShapeLightParametricRadius_35 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightFalloffSize_36() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightFalloffSize_36)); }
	inline float get_m_ShapeLightFalloffSize_36() const { return ___m_ShapeLightFalloffSize_36; }
	inline float* get_address_of_m_ShapeLightFalloffSize_36() { return &___m_ShapeLightFalloffSize_36; }
	inline void set_m_ShapeLightFalloffSize_36(float value)
	{
		___m_ShapeLightFalloffSize_36 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightFalloffOffset_37() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightFalloffOffset_37)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_ShapeLightFalloffOffset_37() const { return ___m_ShapeLightFalloffOffset_37; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_ShapeLightFalloffOffset_37() { return &___m_ShapeLightFalloffOffset_37; }
	inline void set_m_ShapeLightFalloffOffset_37(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_ShapeLightFalloffOffset_37 = value;
	}

	inline static int32_t get_offset_of_m_ShapePath_38() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapePath_38)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_ShapePath_38() const { return ___m_ShapePath_38; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_ShapePath_38() { return &___m_ShapePath_38; }
	inline void set_m_ShapePath_38(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_ShapePath_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShapePath_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightFalloffSize_39() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightFalloffSize_39)); }
	inline float get_m_PreviousShapeLightFalloffSize_39() const { return ___m_PreviousShapeLightFalloffSize_39; }
	inline float* get_address_of_m_PreviousShapeLightFalloffSize_39() { return &___m_PreviousShapeLightFalloffSize_39; }
	inline void set_m_PreviousShapeLightFalloffSize_39(float value)
	{
		___m_PreviousShapeLightFalloffSize_39 = value;
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightParametricSides_40() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightParametricSides_40)); }
	inline int32_t get_m_PreviousShapeLightParametricSides_40() const { return ___m_PreviousShapeLightParametricSides_40; }
	inline int32_t* get_address_of_m_PreviousShapeLightParametricSides_40() { return &___m_PreviousShapeLightParametricSides_40; }
	inline void set_m_PreviousShapeLightParametricSides_40(int32_t value)
	{
		___m_PreviousShapeLightParametricSides_40 = value;
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightParametricAngleOffset_41() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightParametricAngleOffset_41)); }
	inline float get_m_PreviousShapeLightParametricAngleOffset_41() const { return ___m_PreviousShapeLightParametricAngleOffset_41; }
	inline float* get_address_of_m_PreviousShapeLightParametricAngleOffset_41() { return &___m_PreviousShapeLightParametricAngleOffset_41; }
	inline void set_m_PreviousShapeLightParametricAngleOffset_41(float value)
	{
		___m_PreviousShapeLightParametricAngleOffset_41 = value;
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightParametricRadius_42() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightParametricRadius_42)); }
	inline float get_m_PreviousShapeLightParametricRadius_42() const { return ___m_PreviousShapeLightParametricRadius_42; }
	inline float* get_address_of_m_PreviousShapeLightParametricRadius_42() { return &___m_PreviousShapeLightParametricRadius_42; }
	inline void set_m_PreviousShapeLightParametricRadius_42(float value)
	{
		___m_PreviousShapeLightParametricRadius_42 = value;
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightFalloffOffset_43() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightFalloffOffset_43)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousShapeLightFalloffOffset_43() const { return ___m_PreviousShapeLightFalloffOffset_43; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousShapeLightFalloffOffset_43() { return &___m_PreviousShapeLightFalloffOffset_43; }
	inline void set_m_PreviousShapeLightFalloffOffset_43(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousShapeLightFalloffOffset_43 = value;
	}
};

struct Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_StaticFields
{
public:
	// UnityEngine.SortingLayer[] UnityEngine.Experimental.Rendering.Universal.Light2D::s_SortingLayers
	SortingLayerU5BU5D_t38FB8CC491354ADBC2857A462F4E82CA256B1074* ___s_SortingLayers_26;

public:
	inline static int32_t get_offset_of_s_SortingLayers_26() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_StaticFields, ___s_SortingLayers_26)); }
	inline SortingLayerU5BU5D_t38FB8CC491354ADBC2857A462F4E82CA256B1074* get_s_SortingLayers_26() const { return ___s_SortingLayers_26; }
	inline SortingLayerU5BU5D_t38FB8CC491354ADBC2857A462F4E82CA256B1074** get_address_of_s_SortingLayers_26() { return &___s_SortingLayers_26; }
	inline void set_s_SortingLayers_26(SortingLayerU5BU5D_t38FB8CC491354ADBC2857A462F4E82CA256B1074* value)
	{
		___s_SortingLayers_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SortingLayers_26), (void*)value);
	}
};


// Photon.Pun.MonoBehaviourPunCallbacks
struct  MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:

public:
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


// GameManager
struct  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C
{
public:
	// PlayerControls GameManager::player
	PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * ___player_5;
	// PlayerControls GameManager::_pc
	PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * ____pc_6;

public:
	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player_5)); }
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * get_player_5() const { return ___player_5; }
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of__pc_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____pc_6)); }
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * get__pc_6() const { return ____pc_6; }
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 ** get_address_of__pc_6() { return &____pc_6; }
	inline void set__pc_6(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * value)
	{
		____pc_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pc_6), (void*)value);
	}
};


// LobbyManager
struct  LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779  : public MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C
{
public:
	// System.Boolean LobbyManager::TestBuild
	bool ___TestBuild_5;
	// System.Boolean LobbyManager::_isConnected
	bool ____isConnected_6;

public:
	inline static int32_t get_offset_of_TestBuild_5() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ___TestBuild_5)); }
	inline bool get_TestBuild_5() const { return ___TestBuild_5; }
	inline bool* get_address_of_TestBuild_5() { return &___TestBuild_5; }
	inline void set_TestBuild_5(bool value)
	{
		___TestBuild_5 = value;
	}

	inline static int32_t get_offset_of__isConnected_6() { return static_cast<int32_t>(offsetof(LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779, ____isConnected_6)); }
	inline bool get__isConnected_6() const { return ____isConnected_6; }
	inline bool* get_address_of__isConnected_6() { return &____isConnected_6; }
	inline void set__isConnected_6(bool value)
	{
		____isConnected_6 = value;
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
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
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
// PlayerControls[]
struct PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * m_Items[1];

public:
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * value)
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


// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<PlayerControls>()
inline PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C* Object_FindObjectsOfType_TisPlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3_mF7AEF7F889825219DE209881969347234A53B883 (const RuntimeMethod* method)
{
	return ((  PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// !!0 UnityEngine.Component::GetComponent<Photon.Pun.PhotonView>()
inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean Photon.Pun.PhotonView::get_IsMine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient__ctor_m45E452E9E8B3268E9436EC3C05D7A7CA9836B710 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, uint8_t ___protocol0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_mF16F409FFF0E613D334D999BF6EAA126F090F154 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::set_SerializationProtocol(ExitGames.Client.Photon.SerializationProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_set_SerializationProtocol_m73BD7144B0819605A6FD73532635ACCC545A5809 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Photon.Realtime.ConnectionHandler>()
inline ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * GameObject_GetComponent_TisConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_m1573E3D0495C5C6D9E812428FC4E883D720A9246 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Photon.Realtime.ConnectionHandler::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionHandler_set_Client_m50BFB190427F739A25E74012F92D88697E1A17B4_inline (ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * __this, LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.ConnectionHandler::StartFallbackSendAckThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionHandler_StartFallbackSendAckThread_mCB5A88E0E8F70F39D58B66F0CCBC1D0DDF3C0750 (ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_Service_m3E925999505253011C7E52437C15DD887820A269 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m0983EF873FB794B55A105CF532339D23998B8378_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::OpJoinRandomRoom(Photon.Realtime.OpJoinRandomRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpJoinRandomRoom_m379A18FC2B563AF2910F42F75E4B0CBEC61640EC (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, OpJoinRandomRoomParams_t89D317370EE00C5999419F4004DC53A4C4A5F327 * ___opJoinRandomRoomParams0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void System.Action`1<Photon.Realtime.RegionHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m59F317983F5EF3E217C879BFC6FA0DD19294F5E3 (Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean Photon.Realtime.RegionHandler::PingMinimumOfRegions(System.Action`1<Photon.Realtime.RegionHandler>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionHandler_PingMinimumOfRegions_mCE0756249D7C66546417074D3B420B8813F403D4 (RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * __this, Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 * ___onCompleteCallback0, String_t* ___previousSummary1, const RuntimeMethod* method);
// System.Void Photon.Realtime.EnterRoomParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterRoomParams__ctor_m8037403CBED8A0BBA13FBC733606EF6E8BF7CB80 (EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::OpCreateRoom(Photon.Realtime.EnterRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpCreateRoom_m2B5204B82174484859AC3227DE0DA89EF570A44E (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * ___enterRoomParams0, const RuntimeMethod* method);
// Photon.Realtime.Region Photon.Realtime.RegionHandler::get_BestRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * RegionHandler_get_BestRegion_m88E09CDF0DDE049AF0BE770E8109B0FE6EA7A383 (RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.String Photon.Realtime.RegionHandler::get_SummaryToCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionHandler_get_SummaryToCache_m99B06CD605EE06F867ADE603DBD3349EFA80C057 (RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.Region::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m3C0CF3D5F0C6E60B08BEAB2223212B8A23B1C535_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::ConnectToRegionMaster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_ConnectToRegionMaster_mB040F10F241916C5CF3902D9D707A203600BCE45 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, String_t* ___region0, const RuntimeMethod* method);
// System.Void Photon.Realtime.AppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSettings__ctor_mB670183A45F50FE01570B3E4E3510A2287E76C94 (AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.GameObject Photon.Pun.PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Byte,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PhotonNetwork_Instantiate_m073C03C0B429D3EE96D2AD3B06DB75A0DF8007B6 (String_t* ___prefabName0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, uint8_t ___group3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___data4, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerControls>()
inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * GameObject_GetComponent_TisPlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3_m26B29BC4ABFC0F3FC0498AEE98DEA10FE4E35F0F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471 (String_t* ___key0, const RuntimeMethod* method);
// System.Void GameManager::SetSwordParameters(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetSwordParameters_m5250B0F33690BC35D779C8B46A9EEA27EAFAC546 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, float ___Length0, float ___ColorR1, float ___ColorG2, float ___ColorB3, const RuntimeMethod* method);
// System.Void Sword::SetLength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sword_SetLength_m3D6C32B2EC95A7E9910B09721E111BB999D00BF0 (Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * __this, float ___Length0, const RuntimeMethod* method);
// System.Void Sword::SetColor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sword_SetColor_mBBC1C9DE0E247F5134838F4AFA648C9829C078D4 (Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * __this, float ___R0, float ___G1, float ___B2, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks__ctor_m62F4C1105FC1D237DEBE4BE76535F8152A8FF553 (MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void LobbyManager::SetSwordParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_SetSwordParameters_m8AE94E6A6E9E44DA44A677C2F5B39D3A2E04E371 (LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * __this, const RuntimeMethod* method);
// System.Void LobbyManager::StartNetwork()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_StartNetwork_m0A4AE204F5F6397E9318C1CEFD6A6079F9A04ACA (LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214 (String_t* ___key0, float ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::set_NickName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_set_NickName_m9C08C54FB2ECA5A916059D6439E247A11715CC9F (String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::set_GameVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_set_GameVersion_m4664C9FFB4D764499C93AF8B81D753F00CC66E16 (String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::set_AutomaticallySyncScene(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_set_AutomaticallySyncScene_m7D9F4BFAF99E74A1BACC457EF132349847227A14 (bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::ConnectUsingSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_ConnectUsingSettings_m8E6DA5DA6FA94A6006E8F84D3C7B1BB848C2D1E8 (const RuntimeMethod* method);
// System.Int32 Photon.Pun.PhotonNetwork::get_CountOfRooms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_get_CountOfRooms_m681E82567AE42F02CF01EBB10A8BB433740833E8 (const RuntimeMethod* method);
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m3757C5E2DFF56EEEC7F0B7A08443DD21DA88FEF7 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::CreateRoom(System.String,Photon.Realtime.RoomOptions,Photon.Realtime.TypedLobby,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_CreateRoom_m364ACA83E6A534AC91C938B16FCF3A5DB1A0ED3D (String_t* ___roomName0, RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * ___roomOptions1, TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * ___typedLobby2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___expectedUsers3, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::JoinRandomRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_JoinRandomRoom_m91FC7200A065F8B1BF1AB43C2C6CB4552DC22603 (const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_LoadLevel_m29648C8F5442DF11D84E6B4C8E7A505081C1B893 (String_t* ___levelName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void PlayerControls::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_Respawn_m01B91A665A0FA6DA9A285C7D22FD4D0DFCCA02C7 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void PlayerControls::DashLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_DashLeft_m0A10DAC482888BF1B8072F88DE6FC9EFEEDFC061 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method);
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___hit0, const RuntimeMethod* method);
// System.Void PlayerControls::FreezeRotAndDash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_FreezeRotAndDash_m3185D5C01AD8BC9F713D7D11F2A48C738FB82900 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method);
// System.Void PlayerControls::RotateToWall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_RotateToWall_mDEE45E999F070C53E4FED52BC7FF5247786BA7AF (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, bool ___ToRight0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void PlayerControls::CheckSurroundings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_CheckSurroundings_m6595169336EECD68E45DBAA75D1ADBD6D3E50399 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method);
// System.Void PlayerControls::Attack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_Attack_mCA87D5A4BBA93DE7C6FC6A3789E8B1213469867D (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, bool ___FromBtn0, const RuntimeMethod* method);
// System.Void PlayerControls::Block(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_Block_m497F6313AEB41385E01BC86B090711E9946840C8 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, bool ___FromBtn0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void PlayerControls::DashRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_DashRight_mF3A1C31D9D127CB9B60A68115ABED3740DD4F217 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method);
// System.Void PlayerControls::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_Jump_m6BB174E3AA4DB2FBF57D152F7AD24CD91ECF1D7F (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.Void PlayerControls::SetAnims()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_SetAnims_m5C46394688AED0C75562CC5078C68CE37F5B7FD1 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method);
// System.Void PlayerControls::UpdateSword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_UpdateSword_m6632FCB6F9CB9EB878762459E188D89B8DD0DFF2 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Sword>()
inline Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * GameObject_GetComponent_TisSword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85_m580025B496C8FA2FF4ADC713B0D4E8B5EEC36805 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void PlayerControls::GetDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_GetDamage_mA71D0D64D1002A534F3FB7353311B785DEF7E19D (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, int32_t ___Damage0, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonStream::get_IsWriting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonStream::SendNext(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Object Photon.Pun.PhotonStream::ReceiveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method);
// System.Void PlayersAction::FindPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayersAction_FindPlayer_m19991E1A1FF6D360DDA93F6EA1F16BD3CA03E772 (PlayersAction_tA8276555252BDD94DA8EBDD64B4352D81800B517 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Rendering.Universal.Light2D::set_color(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_color_m728FF8483DEC5DB968BDE4B0A92518C5EBD2E2FC_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TestBody>()
inline TestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6 * GameObject_GetComponent_TisTestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6_m15B8C0DC58BA98E614D14869C19C314028690980 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
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
		il2cpp_codegen_initialize_method (CameraController_Start_mBDE87C2FCF352957C2B86B67610667663422FBE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke(nameof(Initialize), 1);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraController::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Initialize_m70F835DDD1D5314B368D8D8689EA2CD384C64E86 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_Initialize_m70F835DDD1D5314B368D8D8689EA2CD384C64E86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// PlayerControls[] PC = FindObjectsOfType<PlayerControls>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C* L_0 = Object_FindObjectsOfType_TisPlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3_mF7AEF7F889825219DE209881969347234A53B883(/*hidden argument*/Object_FindObjectsOfType_TisPlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3_mF7AEF7F889825219DE209881969347234A53B883_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < PC.Length; i++)
		V_1 = 0;
		goto IL_002f;
	}

IL_000a:
	{
		// if (PC[i].GetComponent<PhotonView>().IsMine)
		PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_5 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(L_4, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// _pc = PC[i];
		PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->set__pc_7(L_10);
		// _wasInitialized = true;
		__this->set__wasInitialized_6((bool)1);
		// break;
		goto IL_0035;
	}

IL_002b:
	{
		// for (int i = 0; i < PC.Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002f:
	{
		// for (int i = 0; i < PC.Length; i++)
		int32_t L_12 = V_1;
		PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_000a;
		}
	}

IL_0035:
	{
		// if(!_wasInitialized) Invoke(nameof(Initialize), 1);
		bool L_14 = __this->get__wasInitialized_6();
		if (L_14)
		{
			goto IL_004d;
		}
	}
	{
		// if(!_wasInitialized) Invoke(nameof(Initialize), 1);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54, (1.0f), /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_m3C257AC762117CFDDAD03C9C4FBBFDE51C61D534 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_Update_m3C257AC762117CFDDAD03C9C4FBBFDE51C61D534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_wasInitialized)
		bool L_0 = __this->get__wasInitialized_6();
		if (!L_0)
		{
			goto IL_0087;
		}
	}
	{
		// transform.rotation = Quaternion.Lerp(transform.rotation, _pc.transform.rotation, LerpSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_4 = __this->get__pc_7();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_il2cpp_TypeInfo_var);
		float L_7 = ((CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_StaticFields*)il2cpp_codegen_static_fields_for(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_il2cpp_TypeInfo_var))->get_LerpSpeed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_3, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_1, L_8, /*hidden argument*/NULL);
		// transform.position = Vector3.MoveTowards(transform.position,
		//     new Vector3(_pc.transform.position.x, transform.position.y, -10), MovementSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_12 = __this->get__pc_7();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), L_15, L_18, (-10.0f), /*hidden argument*/NULL);
		float L_20 = ((CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_StaticFields*)il2cpp_codegen_static_fields_for(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_il2cpp_TypeInfo_var))->get_MovementSpeed_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_11, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_21, /*hidden argument*/NULL);
	}

IL_0087:
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
// System.Void CameraController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__cctor_m4F364398115412A0E11E1A4206A8743E18C57CDD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController__cctor_m4F364398115412A0E11E1A4206A8743E18C57CDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float LerpSpeed = 0.0035f;
		((CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_StaticFields*)il2cpp_codegen_static_fields_for(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_il2cpp_TypeInfo_var))->set_LerpSpeed_4((0.00350000011f));
		// public static float MovementSpeed = 0.5f;
		((CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_StaticFields*)il2cpp_codegen_static_fields_for(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0_il2cpp_TypeInfo_var))->set_MovementSpeed_5((0.5f));
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
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_Start_m8784F9A942632995E527C9AAC79D40049C1B4421 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_Start_m8784F9A942632995E527C9AAC79D40049C1B4421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.lbc = new LoadBalancingClient();
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A *)il2cpp_codegen_object_new(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A_il2cpp_TypeInfo_var);
		LoadBalancingClient__ctor_m45E452E9E8B3268E9436EC3C05D7A7CA9836B710(L_0, 0, /*hidden argument*/NULL);
		__this->set_lbc_5(L_0);
		// this.lbc.AddCallbackTarget(this);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_1 = __this->get_lbc_5();
		NullCheck(L_1);
		LoadBalancingClient_AddCallbackTarget_mF16F409FFF0E613D334D999BF6EAA126F090F154(L_1, __this, /*hidden argument*/NULL);
		// this.lbc.SerializationProtocol = SerializationProtocol.GpBinaryV16;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_2 = __this->get_lbc_5();
		NullCheck(L_2);
		LoadBalancingClient_set_SerializationProtocol_m73BD7144B0819605A6FD73532635ACCC545A5809(L_2, 0, /*hidden argument*/NULL);
		// if (!this.lbc.ConnectUsingSettings(appSettings))
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_3 = __this->get_lbc_5();
		AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * L_4 = __this->get_appSettings_4();
		NullCheck(L_3);
		bool L_5 = VirtFuncInvoker1< bool, AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * >::Invoke(8 /* System.Boolean Photon.Realtime.LoadBalancingClient::ConnectUsingSettings(Photon.Realtime.AppSettings) */, L_3, L_4);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		// Debug.LogError("Error while connecting");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// this.ch = this.gameObject.GetComponent<ConnectionHandler>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * L_7 = GameObject_GetComponent_TisConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_m1573E3D0495C5C6D9E812428FC4E883D720A9246(L_6, /*hidden argument*/GameObject_GetComponent_TisConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_m1573E3D0495C5C6D9E812428FC4E883D720A9246_RuntimeMethod_var);
		__this->set_ch_6(L_7);
		// if (this.ch != null)
		ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * L_8 = __this->get_ch_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		// this.ch.Client = this.lbc;
		ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * L_10 = __this->get_ch_6();
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_11 = __this->get_lbc_5();
		NullCheck(L_10);
		ConnectionHandler_set_Client_m50BFB190427F739A25E74012F92D88697E1A17B4_inline(L_10, L_11, /*hidden argument*/NULL);
		// this.ch.StartFallbackSendAckThread();
		ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * L_12 = __this->get_ch_6();
		NullCheck(L_12);
		ConnectionHandler_StartFallbackSendAckThread_mCB5A88E0E8F70F39D58B66F0CCBC1D0DDF3C0750(L_12, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_Update_m27F506BAFEF2C3264B9030218D0ADB86478750E2 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_Update_m27F506BAFEF2C3264B9030218D0ADB86478750E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * V_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// LoadBalancingClient client = this.lbc;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_lbc_5();
		V_0 = L_0;
		// if (client != null)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// client.Service();
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_2 = V_0;
		NullCheck(L_2);
		LoadBalancingClient_Service_m3E925999505253011C7E52437C15DD887820A269(L_2, /*hidden argument*/NULL);
		// Text uiText = this.StateUiText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_StateUiText_7();
		V_1 = L_3;
		// string state = client.State.ToString();
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = LoadBalancingClient_get_State_m0983EF873FB794B55A105CF532339D23998B8378_inline(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		RuntimeObject * L_6 = Box(ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_3 = *(int32_t*)UnBox(L_6);
		V_2 = L_7;
		// if (uiText != null && !uiText.text.Equals(state))
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		String_t* L_12 = V_2;
		NullCheck(L_11);
		bool L_13 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_11, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0054;
		}
	}
	{
		// uiText.text = "State: " + state;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = V_1;
		String_t* L_15 = V_2;
		String_t* L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnConnected_m5879B131543322FA6CC2D9FB2B4C196698680114 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnConnectedToMaster_mCCF5E7C0A7A1A8486F3571F05B2E0662C7C939F2 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_OnConnectedToMaster_mCCF5E7C0A7A1A8486F3571F05B2E0662C7C939F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnConnectedToMaster");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E, /*hidden argument*/NULL);
		// this.lbc.OpJoinRandomRoom();    
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_lbc_5();
		NullCheck(L_0);
		LoadBalancingClient_OpJoinRandomRoom_m379A18FC2B563AF2910F42F75E4B0CBEC61640EC(L_0, (OpJoinRandomRoomParams_t89D317370EE00C5999419F4004DC53A4C4A5F327 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnDisconnected_m2576DA0537A899046151D7FA51E25AC367F800A7 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_OnDisconnected_m2576DA0537A899046151D7FA51E25AC367F800A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnDisconnected(" + cause + ")");
		int32_t L_0 = ___cause0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(_stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E, L_2, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCustomAuthenticationResponse_m8F6E456A2C572923AD8E720088C22588A1DB1459 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCustomAuthenticationFailed_m447EA30CA679C12865C767F01D060A3A2EF74C5B (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, String_t* ___debugMessage0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRegionListReceived_m6F54D1CDC5C51EF9ED8C44E439E83210851CDA8E (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * ___regionHandler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_OnRegionListReceived_m6F54D1CDC5C51EF9ED8C44E439E83210851CDA8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRegionListReceived");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F, /*hidden argument*/NULL);
		// regionHandler.PingMinimumOfRegions(this.OnRegionPingCompleted, null);
		RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * L_0 = ___regionHandler0;
		Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 * L_1 = (Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790 *)il2cpp_codegen_object_new(Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790_il2cpp_TypeInfo_var);
		Action_1__ctor_m59F317983F5EF3E217C879BFC6FA0DD19294F5E3(L_1, __this, (intptr_t)((intptr_t)ConnectAndJoinRandomLb_OnRegionPingCompleted_mD76EE8F39A7AE8EF7E071B9E1C5D1A52452FEF17_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m59F317983F5EF3E217C879BFC6FA0DD19294F5E3_RuntimeMethod_var);
		NullCheck(L_0);
		RegionHandler_PingMinimumOfRegions_mCE0756249D7C66546417074D3B420B8813F403D4(L_0, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRoomListUpdate_m91AEF2D4CB5CC06810FED71B26B736DDC2938DA0 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694 * ___roomList0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLobbyStatisticsUpdate_m02972ED26C4B5FCECE1E7A0B482A32E53363F2F7 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * ___lobbyStatistics0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinedLobby_m171BA1094BCA0FC7A1D13EA07C858CD2D2F423EF (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLeftLobby_m1BCA515302514D0EF88687D2216D67A9D724B0F4 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnFriendListUpdate_m6E1EBEFEC84BA9FFA5296B547431BDB692E053DB (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C * ___friendList0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCreatedRoom_mB1906ADF16C593829B0DD191F319716A97B10583 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCreateRoomFailed_mD11765F8AA8A45B8AC5555207281A43ABA829D24 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinedRoom_mCE9BDE69A13EA84E9ACA73E064A695B9D3754E8B (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_OnJoinedRoom_mCE9BDE69A13EA84E9ACA73E064A695B9D3754E8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinedRoom");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinRoomFailed_m5622896774D36D4960735E32F353869D9D6DF94C (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinRandomFailed_m4BCA35CBE444C5AD28D7D713E92E893198F91B69 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_OnJoinRandomFailed_m4BCA35CBE444C5AD28D7D713E92E893198F91B69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinRandomFailed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895, /*hidden argument*/NULL);
		// this.lbc.OpCreateRoom(new EnterRoomParams());
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_lbc_5();
		EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * L_1 = (EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E *)il2cpp_codegen_object_new(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E_il2cpp_TypeInfo_var);
		EnterRoomParams__ctor_m8037403CBED8A0BBA13FBC733606EF6E8BF7CB80(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		LoadBalancingClient_OpCreateRoom_m2B5204B82174484859AC3227DE0DA89EF570A44E(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLeftRoom_m488901B35215F9B70BACC7A08ABB123F3B605137 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRegionPingCompleted(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRegionPingCompleted_mD76EE8F39A7AE8EF7E071B9E1C5D1A52452FEF17 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * ___regionHandler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb_OnRegionPingCompleted_mD76EE8F39A7AE8EF7E071B9E1C5D1A52452FEF17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRegionPingCompleted " + regionHandler.BestRegion);
		RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * L_0 = ___regionHandler0;
		NullCheck(L_0);
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_1 = RegionHandler_get_BestRegion_m88E09CDF0DDE049AF0BE770E8109B0FE6EA7A383(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// Debug.Log("RegionPingSummary: " + regionHandler.SummaryToCache);
		RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * L_3 = ___regionHandler0;
		NullCheck(L_3);
		String_t* L_4 = RegionHandler_get_SummaryToCache_m99B06CD605EE06F867ADE603DBD3349EFA80C057(L_3, /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4, L_4, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// this.lbc.ConnectToRegionMaster(regionHandler.BestRegion.Code);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_6 = __this->get_lbc_5();
		RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * L_7 = ___regionHandler0;
		NullCheck(L_7);
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_8 = RegionHandler_get_BestRegion_m88E09CDF0DDE049AF0BE770E8109B0FE6EA7A383(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = Region_get_Code_m3C0CF3D5F0C6E60B08BEAB2223212B8A23B1C535_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		LoadBalancingClient_ConnectToRegionMaster_mB040F10F241916C5CF3902D9D707A203600BCE45(L_6, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb__ctor_mD06217DD59635BD5DC39E8E14274D6604FDF85C1 (ConnectAndJoinRandomLb_t8A2B7E9487A2305C4713FE75288DDBDA75B9209B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectAndJoinRandomLb__ctor_mD06217DD59635BD5DC39E8E14274D6604FDF85C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AppSettings appSettings = new AppSettings();
		AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * L_0 = (AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 *)il2cpp_codegen_object_new(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906_il2cpp_TypeInfo_var);
		AppSettings__ctor_mB670183A45F50FE01570B3E4E3510A2287E76C94(L_0, /*hidden argument*/NULL);
		__this->set_appSettings_4(L_0);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _pc = PhotonNetwork.Instantiate(player.name, transform.position, Quaternion.identity).GetComponent<PlayerControls>();
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_player_5();
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = PhotonNetwork_Instantiate_m073C03C0B429D3EE96D2AD3B06DB75A0DF8007B6(L_1, L_3, L_4, (uint8_t)0, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
		NullCheck(L_5);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_6 = GameObject_GetComponent_TisPlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3_m26B29BC4ABFC0F3FC0498AEE98DEA10FE4E35F0F(L_5, /*hidden argument*/GameObject_GetComponent_TisPlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3_m26B29BC4ABFC0F3FC0498AEE98DEA10FE4E35F0F_RuntimeMethod_var);
		__this->set__pc_6(L_6);
		// SetSwordParameters(PlayerPrefs.GetFloat("Length"), /*PlayerPrefs.GetFloat("Force"), */
		// PlayerPrefs.GetFloat("ColorR"), PlayerPrefs.GetFloat("ColorG"), PlayerPrefs.GetFloat("ColorB"));
		float L_7 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteral692CFAB7F0E96FB317ECD81BE188FB45205CF29C, /*hidden argument*/NULL);
		float L_8 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteral5334DD52B9BCEF6E62ABDBF84A8FBA13308C4B1E, /*hidden argument*/NULL);
		float L_9 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteralC968D338E400FE0CAA838F64C815E2DDB55118DC, /*hidden argument*/NULL);
		float L_10 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteral087B3B42AE270DE8C63648282340EB6ECDF2A621, /*hidden argument*/NULL);
		GameManager_SetSwordParameters_m5250B0F33690BC35D779C8B46A9EEA27EAFAC546(__this, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::SetSwordParameters(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetSwordParameters_m5250B0F33690BC35D779C8B46A9EEA27EAFAC546 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, float ___Length0, float ___ColorR1, float ___ColorG2, float ___ColorB3, const RuntimeMethod* method)
{
	{
		// _pc.sword.SetLength(Length);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get__pc_6();
		NullCheck(L_0);
		Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * L_1 = L_0->get_sword_8();
		float L_2 = ___Length0;
		NullCheck(L_1);
		Sword_SetLength_m3D6C32B2EC95A7E9910B09721E111BB999D00BF0(L_1, L_2, /*hidden argument*/NULL);
		// _pc.sword.SetColor(ColorR, ColorG, ColorB);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_3 = __this->get__pc_6();
		NullCheck(L_3);
		Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * L_4 = L_3->get_sword_8();
		float L_5 = ___ColorR1;
		float L_6 = ___ColorG2;
		float L_7 = ___ColorB3;
		NullCheck(L_4);
		Sword_SetColor_mBBC1C9DE0E247F5134838F4AFA648C9829C078D4(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnLeftRoom_m05E570520EF1061C7049F738C8B92FF315E96DF1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_OnLeftRoom_m05E570520EF1061C7049F738C8B92FF315E96DF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Crashed", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralD54BF7B9D65575B09BE05B9BE1E97F627F60C932, 1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviourPunCallbacks__ctor_m62F4C1105FC1D237DEBE4BE76535F8152A8FF553(__this, /*hidden argument*/NULL);
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
// System.Void LobbyManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_Start_m8D3C944B907AEA4ACAF73C3F5A082F9CCDB00DE8 (LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LobbyManager_Start_m8D3C944B907AEA4ACAF73C3F5A082F9CCDB00DE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("Crashed") == 1)
		int32_t L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralD54BF7B9D65575B09BE05B9BE1E97F627F60C932, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		// PlayerPrefs.SetInt("Crashed", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralD54BF7B9D65575B09BE05B9BE1E97F627F60C932, 0, /*hidden argument*/NULL);
		// SetSwordParameters();
		LobbyManager_SetSwordParameters_m8AE94E6A6E9E44DA44A677C2F5B39D3A2E04E371(__this, /*hidden argument*/NULL);
		// }
		goto IL_0038;
	}

IL_0020:
	{
		// Debug.Log("nonCrashed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral59FB6E3A69D96C819E9495E7FE500DD5CB418E54, /*hidden argument*/NULL);
		// if (TestBuild) StartNetwork();
		bool L_1 = __this->get_TestBuild_5();
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// if (TestBuild) StartNetwork();
		LobbyManager_StartNetwork_m0A4AE204F5F6397E9318C1CEFD6A6079F9A04ACA(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// Invoke(nameof(SetSwordParameters), 10);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralDEBB7823005183493B5C0CB3A84A421CEEB22AA1, (10.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::SetSwordParameters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_SetSwordParameters_m59F37B0DA848989649EE7E524D8D802122CF87EA (LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * __this, String_t* ___Parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LobbyManager_SetSwordParameters_m59F37B0DA848989649EE7E524D8D802122CF87EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		// PlayerPrefs.SetInt("Crashed", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralD54BF7B9D65575B09BE05B9BE1E97F627F60C932, 0, /*hidden argument*/NULL);
		// Debug.Log(Parameters);
		String_t* L_0 = ___Parameters0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// if (!_isConnected)
		bool L_1 = __this->get__isConnected_6();
		if (L_1)
		{
			goto IL_00e4;
		}
	}
	{
		// string[] Params = Parameters.Split(',');
		String_t* L_2 = ___Parameters0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_2, L_4, /*hidden argument*/NULL);
		// ColorR = Convert.ToInt32(Params[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_9 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// ColorG = Convert.ToInt32(Params[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_6;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// ColorB = Convert.ToInt32(Params[2]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_10;
		NullCheck(L_14);
		int32_t L_15 = 2;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// Length = Convert.ToInt32(Params[3]) / 100.0f;
		NullCheck(L_14);
		int32_t L_18 = 3;
		String_t* L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_19, /*hidden argument*/NULL);
		V_3 = ((float)((float)(((float)((float)L_20)))/(float)(100.0f)));
		// Debug.Log(Length);
		float L_21 = V_3;
		float L_22 = L_21;
		RuntimeObject * L_23 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_22);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_23, /*hidden argument*/NULL);
		// Debug.Log(ColorR + " " + ColorG + " " + ColorB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_24;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_25;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_29;
		int32_t L_31 = V_1;
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_33);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_30;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = L_34;
		int32_t L_36 = V_2;
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_38);
		String_t* L_39 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_35, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_39, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("Length", Length);
		float L_40 = V_3;
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteral692CFAB7F0E96FB317ECD81BE188FB45205CF29C, L_40, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("ColorR", ColorR / 255.0f);
		int32_t L_41 = V_0;
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteral5334DD52B9BCEF6E62ABDBF84A8FBA13308C4B1E, ((float)((float)(((float)((float)L_41)))/(float)(255.0f))), /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("ColorG", ColorG / 255.0f);
		int32_t L_42 = V_1;
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteralC968D338E400FE0CAA838F64C815E2DDB55118DC, ((float)((float)(((float)((float)L_42)))/(float)(255.0f))), /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("ColorB", ColorB / 255.0f);
		int32_t L_43 = V_2;
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteral087B3B42AE270DE8C63648282340EB6ECDF2A621, ((float)((float)(((float)((float)L_43)))/(float)(255.0f))), /*hidden argument*/NULL);
		// StartNetwork();
		LobbyManager_StartNetwork_m0A4AE204F5F6397E9318C1CEFD6A6079F9A04ACA(__this, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		// }
		return;
	}
}
// System.Void LobbyManager::SetSwordParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_SetSwordParameters_m8AE94E6A6E9E44DA44A677C2F5B39D3A2E04E371 (LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LobbyManager_SetSwordParameters_m8AE94E6A6E9E44DA44A677C2F5B39D3A2E04E371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	{
		// PlayerPrefs.SetInt("Crashed", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralD54BF7B9D65575B09BE05B9BE1E97F627F60C932, 0, /*hidden argument*/NULL);
		// string Parameters = "0,0,255,234";
		V_0 = _stringLiteral318177751B7E74DD289B4A0DFEEED1417BCFDED2;
		// Debug.Log(Parameters);
		String_t* L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// if (!_isConnected)
		bool L_1 = __this->get__isConnected_6();
		if (L_1)
		{
			goto IL_00ed;
		}
	}
	{
		// string[] Params = Parameters.Split(',');
		String_t* L_2 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_2, L_4, /*hidden argument*/NULL);
		// ColorR = Convert.ToInt32(Params[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_9 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// ColorG = Convert.ToInt32(Params[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_6;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// ColorB = Convert.ToInt32(Params[2]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_10;
		NullCheck(L_14);
		int32_t L_15 = 2;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// Length = Convert.ToInt32(Params[3]) / 100.0f;
		NullCheck(L_14);
		int32_t L_18 = 3;
		String_t* L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = Convert_ToInt32_mA1C10AB2A7C95E9DCAC473D1D88C74D60FA240ED(L_19, /*hidden argument*/NULL);
		V_4 = ((float)((float)(((float)((float)L_20)))/(float)(100.0f)));
		// Debug.Log(Length);
		float L_21 = V_4;
		float L_22 = L_21;
		RuntimeObject * L_23 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_22);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_23, /*hidden argument*/NULL);
		// Debug.Log(ColorR + " " + ColorG + " " + ColorB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_24;
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_25;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_29;
		int32_t L_31 = V_2;
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_33);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_30;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = L_34;
		int32_t L_36 = V_3;
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_38);
		String_t* L_39 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_35, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_39, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("Length", Length);
		float L_40 = V_4;
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteral692CFAB7F0E96FB317ECD81BE188FB45205CF29C, L_40, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("ColorR", ColorR / 255.0f);
		int32_t L_41 = V_1;
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteral5334DD52B9BCEF6E62ABDBF84A8FBA13308C4B1E, ((float)((float)(((float)((float)L_41)))/(float)(255.0f))), /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("ColorG", ColorG / 255.0f);
		int32_t L_42 = V_2;
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteralC968D338E400FE0CAA838F64C815E2DDB55118DC, ((float)((float)(((float)((float)L_42)))/(float)(255.0f))), /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("ColorB", ColorB / 255.0f);
		int32_t L_43 = V_3;
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteral087B3B42AE270DE8C63648282340EB6ECDF2A621, ((float)((float)(((float)((float)L_43)))/(float)(255.0f))), /*hidden argument*/NULL);
		// StartNetwork();
		LobbyManager_StartNetwork_m0A4AE204F5F6397E9318C1CEFD6A6079F9A04ACA(__this, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void LobbyManager::StartNetwork()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_StartNetwork_m0A4AE204F5F6397E9318C1CEFD6A6079F9A04ACA (LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LobbyManager_StartNetwork_m0A4AE204F5F6397E9318C1CEFD6A6079F9A04ACA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// PhotonNetwork.NickName = Random.Range(100, 999).ToString();
		int32_t L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)100), ((int32_t)999), /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_set_NickName_m9C08C54FB2ECA5A916059D6439E247A11715CC9F(L_1, /*hidden argument*/NULL);
		// PhotonNetwork.GameVersion = "1";
		PhotonNetwork_set_GameVersion_m4664C9FFB4D764499C93AF8B81D753F00CC66E16(_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
		// PhotonNetwork.AutomaticallySyncScene = true;
		PhotonNetwork_set_AutomaticallySyncScene_m7D9F4BFAF99E74A1BACC457EF132349847227A14((bool)1, /*hidden argument*/NULL);
		// PhotonNetwork.ConnectUsingSettings();
		PhotonNetwork_ConnectUsingSettings_m8E6DA5DA6FA94A6006E8F84D3C7B1BB848C2D1E8(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_OnConnectedToMaster_mF4F6B5A8B66499597F71A73F34B168E2DE406025 (LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LobbyManager_OnConnectedToMaster_mF4F6B5A8B66499597F71A73F34B168E2DE406025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Connected");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB6D605A9087410128B41F667A579D1A26C21F6F6, /*hidden argument*/NULL);
		// _isConnected = true;
		__this->set__isConnected_6((bool)1);
		// if (PhotonNetwork.CountOfRooms == 0)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_0 = PhotonNetwork_get_CountOfRooms_m681E82567AE42F02CF01EBB10A8BB433740833E8(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		// PhotonNetwork.CreateRoom(null, new Photon.Realtime.RoomOptions {MaxPlayers = 20});
		RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * L_1 = (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F *)il2cpp_codegen_object_new(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F_il2cpp_TypeInfo_var);
		RoomOptions__ctor_m3757C5E2DFF56EEEC7F0B7A08443DD21DA88FEF7(L_1, /*hidden argument*/NULL);
		RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * L_2 = L_1;
		NullCheck(L_2);
		L_2->set_MaxPlayers_2((uint8_t)((int32_t)20));
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_CreateRoom_m364ACA83E6A534AC91C938B16FCF3A5DB1A0ED3D((String_t*)NULL, L_2, (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 *)NULL, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002f:
	{
		// PhotonNetwork.JoinRandomRoom();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_JoinRandomRoom_m91FC7200A065F8B1BF1AB43C2C6CB4552DC22603(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_OnJoinedRoom_m2557D839437B33F09F02FC76DBB78AE7B73B36B5 (LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LobbyManager_OnJoinedRoom_m2557D839437B33F09F02FC76DBB78AE7B73B36B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.LoadLevel("Game");
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PhotonNetwork_LoadLevel_m29648C8F5442DF11D84E6B4C8E7A505081C1B893(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LobbyManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager__ctor_m38B4D769344EB2FA63EC2278DCF2B2721FD13A85 (LobbyManager_t01BE2BFC16AA5A2BCB67134F6199FD5A72AF8779 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviourPunCallbacks__ctor_m62F4C1105FC1D237DEBE4BE76535F8152A8FF553(__this, /*hidden argument*/NULL);
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
// System.Void Platform::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Start_m4912B5D8D6F513B06E333352D517EF7B01399974 (Platform_tE0375775CB67D8832F7B76160CD58F5FBBAC5A79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Start_m4912B5D8D6F513B06E333352D517EF7B01399974_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set__anim_5(L_0);
		// }
		return;
	}
}
// System.Void Platform::ChangePhantom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_ChangePhantom_m40767DC2DA06C8E5BAB13577F2A82C80667748B9 (Platform_tE0375775CB67D8832F7B76160CD58F5FBBAC5A79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_ChangePhantom_m40767DC2DA06C8E5BAB13577F2A82C80667748B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IsPhantom = !IsPhantom;
		bool L_0 = __this->get_IsPhantom_4();
		__this->set_IsPhantom_4((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// _anim.SetBool("IsPhantom", IsPhantom);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get__anim_5();
		bool L_2 = __this->get_IsPhantom_4();
		NullCheck(L_1);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteral928901BEC1368C5634F6F9F970A2C1C0639DEE17, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Platform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m639396BBA3F91A7EEC3B3CB6C1C7D5D71494433C (Platform_tE0375775CB67D8832F7B76160CD58F5FBBAC5A79 * __this, const RuntimeMethod* method)
{
	{
		// private bool IsPhantom = true;
		__this->set_IsPhantom_4((bool)1);
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
// System.Void PlayerControls::GetDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_GetDamage_mA71D0D64D1002A534F3FB7353311B785DEF7E19D (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, int32_t ___Damage0, const RuntimeMethod* method)
{
	{
		// if (isBlocking) lifes -= (int) (Damage * 0.3f);
		bool L_0 = __this->get_isBlocking_4();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// if (isBlocking) lifes -= (int) (Damage * 0.3f);
		int32_t L_1 = __this->get_lifes_6();
		int32_t L_2 = ___Damage0;
		__this->set_lifes_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_2))), (float)(0.300000012f)))))))));
		goto IL_002e;
	}

IL_0020:
	{
		// else lifes -= Damage;
		int32_t L_3 = __this->get_lifes_6();
		int32_t L_4 = ___Damage0;
		__this->set_lifes_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)));
	}

IL_002e:
	{
		// if(lifes <= 0) Respawn();
		int32_t L_5 = __this->get_lifes_6();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		// if(lifes <= 0) Respawn();
		PlayerControls_Respawn_m01B91A665A0FA6DA9A285C7D22FD4D0DFCCA02C7(__this, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void PlayerControls::IdleSword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_IdleSword_m89140BB47D10719B97E7A6F0218E64E8C36205F5 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	{
		// _swordCondition = 0;
		__this->set__swordCondition_17(0);
		// }
		return;
	}
}
// System.Void PlayerControls::ContinueJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_ContinueJump_mFBC6CC2EC44681E2E3389F2435F9D9AA8BA4E86C (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	{
		// _jumpStarts = false;
		__this->set__jumpStarts_15((bool)0);
		// }
		return;
	}
}
// System.Void PlayerControls::Block(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_Block_m497F6313AEB41385E01BC86B090711E9946840C8 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, bool ___FromBtn0, const RuntimeMethod* method)
{
	{
		// if ((Input.GetMouseButtonDown(1) || FromBtn) && !isAttacking)
		bool L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(1, /*hidden argument*/NULL);
		bool L_1 = ___FromBtn0;
		if (!((int32_t)((int32_t)L_0|(int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = __this->get_isAttacking_5();
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// _swordCondition = 2;
		__this->set__swordCondition_17(2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void PlayerControls::Attack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_Attack_mCA87D5A4BBA93DE7C6FC6A3789E8B1213469867D (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, bool ___FromBtn0, const RuntimeMethod* method)
{
	{
		// if ((Input.GetMouseButtonDown(2) || FromBtn) && !isBlocking)
		bool L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(2, /*hidden argument*/NULL);
		bool L_1 = ___FromBtn0;
		if (!((int32_t)((int32_t)L_0|(int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = __this->get_isBlocking_4();
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// _swordCondition = 1;
		__this->set__swordCondition_17(1);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void PlayerControls::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_Start_mB9489C35C70BB20AA18FC5359CFD9479116004D4 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControls_Start_mB9489C35C70BB20AA18FC5359CFD9479116004D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set__rb_25(L_0);
		// _anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set__anim_26(L_1);
		// _pv = GetComponent<PhotonView>();
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_2 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(__this, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		__this->set__pv_27(L_2);
		// _lifesText = GameObject.FindGameObjectWithTag("LifesText").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral201C291A020EDEEDBB2718B7C6A49EC7AEEA04F2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_3, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set__lifesText_28(L_4);
		// DashLeft();
		PlayerControls_DashLeft_m0A10DAC482888BF1B8072F88DE6FC9EFEEDFC061(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerControls::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_Respawn_m01B91A665A0FA6DA9A285C7D22FD4D0DFCCA02C7 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = new Vector3(0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_1), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		// _rb.constraints = RigidbodyConstraints2D.FreezeAll;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2 = __this->get__rb_25();
		NullCheck(L_2);
		Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263(L_2, 7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerControls::CheckSurroundings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_CheckSurroundings_m6595169336EECD68E45DBAA75D1ADBD6D3E50399 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControls_CheckSurroundings_m6595169336EECD68E45DBAA75D1ADBD6D3E50399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isWalking && Physics2D.Raycast(wallCheck1.transform.position, -transform.right, _wallCheckDistance, whatIsGround) &&
		//     Physics2D.Raycast(wallCheck2.transform.position, -transform.right, _wallCheckDistance, whatIsGround))
		bool L_0 = __this->get__isWalking_12();
		if (L_0)
		{
			goto IL_00ad;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_wallCheck1_10();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get__wallCheckDistance_23();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_10 = __this->get_whatIsGround_9();
		int32_t L_11 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_12 = Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A(L_4, L_8, L_9, L_11, /*hidden argument*/NULL);
		bool L_13 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00ad;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_wallCheck2_11();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_19, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_20, /*hidden argument*/NULL);
		float L_22 = __this->get__wallCheckDistance_23();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_23 = __this->get_whatIsGround_9();
		int32_t L_24 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_25 = Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A(L_17, L_21, L_22, L_24, /*hidden argument*/NULL);
		bool L_26 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00ad;
		}
	}
	{
		// FreezeRotAndDash();
		PlayerControls_FreezeRotAndDash_m3185D5C01AD8BC9F713D7D11F2A48C738FB82900(__this, /*hidden argument*/NULL);
		// RotateToWall(true);
		PlayerControls_RotateToWall_mDEE45E999F070C53E4FED52BC7FF5247786BA7AF(__this, (bool)1, /*hidden argument*/NULL);
		// _isWalking = true;
		__this->set__isWalking_12((bool)1);
	}

IL_00ad:
	{
		// if (!_isWalking && Physics2D.Raycast(wallCheck1.transform.position, transform.right, _wallCheckDistance, whatIsGround) &&
		//     Physics2D.Raycast(wallCheck2.transform.position, transform.right, _wallCheckDistance, whatIsGround))
		bool L_27 = __this->get__isWalking_12();
		if (L_27)
		{
			goto IL_0150;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_wallCheck1_10();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_32, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_33, /*hidden argument*/NULL);
		float L_35 = __this->get__wallCheckDistance_23();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_36 = __this->get_whatIsGround_9();
		int32_t L_37 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_38 = Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A(L_31, L_34, L_35, L_37, /*hidden argument*/NULL);
		bool L_39 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0150;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = __this->get_wallCheck2_11();
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_42, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_44, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_45, /*hidden argument*/NULL);
		float L_47 = __this->get__wallCheckDistance_23();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_48 = __this->get_whatIsGround_9();
		int32_t L_49 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_50 = Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A(L_43, L_46, L_47, L_49, /*hidden argument*/NULL);
		bool L_51 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_50, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0150;
		}
	}
	{
		// FreezeRotAndDash();
		PlayerControls_FreezeRotAndDash_m3185D5C01AD8BC9F713D7D11F2A48C738FB82900(__this, /*hidden argument*/NULL);
		// RotateToWall(false);
		PlayerControls_RotateToWall_mDEE45E999F070C53E4FED52BC7FF5247786BA7AF(__this, (bool)0, /*hidden argument*/NULL);
		// _isWalking = true;
		__this->set__isWalking_12((bool)1);
	}

IL_0150:
	{
		// if (Physics2D.Raycast(wallCheck1.transform.position, transform.up, _groundCheckDistance, whatIsGround))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get_wallCheck1_10();
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_54, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_56, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_57, /*hidden argument*/NULL);
		float L_59 = __this->get__groundCheckDistance_24();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_60 = __this->get_whatIsGround_9();
		int32_t L_61 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_62 = Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A(L_55, L_58, L_59, L_61, /*hidden argument*/NULL);
		bool L_63 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_62, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_01ad;
		}
	}
	{
		// FreezeRotAndDash();
		PlayerControls_FreezeRotAndDash_m3185D5C01AD8BC9F713D7D11F2A48C738FB82900(__this, /*hidden argument*/NULL);
		// RotateToWall(true);
		PlayerControls_RotateToWall_mDEE45E999F070C53E4FED52BC7FF5247786BA7AF(__this, (bool)1, /*hidden argument*/NULL);
		// RotateToWall(true);
		PlayerControls_RotateToWall_mDEE45E999F070C53E4FED52BC7FF5247786BA7AF(__this, (bool)1, /*hidden argument*/NULL);
		// _isWalking = true;
		__this->set__isWalking_12((bool)1);
	}

IL_01ad:
	{
		// if (Physics2D.Raycast(wallCheck2.transform.position, -transform.up, _groundCheckDistance, whatIsGround))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = __this->get_wallCheck2_11();
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_66, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_69, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_70, /*hidden argument*/NULL);
		float L_72 = __this->get__groundCheckDistance_24();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_73 = __this->get_whatIsGround_9();
		int32_t L_74 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_75 = Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A(L_67, L_71, L_72, L_74, /*hidden argument*/NULL);
		bool L_76 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_0201;
		}
	}
	{
		// FreezeRotAndDash();
		PlayerControls_FreezeRotAndDash_m3185D5C01AD8BC9F713D7D11F2A48C738FB82900(__this, /*hidden argument*/NULL);
		// _isWalking = true;
		__this->set__isWalking_12((bool)1);
	}

IL_0201:
	{
		// if (_isWalking && !Physics2D.Raycast(wallCheck2.transform.position, -transform.up, _groundCheckDistance,
		//     whatIsGround))
		bool L_77 = __this->get__isWalking_12();
		if (!L_77)
		{
			goto IL_025d;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78 = __this->get_wallCheck2_11();
		NullCheck(L_78);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_78, /*hidden argument*/NULL);
		NullCheck(L_79);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_79, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_81 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_80, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_82);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_83, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_85 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_84, /*hidden argument*/NULL);
		float L_86 = __this->get__groundCheckDistance_24();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_87 = __this->get_whatIsGround_9();
		int32_t L_88 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_87, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_89 = Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A(L_81, L_85, L_86, L_88, /*hidden argument*/NULL);
		bool L_90 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_89, /*hidden argument*/NULL);
		if (L_90)
		{
			goto IL_025d;
		}
	}
	{
		// FreezeRotAndDash();
		PlayerControls_FreezeRotAndDash_m3185D5C01AD8BC9F713D7D11F2A48C738FB82900(__this, /*hidden argument*/NULL);
		// _isWalking = false;
		__this->set__isWalking_12((bool)0);
	}

IL_025d:
	{
		// }
		return;
	}
}
// System.Void PlayerControls::FreezeRotAndDash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_FreezeRotAndDash_m3185D5C01AD8BC9F713D7D11F2A48C738FB82900 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	{
		// _rb.constraints = RigidbodyConstraints2D.FreezeRotation;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get__rb_25();
		NullCheck(L_0);
		Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263(L_0, 4, /*hidden argument*/NULL);
		// _rb.constraints = RigidbodyConstraints2D.None;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get__rb_25();
		NullCheck(L_1);
		Rigidbody2D_set_constraints_mEB2202406AB063F57E273F4313E7E4D58D613263(L_1, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerControls::RotateToWall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_RotateToWall_mDEE45E999F070C53E4FED52BC7FF5247786BA7AF (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, bool ___ToRight0, const RuntimeMethod* method)
{
	{
		// if(ToRight) transform.Rotate(0, 0, -90);
		bool L_0 = ___ToRight0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// if(ToRight) transform.Rotate(0, 0, -90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_1, (0.0f), (0.0f), (-90.0f), /*hidden argument*/NULL);
		return;
	}

IL_001e:
	{
		// else transform.Rotate(0, 0, 90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_2, (0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerControls::SetAnims()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_SetAnims_m5C46394688AED0C75562CC5078C68CE37F5B7FD1 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControls_SetAnims_m5C46394688AED0C75562CC5078C68CE37F5B7FD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _anim.SetBool("IsWalking", _isWalking);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get__anim_26();
		bool L_1 = __this->get__isWalking_12();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral926A646AB5A68B4F9CE13C5B42BF00FE91E8C2D9, L_1, /*hidden argument*/NULL);
		// _anim.SetBool("JumpStarts", _jumpStarts);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get__anim_26();
		bool L_3 = __this->get__jumpStarts_15();
		NullCheck(L_2);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteral3D2960ADEE26ABF35D01A7E5A6F803CB8D04B7A1, L_3, /*hidden argument*/NULL);
		// _anim.SetInteger("MovingDir", _walkingDir);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get__anim_26();
		int32_t L_5 = __this->get__walkingDir_16();
		NullCheck(L_4);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_4, _stringLiteral3BF7F9CC2B74437B5A104CC67112E2838CFF01D8, L_5, /*hidden argument*/NULL);
		// _anim.SetInteger("Sword", _swordCondition);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get__anim_26();
		int32_t L_7 = __this->get__swordCondition_17();
		NullCheck(L_6);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_6, _stringLiteralDA1F705778A325489228AC526C58287EAE07A387, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerControls::UpdateSword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_UpdateSword_m6632FCB6F9CB9EB878762459E188D89B8DD0DFF2 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	{
		// sword.isAttacking = isAttacking;
		Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * L_0 = __this->get_sword_8();
		bool L_1 = __this->get_isAttacking_5();
		NullCheck(L_0);
		L_0->set_isAttacking_7(L_1);
		// }
		return;
	}
}
// System.Void PlayerControls::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_Update_mA38B48E800B339AE629F0CA32238CD57E7271E84 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControls_Update_mA38B48E800B339AE629F0CA32238CD57E7271E84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckSurroundings();
		PlayerControls_CheckSurroundings_m6595169336EECD68E45DBAA75D1ADBD6D3E50399(__this, /*hidden argument*/NULL);
		// if (_pv.IsMine)
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_0 = __this->get__pv_27();
		NullCheck(L_0);
		bool L_1 = PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_01ae;
		}
	}
	{
		// _lifesText.text = lifes.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get__lifesText_28();
		int32_t* L_3 = __this->get_address_of_lifes_6();
		String_t* L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// Attack(false);
		PlayerControls_Attack_mCA87D5A4BBA93DE7C6FC6A3789E8B1213469867D(__this, (bool)0, /*hidden argument*/NULL);
		// Block(false);
		PlayerControls_Block_m497F6313AEB41385E01BC86B090711E9946840C8(__this, (bool)0, /*hidden argument*/NULL);
		// if (_isWalking)
		bool L_5 = __this->get__isWalking_12();
		if (!L_5)
		{
			goto IL_0060;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.A)) DashLeft();
		bool L_6 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)97), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.A)) DashLeft();
		PlayerControls_DashLeft_m0A10DAC482888BF1B8072F88DE6FC9EFEEDFC061(__this, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// if (Input.GetKeyDown(KeyCode.D)) DashRight();
		bool L_7 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)100), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.D)) DashRight();
		PlayerControls_DashRight_mF3A1C31D9D127CB9B60A68115ABED3740DD4F217(__this, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// if (Input.GetKeyDown(KeyCode.W))
		bool L_8 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)119), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		// Jump();
		PlayerControls_Jump_m6BB174E3AA4DB2FBF57D152F7AD24CD91ECF1D7F(__this, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// if (!_isWalking && !_isDashing)
		bool L_9 = __this->get__isWalking_12();
		if (L_9)
		{
			goto IL_00fa;
		}
	}
	{
		bool L_10 = __this->get__isDashing_14();
		if (L_10)
		{
			goto IL_00fa;
		}
	}
	{
		// _rb.AddForce(transform.up * _defaultSpeed, ForceMode2D.Force);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = __this->get__rb_25();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_12, /*hidden argument*/NULL);
		float L_14 = __this->get__defaultSpeed_20();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_11, L_16, 0, /*hidden argument*/NULL);
		// if (Input.GetKey(KeyCode.A)) transform.Rotate(0, 0, _rotateForce);
		bool L_17 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00cd;
		}
	}
	{
		// if (Input.GetKey(KeyCode.A)) transform.Rotate(0, 0, _rotateForce);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_19 = __this->get__rotateForce_22();
		NullCheck(L_18);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_18, (0.0f), (0.0f), L_19, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		// if (Input.GetKey(KeyCode.D)) transform.Rotate(0, 0, -_rotateForce);
		bool L_20 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0186;
		}
	}
	{
		// if (Input.GetKey(KeyCode.D)) transform.Rotate(0, 0, -_rotateForce);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_22 = __this->get__rotateForce_22();
		NullCheck(L_21);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_21, (0.0f), (0.0f), ((-L_22)), /*hidden argument*/NULL);
		// }
		goto IL_0186;
	}

IL_00fa:
	{
		// else if (_isDashing)
		bool L_23 = __this->get__isDashing_14();
		if (!L_23)
		{
			goto IL_0186;
		}
	}
	{
		// if (_isDashingRight)
		bool L_24 = __this->get__isDashingRight_13();
		if (!L_24)
		{
			goto IL_0143;
		}
	}
	{
		// _rb.AddForce(transform.right * _dashSpeed, ForceMode2D.Force);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_25 = __this->get__rb_25();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_26, /*hidden argument*/NULL);
		float L_28 = __this->get__dashSpeed_19();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_29, /*hidden argument*/NULL);
		NullCheck(L_25);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_25, L_30, 0, /*hidden argument*/NULL);
		// if (_isWalking) _walkingDir = 1;
		bool L_31 = __this->get__isWalking_12();
		if (!L_31)
		{
			goto IL_0143;
		}
	}
	{
		// if (_isWalking) _walkingDir = 1;
		__this->set__walkingDir_16(1);
	}

IL_0143:
	{
		// if (!_isDashingRight)
		bool L_32 = __this->get__isDashingRight_13();
		if (L_32)
		{
			goto IL_0186;
		}
	}
	{
		// _rb.AddForce(-transform.right * _dashSpeed, ForceMode2D.Force);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_33 = __this->get__rb_25();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_35, /*hidden argument*/NULL);
		float L_37 = __this->get__dashSpeed_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_36, L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_38, /*hidden argument*/NULL);
		NullCheck(L_33);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_33, L_39, 0, /*hidden argument*/NULL);
		// if (_isWalking) _walkingDir = -1;
		bool L_40 = __this->get__isWalking_12();
		if (!L_40)
		{
			goto IL_0186;
		}
	}
	{
		// if (_isWalking) _walkingDir = -1;
		__this->set__walkingDir_16((-1));
	}

IL_0186:
	{
		// if (_rb.velocity == new Vector2(0, 0))
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_41 = __this->get__rb_25();
		NullCheck(L_41);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_41, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_43), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		bool L_44 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_42, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_01ae;
		}
	}
	{
		// _walkingDir = 0;
		__this->set__walkingDir_16(0);
	}

IL_01ae:
	{
		// SetAnims();
		PlayerControls_SetAnims_m5C46394688AED0C75562CC5078C68CE37F5B7FD1(__this, /*hidden argument*/NULL);
		// UpdateSword();
		PlayerControls_UpdateSword_m6632FCB6F9CB9EB878762459E188D89B8DD0DFF2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerControls::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_Jump_m6BB174E3AA4DB2FBF57D152F7AD24CD91ECF1D7F (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControls_Jump_m6BB174E3AA4DB2FBF57D152F7AD24CD91ECF1D7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rb.AddForce(transform.up * _boostSpeed, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get__rb_25();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get__boostSpeed_18();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_0, L_5, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerControls::DashLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_DashLeft_m0A10DAC482888BF1B8072F88DE6FC9EFEEDFC061 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	{
		// if (!_isWalking && !_isDashing)
		bool L_0 = __this->get__isWalking_12();
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1 = __this->get__isDashing_14();
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// transform.Rotate(0, 0, _rotateForce);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_3 = __this->get__rotateForce_22();
		NullCheck(L_2);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_2, (0.0f), (0.0f), L_3, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// if (_isWalking)
		bool L_4 = __this->get__isWalking_12();
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// _isDashingRight = false;
		__this->set__isDashingRight_13((bool)0);
		// _isDashing = true;
		__this->set__isDashing_14((bool)1);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void PlayerControls::DashRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_DashRight_mF3A1C31D9D127CB9B60A68115ABED3740DD4F217 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	{
		// if (!_isWalking && !_isDashing)
		bool L_0 = __this->get__isWalking_12();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		bool L_1 = __this->get__isDashing_14();
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		// transform.Rotate(0, 0, -_rotateForce);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_3 = __this->get__rotateForce_22();
		NullCheck(L_2);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_2, (0.0f), (0.0f), ((-L_3)), /*hidden argument*/NULL);
	}

IL_002c:
	{
		// if (_isWalking)
		bool L_4 = __this->get__isWalking_12();
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// _isDashingRight = true;
		__this->set__isDashingRight_13((bool)1);
		// _isDashing = true;
		__this->set__isDashing_14((bool)1);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void PlayerControls::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_OnCollisionEnter2D_mE5A5641AF2CC240050EF944BDCA35C12F064CB23 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControls_OnCollisionEnter2D_mE5A5641AF2CC240050EF944BDCA35C12F064CB23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * V_0 = NULL;
	{
		// _isDashing = false;
		__this->set__isDashing_14((bool)0);
		// _jumpStarts = true;
		__this->set__jumpStarts_15((bool)1);
		// if (other.gameObject.CompareTag("Sword"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralDA1F705778A325489228AC526C58287EAE07A387, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0088;
		}
	}
	{
		// Debug.Log("a");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, /*hidden argument*/NULL);
		// Sword OtherSword = other.gameObject.GetComponent<Sword>();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_3 = ___other0;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * L_5 = GameObject_GetComponent_TisSword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85_m580025B496C8FA2FF4ADC713B0D4E8B5EEC36805(L_4, /*hidden argument*/GameObject_GetComponent_TisSword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85_m580025B496C8FA2FF4ADC713B0D4E8B5EEC36805_RuntimeMethod_var);
		V_0 = L_5;
		// GameObject nowP = Instantiate(RedParticles, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_RedParticles_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(nowP, 0.3f);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_10, (0.300000012f), /*hidden argument*/NULL);
		// Debug.Log("b");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, /*hidden argument*/NULL);
		// if (OtherSword.isAttacking) GetDamage(OtherSword.force * 2);
		Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->get_isAttacking_7();
		if (!L_12)
		{
			goto IL_007c;
		}
	}
	{
		// if (OtherSword.isAttacking) GetDamage(OtherSword.force * 2);
		Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_force_8();
		PlayerControls_GetDamage_mA71D0D64D1002A534F3FB7353311B785DEF7E19D(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2)), /*hidden argument*/NULL);
		return;
	}

IL_007c:
	{
		// else GetDamage(OtherSword.force);
		Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_force_8();
		PlayerControls_GetDamage_mA71D0D64D1002A534F3FB7353311B785DEF7E19D(__this, L_16, /*hidden argument*/NULL);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void PlayerControls::OnPhotonSerializeView(Photon.Pun.PhotonStream,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_OnPhotonSerializeView_m6AE481CF30CC5A53DAC4FDAA6179AED94CE8DC35 (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___stream0, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerControls_OnPhotonSerializeView_m6AE481CF30CC5A53DAC4FDAA6179AED94CE8DC35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (stream.IsWriting)
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_0 = ___stream0;
		NullCheck(L_0);
		bool L_1 = PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// stream.SendNext(isAttacking);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_2 = ___stream0;
		bool L_3 = __this->get_isAttacking_5();
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_2, L_5, /*hidden argument*/NULL);
		// stream.SendNext(isBlocking);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_6 = ___stream0;
		bool L_7 = __this->get_isBlocking_4();
		bool L_8 = L_7;
		RuntimeObject * L_9 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_6, L_9, /*hidden argument*/NULL);
		// stream.SendNext(lifes);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_10 = ___stream0;
		int32_t L_11 = __this->get_lifes_6();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_10, L_13, /*hidden argument*/NULL);
		// stream.SendNext(_swordCondition);
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_14 = ___stream0;
		int32_t L_15 = __this->get__swordCondition_17();
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		PhotonStream_SendNext_mEFDDED41389B8F80F4B181478A0165550DD83A4A(L_14, L_17, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004d:
	{
		// isAttacking = (bool) stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_18 = ___stream0;
		NullCheck(L_18);
		RuntimeObject * L_19 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_18, /*hidden argument*/NULL);
		__this->set_isAttacking_5(((*(bool*)((bool*)UnBox(L_19, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		// isBlocking = (bool) stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_20 = ___stream0;
		NullCheck(L_20);
		RuntimeObject * L_21 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_20, /*hidden argument*/NULL);
		__this->set_isBlocking_4(((*(bool*)((bool*)UnBox(L_21, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		// lifes = (int) stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_22 = ___stream0;
		NullCheck(L_22);
		RuntimeObject * L_23 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_22, /*hidden argument*/NULL);
		__this->set_lifes_6(((*(int32_t*)((int32_t*)UnBox(L_23, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		// _swordCondition = (int) stream.ReceiveNext();
		PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * L_24 = ___stream0;
		NullCheck(L_24);
		RuntimeObject * L_25 = PhotonStream_ReceiveNext_mF6535E8467C5C894E87F9162295699226504F19A(L_24, /*hidden argument*/NULL);
		__this->set__swordCondition_17(((*(int32_t*)((int32_t*)UnBox(L_25, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		// }
		return;
	}
}
// System.Void PlayerControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls__ctor_m892AB10F99012BE66F2524671783FDC93276FB8C (PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * __this, const RuntimeMethod* method)
{
	{
		// public int lifes = 100;
		__this->set_lifes_6(((int32_t)100));
		// private float _boostSpeed = 25;
		__this->set__boostSpeed_18((25.0f));
		// private float _dashSpeed = 45;
		__this->set__dashSpeed_19((45.0f));
		// private float _defaultSpeed = 2.5f;
		__this->set__defaultSpeed_20((2.5f));
		// private float _movementForce = 7.5f;
		__this->set__movementForce_21((7.5f));
		// private float _rotateForce = 45f;
		__this->set__rotateForce_22((45.0f));
		// private float _wallCheckDistance = 0.75f;
		__this->set__wallCheckDistance_23((0.75f));
		// private float _groundCheckDistance = 0.2f;
		__this->set__groundCheckDistance_24((0.200000003f));
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
// System.Void PlayersAction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayersAction_Start_mB196E38C18C87E3DE6E2FE1E373B7EBBD8E730B7 (PlayersAction_tA8276555252BDD94DA8EBDD64B4352D81800B517 * __this, const RuntimeMethod* method)
{
	{
		// FindPlayer();
		PlayersAction_FindPlayer_m19991E1A1FF6D360DDA93F6EA1F16BD3CA03E772(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayersAction::FindPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayersAction_FindPlayer_m19991E1A1FF6D360DDA93F6EA1F16BD3CA03E772 (PlayersAction_tA8276555252BDD94DA8EBDD64B4352D81800B517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayersAction_FindPlayer_m19991E1A1FF6D360DDA93F6EA1F16BD3CA03E772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// PlayerControls[] PlayerControlsArray = FindObjectsOfType<PlayerControls>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C* L_0 = Object_FindObjectsOfType_TisPlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3_mF7AEF7F889825219DE209881969347234A53B883(/*hidden argument*/Object_FindObjectsOfType_TisPlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3_mF7AEF7F889825219DE209881969347234A53B883_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < PlayerControlsArray.Length; i++)
		V_1 = 0;
		goto IL_0028;
	}

IL_000a:
	{
		// if (PlayerControlsArray[i].GetComponent<PhotonView>().IsMine)
		PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_5 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(L_4, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		// _my = PlayerControlsArray[i];
		PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->set__my_4(L_10);
		// break;
		goto IL_002e;
	}

IL_0024:
	{
		// for (int i = 0; i < PlayerControlsArray.Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0028:
	{
		// for (int i = 0; i < PlayerControlsArray.Length; i++)
		int32_t L_12 = V_1;
		PlayerControlsU5BU5D_t0A0DE573088C2EBD3D7BF5DB45F52EBD1EBF928C* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_000a;
		}
	}

IL_002e:
	{
		// if(_my == null) Invoke(nameof(FindPlayer), 0.5f);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_14 = __this->get__my_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_004c;
		}
	}
	{
		// if(_my == null) Invoke(nameof(FindPlayer), 0.5f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral5BDAB71493423C3B77BD2925FF7B2A473E32FD0D, (0.5f), /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void PlayersAction::MoveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayersAction_MoveLeft_mBB485EE88E36EEFF739E8D7623C107BC6DA1DAAB (PlayersAction_tA8276555252BDD94DA8EBDD64B4352D81800B517 * __this, const RuntimeMethod* method)
{
	{
		// _my.DashLeft();
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get__my_4();
		NullCheck(L_0);
		PlayerControls_DashLeft_m0A10DAC482888BF1B8072F88DE6FC9EFEEDFC061(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayersAction::MoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayersAction_MoveRight_mD25C1D055590C545AA97D5006C92743902E4BF21 (PlayersAction_tA8276555252BDD94DA8EBDD64B4352D81800B517 * __this, const RuntimeMethod* method)
{
	{
		// _my.DashRight();
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get__my_4();
		NullCheck(L_0);
		PlayerControls_DashRight_mF3A1C31D9D127CB9B60A68115ABED3740DD4F217(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayersAction::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayersAction_Jump_m28A557A84E975C65F06BB304F87B1FB7B6E45114 (PlayersAction_tA8276555252BDD94DA8EBDD64B4352D81800B517 * __this, const RuntimeMethod* method)
{
	{
		// _my.Jump();
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get__my_4();
		NullCheck(L_0);
		PlayerControls_Jump_m6BB174E3AA4DB2FBF57D152F7AD24CD91ECF1D7F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayersAction::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayersAction_Attack_mA88F0884F184D01E367A61E8297FD96BD31812AA (PlayersAction_tA8276555252BDD94DA8EBDD64B4352D81800B517 * __this, const RuntimeMethod* method)
{
	{
		// _my.Attack(true);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get__my_4();
		NullCheck(L_0);
		PlayerControls_Attack_mCA87D5A4BBA93DE7C6FC6A3789E8B1213469867D(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayersAction::Block()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayersAction_Block_mBC959CEA845EA80C84E47E5E1E2E1054576521AC (PlayersAction_tA8276555252BDD94DA8EBDD64B4352D81800B517 * __this, const RuntimeMethod* method)
{
	{
		// _my.Block(true);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get__my_4();
		NullCheck(L_0);
		PlayerControls_Block_m497F6313AEB41385E01BC86B090711E9946840C8(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayersAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayersAction__ctor_m8D1CD71F4EBF27AF4250185AA961E883C5698DB8 (PlayersAction_tA8276555252BDD94DA8EBDD64B4352D81800B517 * __this, const RuntimeMethod* method)
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
// System.Void Sword::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sword_Start_mC43172D623D5F4D3715D9300977E93DF0E11C9F5 (Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sword_Start_mC43172D623D5F4D3715D9300977E93DF0E11C9F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _damageText = GameObject.FindGameObjectWithTag("DamageText").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral6C00B0684A4D335938F3AE3B16574DC95FE0D6C2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set__damageText_9(L_1);
		// }
		return;
	}
}
// System.Void Sword::SetLength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sword_SetLength_m3D6C32B2EC95A7E9910B09721E111BB999D00BF0 (Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * __this, float ___Length0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sword_SetLength_m3D6C32B2EC95A7E9910B09721E111BB999D00BF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.localScale = new Vector3(transform.position.x, Length);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = ___Length0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_5), L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_5, /*hidden argument*/NULL);
		// Debug.Log("Length set");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral66AB0838075C56A54F8CB3E7AA02E3274380E897, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Sword::SetForce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sword_SetForce_mC7E9646E5DCDBB2481A192C5FF38C4A508C923DA (Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * __this, float ___Force0, const RuntimeMethod* method)
{
	{
		// force = (int) Force;
		float L_0 = ___Force0;
		__this->set_force_8((((int32_t)((int32_t)L_0))));
		// }
		return;
	}
}
// System.Void Sword::SetColor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sword_SetColor_mBBC1C9DE0E247F5134838F4AFA648C9829C078D4 (Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * __this, float ___R0, float ___G1, float ___B2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sword_SetColor_mBBC1C9DE0E247F5134838F4AFA648C9829C078D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sp.material.color = new Color(R, G, B, 0.95f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_sp_4();
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_0, /*hidden argument*/NULL);
		float L_2 = ___R0;
		float L_3 = ___G1;
		float L_4 = ___B2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_5), L_2, L_3, L_4, (0.949999988f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_1, L_5, /*hidden argument*/NULL);
		// light2D.color = new Color(R, G, B);
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_6 = __this->get_light2D_5();
		float L_7 = ___R0;
		float L_8 = ___G1;
		float L_9 = ___B2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_10), L_7, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		Light2D_set_color_m728FF8483DEC5DB968BDE4B0A92518C5EBD2E2FC_inline(L_6, L_10, /*hidden argument*/NULL);
		// Debug.Log("Color set " + R + " " + G + " " + B);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2C24EB5C5FDCF702DA7203A3BB6F48F680453B8B);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2C24EB5C5FDCF702DA7203A3BB6F48F680453B8B);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		float L_14 = ___R0;
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		float L_19 = ___G1;
		float L_20 = L_19;
		RuntimeObject * L_21 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_18;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_22;
		float L_24 = ___B2;
		float L_25 = L_24;
		RuntimeObject * L_26 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_26);
		String_t* L_27 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Sword::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sword_OnCollisionEnter2D_mB1243A1B4982AF708518929B7108F298D8B17B0A (Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sword_OnCollisionEnter2D_mB1243A1B4982AF708518929B7108F298D8B17B0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.GetComponent<TestBody>())
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		TestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6 * L_2 = GameObject_GetComponent_TisTestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6_m15B8C0DC58BA98E614D14869C19C314028690980(L_1, /*hidden argument*/GameObject_GetComponent_TisTestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6_m15B8C0DC58BA98E614D14869C19C314028690980_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		// if (playerControls.GetComponent<PhotonView>().IsMine)
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_4 = __this->get_playerControls_6();
		NullCheck(L_4);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_5 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(L_4, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// _damageText.text = force.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get__damageText_9();
		int32_t* L_8 = __this->get_address_of_force_8();
		String_t* L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
		// CancelInvoke(nameof(SetNullText));
		MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9(__this, _stringLiteral41CBCC11FADCCBB8E6B9FDFC14A29114B0D0C8F5, /*hidden argument*/NULL);
		// Invoke(nameof(SetNullText), 0.75f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral41CBCC11FADCCBB8E6B9FDFC14A29114B0D0C8F5, (0.75f), /*hidden argument*/NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Sword::SetNullText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sword_SetNullText_m7511CDB3F1EA636D251F1ECAECE0C449C5EF0141 (Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sword_SetNullText_m7511CDB3F1EA636D251F1ECAECE0C449C5EF0141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _damageText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__damageText_9();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void Sword::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sword__ctor_m70C5B9B73B118D6081BE7B8A993F452E0BB8E2F3 (Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * __this, const RuntimeMethod* method)
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
// System.Void TestBody::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestBody_OnCollisionEnter2D_m4BE1715DFD1F7A4480062F80C48C84688FAF512B (TestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestBody_OnCollisionEnter2D_m4BE1715DFD1F7A4480062F80C48C84688FAF512B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject nowP = Instantiate(RedParticles, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_RedParticles_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(nowP, 0.3f);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_4, (0.300000012f), /*hidden argument*/NULL);
		// if (other.gameObject.CompareTag("Sword"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_5 = ___other0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_6, _stringLiteralDA1F705778A325489228AC526C58287EAE07A387, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		// if (other.gameObject.GetComponent<Sword>().playerControls.GetComponent<PhotonView>().IsMine)
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_8 = ___other0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * L_10 = GameObject_GetComponent_TisSword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85_m580025B496C8FA2FF4ADC713B0D4E8B5EEC36805(L_9, /*hidden argument*/GameObject_GetComponent_TisSword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85_m580025B496C8FA2FF4ADC713B0D4E8B5EEC36805_RuntimeMethod_var);
		NullCheck(L_10);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_11 = L_10->get_playerControls_6();
		NullCheck(L_11);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_12 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(L_11, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		NullCheck(L_12);
		bool L_13 = PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		// damageText.text = other.gameObject.GetComponent<Sword>().force.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_damageText_5();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_15 = ___other0;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Sword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85 * L_17 = GameObject_GetComponent_TisSword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85_m580025B496C8FA2FF4ADC713B0D4E8B5EEC36805(L_16, /*hidden argument*/GameObject_GetComponent_TisSword_t1DF8958C96F2641C8C6BD7BFA9056AF7BE9A8C85_m580025B496C8FA2FF4ADC713B0D4E8B5EEC36805_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t* L_18 = L_17->get_address_of_force_8();
		String_t* L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_19);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void TestBody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestBody__ctor_mF06AB4F66F89C0AD5B032DD7D62C3B67F60FDE28 (TestBody_t377745A0472FB5BC2F927E9B4C4C30E425DCBAF6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionHandler_set_Client_m50BFB190427F739A25E74012F92D88697E1A17B4_inline (ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * __this, LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___value0, const RuntimeMethod* method)
{
	{
		// public LoadBalancingClient Client { get; set; }
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = ___value0;
		__this->set_U3CClientU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m0983EF873FB794B55A105CF532339D23998B8378_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// return this.state;
		int32_t L_0 = __this->get_state_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m3C0CF3D5F0C6E60B08BEAB2223212B8A23B1C535_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, const RuntimeMethod* method)
{
	{
		// public string Code { get; private set; }
		String_t* L_0 = __this->get_U3CCodeU3Ek__BackingField_0();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonStream_get_IsWriting_mAE4315E0AD6B3A0770F8304D6D61306471742100_inline (PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * __this, const RuntimeMethod* method)
{
	{
		// public bool IsWriting { get; private set; }
		bool L_0 = __this->get_U3CIsWritingU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_color_m728FF8483DEC5DB968BDE4B0A92518C5EBD2E2FC_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Color = value; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_m_Color_8(L_0);
		// set { m_Color = value; }
		return;
	}
}
