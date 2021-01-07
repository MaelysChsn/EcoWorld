#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E;
// Photon.Realtime.ErrorInfo
struct ErrorInfo_tCF1CC371330203F98D00E197EE87658A8D0E0B80;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_t48BB73E6D08C75C189493872CB147112E4CCCA28;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_tBF0AC8D2B76589CB71C2657718D0E0C46FD3738E;
// Photon.Realtime.IWebRpcCallback
struct IWebRpcCallback_t88753C6C07891FBB7208902706B417D185B0B910;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05;
// Photon.Realtime.PhotonPing
struct PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D;
// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214;
// Photon.Realtime.Region
struct Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0;
// Photon.Realtime.RegionHandler
struct RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53;
// Photon.Realtime.RegionPinger
struct RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139;
// Photon.Realtime.Room
struct Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D;
// Photon.Realtime.RoomInfo
struct RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889;
// Photon.Realtime.RoomOptions
struct RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Photon.Realtime.SupportLogger
struct SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t3D2409F70966749F514326896715927BF6E3A975;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8;
// Photon.Realtime.TypedLobby
struct TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5;
// Photon.Realtime.TypedLobbyInfo
struct TypedLobbyInfo_t2DB7A0FF57E6248ACFAC6D38025890C9125FD8E6;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Photon.Realtime.WebFlags
struct WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96;
// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2;
// Photon.Realtime.LoadBalancingClient/CallbackTargetChange
struct CallbackTargetChange_tA10959BD5B7373AA9F6B40DB22CA100C2264C012;
// Photon.Realtime.LoadBalancingPeer/<>c
struct U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0;
// Photon.Realtime.RegionHandler/<>c
struct U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87;
// Photon.Realtime.RegionHandler/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t1DEE0918E353BCBBF43AE2524CDEC3C4552ACC38;
// Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__19
struct U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B;
// System.Action`1<Photon.Realtime.Region>
struct Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_t1B4449F674A0EA1C865984B25031E893CBAA9790;
// System.Action`1<System.Collections.Generic.Dictionary`2<System.Byte,System.Object>>
struct Action_1_t08082A2312861137F4A54C8C0EE83113CCDF0FF4;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_tE4DDE99328D4CC9466EC7FA11CF58306E38D12D5;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t1268EA16A3E5EE89B08D178E64198AE4B75125B0;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5;
// System.Comparison`1<Photon.Realtime.Region>
struct Comparison_1_t044A798584CCE9FE210742245D3AF8847522A531;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t32CE63FA54BF126A18FDF69E778B381FF5EA4A15;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tBEAE6023D429A1E53D734E0261C9561E4C77F8A2;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`1<System.Collections.Generic.Dictionary`2<System.Byte,System.Object>>
struct Func_1_t279BE9A3C8DAD3311890DCEBE3095A8F9E7B8091;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t95750B1CF3F7626EC7AB30893A86E08F445DD75D;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C;
// System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>
struct List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t745FCA5180E853BD454A81B6D899CCA2BF6E3C2F;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t1D673277C302265BA143A7DD99DD859AF26CD431;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// ExitGames.Client.Photon.Pool`1<System.Collections.Generic.Dictionary`2<System.Byte,System.Object>>
struct Pool_1_t1496E69543DAC131699AB77455F1BC642D186971;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_tFF9526B5F79416765882A99F02C06F237631B787;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Object>[]
struct EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Exception
struct Exception_t;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_tE2FC67380561482C72E89F355A6F7A4569D56982;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Photon.Realtime.IWebRpcCallback[]
struct IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_tE2FBC099EAF490BD0F682FA7DD88585975230DEB;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_tD52EA55FBF373E0F6FEF6118691A506ADBFF833A;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;

IL2CPP_EXTERN_C RuntimeClass* AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomAuthenticationType_tD0F6E6C7B5CFDC781EAB5E9CDC44F285B1499BEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebRpcCallback_t88753C6C07891FBB7208902706B417D185B0B910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LobbyType_t398AB21E35E9CD63CD9E514CEC5475D70D1413C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01551127791BB14934414B8428B67FD51B390033;
IL2CPP_EXTERN_C String_t* _stringLiteral01BC6FF5AB7C7B79FA9D79F6E208A0C99F1F2A6F;
IL2CPP_EXTERN_C String_t* _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
IL2CPP_EXTERN_C String_t* _stringLiteral111D994A41187DCF854E2098345172E28925CD36;
IL2CPP_EXTERN_C String_t* _stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1;
IL2CPP_EXTERN_C String_t* _stringLiteral1E2510325BB91639BC80976746CCEC9FE9947D99;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral271CB9743B301F4C7123339F6C43C77525F17510;
IL2CPP_EXTERN_C String_t* _stringLiteral286433695DFD6DE8C552742EA4ED360438C7BEDC;
IL2CPP_EXTERN_C String_t* _stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14;
IL2CPP_EXTERN_C String_t* _stringLiteral28C16AD3D08B7CCD40C5C1BC966F3A5EB27FEF18;
IL2CPP_EXTERN_C String_t* _stringLiteral293EEA1FC571998DF9F8F43C7C67DEE8ADA92F9C;
IL2CPP_EXTERN_C String_t* _stringLiteral3207ED05D1B134966FA36BFEA2D7A6DF1F45D961;
IL2CPP_EXTERN_C String_t* _stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00;
IL2CPP_EXTERN_C String_t* _stringLiteral38011452171D5D98758667404D6F17F5AF329293;
IL2CPP_EXTERN_C String_t* _stringLiteral3B24932FF933699B3A82EAC56B23A2606464B1D8;
IL2CPP_EXTERN_C String_t* _stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194;
IL2CPP_EXTERN_C String_t* _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
IL2CPP_EXTERN_C String_t* _stringLiteral49221D9FFDE2F83640CB6D959D4A66D1492381B7;
IL2CPP_EXTERN_C String_t* _stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB;
IL2CPP_EXTERN_C String_t* _stringLiteral5B49F56286E679FA58107352F1A55E4C9D0B9352;
IL2CPP_EXTERN_C String_t* _stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480;
IL2CPP_EXTERN_C String_t* _stringLiteral677B5ACFFA9821CA29C5B6329DD4778CE1AC133B;
IL2CPP_EXTERN_C String_t* _stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90;
IL2CPP_EXTERN_C String_t* _stringLiteral72B7AAEA9F105BC899930B342A7753298A5FCFB2;
IL2CPP_EXTERN_C String_t* _stringLiteral744BF9AE3CE56EE58F000CE7C3F4F94C51ABA032;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7E357C31C3E3A0DB2B89D68F7FD43137F7E8DDED;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8D1239F07A9E8331EAEB0B65C253D33291FDD92B;
IL2CPP_EXTERN_C String_t* _stringLiteral8F922B5D2735B37B3F9E1522305AB8CCD8ED274B;
IL2CPP_EXTERN_C String_t* _stringLiteral94C9907E8EDE0DCF9B99D296D066DF89F5E204E9;
IL2CPP_EXTERN_C String_t* _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
IL2CPP_EXTERN_C String_t* _stringLiteral9692BF3609B3FA99897E14252C1A031B33C30B4C;
IL2CPP_EXTERN_C String_t* _stringLiteral975531AFC28B31E2C3F222277BE27AB31AE7D4B6;
IL2CPP_EXTERN_C String_t* _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A;
IL2CPP_EXTERN_C String_t* _stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34;
IL2CPP_EXTERN_C String_t* _stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580;
IL2CPP_EXTERN_C String_t* _stringLiteralB4175BA66C7FF6F238B86BBCB5E18C2056A2A746;
IL2CPP_EXTERN_C String_t* _stringLiteralB54CF2E2F80C3596917EEAED20B4718D24EF2603;
IL2CPP_EXTERN_C String_t* _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD4790BF76CC94ADC0486FBF64F752246D60263C5;
IL2CPP_EXTERN_C String_t* _stringLiteralD6531E0D94FC153A90B43E184D8F7C53223B3B7D;
IL2CPP_EXTERN_C String_t* _stringLiteralDAE93AA613D9CE34751185FB80DED40E346E9444;
IL2CPP_EXTERN_C String_t* _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
IL2CPP_EXTERN_C String_t* _stringLiteralE115685933AB6FADBFC7D7A380253AE496EE2014;
IL2CPP_EXTERN_C String_t* _stringLiteralE2B8CF328F46C5FE3BCBA0EAD12CCBFAF5CE1356;
IL2CPP_EXTERN_C String_t* _stringLiteralE51BAB8EEF309071E735D738BA793BB2B271FC56;
IL2CPP_EXTERN_C String_t* _stringLiteralFAFE1135E66E66BD15C9C823C63EB9B6F691436F;
IL2CPP_EXTERN_C String_t* _stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076;
IL2CPP_EXTERN_C String_t* _stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD49F210C998553BDD0B2CB38A3089052FC20F675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m935994267561A33407112EFB85A4F13BA9D2FE36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5441A60FEDEEC843A47D88F1C30C9F1E3F6917FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB2610FB2D29BBB67AC83D7778780869CEDE26135_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC3E14D29C667AA45F0B7C9EC1D69CC7A366303BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF4F97169F8E940F596801EF80998DE4C323EA7BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m226CFA5DFA50CE13735EE6513D8A8B7E613DEE45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5462D7A858BD379CFB03F04883D27C04BA82CCED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m83A9CA4DC00347E0F2910B6DADDD67583ED0D539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRegionPingCoroutineU3Ed__19_System_Collections_IEnumerator_Reset_mFCCB66E1232CF6645B1DA455C9D5154948EE2ECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t RoomInfo_Equals_mAD4C9AA88316F973B8C85B4177FAE2B2877F5C7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomInfo_InternalCacheProperties_m34F5708CBCE55FF0A95C39B1871CB8CA77323D4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomInfo_ToStringFull_mA8130A49AE90D0E6F339135E590AF6BF238DA941_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomInfo_ToString_m8B4FBCB74C162EA6ECE798CF7F7A12F187C1568C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomInfo__ctor_m21DB061CAAA51A27997A35539FE9503762535AB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomOptions__ctor_m3757C5E2DFF56EEEC7F0B7A08443DD21DA88FEF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_LogBasics_mFCBF9723E84B9A5E77B99417EB1DD36403A19BB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_LogStats_m27044F5418F6377E206E3BCAE2823A28482FE91D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnApplicationPause_m9F4B4E7C83B3084F6DB3CD9E5AC1B87F816B86DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnConnectedToMaster_m7299BA991B045F872A896E03FAB0C3506D2025FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnConnected_m84F8E9098FB782DCC7618BF8366F14E27722A215_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCreateRoomFailed_mA4C255E899B64DAE0E4B1454A6DF58ACA6BF5AE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCreatedRoom_mFF53519317C4E9B1A60E6061B0093FBD773B65DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCustomAuthenticationFailed_m54D21C3901F6D84C80D558B31ED564F7B6FC46A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCustomAuthenticationResponse_mF799DBCE871603F369CF30359C40DAEFDB556643_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnDisconnected_mC523FAAAF83506E251370ECE71A379C6C352E6C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnErrorInfo_m233D66E34EBDD77343A1EB757284DB58B853DDAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnFriendListUpdate_m351F906619FC2A79BACC9AD59CF7DF831ADF481A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinRandomFailed_m2A52D7C7D70A4AB3AB20E5266F2444F2DC50B6A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinRoomFailed_m18CA0D929AF2DE6612CCD197C06F0FFBDD3F2143_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinedLobby_m1A22E5B0E1E641661CEAF864CC4F4A7EE6B88F0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinedRoom_m9507DE2EFFC4B9FEDE58D06A44ACC2A062BA230A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnLeftLobby_m507D4D4867913D803EF2D03DEF8578CD4D79C50C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnLeftRoom_m890242142B105A919069C56017907EF53BE305A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnLobbyStatisticsUpdate_m94EC3C6A7052B4C2E0337CEA3C69013DF491652B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnMasterClientSwitched_mE4540E17E04127240F1C1E97EB5E2EBB9A351DC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnPlayerEnteredRoom_m6F88CFF775D90BC9C71F679B6979AA26EDF892B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnPlayerLeftRoom_mAC299453BB544A5663DA7AEA8DB90D31BD9DD00F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnPlayerPropertiesUpdate_m7D0F6AFF35F870889E5D6F1A8775D4282A3E199A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnRegionListReceived_m23F342AFB60871B4F34FCD0430A1BC1DB9EEFCB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnRoomListUpdate_mA1A82F024F737C3A6CD00FC42BDB1ECCD333A5AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnRoomPropertiesUpdate_m4E68625D6772DD1252C0B90081E427AB0C6721F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StartLogStats_m31291D23E40BFA0A590676E589161FAD6A7A0F25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StartTrackValues_m9E1B6BAFAFA345B48BD1B78DC6668F47B134BD41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_Start_mA500C841AF1CE588565C2B21BFB4D720B811483F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StopLogStats_m50CF797EB0CFBE8D9E25941C26870969591BCB40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StopTrackValues_m20B3E577DEE42D0BADE001DB1D678B255F12EAD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobbyInfo_ToString_m70F91EE56E7C30855838F634BE734867150508CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobbyInfo__ctor_m109F691269CA136A7BDD12081CE781E7CE20DB01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobby_ToString_m7969239ABC7C2D9BA6E830E2ED9741E32CAE671A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobby__cctor_mD99DB5A8542C7C2454BD81258B8D142C36CA5B11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRegionPingCoroutineU3Ed__19_MoveNext_mA1691C20A41DE791E371B0749AD69F0329027C4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRegionPingCoroutineU3Ed__19_System_Collections_IEnumerator_Reset_mFCCB66E1232CF6645B1DA455C9D5154948EE2ECB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__4_0_mF5727C54CCBCAFA969203B3633E0FC0AA8F3E2CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__4_1_m076E001DCCD8B3A5AB2A1E48E5C9BFB18AA922DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m2415133C1045F3307432FBDDE0AAB4A8E362EDCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mC06481CCCE3BEF4DF37B1346348AB89A9BADD1DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebFlags__cctor_m6582F6663189E7F2817615A3B1C51426C6E0D3EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcCallbacksContainer_OnWebRpcResponse_mA3D1690AD6002E55FFC76D652DB1025C8D580095_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcCallbacksContainer__ctor_m138DDD1BFA950BFD2C9F40409B8CC7EE0EA0E3F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcResponse_ToStringFull_m336F40AFCBE6062048E7BB5EB7A0F35C397AA129_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcResponse__ctor_mB75062020C9467B7E6958D364B03F3E2E7E26607_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// ExitGames.Client.Photon.OperationResponse
struct  OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationResponse::Parameters
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A, ___Parameters_3)); }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * get_Parameters_3() const { return ___Parameters_3; }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_3), (void*)value);
	}
};


// Photon.Realtime.ErrorInfo
struct  ErrorInfo_tCF1CC371330203F98D00E197EE87658A8D0E0B80  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.ErrorInfo::Info
	String_t* ___Info_0;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(ErrorInfo_tCF1CC371330203F98D00E197EE87658A8D0E0B80, ___Info_0)); }
	inline String_t* get_Info_0() const { return ___Info_0; }
	inline String_t** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(String_t* value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}
};


// Photon.Realtime.LoadBalancingClient_CallbackTargetChange
struct  CallbackTargetChange_tA10959BD5B7373AA9F6B40DB22CA100C2264C012  : public RuntimeObject
{
public:
	// System.Object Photon.Realtime.LoadBalancingClient_CallbackTargetChange::Target
	RuntimeObject * ___Target_0;
	// System.Boolean Photon.Realtime.LoadBalancingClient_CallbackTargetChange::AddTarget
	bool ___AddTarget_1;

public:
	inline static int32_t get_offset_of_Target_0() { return static_cast<int32_t>(offsetof(CallbackTargetChange_tA10959BD5B7373AA9F6B40DB22CA100C2264C012, ___Target_0)); }
	inline RuntimeObject * get_Target_0() const { return ___Target_0; }
	inline RuntimeObject ** get_address_of_Target_0() { return &___Target_0; }
	inline void set_Target_0(RuntimeObject * value)
	{
		___Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_AddTarget_1() { return static_cast<int32_t>(offsetof(CallbackTargetChange_tA10959BD5B7373AA9F6B40DB22CA100C2264C012, ___AddTarget_1)); }
	inline bool get_AddTarget_1() const { return ___AddTarget_1; }
	inline bool* get_address_of_AddTarget_1() { return &___AddTarget_1; }
	inline void set_AddTarget_1(bool value)
	{
		___AddTarget_1 = value;
	}
};


// Photon.Realtime.LoadBalancingPeer_<>c
struct  U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_StaticFields
{
public:
	// Photon.Realtime.LoadBalancingPeer_<>c Photon.Realtime.LoadBalancingPeer_<>c::<>9
	U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * ___U3CU3E9_0;
	// System.Func`1<System.Collections.Generic.Dictionary`2<System.Byte,System.Object>> Photon.Realtime.LoadBalancingPeer_<>c::<>9__4_0
	Func_1_t279BE9A3C8DAD3311890DCEBE3095A8F9E7B8091 * ___U3CU3E9__4_0_1;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.Byte,System.Object>> Photon.Realtime.LoadBalancingPeer_<>c::<>9__4_1
	Action_1_t08082A2312861137F4A54C8C0EE83113CCDF0FF4 * ___U3CU3E9__4_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_t279BE9A3C8DAD3311890DCEBE3095A8F9E7B8091 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_t279BE9A3C8DAD3311890DCEBE3095A8F9E7B8091 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_t279BE9A3C8DAD3311890DCEBE3095A8F9E7B8091 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_StaticFields, ___U3CU3E9__4_1_2)); }
	inline Action_1_t08082A2312861137F4A54C8C0EE83113CCDF0FF4 * get_U3CU3E9__4_1_2() const { return ___U3CU3E9__4_1_2; }
	inline Action_1_t08082A2312861137F4A54C8C0EE83113CCDF0FF4 ** get_address_of_U3CU3E9__4_1_2() { return &___U3CU3E9__4_1_2; }
	inline void set_U3CU3E9__4_1_2(Action_1_t08082A2312861137F4A54C8C0EE83113CCDF0FF4 * value)
	{
		___U3CU3E9__4_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_1_2), (void*)value);
	}
};


// Photon.Realtime.PhotonPing
struct  PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.PhotonPing::DebugString
	String_t* ___DebugString_0;
	// System.Boolean Photon.Realtime.PhotonPing::Successful
	bool ___Successful_1;
	// System.Boolean Photon.Realtime.PhotonPing::GotResult
	bool ___GotResult_2;
	// System.Int32 Photon.Realtime.PhotonPing::PingLength
	int32_t ___PingLength_3;
	// System.Byte[] Photon.Realtime.PhotonPing::PingBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PingBytes_4;
	// System.Byte Photon.Realtime.PhotonPing::PingId
	uint8_t ___PingId_5;

public:
	inline static int32_t get_offset_of_DebugString_0() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D, ___DebugString_0)); }
	inline String_t* get_DebugString_0() const { return ___DebugString_0; }
	inline String_t** get_address_of_DebugString_0() { return &___DebugString_0; }
	inline void set_DebugString_0(String_t* value)
	{
		___DebugString_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugString_0), (void*)value);
	}

	inline static int32_t get_offset_of_Successful_1() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D, ___Successful_1)); }
	inline bool get_Successful_1() const { return ___Successful_1; }
	inline bool* get_address_of_Successful_1() { return &___Successful_1; }
	inline void set_Successful_1(bool value)
	{
		___Successful_1 = value;
	}

	inline static int32_t get_offset_of_GotResult_2() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D, ___GotResult_2)); }
	inline bool get_GotResult_2() const { return ___GotResult_2; }
	inline bool* get_address_of_GotResult_2() { return &___GotResult_2; }
	inline void set_GotResult_2(bool value)
	{
		___GotResult_2 = value;
	}

	inline static int32_t get_offset_of_PingLength_3() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D, ___PingLength_3)); }
	inline int32_t get_PingLength_3() const { return ___PingLength_3; }
	inline int32_t* get_address_of_PingLength_3() { return &___PingLength_3; }
	inline void set_PingLength_3(int32_t value)
	{
		___PingLength_3 = value;
	}

	inline static int32_t get_offset_of_PingBytes_4() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D, ___PingBytes_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PingBytes_4() const { return ___PingBytes_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PingBytes_4() { return &___PingBytes_4; }
	inline void set_PingBytes_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PingBytes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingBytes_4), (void*)value);
	}

	inline static int32_t get_offset_of_PingId_5() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D, ___PingId_5)); }
	inline uint8_t get_PingId_5() const { return ___PingId_5; }
	inline uint8_t* get_address_of_PingId_5() { return &___PingId_5; }
	inline void set_PingId_5(uint8_t value)
	{
		___PingId_5 = value;
	}
};

struct PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D_StaticFields
{
public:
	// System.Random Photon.Realtime.PhotonPing::RandomIdProvider
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___RandomIdProvider_6;

public:
	inline static int32_t get_offset_of_RandomIdProvider_6() { return static_cast<int32_t>(offsetof(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D_StaticFields, ___RandomIdProvider_6)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_RandomIdProvider_6() const { return ___RandomIdProvider_6; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_RandomIdProvider_6() { return &___RandomIdProvider_6; }
	inline void set_RandomIdProvider_6(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___RandomIdProvider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomIdProvider_6), (void*)value);
	}
};


// Photon.Realtime.Player
struct  Player_tC6DFC22DFF5978489C4CFA025695FEC556610214  : public RuntimeObject
{
public:
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject * ___TagObject_8;

public:
	inline static int32_t get_offset_of_U3CRoomReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CRoomReferenceU3Ek__BackingField_0)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_U3CRoomReferenceU3Ek__BackingField_0() const { return ___U3CRoomReferenceU3Ek__BackingField_0; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_U3CRoomReferenceU3Ek__BackingField_0() { return &___U3CRoomReferenceU3Ek__BackingField_0; }
	inline void set_U3CRoomReferenceU3Ek__BackingField_0(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___U3CRoomReferenceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomReferenceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_actorNumber_1() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___actorNumber_1)); }
	inline int32_t get_actorNumber_1() const { return ___actorNumber_1; }
	inline int32_t* get_address_of_actorNumber_1() { return &___actorNumber_1; }
	inline void set_actorNumber_1(int32_t value)
	{
		___actorNumber_1 = value;
	}

	inline static int32_t get_offset_of_IsLocal_2() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___IsLocal_2)); }
	inline bool get_IsLocal_2() const { return ___IsLocal_2; }
	inline bool* get_address_of_IsLocal_2() { return &___IsLocal_2; }
	inline void set_IsLocal_2(bool value)
	{
		___IsLocal_2 = value;
	}

	inline static int32_t get_offset_of_U3CHasRejoinedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CHasRejoinedU3Ek__BackingField_3)); }
	inline bool get_U3CHasRejoinedU3Ek__BackingField_3() const { return ___U3CHasRejoinedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHasRejoinedU3Ek__BackingField_3() { return &___U3CHasRejoinedU3Ek__BackingField_3; }
	inline void set_U3CHasRejoinedU3Ek__BackingField_3(bool value)
	{
		___U3CHasRejoinedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_nickName_4() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___nickName_4)); }
	inline String_t* get_nickName_4() const { return ___nickName_4; }
	inline String_t** get_address_of_nickName_4() { return &___nickName_4; }
	inline void set_nickName_4(String_t* value)
	{
		___nickName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nickName_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CUserIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_5() const { return ___U3CUserIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_5() { return &___U3CUserIdU3Ek__BackingField_5; }
	inline void set_U3CUserIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CIsInactiveU3Ek__BackingField_6)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_6() const { return ___U3CIsInactiveU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_6() { return &___U3CIsInactiveU3Ek__BackingField_6; }
	inline void set_U3CIsInactiveU3Ek__BackingField_6(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CCustomPropertiesU3Ek__BackingField_7)); }
	inline Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * get_U3CCustomPropertiesU3Ek__BackingField_7() const { return ___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_7() { return &___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_7(Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomPropertiesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_TagObject_8() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___TagObject_8)); }
	inline RuntimeObject * get_TagObject_8() const { return ___TagObject_8; }
	inline RuntimeObject ** get_address_of_TagObject_8() { return &___TagObject_8; }
	inline void set_TagObject_8(RuntimeObject * value)
	{
		___TagObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TagObject_8), (void*)value);
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


// Photon.Realtime.RegionHandler_<>c
struct  U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_StaticFields
{
public:
	// Photon.Realtime.RegionHandler_<>c Photon.Realtime.RegionHandler_<>c::<>9
	U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * ___U3CU3E9_0;
	// System.Comparison`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler_<>c::<>9__8_0
	Comparison_1_t044A798584CCE9FE210742245D3AF8847522A531 * ___U3CU3E9__8_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Comparison_1_t044A798584CCE9FE210742245D3AF8847522A531 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Comparison_1_t044A798584CCE9FE210742245D3AF8847522A531 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Comparison_1_t044A798584CCE9FE210742245D3AF8847522A531 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}
};


// Photon.Realtime.RegionHandler_<>c__DisplayClass21_0
struct  U3CU3Ec__DisplayClass21_0_t1DEE0918E353BCBBF43AE2524CDEC3C4552ACC38  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.RegionHandler_<>c__DisplayClass21_0::prevBestRegionCode
	String_t* ___prevBestRegionCode_0;

public:
	inline static int32_t get_offset_of_prevBestRegionCode_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t1DEE0918E353BCBBF43AE2524CDEC3C4552ACC38, ___prevBestRegionCode_0)); }
	inline String_t* get_prevBestRegionCode_0() const { return ___prevBestRegionCode_0; }
	inline String_t** get_address_of_prevBestRegionCode_0() { return &___prevBestRegionCode_0; }
	inline void set_prevBestRegionCode_0(String_t* value)
	{
		___prevBestRegionCode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevBestRegionCode_0), (void*)value);
	}
};


// Photon.Realtime.RegionPinger
struct  RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139  : public RuntimeObject
{
public:
	// Photon.Realtime.Region Photon.Realtime.RegionPinger::region
	Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * ___region_4;
	// System.String Photon.Realtime.RegionPinger::regionAddress
	String_t* ___regionAddress_5;
	// System.Int32 Photon.Realtime.RegionPinger::CurrentAttempt
	int32_t ___CurrentAttempt_6;
	// System.Boolean Photon.Realtime.RegionPinger::<Done>k__BackingField
	bool ___U3CDoneU3Ek__BackingField_7;
	// System.Action`1<Photon.Realtime.Region> Photon.Realtime.RegionPinger::onDoneCall
	Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 * ___onDoneCall_8;
	// Photon.Realtime.PhotonPing Photon.Realtime.RegionPinger::ping
	PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * ___ping_9;
	// System.Collections.Generic.List`1<System.Int32> Photon.Realtime.RegionPinger::rttResults
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___rttResults_10;

public:
	inline static int32_t get_offset_of_region_4() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___region_4)); }
	inline Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * get_region_4() const { return ___region_4; }
	inline Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 ** get_address_of_region_4() { return &___region_4; }
	inline void set_region_4(Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * value)
	{
		___region_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___region_4), (void*)value);
	}

	inline static int32_t get_offset_of_regionAddress_5() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___regionAddress_5)); }
	inline String_t* get_regionAddress_5() const { return ___regionAddress_5; }
	inline String_t** get_address_of_regionAddress_5() { return &___regionAddress_5; }
	inline void set_regionAddress_5(String_t* value)
	{
		___regionAddress_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regionAddress_5), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentAttempt_6() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___CurrentAttempt_6)); }
	inline int32_t get_CurrentAttempt_6() const { return ___CurrentAttempt_6; }
	inline int32_t* get_address_of_CurrentAttempt_6() { return &___CurrentAttempt_6; }
	inline void set_CurrentAttempt_6(int32_t value)
	{
		___CurrentAttempt_6 = value;
	}

	inline static int32_t get_offset_of_U3CDoneU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___U3CDoneU3Ek__BackingField_7)); }
	inline bool get_U3CDoneU3Ek__BackingField_7() const { return ___U3CDoneU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CDoneU3Ek__BackingField_7() { return &___U3CDoneU3Ek__BackingField_7; }
	inline void set_U3CDoneU3Ek__BackingField_7(bool value)
	{
		___U3CDoneU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_onDoneCall_8() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___onDoneCall_8)); }
	inline Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 * get_onDoneCall_8() const { return ___onDoneCall_8; }
	inline Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 ** get_address_of_onDoneCall_8() { return &___onDoneCall_8; }
	inline void set_onDoneCall_8(Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 * value)
	{
		___onDoneCall_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDoneCall_8), (void*)value);
	}

	inline static int32_t get_offset_of_ping_9() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___ping_9)); }
	inline PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * get_ping_9() const { return ___ping_9; }
	inline PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D ** get_address_of_ping_9() { return &___ping_9; }
	inline void set_ping_9(PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * value)
	{
		___ping_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ping_9), (void*)value);
	}

	inline static int32_t get_offset_of_rttResults_10() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139, ___rttResults_10)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_rttResults_10() const { return ___rttResults_10; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_rttResults_10() { return &___rttResults_10; }
	inline void set_rttResults_10(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___rttResults_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rttResults_10), (void*)value);
	}
};

struct RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields
{
public:
	// System.Int32 Photon.Realtime.RegionPinger::Attempts
	int32_t ___Attempts_0;
	// System.Boolean Photon.Realtime.RegionPinger::IgnoreInitialAttempt
	bool ___IgnoreInitialAttempt_1;
	// System.Int32 Photon.Realtime.RegionPinger::MaxMilliseconsPerPing
	int32_t ___MaxMilliseconsPerPing_2;
	// System.Int32 Photon.Realtime.RegionPinger::PingWhenFailed
	int32_t ___PingWhenFailed_3;

public:
	inline static int32_t get_offset_of_Attempts_0() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields, ___Attempts_0)); }
	inline int32_t get_Attempts_0() const { return ___Attempts_0; }
	inline int32_t* get_address_of_Attempts_0() { return &___Attempts_0; }
	inline void set_Attempts_0(int32_t value)
	{
		___Attempts_0 = value;
	}

	inline static int32_t get_offset_of_IgnoreInitialAttempt_1() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields, ___IgnoreInitialAttempt_1)); }
	inline bool get_IgnoreInitialAttempt_1() const { return ___IgnoreInitialAttempt_1; }
	inline bool* get_address_of_IgnoreInitialAttempt_1() { return &___IgnoreInitialAttempt_1; }
	inline void set_IgnoreInitialAttempt_1(bool value)
	{
		___IgnoreInitialAttempt_1 = value;
	}

	inline static int32_t get_offset_of_MaxMilliseconsPerPing_2() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields, ___MaxMilliseconsPerPing_2)); }
	inline int32_t get_MaxMilliseconsPerPing_2() const { return ___MaxMilliseconsPerPing_2; }
	inline int32_t* get_address_of_MaxMilliseconsPerPing_2() { return &___MaxMilliseconsPerPing_2; }
	inline void set_MaxMilliseconsPerPing_2(int32_t value)
	{
		___MaxMilliseconsPerPing_2 = value;
	}

	inline static int32_t get_offset_of_PingWhenFailed_3() { return static_cast<int32_t>(offsetof(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields, ___PingWhenFailed_3)); }
	inline int32_t get_PingWhenFailed_3() const { return ___PingWhenFailed_3; }
	inline int32_t* get_address_of_PingWhenFailed_3() { return &___PingWhenFailed_3; }
	inline void set_PingWhenFailed_3(int32_t value)
	{
		___PingWhenFailed_3 = value;
	}
};


// Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19
struct  U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B  : public RuntimeObject
{
public:
	// System.Int32 Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Realtime.RegionPinger Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::<>4__this
	RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * ___U3CU3E4__this_2;
	// System.Single Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::<rttSum>5__1
	float ___U3CrttSumU3E5__1_3;
	// System.Int32 Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::<replyCount>5__2
	int32_t ___U3CreplyCountU3E5__2_4;
	// System.Diagnostics.Stopwatch Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::<sw>5__3
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___U3CswU3E5__3_5;
	// System.Boolean Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::<overtime>5__4
	bool ___U3CovertimeU3E5__4_6;
	// System.Int32 Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::<rtt>5__5
	int32_t ___U3CrttU3E5__5_7;
	// System.Exception Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::<e>5__6
	Exception_t * ___U3CeU3E5__6_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B, ___U3CU3E4__this_2)); }
	inline RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrttSumU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B, ___U3CrttSumU3E5__1_3)); }
	inline float get_U3CrttSumU3E5__1_3() const { return ___U3CrttSumU3E5__1_3; }
	inline float* get_address_of_U3CrttSumU3E5__1_3() { return &___U3CrttSumU3E5__1_3; }
	inline void set_U3CrttSumU3E5__1_3(float value)
	{
		___U3CrttSumU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CreplyCountU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B, ___U3CreplyCountU3E5__2_4)); }
	inline int32_t get_U3CreplyCountU3E5__2_4() const { return ___U3CreplyCountU3E5__2_4; }
	inline int32_t* get_address_of_U3CreplyCountU3E5__2_4() { return &___U3CreplyCountU3E5__2_4; }
	inline void set_U3CreplyCountU3E5__2_4(int32_t value)
	{
		___U3CreplyCountU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CswU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B, ___U3CswU3E5__3_5)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_U3CswU3E5__3_5() const { return ___U3CswU3E5__3_5; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_U3CswU3E5__3_5() { return &___U3CswU3E5__3_5; }
	inline void set_U3CswU3E5__3_5(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___U3CswU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CswU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CovertimeU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B, ___U3CovertimeU3E5__4_6)); }
	inline bool get_U3CovertimeU3E5__4_6() const { return ___U3CovertimeU3E5__4_6; }
	inline bool* get_address_of_U3CovertimeU3E5__4_6() { return &___U3CovertimeU3E5__4_6; }
	inline void set_U3CovertimeU3E5__4_6(bool value)
	{
		___U3CovertimeU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CrttU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B, ___U3CrttU3E5__5_7)); }
	inline int32_t get_U3CrttU3E5__5_7() const { return ___U3CrttU3E5__5_7; }
	inline int32_t* get_address_of_U3CrttU3E5__5_7() { return &___U3CrttU3E5__5_7; }
	inline void set_U3CrttU3E5__5_7(int32_t value)
	{
		___U3CrttU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B, ___U3CeU3E5__6_8)); }
	inline Exception_t * get_U3CeU3E5__6_8() const { return ___U3CeU3E5__6_8; }
	inline Exception_t ** get_address_of_U3CeU3E5__6_8() { return &___U3CeU3E5__6_8; }
	inline void set_U3CeU3E5__6_8(Exception_t * value)
	{
		___U3CeU3E5__6_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__6_8), (void*)value);
	}
};


// Photon.Realtime.RoomInfo
struct  RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_RemovedFromList_0() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___RemovedFromList_0)); }
	inline bool get_RemovedFromList_0() const { return ___RemovedFromList_0; }
	inline bool* get_address_of_RemovedFromList_0() { return &___RemovedFromList_0; }
	inline void set_RemovedFromList_0(bool value)
	{
		___RemovedFromList_0 = value;
	}

	inline static int32_t get_offset_of_customProperties_1() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___customProperties_1)); }
	inline Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * get_customProperties_1() const { return ___customProperties_1; }
	inline Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 ** get_address_of_customProperties_1() { return &___customProperties_1; }
	inline void set_customProperties_1(Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * value)
	{
		___customProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxPlayers_2() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___maxPlayers_2)); }
	inline uint8_t get_maxPlayers_2() const { return ___maxPlayers_2; }
	inline uint8_t* get_address_of_maxPlayers_2() { return &___maxPlayers_2; }
	inline void set_maxPlayers_2(uint8_t value)
	{
		___maxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_emptyRoomTtl_3() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___emptyRoomTtl_3)); }
	inline int32_t get_emptyRoomTtl_3() const { return ___emptyRoomTtl_3; }
	inline int32_t* get_address_of_emptyRoomTtl_3() { return &___emptyRoomTtl_3; }
	inline void set_emptyRoomTtl_3(int32_t value)
	{
		___emptyRoomTtl_3 = value;
	}

	inline static int32_t get_offset_of_playerTtl_4() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___playerTtl_4)); }
	inline int32_t get_playerTtl_4() const { return ___playerTtl_4; }
	inline int32_t* get_address_of_playerTtl_4() { return &___playerTtl_4; }
	inline void set_playerTtl_4(int32_t value)
	{
		___playerTtl_4 = value;
	}

	inline static int32_t get_offset_of_expectedUsers_5() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___expectedUsers_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_expectedUsers_5() const { return ___expectedUsers_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_expectedUsers_5() { return &___expectedUsers_5; }
	inline void set_expectedUsers_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___expectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expectedUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_isOpen_6() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___isOpen_6)); }
	inline bool get_isOpen_6() const { return ___isOpen_6; }
	inline bool* get_address_of_isOpen_6() { return &___isOpen_6; }
	inline void set_isOpen_6(bool value)
	{
		___isOpen_6 = value;
	}

	inline static int32_t get_offset_of_isVisible_7() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___isVisible_7)); }
	inline bool get_isVisible_7() const { return ___isVisible_7; }
	inline bool* get_address_of_isVisible_7() { return &___isVisible_7; }
	inline void set_isVisible_7(bool value)
	{
		___isVisible_7 = value;
	}

	inline static int32_t get_offset_of_autoCleanUp_8() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___autoCleanUp_8)); }
	inline bool get_autoCleanUp_8() const { return ___autoCleanUp_8; }
	inline bool* get_address_of_autoCleanUp_8() { return &___autoCleanUp_8; }
	inline void set_autoCleanUp_8(bool value)
	{
		___autoCleanUp_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_masterClientId_10() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___masterClientId_10)); }
	inline int32_t get_masterClientId_10() const { return ___masterClientId_10; }
	inline int32_t* get_address_of_masterClientId_10() { return &___masterClientId_10; }
	inline void set_masterClientId_10(int32_t value)
	{
		___masterClientId_10 = value;
	}

	inline static int32_t get_offset_of_propertiesListedInLobby_11() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___propertiesListedInLobby_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_propertiesListedInLobby_11() const { return ___propertiesListedInLobby_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_propertiesListedInLobby_11() { return &___propertiesListedInLobby_11; }
	inline void set_propertiesListedInLobby_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___propertiesListedInLobby_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertiesListedInLobby_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___U3CPlayerCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_12() const { return ___U3CPlayerCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_12() { return &___U3CPlayerCountU3Ek__BackingField_12; }
	inline void set_U3CPlayerCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_12 = value;
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
	Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_12;

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
	inline Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * get_CustomRoomProperties_6() const { return ___CustomRoomProperties_6; }
	inline Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 ** get_address_of_CustomRoomProperties_6() { return &___CustomRoomProperties_6; }
	inline void set_CustomRoomProperties_6(Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * value)
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

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CPublishUserIdU3Ek__BackingField_10)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_10() const { return ___U3CPublishUserIdU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_10() { return &___U3CPublishUserIdU3Ek__BackingField_10; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_10(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CDeleteNullPropertiesU3Ek__BackingField_11)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_11() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_11() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_11; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_11(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_broadcastPropsChangeToAll_12() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___broadcastPropsChangeToAll_12)); }
	inline bool get_broadcastPropsChangeToAll_12() const { return ___broadcastPropsChangeToAll_12; }
	inline bool* get_address_of_broadcastPropsChangeToAll_12() { return &___broadcastPropsChangeToAll_12; }
	inline void set_broadcastPropsChangeToAll_12(bool value)
	{
		___broadcastPropsChangeToAll_12 = value;
	}
};


// Photon.Realtime.WebFlags
struct  WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F  : public RuntimeObject
{
public:
	// System.Byte Photon.Realtime.WebFlags::WebhookFlags
	uint8_t ___WebhookFlags_1;

public:
	inline static int32_t get_offset_of_WebhookFlags_1() { return static_cast<int32_t>(offsetof(WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F, ___WebhookFlags_1)); }
	inline uint8_t get_WebhookFlags_1() const { return ___WebhookFlags_1; }
	inline uint8_t* get_address_of_WebhookFlags_1() { return &___WebhookFlags_1; }
	inline void set_WebhookFlags_1(uint8_t value)
	{
		___WebhookFlags_1 = value;
	}
};

struct WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_StaticFields
{
public:
	// Photon.Realtime.WebFlags Photon.Realtime.WebFlags::Default
	WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_StaticFields, ___Default_0)); }
	inline WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * get_Default_0() const { return ___Default_0; }
	inline WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// Photon.Realtime.WebRpcResponse
struct  WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.WebRpcResponse::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.WebRpcResponse::<ResultCode>k__BackingField
	int32_t ___U3CResultCodeU3Ek__BackingField_1;
	// System.String Photon.Realtime.WebRpcResponse::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::<Parameters>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CParametersU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2, ___U3CResultCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CResultCodeU3Ek__BackingField_1() const { return ___U3CResultCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CResultCodeU3Ek__BackingField_1() { return &___U3CResultCodeU3Ek__BackingField_1; }
	inline void set_U3CResultCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CResultCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2, ___U3CParametersU3Ek__BackingField_3)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CParametersU3Ek__BackingField_3() const { return ___U3CParametersU3Ek__BackingField_3; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CParametersU3Ek__BackingField_3() { return &___U3CParametersU3Ek__BackingField_3; }
	inline void set_U3CParametersU3Ek__BackingField_3(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CParametersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParametersU3Ek__BackingField_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct  Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* ___entries_1;
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
	KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___entries_1)); }
	inline EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___keys_7)); }
	inline KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___values_8)); }
	inline ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* ___entries_1;
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
	KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___entries_1)); }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___keys_7)); }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___values_8)); }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


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


// System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>
struct  List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34, ____items_1)); }
	inline IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9* get__items_1() const { return ____items_1; }
	inline IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34_StaticFields, ____emptyArray_5)); }
	inline IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IWebRpcCallbackU5BU5D_tE324A8C247054CB577FC03E39F8BA7A51F69BEA9* value)
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


// System.Diagnostics.Stopwatch
struct  Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D13
struct  __StaticArrayInitTypeSizeU3D13_tA9848F816D9E2A753B1091F23CD30644AD588555 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D13_tA9848F816D9E2A753B1091F23CD30644AD588555__padding[13];
	};

public:
};


// ExitGames.Client.Photon.Hashtable
struct  Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3  : public Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D
{
public:

public:
};


// Photon.Realtime.Room
struct  Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D  : public RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CLoadBalancingClientU3Ek__BackingField_13)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_U3CLoadBalancingClientU3Ek__BackingField_13() const { return ___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return &___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline void set_U3CLoadBalancingClientU3Ek__BackingField_13(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___U3CLoadBalancingClientU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingClientU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_isOffline_14() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___isOffline_14)); }
	inline bool get_isOffline_14() const { return ___isOffline_14; }
	inline bool* get_address_of_isOffline_14() { return &___isOffline_14; }
	inline void set_isOffline_14(bool value)
	{
		___isOffline_14 = value;
	}

	inline static int32_t get_offset_of_players_15() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___players_15)); }
	inline Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * get_players_15() const { return ___players_15; }
	inline Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B ** get_address_of_players_15() { return &___players_15; }
	inline void set_players_15(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * value)
	{
		___players_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16)); }
	inline bool get_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() const { return ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return &___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline void set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(bool value)
	{
		___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CSuppressRoomEventsU3Ek__BackingField_17)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_17() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_17() { return &___U3CSuppressRoomEventsU3Ek__BackingField_17; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_17(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_17 = value;
	}
};


// Photon.Realtime.WebRpcCallbacksContainer
struct  WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96  : public List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.WebRpcCallbacksContainer::client
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___client_6;

public:
	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96, ___client_6)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
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


// System.Collections.Generic.List`1_Enumerator<Photon.Realtime.IWebRpcCallback>
struct  Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2, ___list_0)); }
	inline List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 * get_list_0() const { return ___list_0; }
	inline List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_tC4833DEF398317757B2237B4F8F95A40459EC587 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tC4833DEF398317757B2237B4F8F95A40459EC587, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t65F86913DC65B55C7F3B39590A84E414E2B064BF 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_t65F86913DC65B55C7F3B39590A84E414E2B064BF, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_t07470A9F87FBC54701F236CA9F0F0C2B823AD8FD 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_t07470A9F87FBC54701F236CA9F0F0C2B823AD8FD, ___value___2)); }
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


// Photon.Realtime.CustomAuthenticationType
struct  CustomAuthenticationType_tD0F6E6C7B5CFDC781EAB5E9CDC44F285B1499BEB 
{
public:
	// System.Byte Photon.Realtime.CustomAuthenticationType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomAuthenticationType_tD0F6E6C7B5CFDC781EAB5E9CDC44F285B1499BEB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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


// Photon.Realtime.RoomOptionBit
struct  RoomOptionBit_t4B91659A383133AF2F839CC3A78CABAC7E0B9489 
{
public:
	// System.Int32 Photon.Realtime.RoomOptionBit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomOptionBit_t4B91659A383133AF2F839CC3A78CABAC7E0B9489, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
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

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_8;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_9;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_14;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t32CE63FA54BF126A18FDF69E778B381FF5EA4A15 * ___SocketImplementationConfig_15;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_16;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_17;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_18;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_19;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_20;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_21;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_22;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_24;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_25;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_27;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_28;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_29;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_30;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_31;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_32;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_33;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_34;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_37;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_38;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_40;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___RandomizedSequenceNumbers_41;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_42;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * ___U3CTrafficStatsIncomingU3Ek__BackingField_43;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_44;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_45;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___trafficStatsStopwatch_46;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_47;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * ___peerBase_48;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_49;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_50;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_51;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PayloadEncryptionSecret_52;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t * ___encryptorType_53;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_54;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_55;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_56;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_8() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___ClientSdkId_8)); }
	inline uint8_t get_ClientSdkId_8() const { return ___ClientSdkId_8; }
	inline uint8_t* get_address_of_ClientSdkId_8() { return &___ClientSdkId_8; }
	inline void set_ClientSdkId_8(uint8_t value)
	{
		___ClientSdkId_8 = value;
	}

	inline static int32_t get_offset_of_clientVersion_9() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___clientVersion_9)); }
	inline String_t* get_clientVersion_9() const { return ___clientVersion_9; }
	inline String_t** get_address_of_clientVersion_9() { return &___clientVersion_9; }
	inline void set_clientVersion_9(String_t* value)
	{
		___clientVersion_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CSerializationProtocolTypeU3Ek__BackingField_14)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_14() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_14() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_14; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_14(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_15() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___SocketImplementationConfig_15)); }
	inline Dictionary_2_t32CE63FA54BF126A18FDF69E778B381FF5EA4A15 * get_SocketImplementationConfig_15() const { return ___SocketImplementationConfig_15; }
	inline Dictionary_2_t32CE63FA54BF126A18FDF69E778B381FF5EA4A15 ** get_address_of_SocketImplementationConfig_15() { return &___SocketImplementationConfig_15; }
	inline void set_SocketImplementationConfig_15(Dictionary_2_t32CE63FA54BF126A18FDF69E778B381FF5EA4A15 * value)
	{
		___SocketImplementationConfig_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SocketImplementationConfig_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CSocketImplementationU3Ek__BackingField_16)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_16() const { return ___U3CSocketImplementationU3Ek__BackingField_16; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_16() { return &___U3CSocketImplementationU3Ek__BackingField_16; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_16(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketImplementationU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_DebugOut_17() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___DebugOut_17)); }
	inline uint8_t get_DebugOut_17() const { return ___DebugOut_17; }
	inline uint8_t* get_address_of_DebugOut_17() { return &___DebugOut_17; }
	inline void set_DebugOut_17(uint8_t value)
	{
		___DebugOut_17 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CListenerU3Ek__BackingField_18)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_18() const { return ___U3CListenerU3Ek__BackingField_18; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_18() { return &___U3CListenerU3Ek__BackingField_18; }
	inline void set_U3CListenerU3Ek__BackingField_18(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenerU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_19() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___reuseEventInstance_19)); }
	inline bool get_reuseEventInstance_19() const { return ___reuseEventInstance_19; }
	inline bool* get_address_of_reuseEventInstance_19() { return &___reuseEventInstance_19; }
	inline void set_reuseEventInstance_19(bool value)
	{
		___reuseEventInstance_19 = value;
	}

	inline static int32_t get_offset_of_useByteArraySlicePoolForEvents_20() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___useByteArraySlicePoolForEvents_20)); }
	inline bool get_useByteArraySlicePoolForEvents_20() const { return ___useByteArraySlicePoolForEvents_20; }
	inline bool* get_address_of_useByteArraySlicePoolForEvents_20() { return &___useByteArraySlicePoolForEvents_20; }
	inline void set_useByteArraySlicePoolForEvents_20(bool value)
	{
		___useByteArraySlicePoolForEvents_20 = value;
	}

	inline static int32_t get_offset_of_SendInCreationOrder_21() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___SendInCreationOrder_21)); }
	inline bool get_SendInCreationOrder_21() const { return ___SendInCreationOrder_21; }
	inline bool* get_address_of_SendInCreationOrder_21() { return &___SendInCreationOrder_21; }
	inline void set_SendInCreationOrder_21(bool value)
	{
		___SendInCreationOrder_21 = value;
	}

	inline static int32_t get_offset_of_CommandLogSize_22() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___CommandLogSize_22)); }
	inline int32_t get_CommandLogSize_22() const { return ___CommandLogSize_22; }
	inline int32_t* get_address_of_CommandLogSize_22() { return &___CommandLogSize_22; }
	inline void set_CommandLogSize_22(int32_t value)
	{
		___CommandLogSize_22 = value;
	}

	inline static int32_t get_offset_of_TrafficRecorder_23() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___TrafficRecorder_23)); }
	inline RuntimeObject* get_TrafficRecorder_23() const { return ___TrafficRecorder_23; }
	inline RuntimeObject** get_address_of_TrafficRecorder_23() { return &___TrafficRecorder_23; }
	inline void set_TrafficRecorder_23(RuntimeObject* value)
	{
		___TrafficRecorder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrafficRecorder_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CEnableServerTracingU3Ek__BackingField_24)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_24() const { return ___U3CEnableServerTracingU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_24() { return &___U3CEnableServerTracingU3Ek__BackingField_24; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_24(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_25() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___quickResendAttempts_25)); }
	inline uint8_t get_quickResendAttempts_25() const { return ___quickResendAttempts_25; }
	inline uint8_t* get_address_of_quickResendAttempts_25() { return &___quickResendAttempts_25; }
	inline void set_quickResendAttempts_25(uint8_t value)
	{
		___quickResendAttempts_25 = value;
	}

	inline static int32_t get_offset_of_RhttpMinConnections_26() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___RhttpMinConnections_26)); }
	inline int32_t get_RhttpMinConnections_26() const { return ___RhttpMinConnections_26; }
	inline int32_t* get_address_of_RhttpMinConnections_26() { return &___RhttpMinConnections_26; }
	inline void set_RhttpMinConnections_26(int32_t value)
	{
		___RhttpMinConnections_26 = value;
	}

	inline static int32_t get_offset_of_RhttpMaxConnections_27() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___RhttpMaxConnections_27)); }
	inline int32_t get_RhttpMaxConnections_27() const { return ___RhttpMaxConnections_27; }
	inline int32_t* get_address_of_RhttpMaxConnections_27() { return &___RhttpMaxConnections_27; }
	inline void set_RhttpMaxConnections_27(int32_t value)
	{
		___RhttpMaxConnections_27 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_28() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___ChannelCount_28)); }
	inline uint8_t get_ChannelCount_28() const { return ___ChannelCount_28; }
	inline uint8_t* get_address_of_ChannelCount_28() { return &___ChannelCount_28; }
	inline void set_ChannelCount_28(uint8_t value)
	{
		___ChannelCount_28 = value;
	}

	inline static int32_t get_offset_of_EnableEncryptedFlag_29() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___EnableEncryptedFlag_29)); }
	inline bool get_EnableEncryptedFlag_29() const { return ___EnableEncryptedFlag_29; }
	inline bool* get_address_of_EnableEncryptedFlag_29() { return &___EnableEncryptedFlag_29; }
	inline void set_EnableEncryptedFlag_29(bool value)
	{
		___EnableEncryptedFlag_29 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_30() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___crcEnabled_30)); }
	inline bool get_crcEnabled_30() const { return ___crcEnabled_30; }
	inline bool* get_address_of_crcEnabled_30() { return &___crcEnabled_30; }
	inline void set_crcEnabled_30(bool value)
	{
		___crcEnabled_30 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_31() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___SentCountAllowance_31)); }
	inline int32_t get_SentCountAllowance_31() const { return ___SentCountAllowance_31; }
	inline int32_t* get_address_of_SentCountAllowance_31() { return &___SentCountAllowance_31; }
	inline void set_SentCountAllowance_31(int32_t value)
	{
		___SentCountAllowance_31 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_32() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___InitialResendTimeMax_32)); }
	inline int32_t get_InitialResendTimeMax_32() const { return ___InitialResendTimeMax_32; }
	inline int32_t* get_address_of_InitialResendTimeMax_32() { return &___InitialResendTimeMax_32; }
	inline void set_InitialResendTimeMax_32(int32_t value)
	{
		___InitialResendTimeMax_32 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_33() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___TimePingInterval_33)); }
	inline int32_t get_TimePingInterval_33() const { return ___TimePingInterval_33; }
	inline int32_t* get_address_of_TimePingInterval_33() { return &___TimePingInterval_33; }
	inline void set_TimePingInterval_33(int32_t value)
	{
		___TimePingInterval_33 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_34() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___DisconnectTimeout_34)); }
	inline int32_t get_DisconnectTimeout_34() const { return ___DisconnectTimeout_34; }
	inline int32_t* get_address_of_DisconnectTimeout_34() { return &___DisconnectTimeout_34; }
	inline void set_DisconnectTimeout_34(int32_t value)
	{
		___DisconnectTimeout_34 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CTransportProtocolU3Ek__BackingField_35)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_35() const { return ___U3CTransportProtocolU3Ek__BackingField_35; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_35() { return &___U3CTransportProtocolU3Ek__BackingField_35; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_35(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_mtu_37() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___mtu_37)); }
	inline int32_t get_mtu_37() const { return ___mtu_37; }
	inline int32_t* get_address_of_mtu_37() { return &___mtu_37; }
	inline void set_mtu_37(int32_t value)
	{
		___mtu_37 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CIsSendingOnlyAcksU3Ek__BackingField_38)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_38() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_38; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_38() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_38; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_38(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_40() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___RandomizeSequenceNumbers_40)); }
	inline bool get_RandomizeSequenceNumbers_40() const { return ___RandomizeSequenceNumbers_40; }
	inline bool* get_address_of_RandomizeSequenceNumbers_40() { return &___RandomizeSequenceNumbers_40; }
	inline void set_RandomizeSequenceNumbers_40(bool value)
	{
		___RandomizeSequenceNumbers_40 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_41() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___RandomizedSequenceNumbers_41)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_RandomizedSequenceNumbers_41() const { return ___RandomizedSequenceNumbers_41; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_RandomizedSequenceNumbers_41() { return &___RandomizedSequenceNumbers_41; }
	inline void set_RandomizedSequenceNumbers_41(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___RandomizedSequenceNumbers_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomizedSequenceNumbers_41), (void*)value);
	}

	inline static int32_t get_offset_of_GcmDatagramEncryption_42() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___GcmDatagramEncryption_42)); }
	inline bool get_GcmDatagramEncryption_42() const { return ___GcmDatagramEncryption_42; }
	inline bool* get_address_of_GcmDatagramEncryption_42() { return &___GcmDatagramEncryption_42; }
	inline void set_GcmDatagramEncryption_42(bool value)
	{
		___GcmDatagramEncryption_42 = value;
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CTrafficStatsIncomingU3Ek__BackingField_43)); }
	inline TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * get_U3CTrafficStatsIncomingU3Ek__BackingField_43() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_43; }
	inline TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_43() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_43; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_43(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsIncomingU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CTrafficStatsOutgoingU3Ek__BackingField_44)); }
	inline TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_44() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_44; }
	inline TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_44() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_44; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_44(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsOutgoingU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CTrafficStatsGameLevelU3Ek__BackingField_45)); }
	inline TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_45() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_45; }
	inline TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_45() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_45; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_45(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsGameLevelU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_46() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___trafficStatsStopwatch_46)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_trafficStatsStopwatch_46() const { return ___trafficStatsStopwatch_46; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_trafficStatsStopwatch_46() { return &___trafficStatsStopwatch_46; }
	inline void set_trafficStatsStopwatch_46(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___trafficStatsStopwatch_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficStatsStopwatch_46), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_47() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___trafficStatsEnabled_47)); }
	inline bool get_trafficStatsEnabled_47() const { return ___trafficStatsEnabled_47; }
	inline bool* get_address_of_trafficStatsEnabled_47() { return &___trafficStatsEnabled_47; }
	inline void set_trafficStatsEnabled_47(bool value)
	{
		___trafficStatsEnabled_47 = value;
	}

	inline static int32_t get_offset_of_peerBase_48() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___peerBase_48)); }
	inline PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * get_peerBase_48() const { return ___peerBase_48; }
	inline PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 ** get_address_of_peerBase_48() { return &___peerBase_48; }
	inline void set_peerBase_48(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * value)
	{
		___peerBase_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_48), (void*)value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_49() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___SendOutgoingLockObject_49)); }
	inline RuntimeObject * get_SendOutgoingLockObject_49() const { return ___SendOutgoingLockObject_49; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_49() { return &___SendOutgoingLockObject_49; }
	inline void set_SendOutgoingLockObject_49(RuntimeObject * value)
	{
		___SendOutgoingLockObject_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendOutgoingLockObject_49), (void*)value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_50() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___DispatchLockObject_50)); }
	inline RuntimeObject * get_DispatchLockObject_50() const { return ___DispatchLockObject_50; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_50() { return &___DispatchLockObject_50; }
	inline void set_DispatchLockObject_50(RuntimeObject * value)
	{
		___DispatchLockObject_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DispatchLockObject_50), (void*)value);
	}

	inline static int32_t get_offset_of_EnqueueLock_51() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___EnqueueLock_51)); }
	inline RuntimeObject * get_EnqueueLock_51() const { return ___EnqueueLock_51; }
	inline RuntimeObject ** get_address_of_EnqueueLock_51() { return &___EnqueueLock_51; }
	inline void set_EnqueueLock_51(RuntimeObject * value)
	{
		___EnqueueLock_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnqueueLock_51), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_52() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___PayloadEncryptionSecret_52)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PayloadEncryptionSecret_52() const { return ___PayloadEncryptionSecret_52; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PayloadEncryptionSecret_52() { return &___PayloadEncryptionSecret_52; }
	inline void set_PayloadEncryptionSecret_52(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PayloadEncryptionSecret_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PayloadEncryptionSecret_52), (void*)value);
	}

	inline static int32_t get_offset_of_encryptorType_53() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___encryptorType_53)); }
	inline Type_t * get_encryptorType_53() const { return ___encryptorType_53; }
	inline Type_t ** get_address_of_encryptorType_53() { return &___encryptorType_53; }
	inline void set_encryptorType_53(Type_t * value)
	{
		___encryptorType_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encryptorType_53), (void*)value);
	}

	inline static int32_t get_offset_of_Encryptor_54() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___Encryptor_54)); }
	inline RuntimeObject* get_Encryptor_54() const { return ___Encryptor_54; }
	inline RuntimeObject** get_address_of_Encryptor_54() { return &___Encryptor_54; }
	inline void set_Encryptor_54(RuntimeObject* value)
	{
		___Encryptor_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encryptor_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountDiscardedU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CCountDiscardedU3Ek__BackingField_55)); }
	inline int32_t get_U3CCountDiscardedU3Ek__BackingField_55() const { return ___U3CCountDiscardedU3Ek__BackingField_55; }
	inline int32_t* get_address_of_U3CCountDiscardedU3Ek__BackingField_55() { return &___U3CCountDiscardedU3Ek__BackingField_55; }
	inline void set_U3CCountDiscardedU3Ek__BackingField_55(int32_t value)
	{
		___U3CCountDiscardedU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaUnreliableNumberU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E, ___U3CDeltaUnreliableNumberU3Ek__BackingField_56)); }
	inline int32_t get_U3CDeltaUnreliableNumberU3Ek__BackingField_56() const { return ___U3CDeltaUnreliableNumberU3Ek__BackingField_56; }
	inline int32_t* get_address_of_U3CDeltaUnreliableNumberU3Ek__BackingField_56() { return &___U3CDeltaUnreliableNumberU3Ek__BackingField_56; }
	inline void set_U3CDeltaUnreliableNumberU3Ek__BackingField_56(int32_t value)
	{
		___U3CDeltaUnreliableNumberU3Ek__BackingField_56 = value;
	}
};

struct PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_7;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::checkedNativeLibs
	bool ___checkedNativeLibs_10;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useSocketNative
	bool ___useSocketNative_11;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useDiffieHellmanCryptoProvider
	bool ___useDiffieHellmanCryptoProvider_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useEncryptorNative
	bool ___useEncryptorNative_13;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_36;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_39;

public:
	inline static int32_t get_offset_of_NoNativeCallbacks_7() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E_StaticFields, ___NoNativeCallbacks_7)); }
	inline bool get_NoNativeCallbacks_7() const { return ___NoNativeCallbacks_7; }
	inline bool* get_address_of_NoNativeCallbacks_7() { return &___NoNativeCallbacks_7; }
	inline void set_NoNativeCallbacks_7(bool value)
	{
		___NoNativeCallbacks_7 = value;
	}

	inline static int32_t get_offset_of_checkedNativeLibs_10() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E_StaticFields, ___checkedNativeLibs_10)); }
	inline bool get_checkedNativeLibs_10() const { return ___checkedNativeLibs_10; }
	inline bool* get_address_of_checkedNativeLibs_10() { return &___checkedNativeLibs_10; }
	inline void set_checkedNativeLibs_10(bool value)
	{
		___checkedNativeLibs_10 = value;
	}

	inline static int32_t get_offset_of_useSocketNative_11() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E_StaticFields, ___useSocketNative_11)); }
	inline bool get_useSocketNative_11() const { return ___useSocketNative_11; }
	inline bool* get_address_of_useSocketNative_11() { return &___useSocketNative_11; }
	inline void set_useSocketNative_11(bool value)
	{
		___useSocketNative_11 = value;
	}

	inline static int32_t get_offset_of_useDiffieHellmanCryptoProvider_12() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E_StaticFields, ___useDiffieHellmanCryptoProvider_12)); }
	inline bool get_useDiffieHellmanCryptoProvider_12() const { return ___useDiffieHellmanCryptoProvider_12; }
	inline bool* get_address_of_useDiffieHellmanCryptoProvider_12() { return &___useDiffieHellmanCryptoProvider_12; }
	inline void set_useDiffieHellmanCryptoProvider_12(bool value)
	{
		___useDiffieHellmanCryptoProvider_12 = value;
	}

	inline static int32_t get_offset_of_useEncryptorNative_13() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E_StaticFields, ___useEncryptorNative_13)); }
	inline bool get_useEncryptorNative_13() const { return ___useEncryptorNative_13; }
	inline bool* get_address_of_useEncryptorNative_13() { return &___useEncryptorNative_13; }
	inline void set_useEncryptorNative_13(bool value)
	{
		___useEncryptorNative_13 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_36() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E_StaticFields, ___OutgoingStreamBufferSize_36)); }
	inline int32_t get_OutgoingStreamBufferSize_36() const { return ___OutgoingStreamBufferSize_36; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_36() { return &___OutgoingStreamBufferSize_36; }
	inline void set_OutgoingStreamBufferSize_36(int32_t value)
	{
		___OutgoingStreamBufferSize_36 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_39() { return static_cast<int32_t>(offsetof(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E_StaticFields, ___AsyncKeyExchange_39)); }
	inline bool get_AsyncKeyExchange_39() const { return ___AsyncKeyExchange_39; }
	inline bool* get_address_of_AsyncKeyExchange_39() { return &___AsyncKeyExchange_39; }
	inline void set_AsyncKeyExchange_39(bool value)
	{
		___AsyncKeyExchange_39 = value;
	}
};


// Photon.Realtime.AuthenticationValues
struct  AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A  : public RuntimeObject
{
public:
	// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Realtime.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Realtime.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject * ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.String Photon.Realtime.AuthenticationValues::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Realtime.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_authType_0() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___authType_0)); }
	inline uint8_t get_authType_0() const { return ___authType_0; }
	inline uint8_t* get_address_of_authType_0() { return &___authType_0; }
	inline void set_authType_0(uint8_t value)
	{
		___authType_0 = value;
	}

	inline static int32_t get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___U3CAuthGetParametersU3Ek__BackingField_1)); }
	inline String_t* get_U3CAuthGetParametersU3Ek__BackingField_1() const { return ___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAuthGetParametersU3Ek__BackingField_1() { return &___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline void set_U3CAuthGetParametersU3Ek__BackingField_1(String_t* value)
	{
		___U3CAuthGetParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthGetParametersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthPostDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___U3CAuthPostDataU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CAuthPostDataU3Ek__BackingField_2() const { return ___U3CAuthPostDataU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CAuthPostDataU3Ek__BackingField_2() { return &___U3CAuthPostDataU3Ek__BackingField_2; }
	inline void set_U3CAuthPostDataU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CAuthPostDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthPostDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___U3CTokenU3Ek__BackingField_3)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_3() const { return ___U3CTokenU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_3() { return &___U3CTokenU3Ek__BackingField_3; }
	inline void set_U3CTokenU3Ek__BackingField_3(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
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
struct  Nullable_1_t9C68311B9A64A25EA938711D5440EA623255AC97 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9C68311B9A64A25EA938711D5440EA623255AC97, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9C68311B9A64A25EA938711D5440EA623255AC97, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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
	Nullable_1_t9C68311B9A64A25EA938711D5440EA623255AC97  ___U3CExpectedProtocolU3Ek__BackingField_6;
	// System.String Photon.Realtime.LoadBalancingClient::tokenCache
	String_t* ___tokenCache_7;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_8;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHttp
	String_t* ___NameServerHttp_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
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
	Action_1_tE4DDE99328D4CC9466EC7FA11CF58306E38D12D5 * ___EventReceived_20;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t1268EA16A3E5EE89B08D178E64198AE4B75125B0 * ___OpResponseReceived_21;
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
	OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * ___failedRoomEntryOperation_39;
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
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortOverride
	int32_t ___NameServerPortOverride_50;

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
	inline Nullable_1_t9C68311B9A64A25EA938711D5440EA623255AC97  get_U3CExpectedProtocolU3Ek__BackingField_6() const { return ___U3CExpectedProtocolU3Ek__BackingField_6; }
	inline Nullable_1_t9C68311B9A64A25EA938711D5440EA623255AC97 * get_address_of_U3CExpectedProtocolU3Ek__BackingField_6() { return &___U3CExpectedProtocolU3Ek__BackingField_6; }
	inline void set_U3CExpectedProtocolU3Ek__BackingField_6(Nullable_1_t9C68311B9A64A25EA938711D5440EA623255AC97  value)
	{
		___U3CExpectedProtocolU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_tokenCache_7() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___tokenCache_7)); }
	inline String_t* get_tokenCache_7() const { return ___tokenCache_7; }
	inline String_t** get_address_of_tokenCache_7() { return &___tokenCache_7; }
	inline void set_tokenCache_7(String_t* value)
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

	inline static int32_t get_offset_of_NameServerHttp_10() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___NameServerHttp_10)); }
	inline String_t* get_NameServerHttp_10() const { return ___NameServerHttp_10; }
	inline String_t** get_address_of_NameServerHttp_10() { return &___NameServerHttp_10; }
	inline void set_NameServerHttp_10(String_t* value)
	{
		___NameServerHttp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHttp_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_12(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_12 = value;
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
	inline Action_1_tE4DDE99328D4CC9466EC7FA11CF58306E38D12D5 * get_EventReceived_20() const { return ___EventReceived_20; }
	inline Action_1_tE4DDE99328D4CC9466EC7FA11CF58306E38D12D5 ** get_address_of_EventReceived_20() { return &___EventReceived_20; }
	inline void set_EventReceived_20(Action_1_tE4DDE99328D4CC9466EC7FA11CF58306E38D12D5 * value)
	{
		___EventReceived_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventReceived_20), (void*)value);
	}

	inline static int32_t get_offset_of_OpResponseReceived_21() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___OpResponseReceived_21)); }
	inline Action_1_t1268EA16A3E5EE89B08D178E64198AE4B75125B0 * get_OpResponseReceived_21() const { return ___OpResponseReceived_21; }
	inline Action_1_t1268EA16A3E5EE89B08D178E64198AE4B75125B0 ** get_address_of_OpResponseReceived_21() { return &___OpResponseReceived_21; }
	inline void set_OpResponseReceived_21(Action_1_t1268EA16A3E5EE89B08D178E64198AE4B75125B0 * value)
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
	inline OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * get_failedRoomEntryOperation_39() const { return ___failedRoomEntryOperation_39; }
	inline OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A ** get_address_of_failedRoomEntryOperation_39() { return &___failedRoomEntryOperation_39; }
	inline void set_failedRoomEntryOperation_39(OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * value)
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

	inline static int32_t get_offset_of_NameServerPortOverride_50() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___NameServerPortOverride_50)); }
	inline int32_t get_NameServerPortOverride_50() const { return ___NameServerPortOverride_50; }
	inline int32_t* get_address_of_NameServerPortOverride_50() { return &___NameServerPortOverride_50; }
	inline void set_NameServerPortOverride_50(int32_t value)
	{
		___NameServerPortOverride_50 = value;
	}
};

struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tBEAE6023D429A1E53D734E0261C9561E4C77F8A2 * ___ProtocolToNameServerPort_11;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_11() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A_StaticFields, ___ProtocolToNameServerPort_11)); }
	inline Dictionary_2_tBEAE6023D429A1E53D734E0261C9561E4C77F8A2 * get_ProtocolToNameServerPort_11() const { return ___ProtocolToNameServerPort_11; }
	inline Dictionary_2_tBEAE6023D429A1E53D734E0261C9561E4C77F8A2 ** get_address_of_ProtocolToNameServerPort_11() { return &___ProtocolToNameServerPort_11; }
	inline void set_ProtocolToNameServerPort_11(Dictionary_2_tBEAE6023D429A1E53D734E0261C9561E4C77F8A2 * value)
	{
		___ProtocolToNameServerPort_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_11), (void*)value);
	}
};


// Photon.Realtime.LoadBalancingPeer
struct  LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4  : public PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E
{
public:
	// ExitGames.Client.Photon.Pool`1<System.Collections.Generic.Dictionary`2<System.Byte,System.Object>> Photon.Realtime.LoadBalancingPeer::paramDictionaryPool
	Pool_1_t1496E69543DAC131699AB77455F1BC642D186971 * ___paramDictionaryPool_57;

public:
	inline static int32_t get_offset_of_paramDictionaryPool_57() { return static_cast<int32_t>(offsetof(LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4, ___paramDictionaryPool_57)); }
	inline Pool_1_t1496E69543DAC131699AB77455F1BC642D186971 * get_paramDictionaryPool_57() const { return ___paramDictionaryPool_57; }
	inline Pool_1_t1496E69543DAC131699AB77455F1BC642D186971 ** get_address_of_paramDictionaryPool_57() { return &___paramDictionaryPool_57; }
	inline void set_paramDictionaryPool_57(Pool_1_t1496E69543DAC131699AB77455F1BC642D186971 * value)
	{
		___paramDictionaryPool_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDictionaryPool_57), (void*)value);
	}
};


// Photon.Realtime.TypedLobbyInfo
struct  TypedLobbyInfo_t2DB7A0FF57E6248ACFAC6D38025890C9125FD8E6  : public TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5
{
public:
	// System.Int32 Photon.Realtime.TypedLobbyInfo::PlayerCount
	int32_t ___PlayerCount_3;
	// System.Int32 Photon.Realtime.TypedLobbyInfo::RoomCount
	int32_t ___RoomCount_4;

public:
	inline static int32_t get_offset_of_PlayerCount_3() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t2DB7A0FF57E6248ACFAC6D38025890C9125FD8E6, ___PlayerCount_3)); }
	inline int32_t get_PlayerCount_3() const { return ___PlayerCount_3; }
	inline int32_t* get_address_of_PlayerCount_3() { return &___PlayerCount_3; }
	inline void set_PlayerCount_3(int32_t value)
	{
		___PlayerCount_3 = value;
	}

	inline static int32_t get_offset_of_RoomCount_4() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t2DB7A0FF57E6248ACFAC6D38025890C9125FD8E6, ___RoomCount_4)); }
	inline int32_t get_RoomCount_4() const { return ___RoomCount_4; }
	inline int32_t* get_address_of_RoomCount_4() { return &___RoomCount_4; }
	inline void set_RoomCount_4(int32_t value)
	{
		___RoomCount_4 = value;
	}
};


// System.Action`1<Photon.Realtime.Region>
struct  Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// Photon.Realtime.SupportLogger
struct  SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Photon.Realtime.SupportLogger::LogTrafficStats
	bool ___LogTrafficStats_4;
	// System.Boolean Photon.Realtime.SupportLogger::loggedStillOfflineMessage
	bool ___loggedStillOfflineMessage_5;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::client
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___client_6;
	// System.Diagnostics.Stopwatch Photon.Realtime.SupportLogger::startStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___startStopwatch_7;
	// System.Int32 Photon.Realtime.SupportLogger::pingMax
	int32_t ___pingMax_8;
	// System.Int32 Photon.Realtime.SupportLogger::pingMin
	int32_t ___pingMin_9;

public:
	inline static int32_t get_offset_of_LogTrafficStats_4() { return static_cast<int32_t>(offsetof(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002, ___LogTrafficStats_4)); }
	inline bool get_LogTrafficStats_4() const { return ___LogTrafficStats_4; }
	inline bool* get_address_of_LogTrafficStats_4() { return &___LogTrafficStats_4; }
	inline void set_LogTrafficStats_4(bool value)
	{
		___LogTrafficStats_4 = value;
	}

	inline static int32_t get_offset_of_loggedStillOfflineMessage_5() { return static_cast<int32_t>(offsetof(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002, ___loggedStillOfflineMessage_5)); }
	inline bool get_loggedStillOfflineMessage_5() const { return ___loggedStillOfflineMessage_5; }
	inline bool* get_address_of_loggedStillOfflineMessage_5() { return &___loggedStillOfflineMessage_5; }
	inline void set_loggedStillOfflineMessage_5(bool value)
	{
		___loggedStillOfflineMessage_5 = value;
	}

	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002, ___client_6)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
	}

	inline static int32_t get_offset_of_startStopwatch_7() { return static_cast<int32_t>(offsetof(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002, ___startStopwatch_7)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_startStopwatch_7() const { return ___startStopwatch_7; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_startStopwatch_7() { return &___startStopwatch_7; }
	inline void set_startStopwatch_7(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___startStopwatch_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startStopwatch_7), (void*)value);
	}

	inline static int32_t get_offset_of_pingMax_8() { return static_cast<int32_t>(offsetof(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002, ___pingMax_8)); }
	inline int32_t get_pingMax_8() const { return ___pingMax_8; }
	inline int32_t* get_address_of_pingMax_8() { return &___pingMax_8; }
	inline void set_pingMax_8(int32_t value)
	{
		___pingMax_8 = value;
	}

	inline static int32_t get_offset_of_pingMin_9() { return static_cast<int32_t>(offsetof(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002, ___pingMin_9)); }
	inline int32_t get_pingMin_9() const { return ___pingMin_9; }
	inline int32_t* get_address_of_pingMin_9() { return &___pingMin_9; }
	inline void set_pingMin_9(int32_t value)
	{
		___pingMin_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m5441A60FEDEEC843A47D88F1C30C9F1E3F6917FA_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935994267561A33407112EFB85A4F13BA9D2FE36_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void ExitGames.Client.Photon.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mBAFB67D5F20824C8CD7636EF319585C218D4B54E (Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_m38D5F419210D0AFB91896D69292740374B6EFDA4 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m50B0F7EE07B876923EFF2EF60778A037A0FA9DA6_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String Photon.Realtime.Extensions::ToStringFull(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringFull_m1DDC28EF858A4A871C01A6AEB1D0556024C0B0A9 (RuntimeObject* ___origin0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6 (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Object ExitGames.Client.Photon.Hashtable::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Hashtable_get_Item_m35DA5D728328B34EDC119B8280BCDB1986F13494 (Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void Photon.Realtime.RoomInfo::set_PlayerCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m937391BF1C4BCB01331FFF4E5C93664ECC9A56FA_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_MergeStringKeys_mE39680404E703BD165F84EF78D7E08A2DF203105 (RuntimeObject* ___target0, RuntimeObject* ___addHash1, const RuntimeMethod* method);
// System.Void Photon.Realtime.Extensions::StripKeysWithNullValues(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_StripKeysWithNullValues_mD8CED1DBC3A9198738148EE84C437E528101C7BA (RuntimeObject* ___original0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::RemoveCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_RemoveCallbackTarget_m01EE49F15436A959BFD296AA9984404ECA25D369 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_mF16F409FFF0E613D334D999BF6EAA126F090F154 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_get_IsConnected_mAF312211E24968B1F60C9E74E53BE464B1222BB3 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m3324F3A1F96CA956DAEDDB69DB32CAA320A053F7 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Milliseconds_m7DCE7C8875295A46F8A3ED0326F498F30D1F9BEE (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_RoundTripTime_mE1CA94DEB977B452CAB83EDE734E2E871AEDA915 (PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E * __this, const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m0983EF873FB794B55A105CF532339D23998B8378 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_VitalStatsToString_m6C4268510CFD966D61657B5CC7E8B65C675D0224 (PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E * __this, bool ___all0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_AppId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_mB84C1C7601B9506EDF2A5A5F22BAA90C53AA426D_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_AppVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mFA53FE244C2CBAD64709882193BA30826B8B69C5_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_ClientVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ClientVersion_m95CF6E129390CB08968374D72A86A30D225DA155 (PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8 (StringBuilder_t * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_UserId_m8523275C4DFFEE75877514FF4022A2EF2C2D944E (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::get_AuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * LoadBalancingClient_get_AuthValues_m6CFE88D5746FE66CF036F3BDEE97FD3F3B080947_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::get_AuthType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mF05C38D7A0CBE9ADFFBF74C829A1E98373E635BE (AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_PeerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_PeerID_mE9F7175C66CDECC12CD47CFBA57B76151FA5EE8C (PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_CurrentServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CurrentServerAddress_m340A40F8C31A54CCBFF4123A14615C55052DA56F (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerIpAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerIpAddress_m9F8B79E55F9AD02EC29CF447749893C0FF37CD45 (PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_CloudRegion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m08A780475DA96A78E6D982816DB4002A149BB1AA_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Type ExitGames.Client.Photon.PhotonPeer::get_SocketImplementation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * PhotonPeer_get_SocketImplementation_m16659ED69E90B56CC9765F73AF8528BAE89C293F_inline (PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_mFCBF9723E84B9A5E77B99417EB1DD36403A19BB0 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_TrafficStatsEnabled_mAB72902E45373A824E232F578996D548387FFD84 (PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_m31291D23E40BFA0A590676E589161FAD6A7A0F25 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_m9E1B6BAFAFA345B48BD1B78DC6668F47B134BD41 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::get_CurrentLobby()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * LoadBalancingClient_get_CurrentLobby_m3FD1849CCACF880D859A75E3006627CC77E847E7_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::get_CurrentRoom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_GameServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_mC8284CC749DD6C046B97C985CA64B7B3A96CB5A8_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_m50CF797EB0CFBE8D9E25941C26870969591BCB40 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m20B3E577DEE42D0BADE001DB1D678B255F12EAD8 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_m27044F5418F6377E206E3BCAE2823A28482FE91D (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>::get_Count()
inline int32_t List_1_get_Count_m83A9CA4DC00347E0F2910B6DADDD67583ED0D539_inline (List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.TypedLobby::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_mB268B90F8AE8110BB439D44BCE42F126FDD52F54 (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_m364837F07C4F1083993B5DE05D3896D7D3D85798 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, uint8_t ___webhookFlags0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>::.ctor()
inline void List_1__ctor_m5462D7A858BD379CFB03F04883D27C04BA82CCED (List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Photon.Realtime.LoadBalancingClient::UpdateCallbackTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_UpdateCallbackTargets_mB089FFBCC8CA2649A2C41B037602FB6C339DA0FC (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>::GetEnumerator()
inline Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2  List_1_GetEnumerator_m226CFA5DFA50CE13735EE6513D8A8B7E613DEE45 (List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2  (*) (List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mF4F97169F8E940F596801EF80998DE4C323EA7BA_inline (Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::MoveNext()
inline bool Enumerator_MoveNext_mC3E14D29C667AA45F0B7C9EC1D69CC7A366303BC (Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::Dispose()
inline void Enumerator_Dispose_mB2610FB2D29BBB67AC83D7778780869CEDE26135 (Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m749A18E937D3DB5BC3FCF0735AF445816008D874_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_mF04DF90BF2C4DD9C079F36247717F3FD47B3F913_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m5441A60FEDEEC843A47D88F1C30C9F1E3F6917FA (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m5441A60FEDEEC843A47D88F1C30C9F1E3F6917FA_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_mF97550D30C70A60EBFC6C5100F75F6BD1AA76A7C_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_m60D6C87664B71424D0E8D77FF51A8D5218FDB3A9_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_m73D3541B04947DF3F96B17F396E1841579F2A3A5_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_m80D3C968F66A22B396A54635F100540265684371_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_mC87FDF0AF60CBD02DECEE672A52B8193CE63A8D9_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * WebRpcResponse_get_Parameters_mDABD8F7AB74C1C92EA3AFFA2E3C35B485139185C_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m61761698CF15118FD5A3AC75B9E4F2475DCBA469 (RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingPeer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6BD4A6F45A41995976A87A9D0C893E2023C8DFAA (U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
inline void Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, const RuntimeMethod*))Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Clear()
inline void Dictionary_2_Clear_m935994267561A33407112EFB85A4F13BA9D2FE36 (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, const RuntimeMethod*))Dictionary_2_Clear_m935994267561A33407112EFB85A4F13BA9D2FE36_gshared)(__this, method);
}
// System.Void Photon.Realtime.RegionHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF7622690FDCA0B2F9AF7DCCF7567474C5AA7A1E6 (U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Realtime.Region::get_Ping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Region_get_Ping_m2892D706F0ED7342B95B8C68AD5B98E3C9EE9C71_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.String Photon.Realtime.Region::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m3C0CF3D5F0C6E60B08BEAB2223212B8A23B1C535_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.Region::set_Ping(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Region_set_Ping_m2344D4A01D7469DB0CE158C98EC2067BD5F6A435_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void Photon.Realtime.RegionPinger::set_Done(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionPinger_set_Done_m24F52F5A80F1DBCE7FB49D542884D7D9060EB565_inline (RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<Photon.Realtime.Region>::Invoke(!0)
inline void Action_1_Invoke_mD49F210C998553BDD0B2CB38A3089052FC20F675 (Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 * __this, Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 *, Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::get_CustomProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * RoomInfo_get_CustomProperties_m59269200F9FC0E762140868A49739913A8B89792 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * V_0 = NULL;
	{
		// return this.customProperties;
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_0 = __this->get_customProperties_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_m38D5F419210D0AFB91896D69292740374B6EFDA4 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return this.name;
		String_t* L_0 = __this->get_name_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m50B0F7EE07B876923EFF2EF60778A037A0FA9DA6 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->get_U3CPlayerCountU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomInfo::set_PlayerCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m937391BF1C4BCB01331FFF4E5C93664ECC9A56FA (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPlayerCountU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Byte Photon.Realtime.RoomInfo::get_MaxPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RoomInfo_get_MaxPlayers_m52B64E26C3521D3B78192503FC133F2C1AD96F01 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// return this.maxPlayers;
		uint8_t L_0 = __this->get_maxPlayers_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_get_IsOpen_mF317DBC6BE46C1491920633B71A8C644729F0004 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.isOpen;
		bool L_0 = __this->get_isOpen_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_get_IsVisible_mA177125A5A11191BD753D4B21E00746683B331C6 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.isVisible;
		bool L_0 = __this->get_isVisible_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo__ctor_m21DB061CAAA51A27997A35539FE9503762535AB7 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, String_t* ___roomName0, Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * ___roomProperties1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo__ctor_m21DB061CAAA51A27997A35539FE9503762535AB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Hashtable customProperties = new Hashtable();
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_0 = (Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 *)il2cpp_codegen_object_new(Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3_il2cpp_TypeInfo_var);
		Hashtable__ctor_mBAFB67D5F20824C8CD7636EF319585C218D4B54E(L_0, /*hidden argument*/NULL);
		__this->set_customProperties_1(L_0);
		// protected byte maxPlayers = 0;
		__this->set_maxPlayers_2((uint8_t)0);
		// protected int emptyRoomTtl = 0;
		__this->set_emptyRoomTtl_3(0);
		// protected int playerTtl = 0;
		__this->set_playerTtl_4(0);
		// protected bool isOpen = true;
		__this->set_isOpen_6((bool)1);
		// protected bool isVisible = true;
		__this->set_isVisible_7((bool)1);
		// protected bool autoCleanUp = true;
		__this->set_autoCleanUp_8((bool)1);
		// protected internal RoomInfo(string roomName, Hashtable roomProperties)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.InternalCacheProperties(roomProperties);
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_1 = ___roomProperties1;
		VirtActionInvoker1< Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * >::Invoke(4 /* System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable) */, __this, L_1);
		// this.name = roomName;
		String_t* L_2 = ___roomName0;
		__this->set_name_9(L_2);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_Equals_mAD4C9AA88316F973B8C85B4177FAE2B2877F5C7A (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_Equals_mAD4C9AA88316F973B8C85B4177FAE2B2877F5C7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// RoomInfo otherRoomInfo = other as RoomInfo;
		RuntimeObject * L_0 = ___other0;
		V_0 = ((RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 *)IsInstClass((RuntimeObject*)L_0, RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889_il2cpp_TypeInfo_var));
		// return (otherRoomInfo != null && this.Name.Equals(otherRoomInfo.name));
		RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_2 = RoomInfo_get_Name_m38D5F419210D0AFB91896D69292740374B6EFDA4(__this, /*hidden argument*/NULL);
		RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_name_9();
		NullCheck(L_2);
		bool L_5 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Int32 Photon.Realtime.RoomInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInfo_GetHashCode_mA9A3460B7D46E7CC7F8A8B564639570D3E56939E (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return this.name.GetHashCode();
		String_t* L_0 = __this->get_name_9();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.String Photon.Realtime.RoomInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_ToString_m8B4FBCB74C162EA6ECE798CF7F7A12F187C1568C (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_ToString_m8B4FBCB74C162EA6ECE798CF7F7A12F187C1568C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = __this->get_name_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		bool L_4 = __this->get_isVisible_7();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
			goto IL_0026;
		}
	}
	{
		G_B3_0 = _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002b;
	}

IL_0026:
	{
		G_B3_0 = _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002b:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = G_B3_3;
		bool L_6 = __this->get_isOpen_6();
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003d;
		}
	}
	{
		G_B6_0 = _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0042;
	}

IL_003d:
	{
		G_B6_0 = _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0042:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = G_B6_3;
		uint8_t L_8 = __this->get_maxPlayers_2();
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12 = RoomInfo_get_PlayerCount_m50B0F7EE07B876923EFF2EF60778A037A0FA9DA6_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B6_4, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		String_t* L_16 = V_0;
		return L_16;
	}
}
// System.String Photon.Realtime.RoomInfo::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_ToStringFull_mA8130A49AE90D0E6F339135E590AF6BF238DA941 (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_ToStringFull_mA8130A49AE90D0E6F339135E590AF6BF238DA941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.\ncustomProps: {5}", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount, this.customProperties.ToStringFull());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = __this->get_name_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		bool L_4 = __this->get_isVisible_7();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
			goto IL_0026;
		}
	}
	{
		G_B3_0 = _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002b;
	}

IL_0026:
	{
		G_B3_0 = _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002b:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = G_B3_3;
		bool L_6 = __this->get_isOpen_6();
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003d;
		}
	}
	{
		G_B6_0 = _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0042;
	}

IL_003d:
	{
		G_B6_0 = _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0042:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = G_B6_3;
		uint8_t L_8 = __this->get_maxPlayers_2();
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12 = RoomInfo_get_PlayerCount_m50B0F7EE07B876923EFF2EF60778A037A0FA9DA6_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_11;
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_16 = __this->get_customProperties_1();
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		String_t* L_17 = Extensions_ToStringFull_m1DDC28EF858A4A871C01A6AEB1D0556024C0B0A9(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_17);
		String_t* L_18 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B6_4, L_15, /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_0075;
	}

IL_0075:
	{
		// }
		String_t* L_19 = V_0;
		return L_19;
	}
}
// System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_InternalCacheProperties_m34F5708CBCE55FF0A95C39B1871CB8CA77323D4A (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * ___propertiesToCache0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_InternalCacheProperties_m34F5708CBCE55FF0A95C39B1871CB8CA77323D4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B4_0 = 0;
	{
		// if (propertiesToCache == null || propertiesToCache.Count == 0 || this.customProperties.Equals(propertiesToCache))
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_0 = ___propertiesToCache0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_1 = ___propertiesToCache0;
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_3 = __this->get_customProperties_1();
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_4 = ___propertiesToCache0;
		NullCheck(L_3);
		bool L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_001b;
	}

IL_001a:
	{
		G_B4_0 = 1;
	}

IL_001b:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		// return;
		goto IL_027c;
	}

IL_0025:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.Removed))
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_7 = ___propertiesToCache0;
		uint8_t L_8 = ((uint8_t)((int32_t)251));
		RuntimeObject * L_9 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_7);
		bool L_10 = Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6(L_7, L_9, /*hidden argument*/Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_RuntimeMethod_var);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		// this.RemovedFromList = (bool)propertiesToCache[GamePropertyKey.Removed];
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_12 = ___propertiesToCache0;
		uint8_t L_13 = ((uint8_t)((int32_t)251));
		RuntimeObject * L_14 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_12);
		RuntimeObject * L_15 = Hashtable_get_Item_m35DA5D728328B34EDC119B8280BCDB1986F13494(L_12, L_14, /*hidden argument*/NULL);
		__this->set_RemovedFromList_0(((*(bool*)((bool*)UnBox(L_15, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		// if (this.RemovedFromList)
		bool L_16 = __this->get_RemovedFromList_0();
		V_2 = L_16;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		// return;
		goto IL_027c;
	}

IL_0065:
	{
	}

IL_0066:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.MaxPlayers))
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_18 = ___propertiesToCache0;
		uint8_t L_19 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_20 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_18);
		bool L_21 = Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6(L_18, L_20, /*hidden argument*/Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_RuntimeMethod_var);
		V_3 = L_21;
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_0097;
		}
	}
	{
		// this.maxPlayers = (byte)propertiesToCache[GamePropertyKey.MaxPlayers];
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_23 = ___propertiesToCache0;
		uint8_t L_24 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_25 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_23);
		RuntimeObject * L_26 = Hashtable_get_Item_m35DA5D728328B34EDC119B8280BCDB1986F13494(L_23, L_25, /*hidden argument*/NULL);
		__this->set_maxPlayers_2(((*(uint8_t*)((uint8_t*)UnBox(L_26, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))));
	}

IL_0097:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.IsOpen))
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_27 = ___propertiesToCache0;
		uint8_t L_28 = ((uint8_t)((int32_t)253));
		RuntimeObject * L_29 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_27);
		bool L_30 = Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6(L_27, L_29, /*hidden argument*/Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_RuntimeMethod_var);
		V_4 = L_30;
		bool L_31 = V_4;
		if (!L_31)
		{
			goto IL_00ca;
		}
	}
	{
		// this.isOpen = (bool)propertiesToCache[GamePropertyKey.IsOpen];
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_32 = ___propertiesToCache0;
		uint8_t L_33 = ((uint8_t)((int32_t)253));
		RuntimeObject * L_34 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_32);
		RuntimeObject * L_35 = Hashtable_get_Item_m35DA5D728328B34EDC119B8280BCDB1986F13494(L_32, L_34, /*hidden argument*/NULL);
		__this->set_isOpen_6(((*(bool*)((bool*)UnBox(L_35, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
	}

IL_00ca:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.IsVisible))
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_36 = ___propertiesToCache0;
		uint8_t L_37 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_38 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_36);
		bool L_39 = Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6(L_36, L_38, /*hidden argument*/Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_RuntimeMethod_var);
		V_5 = L_39;
		bool L_40 = V_5;
		if (!L_40)
		{
			goto IL_00fd;
		}
	}
	{
		// this.isVisible = (bool)propertiesToCache[GamePropertyKey.IsVisible];
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_41 = ___propertiesToCache0;
		uint8_t L_42 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_43 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_41);
		RuntimeObject * L_44 = Hashtable_get_Item_m35DA5D728328B34EDC119B8280BCDB1986F13494(L_41, L_43, /*hidden argument*/NULL);
		__this->set_isVisible_7(((*(bool*)((bool*)UnBox(L_44, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
	}

IL_00fd:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.PlayerCount))
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_45 = ___propertiesToCache0;
		uint8_t L_46 = ((uint8_t)((int32_t)252));
		RuntimeObject * L_47 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_45);
		bool L_48 = Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6(L_45, L_47, /*hidden argument*/Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_RuntimeMethod_var);
		V_6 = L_48;
		bool L_49 = V_6;
		if (!L_49)
		{
			goto IL_0131;
		}
	}
	{
		// this.PlayerCount = (int)((byte)propertiesToCache[GamePropertyKey.PlayerCount]);
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_50 = ___propertiesToCache0;
		uint8_t L_51 = ((uint8_t)((int32_t)252));
		RuntimeObject * L_52 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_50);
		RuntimeObject * L_53 = Hashtable_get_Item_m35DA5D728328B34EDC119B8280BCDB1986F13494(L_50, L_52, /*hidden argument*/NULL);
		RoomInfo_set_PlayerCount_m937391BF1C4BCB01331FFF4E5C93664ECC9A56FA_inline(__this, ((*(uint8_t*)((uint8_t*)UnBox(L_53, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_0131:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.CleanupCacheOnLeave))
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_54 = ___propertiesToCache0;
		uint8_t L_55 = ((uint8_t)((int32_t)249));
		RuntimeObject * L_56 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_54);
		bool L_57 = Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6(L_54, L_56, /*hidden argument*/Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_RuntimeMethod_var);
		V_7 = L_57;
		bool L_58 = V_7;
		if (!L_58)
		{
			goto IL_0164;
		}
	}
	{
		// this.autoCleanUp = (bool)propertiesToCache[GamePropertyKey.CleanupCacheOnLeave];
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_59 = ___propertiesToCache0;
		uint8_t L_60 = ((uint8_t)((int32_t)249));
		RuntimeObject * L_61 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_60);
		NullCheck(L_59);
		RuntimeObject * L_62 = Hashtable_get_Item_m35DA5D728328B34EDC119B8280BCDB1986F13494(L_59, L_61, /*hidden argument*/NULL);
		__this->set_autoCleanUp_8(((*(bool*)((bool*)UnBox(L_62, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
	}

IL_0164:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.MasterClientId))
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_63 = ___propertiesToCache0;
		uint8_t L_64 = ((uint8_t)((int32_t)248));
		RuntimeObject * L_65 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_64);
		NullCheck(L_63);
		bool L_66 = Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6(L_63, L_65, /*hidden argument*/Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_RuntimeMethod_var);
		V_8 = L_66;
		bool L_67 = V_8;
		if (!L_67)
		{
			goto IL_0197;
		}
	}
	{
		// this.masterClientId = (int)propertiesToCache[GamePropertyKey.MasterClientId];
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_68 = ___propertiesToCache0;
		uint8_t L_69 = ((uint8_t)((int32_t)248));
		RuntimeObject * L_70 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_69);
		NullCheck(L_68);
		RuntimeObject * L_71 = Hashtable_get_Item_m35DA5D728328B34EDC119B8280BCDB1986F13494(L_68, L_70, /*hidden argument*/NULL);
		__this->set_masterClientId_10(((*(int32_t*)((int32_t*)UnBox(L_71, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_0197:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.PropsListedInLobby))
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_72 = ___propertiesToCache0;
		uint8_t L_73 = ((uint8_t)((int32_t)250));
		RuntimeObject * L_74 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_73);
		NullCheck(L_72);
		bool L_75 = Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6(L_72, L_74, /*hidden argument*/Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_RuntimeMethod_var);
		V_9 = L_75;
		bool L_76 = V_9;
		if (!L_76)
		{
			goto IL_01ca;
		}
	}
	{
		// this.propertiesListedInLobby = propertiesToCache[GamePropertyKey.PropsListedInLobby] as string[];
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_77 = ___propertiesToCache0;
		uint8_t L_78 = ((uint8_t)((int32_t)250));
		RuntimeObject * L_79 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_78);
		NullCheck(L_77);
		RuntimeObject * L_80 = Hashtable_get_Item_m35DA5D728328B34EDC119B8280BCDB1986F13494(L_77, L_79, /*hidden argument*/NULL);
		__this->set_propertiesListedInLobby_11(((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)IsInst((RuntimeObject*)L_80, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)));
	}

IL_01ca:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.ExpectedUsers))
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_81 = ___propertiesToCache0;
		uint8_t L_82 = ((uint8_t)((int32_t)247));
		RuntimeObject * L_83 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_82);
		NullCheck(L_81);
		bool L_84 = Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6(L_81, L_83, /*hidden argument*/Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_RuntimeMethod_var);
		V_10 = L_84;
		bool L_85 = V_10;
		if (!L_85)
		{
			goto IL_01fd;
		}
	}
	{
		// this.expectedUsers = (string[])propertiesToCache[GamePropertyKey.ExpectedUsers];
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_86 = ___propertiesToCache0;
		uint8_t L_87 = ((uint8_t)((int32_t)247));
		RuntimeObject * L_88 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_87);
		NullCheck(L_86);
		RuntimeObject * L_89 = Hashtable_get_Item_m35DA5D728328B34EDC119B8280BCDB1986F13494(L_86, L_88, /*hidden argument*/NULL);
		__this->set_expectedUsers_5(((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_89, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)));
	}

IL_01fd:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.EmptyRoomTtl))
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_90 = ___propertiesToCache0;
		uint8_t L_91 = ((uint8_t)((int32_t)245));
		RuntimeObject * L_92 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_91);
		NullCheck(L_90);
		bool L_93 = Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6(L_90, L_92, /*hidden argument*/Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_RuntimeMethod_var);
		V_11 = L_93;
		bool L_94 = V_11;
		if (!L_94)
		{
			goto IL_0230;
		}
	}
	{
		// this.emptyRoomTtl = (int)propertiesToCache[GamePropertyKey.EmptyRoomTtl];
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_95 = ___propertiesToCache0;
		uint8_t L_96 = ((uint8_t)((int32_t)245));
		RuntimeObject * L_97 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_96);
		NullCheck(L_95);
		RuntimeObject * L_98 = Hashtable_get_Item_m35DA5D728328B34EDC119B8280BCDB1986F13494(L_95, L_97, /*hidden argument*/NULL);
		__this->set_emptyRoomTtl_3(((*(int32_t*)((int32_t*)UnBox(L_98, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_0230:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.PlayerTtl))
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_99 = ___propertiesToCache0;
		uint8_t L_100 = ((uint8_t)((int32_t)246));
		RuntimeObject * L_101 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_100);
		NullCheck(L_99);
		bool L_102 = Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6(L_99, L_101, /*hidden argument*/Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_RuntimeMethod_var);
		V_12 = L_102;
		bool L_103 = V_12;
		if (!L_103)
		{
			goto IL_0263;
		}
	}
	{
		// this.playerTtl = (int)propertiesToCache[GamePropertyKey.PlayerTtl];
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_104 = ___propertiesToCache0;
		uint8_t L_105 = ((uint8_t)((int32_t)246));
		RuntimeObject * L_106 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_105);
		NullCheck(L_104);
		RuntimeObject * L_107 = Hashtable_get_Item_m35DA5D728328B34EDC119B8280BCDB1986F13494(L_104, L_106, /*hidden argument*/NULL);
		__this->set_playerTtl_4(((*(int32_t*)((int32_t*)UnBox(L_107, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_0263:
	{
		// this.customProperties.MergeStringKeys(propertiesToCache);
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_108 = __this->get_customProperties_1();
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_109 = ___propertiesToCache0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		Extensions_MergeStringKeys_mE39680404E703BD165F84EF78D7E08A2DF203105(L_108, L_109, /*hidden argument*/NULL);
		// this.customProperties.StripKeysWithNullValues();
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_110 = __this->get_customProperties_1();
		Extensions_StripKeysWithNullValues_mD8CED1DBC3A9198738148EE84C437E528101C7BA(L_110, /*hidden argument*/NULL);
	}

IL_027c:
	{
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Photon.Realtime.RoomOptions::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_IsVisible_m5EC778AE095E58AFA3A9D52F267F85A65A732E0E (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = __this->get_isVisible_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_IsVisible_mC0A95ADCF711835B0C695844D5BF19226EF0DCA6 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = ___value0;
		__this->set_isVisible_0(L_0);
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_IsOpen_mFDA9D97177BC7D1DF5A742640881012C1C22BEF4 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_0 = __this->get_isOpen_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_IsOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_IsOpen_m76BB29F06F0FF60D50ECA66D59D89354BFDD8F5B (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_0 = ___value0;
		__this->set_isOpen_1(L_0);
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_CleanupCacheOnLeave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_CleanupCacheOnLeave_m255DA67481E9203BC0CE7788D08C4109C4115CE8 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		bool L_0 = __this->get_cleanupCacheOnLeave_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_CleanupCacheOnLeave(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_CleanupCacheOnLeave_m420AE587984BE3EC583E008D6DF285FD8A708D33 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		bool L_0 = ___value0;
		__this->set_cleanupCacheOnLeave_5(L_0);
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_SuppressRoomEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_SuppressRoomEvents_m66C9A3354316E353ED247DC10DBBDED034083D4E (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; set; }
		bool L_0 = __this->get_U3CSuppressRoomEventsU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_SuppressRoomEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_SuppressRoomEvents_m995E9F193F30D7FF990FDBB438722601386DECA5 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressRoomEventsU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_PublishUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_PublishUserId_mB7BFB7CC3946C51C8C840DD6452E5847F5860AB4 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; set; }
		bool L_0 = __this->get_U3CPublishUserIdU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_PublishUserId(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_PublishUserId_mE998E9DDB1E13BF5ED8CCF07F1D70799B1750667 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishUserIdU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_DeleteNullProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_DeleteNullProperties_m65FEEFEAE5169DE4D06DB868F53D866CD9FE5F6F (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; set; }
		bool L_0 = __this->get_U3CDeleteNullPropertiesU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_DeleteNullProperties(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_DeleteNullProperties_m08FCFFEC2C8F9BC20366282F619B29D1EC629C69 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CDeleteNullPropertiesU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_BroadcastPropsChangeToAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_BroadcastPropsChangeToAll_mD870A3DDCDBDC2250B182724ECA674DFDBB34DBA (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		bool L_0 = __this->get_broadcastPropsChangeToAll_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_BroadcastPropsChangeToAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_BroadcastPropsChangeToAll_m9EBC9B0F976F57FC954AD24E529A8AB075105B6B (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		bool L_0 = ___value0;
		__this->set_broadcastPropsChangeToAll_12(L_0);
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		return;
	}
}
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m3757C5E2DFF56EEEC7F0B7A08443DD21DA88FEF7 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomOptions__ctor_m3757C5E2DFF56EEEC7F0B7A08443DD21DA88FEF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool isVisible = true;
		__this->set_isVisible_0((bool)1);
		// private bool isOpen = true;
		__this->set_isOpen_1((bool)1);
		// private bool cleanupCacheOnLeave = true;
		__this->set_cleanupCacheOnLeave_5((bool)1);
		// public string[] CustomRoomPropertiesForLobby = new string[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_CustomRoomPropertiesForLobby_7(L_0);
		// private bool broadcastPropsChangeToAll = true;
		__this->set_broadcastPropsChangeToAll_12((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * SupportLogger_get_Client_m1CC6DAAAC1C8298BD6D6DE2B8B1A96013941C3EB (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * V_0 = NULL;
	{
		// get { return this.client; }
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_client_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.client; }
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.SupportLogger::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_set_Client_mFF619F21AB932F0393D15181428B1446665435BC (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (this.client != value)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_client_6();
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A *)L_0) == ((RuntimeObject*)(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A *)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		// if (this.client != null)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_3 = __this->get_client_6();
		V_1 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// this.client.RemoveCallbackTarget(this);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		LoadBalancingClient_RemoveCallbackTarget_m01EE49F15436A959BFD296AA9984404ECA25D369(L_5, __this, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// this.client = value;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_6 = ___value0;
		__this->set_client_6(L_6);
		// if (this.client != null)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_7 = __this->get_client_6();
		V_2 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// this.client.AddCallbackTarget(this);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		LoadBalancingClient_AddCallbackTarget_mF16F409FFF0E613D334D999BF6EAA126F090F154(L_9, __this, /*hidden argument*/NULL);
	}

IL_0051:
	{
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_Start_mA500C841AF1CE588565C2B21BFB4D720B811483F (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_Start_mA500C841AF1CE588565C2B21BFB4D720B811483F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.startStopwatch == null)
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = __this->get_startStopwatch_7();
		V_0 = (bool)((((RuntimeObject*)(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_2 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_2, /*hidden argument*/NULL);
		__this->set_startStopwatch_7(L_2);
		// this.startStopwatch.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = __this->get_startStopwatch_7();
		NullCheck(L_3);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationPause_m9F4B4E7C83B3084F6DB3CD9E5AC1B87F816B86DC (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnApplicationPause_m9F4B4E7C83B3084F6DB3CD9E5AC1B87F816B86DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnApplicationPause: " + pause + " connected: " + (this.client == null ? "no (client is null)" : this.client.IsConnected.ToString()));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral7E357C31C3E3A0DB2B89D68F7FD43137F7E8DDED);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral7E357C31C3E3A0DB2B89D68F7FD43137F7E8DDED);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&___pause0), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD6531E0D94FC153A90B43E184D8F7C53223B3B7D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD6531E0D94FC153A90B43E184D8F7C53223B3B7D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_8 = __this->get_client_6();
		G_B1_0 = 4;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		if (!L_8)
		{
			G_B2_0 = 4;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			goto IL_0049;
		}
	}
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		bool L_10 = LoadBalancingClient_get_IsConnected_mAF312211E24968B1F60C9E74E53BE464B1222BB3(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_004e;
	}

IL_0049:
	{
		G_B3_0 = _stringLiteral28C16AD3D08B7CCD40C5C1BC966F3A5EB27FEF18;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_004e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		String_t* L_12 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B3_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationQuit_mD48621E599EF3B5FD1603ED763A71B1A7512E598 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	{
		// this.CancelInvoke();
		MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_m31291D23E40BFA0A590676E589161FAD6A7A0F25 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StartLogStats_m31291D23E40BFA0A590676E589161FAD6A7A0F25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("LogStats", 10, 10);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00, (10.0f), (10.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_m50CF797EB0CFBE8D9E25941C26870969591BCB40 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StopLogStats_m50CF797EB0CFBE8D9E25941C26870969591BCB40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("LogStats");
		MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9(__this, _stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_m9E1B6BAFAFA345B48BD1B78DC6668F47B134BD41 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StartTrackValues_m9E1B6BAFAFA345B48BD1B78DC6668F47B134BD41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("TrackValues", 0.5f, 0.5f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D, (0.5f), (0.5f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m20B3E577DEE42D0BADE001DB1D678B255F12EAD8 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StopTrackValues_m20B3E577DEE42D0BADE001DB1D678B255F12EAD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("TrackValues");
		MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9(__this, _stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// if (this.startStopwatch == null)
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = __this->get_startStopwatch_7();
		V_0 = (bool)((((RuntimeObject*)(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_2 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_2, /*hidden argument*/NULL);
		__this->set_startStopwatch_7(L_2);
		// this.startStopwatch.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = __this->get_startStopwatch_7();
		NullCheck(L_3);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// return string.Format("[{0}.{1}]", this.startStopwatch.Elapsed.Seconds, this.startStopwatch.Elapsed.Milliseconds);
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_4 = __this->get_startStopwatch_7();
		NullCheck(L_4);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_5 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = TimeSpan_get_Seconds_m3324F3A1F96CA956DAEDDB69DB32CAA320A053F7((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_9 = __this->get_startStopwatch_7();
		NullCheck(L_9);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_10 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = TimeSpan_get_Milliseconds_m7DCE7C8875295A46F8A3ED0326F498F30D1F9BEE((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralFAFE1135E66E66BD15C9C823C63EB9B6F691436F, L_8, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		goto IL_0064;
	}

IL_0064:
	{
		// }
		String_t* L_15 = V_2;
		return L_15;
	}
}
// System.Void Photon.Realtime.SupportLogger::TrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_TrackValues_m70D4240C8A119A9F6A260E068D85D146DFFD6380 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (this.client != null)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_client_6();
		V_0 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// int currentRtt = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_2 = __this->get_client_6();
		NullCheck(L_2);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_3 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = PhotonPeer_get_RoundTripTime_mE1CA94DEB977B452CAB83EDE734E2E871AEDA915(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (currentRtt > this.pingMax)
		int32_t L_5 = V_1;
		int32_t L_6 = __this->get_pingMax_8();
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// this.pingMax = currentRtt;
		int32_t L_8 = V_1;
		__this->set_pingMax_8(L_8);
	}

IL_0036:
	{
		// if (currentRtt < this.pingMin)
		int32_t L_9 = V_1;
		int32_t L_10 = __this->get_pingMin_9();
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// this.pingMin = currentRtt;
		int32_t L_12 = V_1;
		__this->set_pingMin_9(L_12);
	}

IL_004c:
	{
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_m27044F5418F6377E206E3BCAE2823A28482FE91D (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_LogStats_m27044F5418F6377E206E3BCAE2823A28482FE91D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this.client == null || this.client.State == ClientState.PeerCreated)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_client_6();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_1 = __this->get_client_6();
		NullCheck(L_1);
		int32_t L_2 = LoadBalancingClient_get_State_m0983EF873FB794B55A105CF532339D23998B8378(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return;
		goto IL_008f;
	}

IL_0021:
	{
		// if (this.LogTrafficStats)
		bool L_4 = __this->get_LogTrafficStats_4();
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_008f;
		}
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger " + this.client.LoadBalancingPeer.VitalStatsToString(false) + " Ping min/max: " + this.pingMin + "/" + this.pingMax);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		String_t* L_8 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral8D1239F07A9E8331EAEB0B65C253D33291FDD92B);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral8D1239F07A9E8331EAEB0B65C253D33291FDD92B);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_11 = __this->get_client_6();
		NullCheck(L_11);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_12 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = PhotonPeer_VitalStatsToString_m6C4268510CFD966D61657B5CC7E8B65C675D0224(L_12, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_10;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralE51BAB8EEF309071E735D738BA793BB2B271FC56);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralE51BAB8EEF309071E735D738BA793BB2B271FC56);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		int32_t L_16 = __this->get_pingMin_9();
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_15;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
		int32_t L_21 = __this->get_pingMax_8();
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_23);
		String_t* L_24 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_24, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_mFCBF9723E84B9A5E77B99417EB1DD36403A19BB0 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_LogBasics_mFCBF9723E84B9A5E77B99417EB1DD36403A19BB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	StringBuilder_t * V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	uint8_t V_5 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B7_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	StringBuilder_t * G_B7_4 = NULL;
	int32_t G_B6_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_2 = NULL;
	String_t* G_B6_3 = NULL;
	StringBuilder_t * G_B6_4 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B8_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B8_3 = NULL;
	String_t* G_B8_4 = NULL;
	StringBuilder_t * G_B8_5 = NULL;
	{
		// if (this.client != null)
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_client_6();
		V_0 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0214;
		}
	}
	{
		// List<string> buildProperties = new List<string>(10);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B(L_2, ((int32_t)10), /*hidden argument*/List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var);
		V_1 = L_2;
		// buildProperties.Add(Application.unityVersion);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = V_1;
		String_t* L_4 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_3, L_4, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// buildProperties.Add(Application.platform.ToString());
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = V_1;
		int32_t L_6 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		V_4 = L_6;
		RuntimeObject * L_7 = Box(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		V_4 = *(int32_t*)UnBox(L_7);
		NullCheck(L_5);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_5, L_8, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// buildProperties.Add("ENABLE_IL2CPP");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = V_1;
		NullCheck(L_9);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_9, _stringLiteral8F922B5D2735B37B3F9E1522305AB8CCD8ED274B, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// buildProperties.Add("DEBUG");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = V_1;
		NullCheck(L_10);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_10, _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// buildProperties.Add("NET_STANDARD_2_0");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = V_1;
		NullCheck(L_11);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_11, _stringLiteral94C9907E8EDE0DCF9B99D296D066DF89F5E204E9, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_12 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_12, /*hidden argument*/NULL);
		V_2 = L_12;
		// string appIdShort = string.IsNullOrEmpty(this.client.AppId) || this.client.AppId.Length < 8 ? this.client.AppId : string.Concat(this.client.AppId.Substring(0, 8), "***");
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_13 = __this->get_client_6();
		NullCheck(L_13);
		String_t* L_14 = LoadBalancingClient_get_AppId_mB84C1C7601B9506EDF2A5A5F22BAA90C53AA426D_inline(L_13, /*hidden argument*/NULL);
		bool L_15 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00ae;
		}
	}
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_16 = __this->get_client_6();
		NullCheck(L_16);
		String_t* L_17 = LoadBalancingClient_get_AppId_mB84C1C7601B9506EDF2A5A5F22BAA90C53AA426D_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)8)))
		{
			goto IL_00ae;
		}
	}
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_19 = __this->get_client_6();
		NullCheck(L_19);
		String_t* L_20 = LoadBalancingClient_get_AppId_mB84C1C7601B9506EDF2A5A5F22BAA90C53AA426D_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_20, 0, 8, /*hidden argument*/NULL);
		String_t* L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_21, _stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34, /*hidden argument*/NULL);
		G_B5_0 = L_22;
		goto IL_00b9;
	}

IL_00ae:
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_23 = __this->get_client_6();
		NullCheck(L_23);
		String_t* L_24 = LoadBalancingClient_get_AppId_mB84C1C7601B9506EDF2A5A5F22BAA90C53AA426D_inline(L_23, /*hidden argument*/NULL);
		G_B5_0 = L_24;
	}

IL_00b9:
	{
		V_3 = G_B5_0;
		// sb.AppendFormat("{0} SupportLogger Info: ", this.GetFormattedTimestamp());
		StringBuilder_t * L_25 = V_2;
		String_t* L_26 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_25, _stringLiteralB4175BA66C7FF6F238B86BBCB5E18C2056A2A746, L_26, /*hidden argument*/NULL);
		// sb.AppendFormat("AppID: \"{0}\" AppVersion: \"{1}\" ClientVersion: {2} Build: {3} ", appIdShort, this.client.AppVersion, this.client.LoadBalancingPeer.ClientVersion, string.Join(", ", buildProperties.ToArray()));
		StringBuilder_t * L_27 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_28;
		String_t* L_30 = V_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_30);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_31 = L_29;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_32 = __this->get_client_6();
		NullCheck(L_32);
		String_t* L_33 = LoadBalancingClient_get_AppVersion_mFA53FE244C2CBAD64709882193BA30826B8B69C5_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_33);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_31;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_35 = __this->get_client_6();
		NullCheck(L_35);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_36 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_37 = PhotonPeer_get_ClientVersion_m95CF6E129390CB08968374D72A86A30D225DA155(L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_37);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_34;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_39 = V_1;
		NullCheck(L_39);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_39, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		String_t* L_41 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_40, /*hidden argument*/NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_41);
		NullCheck(L_27);
		StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8(L_27, _stringLiteral286433695DFD6DE8C552742EA4ED360438C7BEDC, L_38, /*hidden argument*/NULL);
		// sb.AppendFormat("UserId: \"{0}\" AuthType: {1} {2} {3} PeerID: {4} ", this.client.UserId, (this.client.AuthValues != null) ? this.client.AuthValues.AuthType.ToString() : "N/A", this.client.AuthMode, this.client.EncryptionMode, this.client.LoadBalancingPeer.PeerID);
		StringBuilder_t * L_42 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_44 = L_43;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_45 = __this->get_client_6();
		NullCheck(L_45);
		String_t* L_46 = LoadBalancingClient_get_UserId_m8523275C4DFFEE75877514FF4022A2EF2C2D944E(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_46);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_46);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_47 = L_44;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_48 = __this->get_client_6();
		NullCheck(L_48);
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_49 = LoadBalancingClient_get_AuthValues_m6CFE88D5746FE66CF036F3BDEE97FD3F3B080947_inline(L_48, /*hidden argument*/NULL);
		G_B6_0 = 1;
		G_B6_1 = L_47;
		G_B6_2 = L_47;
		G_B6_3 = _stringLiteral3207ED05D1B134966FA36BFEA2D7A6DF1F45D961;
		G_B6_4 = L_42;
		if (L_49)
		{
			G_B7_0 = 1;
			G_B7_1 = L_47;
			G_B7_2 = L_47;
			G_B7_3 = _stringLiteral3207ED05D1B134966FA36BFEA2D7A6DF1F45D961;
			G_B7_4 = L_42;
			goto IL_0146;
		}
	}
	{
		G_B8_0 = _stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		G_B8_5 = G_B6_4;
		goto IL_0165;
	}

IL_0146:
	{
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_50 = __this->get_client_6();
		NullCheck(L_50);
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_51 = LoadBalancingClient_get_AuthValues_m6CFE88D5746FE66CF036F3BDEE97FD3F3B080947_inline(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		uint8_t L_52 = AuthenticationValues_get_AuthType_mF05C38D7A0CBE9ADFFBF74C829A1E98373E635BE(L_51, /*hidden argument*/NULL);
		V_5 = L_52;
		RuntimeObject * L_53 = Box(CustomAuthenticationType_tD0F6E6C7B5CFDC781EAB5E9CDC44F285B1499BEB_il2cpp_TypeInfo_var, (&V_5));
		NullCheck(L_53);
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
		V_5 = *(uint8_t*)UnBox(L_53);
		G_B8_0 = L_54;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
		G_B8_5 = G_B7_4;
	}

IL_0165:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (RuntimeObject *)G_B8_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_55 = G_B8_3;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_56 = __this->get_client_6();
		NullCheck(L_56);
		int32_t L_57 = L_56->get_AuthMode_4();
		int32_t L_58 = L_57;
		RuntimeObject * L_59 = Box(AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_59);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_59);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = L_55;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_61 = __this->get_client_6();
		NullCheck(L_61);
		int32_t L_62 = L_61->get_EncryptionMode_5();
		int32_t L_63 = L_62;
		RuntimeObject * L_64 = Box(EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_64);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_64);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_65 = L_60;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_66 = __this->get_client_6();
		NullCheck(L_66);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_67 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		String_t* L_68 = PhotonPeer_get_PeerID_mE9F7175C66CDECC12CD47CFBA57B76151FA5EE8C(L_67, /*hidden argument*/NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_68);
		NullCheck(G_B8_5);
		StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8(G_B8_5, G_B8_4, L_65, /*hidden argument*/NULL);
		// sb.AppendFormat("NameServer: {0} Server: {1} IP: {2} Region: {3} Socket: {4} ", this.client.NameServerHost, this.client.CurrentServerAddress, this.client.LoadBalancingPeer.ServerIpAddress, this.client.CloudRegion, this.client.LoadBalancingPeer.SocketImplementation);
		StringBuilder_t * L_69 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_70 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = L_70;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_72 = __this->get_client_6();
		NullCheck(L_72);
		String_t* L_73 = L_72->get_NameServerHost_9();
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_73);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_73);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_74 = L_71;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_75 = __this->get_client_6();
		NullCheck(L_75);
		String_t* L_76 = LoadBalancingClient_get_CurrentServerAddress_m340A40F8C31A54CCBFF4123A14615C55052DA56F(L_75, /*hidden argument*/NULL);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_76);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_76);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_77 = L_74;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_78 = __this->get_client_6();
		NullCheck(L_78);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_79 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_78, /*hidden argument*/NULL);
		NullCheck(L_79);
		String_t* L_80 = PhotonPeer_get_ServerIpAddress_m9F8B79E55F9AD02EC29CF447749893C0FF37CD45(L_79, /*hidden argument*/NULL);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_80);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_80);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_81 = L_77;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_82 = __this->get_client_6();
		NullCheck(L_82);
		String_t* L_83 = LoadBalancingClient_get_CloudRegion_m08A780475DA96A78E6D982816DB4002A149BB1AA_inline(L_82, /*hidden argument*/NULL);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_83);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_83);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_84 = L_81;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_85 = __this->get_client_6();
		NullCheck(L_85);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_86 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_85, /*hidden argument*/NULL);
		NullCheck(L_86);
		Type_t * L_87 = PhotonPeer_get_SocketImplementation_m16659ED69E90B56CC9765F73AF8528BAE89C293F_inline(L_86, /*hidden argument*/NULL);
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_87);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_87);
		NullCheck(L_69);
		StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8(L_69, _stringLiteralB54CF2E2F80C3596917EEAED20B4718D24EF2603, L_84, /*hidden argument*/NULL);
		// Debug.Log(sb.ToString());
		StringBuilder_t * L_88 = V_2;
		NullCheck(L_88);
		String_t* L_89 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_88);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_89, /*hidden argument*/NULL);
	}

IL_0214:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnected_m84F8E9098FB782DCC7618BF8366F14E27722A215 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnConnected_m84F8E9098FB782DCC7618BF8366F14E27722A215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnected().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral5B49F56286E679FA58107352F1A55E4C9D0B9352, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// this.pingMax = 0;
		__this->set_pingMax_8(0);
		// this.pingMin = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_2 = __this->get_client_6();
		NullCheck(L_2);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_3 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = PhotonPeer_get_RoundTripTime_mE1CA94DEB977B452CAB83EDE734E2E871AEDA915(L_3, /*hidden argument*/NULL);
		__this->set_pingMin_9(L_4);
		// this.LogBasics();
		SupportLogger_LogBasics_mFCBF9723E84B9A5E77B99417EB1DD36403A19BB0(__this, /*hidden argument*/NULL);
		// if (this.LogTrafficStats)
		bool L_5 = __this->get_LogTrafficStats_4();
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = false;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_7 = __this->get_client_6();
		NullCheck(L_7);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_8 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		PhotonPeer_set_TrafficStatsEnabled_mAB72902E45373A824E232F578996D548387FFD84(L_8, (bool)0, /*hidden argument*/NULL);
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = true;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_10 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		PhotonPeer_set_TrafficStatsEnabled_mAB72902E45373A824E232F578996D548387FFD84(L_10, (bool)1, /*hidden argument*/NULL);
		// this.StartLogStats();
		SupportLogger_StartLogStats_m31291D23E40BFA0A590676E589161FAD6A7A0F25(__this, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// this.StartTrackValues();
		SupportLogger_StartTrackValues_m9E1B6BAFAFA345B48BD1B78DC6668F47B134BD41(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnectedToMaster_m7299BA991B045F872A896E03FAB0C3506D2025FD (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnConnectedToMaster_m7299BA991B045F872A896E03FAB0C3506D2025FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnectedToMaster().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral744BF9AE3CE56EE58F000CE7C3F4F94C51ABA032, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnFriendListUpdate_m351F906619FC2A79BACC9AD59CF7DF831ADF481A (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, List_1_t329E537BFFC32042EF9818A1DAD852B96553F60C * ___friendList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnFriendListUpdate_m351F906619FC2A79BACC9AD59CF7DF831ADF481A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnFriendListUpdate(friendList).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral49221D9FFDE2F83640CB6D959D4A66D1492381B7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedLobby_m1A22E5B0E1E641661CEAF864CC4F4A7EE6B88F0E (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinedLobby_m1A22E5B0E1E641661CEAF864CC4F4A7EE6B88F0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedLobby(" + this.client.CurrentLobby + ").");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_6 = LoadBalancingClient_get_CurrentLobby_m3FD1849CCACF880D859A75E3006627CC77E847E7_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_8 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftLobby_m507D4D4867913D803EF2D03DEF8578CD4D79C50C (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnLeftLobby_m507D4D4867913D803EF2D03DEF8578CD4D79C50C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftLobby().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteralE115685933AB6FADBFC7D7A380253AE496EE2014, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreateRoomFailed_mA4C255E899B64DAE0E4B1454A6DF58ACA6BF5AE1 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCreateRoomFailed_mA4C255E899B64DAE0E4B1454A6DF58ACA6BF5AE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreateRoomFailed(" + returnCode+","+message+").");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		int16_t L_5 = ___returnCode0;
		int16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		String_t* L_10 = ___message1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_12 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedRoom_m9507DE2EFFC4B9FEDE58D06A44ACC2A062BA230A (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinedRoom_m9507DE2EFFC4B9FEDE58D06A44ACC2A062BA230A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral01551127791BB14934414B8428B67FD51B390033);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral01551127791BB14934414B8428B67FD51B390033);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_6 = LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_10 = LoadBalancingClient_get_CurrentLobby_m3FD1849CCACF880D859A75E3006627CC77E847E7_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_13 = __this->get_client_6();
		NullCheck(L_13);
		String_t* L_14 = LoadBalancingClient_get_GameServerAddress_mC8284CC749DD6C046B97C985CA64B7B3A96CB5A8_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRoomFailed_m18CA0D929AF2DE6612CCD197C06F0FFBDD3F2143 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinRoomFailed_m18CA0D929AF2DE6612CCD197C06F0FFBDD3F2143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRoomFailed(" + returnCode+","+message+").");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		int16_t L_5 = ___returnCode0;
		int16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		String_t* L_10 = ___message1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_12 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRandomFailed_m2A52D7C7D70A4AB3AB20E5266F2444F2DC50B6A9 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinRandomFailed_m2A52D7C7D70A4AB3AB20E5266F2444F2DC50B6A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRandomFailed(" + returnCode+","+message+").");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral38011452171D5D98758667404D6F17F5AF329293);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral38011452171D5D98758667404D6F17F5AF329293);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		int16_t L_5 = ___returnCode0;
		int16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		String_t* L_10 = ___message1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_12 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreatedRoom_mFF53519317C4E9B1A60E6061B0093FBD773B65DA (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCreatedRoom_mFF53519317C4E9B1A60E6061B0093FBD773B65DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreatedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_6 = LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_10 = LoadBalancingClient_get_CurrentLobby_m3FD1849CCACF880D859A75E3006627CC77E847E7_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_13 = __this->get_client_6();
		NullCheck(L_13);
		String_t* L_14 = LoadBalancingClient_get_GameServerAddress_mC8284CC749DD6C046B97C985CA64B7B3A96CB5A8_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftRoom_m890242142B105A919069C56017907EF53BE305A7 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnLeftRoom_m890242142B105A919069C56017907EF53BE305A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftRoom().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral1E2510325BB91639BC80976746CCEC9FE9947D99, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnDisconnected_mC523FAAAF83506E251370ECE71A379C6C352E6C7 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnDisconnected_mC523FAAAF83506E251370ECE71A379C6C352E6C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.StopLogStats();
		SupportLogger_StopLogStats_m50CF797EB0CFBE8D9E25941C26870969591BCB40(__this, /*hidden argument*/NULL);
		// this.StopTrackValues();
		SupportLogger_StopTrackValues_m20B3E577DEE42D0BADE001DB1D678B255F12EAD8(__this, /*hidden argument*/NULL);
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnDisconnected(" + cause + ").");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral975531AFC28B31E2C3F222277BE27AB31AE7D4B6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral975531AFC28B31E2C3F222277BE27AB31AE7D4B6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		int32_t L_5 = ___cause0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_9 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
		// this.LogBasics();
		SupportLogger_LogBasics_mFCBF9723E84B9A5E77B99417EB1DD36403A19BB0(__this, /*hidden argument*/NULL);
		// this.LogStats();
		SupportLogger_LogStats_m27044F5418F6377E206E3BCAE2823A28482FE91D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRegionListReceived_m23F342AFB60871B4F34FCD0430A1BC1DB9EEFCB7 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * ___regionHandler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnRegionListReceived_m23F342AFB60871B4F34FCD0430A1BC1DB9EEFCB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRegionListReceived(regionHandler).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteralD4790BF76CC94ADC0486FBF64F752246D60263C5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// this.LogBasics();
		SupportLogger_LogBasics_mFCBF9723E84B9A5E77B99417EB1DD36403A19BB0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomListUpdate_mA1A82F024F737C3A6CD00FC42BDB1ECCD333A5AA (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694 * ___roomList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnRoomListUpdate_mA1A82F024F737C3A6CD00FC42BDB1ECCD333A5AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomListUpdate(roomList). roomList.Count: " + roomList.Count);
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		List_1_t2BC1E1478FBCFD41C2AE6FD49D3C31622CD31694 * L_1 = ___roomList0;
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m83A9CA4DC00347E0F2910B6DADDD67583ED0D539_inline(L_1, /*hidden argument*/List_1_get_Count_m83A9CA4DC00347E0F2910B6DADDD67583ED0D539_RuntimeMethod_var);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(L_0, _stringLiteralDAE93AA613D9CE34751185FB80DED40E346E9444, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerEnteredRoom_m6F88CFF775D90BC9C71F679B6979AA26EDF892B3 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___newPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnPlayerEnteredRoom_m6F88CFF775D90BC9C71F679B6979AA26EDF892B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerEnteredRoom(" + newPlayer+").");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_5 = ___newPlayer0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_7 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerLeftRoom_mAC299453BB544A5663DA7AEA8DB90D31BD9DD00F (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___otherPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnPlayerLeftRoom_mAC299453BB544A5663DA7AEA8DB90D31BD9DD00F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerLeftRoom(" + otherPlayer+").");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_5 = ___otherPlayer0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_7 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomPropertiesUpdate_m4E68625D6772DD1252C0B90081E427AB0C6721F9 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * ___propertiesThatChanged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnRoomPropertiesUpdate_m4E68625D6772DD1252C0B90081E427AB0C6721F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomPropertiesUpdate(propertiesThatChanged).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral293EEA1FC571998DF9F8F43C7C67DEE8ADA92F9C, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerPropertiesUpdate(Photon.Realtime.Player,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerPropertiesUpdate_m7D0F6AFF35F870889E5D6F1A8775D4282A3E199A (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___targetPlayer0, Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * ___changedProps1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnPlayerPropertiesUpdate_m7D0F6AFF35F870889E5D6F1A8775D4282A3E199A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerPropertiesUpdate(targetPlayer,changedProps).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral677B5ACFFA9821CA29C5B6329DD4778CE1AC133B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnMasterClientSwitched(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnMasterClientSwitched_mE4540E17E04127240F1C1E97EB5E2EBB9A351DC6 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___newMasterClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnMasterClientSwitched_mE4540E17E04127240F1C1E97EB5E2EBB9A351DC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnMasterClientSwitched(" + newMasterClient+").");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_5 = ___newMasterClient0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_7 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationResponse_mF799DBCE871603F369CF30359C40DAEFDB556643 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCustomAuthenticationResponse_mF799DBCE871603F369CF30359C40DAEFDB556643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationResponse(" + data.ToStringFull()+").");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_tCD205E7DF947FA2BD6A2B7036AA6F51E420CB75A_il2cpp_TypeInfo_var);
		String_t* L_2 = Extensions_ToStringFull_m1DDC28EF858A4A871C01A6AEB1D0556024C0B0A9(L_1, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_0, _stringLiteral9692BF3609B3FA99897E14252C1A031B33C30B4C, L_2, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationFailed_m54D21C3901F6D84C80D558B31ED564F7B6FC46A1 (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, String_t* ___debugMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCustomAuthenticationFailed_m54D21C3901F6D84C80D558B31ED564F7B6FC46A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationFailed(" + debugMessage+").");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___debugMessage0;
		String_t* L_2 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_0, _stringLiteralE2B8CF328F46C5FE3BCBA0EAD12CCBFAF5CE1356, L_1, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLobbyStatisticsUpdate_m94EC3C6A7052B4C2E0337CEA3C69013DF491652B (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * ___lobbyStatistics0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnLobbyStatisticsUpdate_m94EC3C6A7052B4C2E0337CEA3C69013DF491652B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLobbyStatisticsUpdate(lobbyStatistics).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mD9915A477877F825B262C5782FB0BB2CE9286A18(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral3B24932FF933699B3A82EAC56B23A2606464B1D8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnErrorInfo(Photon.Realtime.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnErrorInfo_m233D66E34EBDD77343A1EB757284DB58B853DDAE (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, ErrorInfo_tCF1CC371330203F98D00E197EE87658A8D0E0B80 * ___errorInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnErrorInfo_m233D66E34EBDD77343A1EB757284DB58B853DDAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(errorInfo.ToString());
		ErrorInfo_tCF1CC371330203F98D00E197EE87658A8D0E0B80 * L_0 = ___errorInfo0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger__ctor_m72FA807E9CDEA4877396F11164A8C472B2BABF4D (SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * __this, const RuntimeMethod* method)
{
	{
		// public bool LogTrafficStats = true;
		__this->set_LogTrafficStats_4((bool)1);
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
// System.Boolean Photon.Realtime.TypedLobby::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypedLobby_get_IsDefault_mB9553F45B8B6611CDC3B3DDC8BF37690D0731FF2 (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsDefault { get { return string.IsNullOrEmpty(this.Name); } }
		String_t* L_0 = __this->get_Name_0();
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public bool IsDefault { get { return string.IsNullOrEmpty(this.Name); } }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Realtime.TypedLobby::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_mB268B90F8AE8110BB439D44BCE42F126FDD52F54 (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * __this, const RuntimeMethod* method)
{
	{
		// internal TypedLobby()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.TypedLobby::.ctor(System.String,Photon.Realtime.LobbyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_m7891CDB10F260006D35FA9FE297FA8706162413C (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * __this, String_t* ___name0, uint8_t ___type1, const RuntimeMethod* method)
{
	{
		// public TypedLobby(string name, LobbyType type)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Name = name;
		String_t* L_0 = ___name0;
		__this->set_Name_0(L_0);
		// this.Type = type;
		uint8_t L_1 = ___type1;
		__this->set_Type_1(L_1);
		// }
		return;
	}
}
// System.String Photon.Realtime.TypedLobby::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypedLobby_ToString_m7969239ABC7C2D9BA6E830E2ED9741E32CAE671A (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobby_ToString_m7969239ABC7C2D9BA6E830E2ED9741E32CAE671A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("lobby '{0}'[{1}]", this.Name, this.Type);
		String_t* L_0 = __this->get_Name_0();
		uint8_t L_1 = __this->get_Type_1();
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(LobbyType_t398AB21E35E9CD63CD9E514CEC5475D70D1413C1_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral271CB9743B301F4C7123339F6C43C77525F17510, L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void Photon.Realtime.TypedLobby::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__cctor_mD99DB5A8542C7C2454BD81258B8D142C36CA5B11 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobby__cctor_mD99DB5A8542C7C2454BD81258B8D142C36CA5B11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly TypedLobby Default = new TypedLobby();
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_0 = (TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 *)il2cpp_codegen_object_new(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_il2cpp_TypeInfo_var);
		TypedLobby__ctor_mB268B90F8AE8110BB439D44BCE42F126FDD52F54(L_0, /*hidden argument*/NULL);
		((TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_StaticFields*)il2cpp_codegen_static_fields_for(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_il2cpp_TypeInfo_var))->set_Default_2(L_0);
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
// System.String Photon.Realtime.TypedLobbyInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypedLobbyInfo_ToString_m70F91EE56E7C30855838F634BE734867150508CF (TypedLobbyInfo_t2DB7A0FF57E6248ACFAC6D38025890C9125FD8E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobbyInfo_ToString_m70F91EE56E7C30855838F634BE734867150508CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("TypedLobbyInfo '{0}'[{1}] rooms: {2} players: {3}", this.Name, this.Type, this.RoomCount, this.PlayerCount);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ((TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 *)__this)->get_Name_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		uint8_t L_4 = ((TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 *)__this)->get_Type_1();
		uint8_t L_5 = L_4;
		RuntimeObject * L_6 = Box(LobbyType_t398AB21E35E9CD63CD9E514CEC5475D70D1413C1_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_3;
		int32_t L_8 = __this->get_RoomCount_4();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12 = __this->get_PlayerCount_3();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral72B7AAEA9F105BC899930B342A7753298A5FCFB2, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_0047;
	}

IL_0047:
	{
		// }
		String_t* L_16 = V_0;
		return L_16;
	}
}
// System.Void Photon.Realtime.TypedLobbyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobbyInfo__ctor_m109F691269CA136A7BDD12081CE781E7CE20DB01 (TypedLobbyInfo_t2DB7A0FF57E6248ACFAC6D38025890C9125FD8E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobbyInfo__ctor_m109F691269CA136A7BDD12081CE781E7CE20DB01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5_il2cpp_TypeInfo_var);
		TypedLobby__ctor_mB268B90F8AE8110BB439D44BCE42F126FDD52F54(__this, /*hidden argument*/NULL);
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
// System.Boolean Photon.Realtime.WebFlags::get_HttpForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_HttpForward_m71FA5BD603071C70928E949A372AAE1E402D16F5 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return (WebhookFlags & HttpForwardConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (WebhookFlags & HttpForwardConst) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.WebFlags::set_HttpForward(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_HttpForward_mD5BE64F3F0E97FAAD77C7D60FF2AD96D5700A3E6 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (value)
		bool L_0 = ___value0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// WebhookFlags |= HttpForwardConst;
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2|(int32_t)1))))));
		goto IL_002b;
	}

IL_0019:
	{
		// WebhookFlags = (byte) (WebhookFlags & ~(1 << 0));
		uint8_t L_3 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-2)))))));
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendAuthCookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendAuthCookie_mF411FCD3608EF467958612D9B635877D4582AD57 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return (WebhookFlags & SendAuthCookieConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (WebhookFlags & SendAuthCookieConst) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendAuthCookie(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendAuthCookie_m147C1B1C90D27D6877320C382347216D05DE0AF7 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (value)
		bool L_0 = ___value0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// WebhookFlags |= SendAuthCookieConst;
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2|(int32_t)2))))));
		goto IL_002b;
	}

IL_0019:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 1));
		uint8_t L_3 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-3)))))));
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendSync_mB34C891F1E37E6989DFE2C7ECA9F7D637308AB66 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return (WebhookFlags & SendSyncConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (WebhookFlags & SendSyncConst) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendSync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendSync_m1DE629A4CBBA6141A5A60A463C9D21E4EE2065BF (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (value)
		bool L_0 = ___value0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// WebhookFlags |= SendSyncConst;
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2|(int32_t)4))))));
		goto IL_002b;
	}

IL_0019:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 2));
		uint8_t L_3 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-5)))))));
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendState_mB7E9008FB48768C6AA57D621F557C624DCD183F7 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return (WebhookFlags & SendStateConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)8))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (WebhookFlags & SendStateConst) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendState_mD00900C2C81235351F98A2FB00545F3E4D1DB064 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (value)
		bool L_0 = ___value0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// WebhookFlags |= SendStateConst;
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2|(int32_t)8))))));
		goto IL_002b;
	}

IL_0019:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 3));
		uint8_t L_3 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-9)))))));
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_m364837F07C4F1083993B5DE05D3896D7D3D85798 (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * __this, uint8_t ___webhookFlags0, const RuntimeMethod* method)
{
	{
		// public WebFlags(byte webhookFlags)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// WebhookFlags = webhookFlags;
		uint8_t L_0 = ___webhookFlags0;
		__this->set_WebhookFlags_1(L_0);
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__cctor_m6582F6663189E7F2817615A3B1C51426C6E0D3EF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebFlags__cctor_m6582F6663189E7F2817615A3B1C51426C6E0D3EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly static WebFlags Default = new WebFlags(0);
		WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F * L_0 = (WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F *)il2cpp_codegen_object_new(WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_il2cpp_TypeInfo_var);
		WebFlags__ctor_m364837F07C4F1083993B5DE05D3896D7D3D85798(L_0, (uint8_t)0, /*hidden argument*/NULL);
		((WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_StaticFields*)il2cpp_codegen_static_fields_for(WebFlags_t77F7A4C5693AECDDE7FF545DEAF0580CCAC8BF5F_il2cpp_TypeInfo_var))->set_Default_0(L_0);
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
// System.Void Photon.Realtime.WebRpcCallbacksContainer::.ctor(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcCallbacksContainer__ctor_m138DDD1BFA950BFD2C9F40409B8CC7EE0EA0E3F9 (WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * __this, LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcCallbacksContainer__ctor_m138DDD1BFA950BFD2C9F40409B8CC7EE0EA0E3F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRpcCallbacksContainer(LoadBalancingClient client)
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1223B9546ED77E8B481F8B48E3044CDADC546E34_il2cpp_TypeInfo_var);
		List_1__ctor_m5462D7A858BD379CFB03F04883D27C04BA82CCED(__this, /*hidden argument*/List_1__ctor_m5462D7A858BD379CFB03F04883D27C04BA82CCED_RuntimeMethod_var);
		// this.client = client;
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = ___client0;
		__this->set_client_6(L_0);
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebRpcCallbacksContainer::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcCallbacksContainer_OnWebRpcResponse_mA3D1690AD6002E55FFC76D652DB1025C8D580095 (WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * __this, OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcCallbacksContainer_OnWebRpcResponse_mA3D1690AD6002E55FFC76D652DB1025C8D580095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// this.client.UpdateCallbackTargets();
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_0 = __this->get_client_6();
		NullCheck(L_0);
		LoadBalancingClient_UpdateCallbackTargets_mB089FFBCC8CA2649A2C41B037602FB6C339DA0FC(L_0, /*hidden argument*/NULL);
		// foreach (IWebRpcCallback target in this)
		Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2  L_1 = List_1_GetEnumerator_m226CFA5DFA50CE13735EE6513D8A8B7E613DEE45(__this, /*hidden argument*/List_1_GetEnumerator_m226CFA5DFA50CE13735EE6513D8A8B7E613DEE45_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0017:
		{
			// foreach (IWebRpcCallback target in this)
			RuntimeObject* L_2 = Enumerator_get_Current_mF4F97169F8E940F596801EF80998DE4C323EA7BA_inline((Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mF4F97169F8E940F596801EF80998DE4C323EA7BA_RuntimeMethod_var);
			V_1 = L_2;
			// target.OnWebRpcResponse(response);
			RuntimeObject* L_3 = V_1;
			OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * L_4 = ___response0;
			NullCheck(L_3);
			InterfaceActionInvoker1< OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * >::Invoke(0 /* System.Void Photon.Realtime.IWebRpcCallback::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse) */, IWebRpcCallback_t88753C6C07891FBB7208902706B417D185B0B910_il2cpp_TypeInfo_var, L_3, L_4);
		}

IL_0029:
		{
			// foreach (IWebRpcCallback target in this)
			bool L_5 = Enumerator_MoveNext_mC3E14D29C667AA45F0B7C9EC1D69CC7A366303BC((Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC3E14D29C667AA45F0B7C9EC1D69CC7A366303BC_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0017;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB2610FB2D29BBB67AC83D7778780869CEDE26135((Enumerator_t67A5487A5B542C9CEF61E77E13C8A73E721FA5C2 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB2610FB2D29BBB67AC83D7778780869CEDE26135_RuntimeMethod_var);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
	{
		// }
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
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_mC87FDF0AF60CBD02DECEE672A52B8193CE63A8D9 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_mF97550D30C70A60EBFC6C5100F75F6BD1AA76A7C (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m749A18E937D3DB5BC3FCF0735AF445816008D874 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->get_U3CResultCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_m60D6C87664B71424D0E8D77FF51A8D5218FDB3A9 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ReturnCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ReturnCode_m7E83B042C1F0F384014A44B8833C205AF16BCE3B (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return ResultCode; }
		int32_t L_0 = WebRpcResponse_get_ResultCode_m749A18E937D3DB5BC3FCF0735AF445816008D874_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return ResultCode; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_mF04DF90BF2C4DD9C079F36247717F3FD47B3F913 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_m80D3C968F66A22B396A54635F100540265684371 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_DebugMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_DebugMessage_mAEED2DE44713D9E43403AD5FB9838E6FDCC7D383 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return Message; }
		String_t* L_0 = WebRpcResponse_get_Message_mF04DF90BF2C4DD9C079F36247717F3FD47B3F913_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return Message; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * WebRpcResponse_get_Parameters_mDABD8F7AB74C1C92EA3AFFA2E3C35B485139185C (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_m73D3541B04947DF3F96B17F396E1841579F2A3A5 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse__ctor_mB75062020C9467B7E6958D364B03F3E2E7E26607 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcResponse__ctor_mB75062020C9467B7E6958D364B03F3E2E7E26607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// public WebRpcResponse(OperationResponse response)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.UriPath, out value))
		OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * L_0 = ___response0;
		NullCheck(L_0);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_1 = L_0->get_Parameters_3();
		NullCheck(L_1);
		bool L_2 = Dictionary_2_TryGetValue_m5441A60FEDEEC843A47D88F1C30C9F1E3F6917FA(L_1, (uint8_t)((int32_t)209), (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5441A60FEDEEC843A47D88F1C30C9F1E3F6917FA_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// this.Name = value as string;
		RuntimeObject * L_4 = V_0;
		WebRpcResponse_set_Name_mF97550D30C70A60EBFC6C5100F75F6BD1AA76A7C_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_002d:
	{
		// this.ResultCode = -1;
		WebRpcResponse_set_ResultCode_m60D6C87664B71424D0E8D77FF51A8D5218FDB3A9_inline(__this, (-1), /*hidden argument*/NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnCode, out value))
		OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * L_5 = ___response0;
		NullCheck(L_5);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_6 = L_5->get_Parameters_3();
		NullCheck(L_6);
		bool L_7 = Dictionary_2_TryGetValue_m5441A60FEDEEC843A47D88F1C30C9F1E3F6917FA(L_6, (uint8_t)((int32_t)207), (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5441A60FEDEEC843A47D88F1C30C9F1E3F6917FA_RuntimeMethod_var);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		// this.ResultCode = (byte)value;
		RuntimeObject * L_9 = V_0;
		WebRpcResponse_set_ResultCode_m60D6C87664B71424D0E8D77FF51A8D5218FDB3A9_inline(__this, ((*(uint8_t*)((uint8_t*)UnBox(L_9, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_005a:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcParameters, out value))
		OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * L_10 = ___response0;
		NullCheck(L_10);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_11 = L_10->get_Parameters_3();
		NullCheck(L_11);
		bool L_12 = Dictionary_2_TryGetValue_m5441A60FEDEEC843A47D88F1C30C9F1E3F6917FA(L_11, (uint8_t)((int32_t)208), (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5441A60FEDEEC843A47D88F1C30C9F1E3F6917FA_RuntimeMethod_var);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		// this.Parameters = value as Dictionary<string, object>;
		RuntimeObject * L_14 = V_0;
		WebRpcResponse_set_Parameters_m73D3541B04947DF3F96B17F396E1841579F2A3A5_inline(__this, ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_14, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_007f:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnMessage, out value))
		OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * L_15 = ___response0;
		NullCheck(L_15);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_16 = L_15->get_Parameters_3();
		NullCheck(L_16);
		bool L_17 = Dictionary_2_TryGetValue_m5441A60FEDEEC843A47D88F1C30C9F1E3F6917FA(L_16, (uint8_t)((int32_t)206), (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5441A60FEDEEC843A47D88F1C30C9F1E3F6917FA_RuntimeMethod_var);
		V_4 = L_17;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a6;
		}
	}
	{
		// this.Message = value as string;
		RuntimeObject * L_19 = V_0;
		WebRpcResponse_set_Message_m80D3C968F66A22B396A54635F100540265684371_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_ToStringFull_m336F40AFCBE6062048E7BB5EB7A0F35C397AA129 (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcResponse_ToStringFull_m336F40AFCBE6062048E7BB5EB7A0F35C397AA129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("{0}={2}: {1} \"{3}\"", this.Name, SupportClass.DictionaryToString(this.Parameters), this.ResultCode, this.Message);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = WebRpcResponse_get_Name_mC87FDF0AF60CBD02DECEE672A52B8193CE63A8D9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = WebRpcResponse_get_Parameters_mDABD8F7AB74C1C92EA3AFFA2E3C35B485139185C_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		String_t* L_5 = SupportClass_DictionaryToString_m61761698CF15118FD5A3AC75B9E4F2475DCBA469(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_3;
		int32_t L_7 = WebRpcResponse_get_ResultCode_m749A18E937D3DB5BC3FCF0735AF445816008D874_inline(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_6;
		String_t* L_11 = WebRpcResponse_get_Message_mF04DF90BF2C4DD9C079F36247717F3FD47B3F913_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		String_t* L_12 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral111D994A41187DCF854E2098345172E28925CD36, L_10, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		String_t* L_13 = V_0;
		return L_13;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Realtime.LoadBalancingClient_CallbackTargetChange::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackTargetChange__ctor_m38618088F168E8FE0E6685577BF988410F072864 (CallbackTargetChange_tA10959BD5B7373AA9F6B40DB22CA100C2264C012 * __this, RuntimeObject * ___target0, bool ___addTarget1, const RuntimeMethod* method)
{
	{
		// public CallbackTargetChange(object target, bool addTarget)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Target = target;
		RuntimeObject * L_0 = ___target0;
		__this->set_Target_0(L_0);
		// this.AddTarget = addTarget;
		bool L_1 = ___addTarget1;
		__this->set_AddTarget_1(L_1);
		// }
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
// System.Void Photon.Realtime.LoadBalancingPeer_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2415133C1045F3307432FBDDE0AAB4A8E362EDCD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m2415133C1045F3307432FBDDE0AAB4A8E362EDCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * L_0 = (U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 *)il2cpp_codegen_object_new(U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6BD4A6F45A41995976A87A9D0C893E2023C8DFAA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Realtime.LoadBalancingPeer_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6BD4A6F45A41995976A87A9D0C893E2023C8DFAA (U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> Photon.Realtime.LoadBalancingPeer_<>c::<.ctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * U3CU3Ec_U3C_ctorU3Eb__4_0_mF5727C54CCBCAFA969203B3633E0FC0AA8F3E2CE (U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__4_0_mF5727C54CCBCAFA969203B3633E0FC0AA8F3E2CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Pool<Dictionary<byte, object>> paramDictionaryPool = new Pool<Dictionary<byte, object>>(() => new Dictionary<byte, object>(), x => x.Clear(), 1); // used in OpRaiseEvent() (avoids lots of new Dictionary() calls)
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_0 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_0, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Photon.Realtime.LoadBalancingPeer_<>c::<.ctor>b__4_1(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__4_1_m076E001DCCD8B3A5AB2A1E48E5C9BFB18AA922DA (U3CU3Ec_tB4A564C2046DF66976DE2F23F77AE6BBF0D0F4C0 * __this, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__4_1_m076E001DCCD8B3A5AB2A1E48E5C9BFB18AA922DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Pool<Dictionary<byte, object>> paramDictionaryPool = new Pool<Dictionary<byte, object>>(() => new Dictionary<byte, object>(), x => x.Clear(), 1); // used in OpRaiseEvent() (avoids lots of new Dictionary() calls)
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_0 = ___x0;
		NullCheck(L_0);
		Dictionary_2_Clear_m935994267561A33407112EFB85A4F13BA9D2FE36(L_0, /*hidden argument*/Dictionary_2_Clear_m935994267561A33407112EFB85A4F13BA9D2FE36_RuntimeMethod_var);
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
// System.Void Photon.Realtime.RegionHandler_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC06481CCCE3BEF4DF37B1346348AB89A9BADD1DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mC06481CCCE3BEF4DF37B1346348AB89A9BADD1DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * L_0 = (U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 *)il2cpp_codegen_object_new(U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF7622690FDCA0B2F9AF7DCCF7567474C5AA7A1E6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Realtime.RegionHandler_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF7622690FDCA0B2F9AF7DCCF7567474C5AA7A1E6 (U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Photon.Realtime.RegionHandler_<>c::<get_BestRegion>b__8_0(Photon.Realtime.Region,Photon.Realtime.Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3Cget_BestRegionU3Eb__8_0_m1AC1E7195D3E64B769C3237D6086BF7FE6051D54 (U3CU3Ec_t578BC512426115D6BA887C2DBB8061337E00FC87 * __this, Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * ___a0, Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// this.EnabledRegions.Sort((a, b) => a.Ping.CompareTo(b.Ping) );
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1 = Region_get_Ping_m2892D706F0ED7342B95B8C68AD5B98E3C9EE9C71_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_2 = ___b1;
		NullCheck(L_2);
		int32_t L_3 = Region_get_Ping_m2892D706F0ED7342B95B8C68AD5B98E3C9EE9C71_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3((int32_t*)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Photon.Realtime.RegionHandler_<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mB96A73ADCC79C0B8AAF7C754BAD81C0D90F4C7FE (U3CU3Ec__DisplayClass21_0_t1DEE0918E353BCBBF43AE2524CDEC3C4552ACC38 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Realtime.RegionHandler_<>c__DisplayClass21_0::<PingMinimumOfRegions>b__0(Photon.Realtime.Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CPingMinimumOfRegionsU3Eb__0_mB1F982E2ACCA81FC2D0B0BF12E2FAF788F89AE95 (U3CU3Ec__DisplayClass21_0_t1DEE0918E353BCBBF43AE2524CDEC3C4552ACC38 * __this, Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * ___r0, const RuntimeMethod* method)
{
	{
		// Region preferred = this.EnabledRegions.Find(r => r.Code.Equals(prevBestRegionCode));
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_0 = ___r0;
		NullCheck(L_0);
		String_t* L_1 = Region_get_Code_m3C0CF3D5F0C6E60B08BEAB2223212B8A23B1C535_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_prevBestRegionCode_0();
		NullCheck(L_1);
		bool L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegionPingCoroutineU3Ed__19__ctor_m14AA75A055CB1DE9121DA55EEA505223CF5404D2 (U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegionPingCoroutineU3Ed__19_System_IDisposable_Dispose_m0D35937CF36352DF0299E2B5453E3483506C2D1B (U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRegionPingCoroutineU3Ed__19_MoveNext_mA1691C20A41DE791E371B0749AD69F0329027C4F (U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRegionPingCoroutineU3Ed__19_MoveNext_mA1691C20A41DE791E371B0749AD69F0329027C4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B20_0 = 0;
	int32_t G_B25_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0030;
	}

IL_001f:
	{
		goto IL_0032;
	}

IL_0021:
	{
		goto IL_011e;
	}

IL_0026:
	{
		goto IL_0219;
	}

IL_002b:
	{
		goto IL_029e;
	}

IL_0030:
	{
		return (bool)0;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// this.region.Ping = PingWhenFailed;
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_3 = L_2->get_region_4();
		IL2CPP_RUNTIME_CLASS_INIT(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var);
		int32_t L_4 = ((RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var))->get_PingWhenFailed_3();
		NullCheck(L_3);
		Region_set_Ping_m2344D4A01D7469DB0CE158C98EC2067BD5F6A435_inline(L_3, L_4, /*hidden argument*/NULL);
		// float rttSum = 0.0f;
		__this->set_U3CrttSumU3E5__1_3((0.0f));
		// int replyCount = 0;
		__this->set_U3CreplyCountU3E5__2_4(0);
		// Stopwatch sw = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_5 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_5, /*hidden argument*/NULL);
		__this->set_U3CswU3E5__3_5(L_5);
		// for (this.CurrentAttempt = 0; this.CurrentAttempt < Attempts; this.CurrentAttempt++)
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		L_6->set_CurrentAttempt_6(0);
		goto IL_0239;
	}

IL_007e:
	{
		// bool overtime = false;
		__this->set_U3CovertimeU3E5__4_6((bool)0);
		// sw.Reset();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_7 = __this->get_U3CswU3E5__3_5();
		NullCheck(L_7);
		Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14(L_7, /*hidden argument*/NULL);
		// sw.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_8 = __this->get_U3CswU3E5__3_5();
		NullCheck(L_8);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_8, /*hidden argument*/NULL);
	}

IL_009e:
	try
	{ // begin try (depth: 1)
		// this.ping.StartPing(this.regionAddress);
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * L_10 = L_9->get_ping_9();
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_11 = __this->get_U3CU3E4__this_2();
		NullCheck(L_11);
		String_t* L_12 = L_11->get_regionAddress_5();
		NullCheck(L_10);
		VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean Photon.Realtime.PhotonPing::StartPing(System.String) */, L_10, L_12);
		goto IL_00e2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00be;
		throw e;
	}

CATCH_00be:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t *)__exception_local);
		Exception_t * L_13 = V_1;
		__this->set_U3CeU3E5__6_8(L_13);
		// Debug.Log("catched: " + e);
		Exception_t * L_14 = __this->get_U3CeU3E5__6_8();
		String_t* L_15 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral01BC6FF5AB7C7B79FA9D79F6E208A0C99F1F2A6F, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// break;
		goto IL_0254;
	} // end catch (depth: 1)

IL_00e2:
	{
		goto IL_0126;
	}

IL_00e4:
	{
		// if (sw.ElapsedMilliseconds >= MaxMilliseconsPerPing)
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_16 = __this->get_U3CswU3E5__3_5();
		NullCheck(L_16);
		int64_t L_17 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var);
		int32_t L_18 = ((RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var))->get_MaxMilliseconsPerPing_2();
		V_2 = (bool)((((int32_t)((((int64_t)L_17) < ((int64_t)(((int64_t)((int64_t)L_18)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_0109;
		}
	}
	{
		// overtime = true;
		__this->set_U3CovertimeU3E5__4_6((bool)1);
		// break;
		goto IL_013d;
	}

IL_0109:
	{
		// yield return 0; // keep this loop tight, to avoid adding local lag to rtt.
		int32_t L_20 = 0;
		RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
		__this->set_U3CU3E2__current_1(L_21);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_011e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0126:
	{
		// while (!this.ping.Done())
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_22 = __this->get_U3CU3E4__this_2();
		NullCheck(L_22);
		PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * L_23 = L_22->get_ping_9();
		NullCheck(L_23);
		bool L_24 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Photon.Realtime.PhotonPing::Done() */, L_23);
		V_3 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_00e4;
		}
	}

IL_013d:
	{
		// sw.Stop();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_26 = __this->get_U3CswU3E5__3_5();
		NullCheck(L_26);
		Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63(L_26, /*hidden argument*/NULL);
		// int rtt = (int)sw.ElapsedMilliseconds;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_27 = __this->get_U3CswU3E5__3_5();
		NullCheck(L_27);
		int64_t L_28 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_27, /*hidden argument*/NULL);
		__this->set_U3CrttU3E5__5_7((((int32_t)((int32_t)L_28))));
		// this.rttResults.Add(rtt);
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_29 = __this->get_U3CU3E4__this_2();
		NullCheck(L_29);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_30 = L_29->get_rttResults_10();
		int32_t L_31 = __this->get_U3CrttU3E5__5_7();
		NullCheck(L_30);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_30, L_31, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// if (IgnoreInitialAttempt && this.CurrentAttempt == 0)
		IL2CPP_RUNTIME_CLASS_INIT(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var);
		bool L_32 = ((RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var))->get_IgnoreInitialAttempt_1();
		if (!L_32)
		{
			goto IL_0189;
		}
	}
	{
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_33 = __this->get_U3CU3E4__this_2();
		NullCheck(L_33);
		int32_t L_34 = L_33->get_CurrentAttempt_6();
		G_B20_0 = ((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		goto IL_018a;
	}

IL_0189:
	{
		G_B20_0 = 0;
	}

IL_018a:
	{
		V_4 = (bool)G_B20_0;
		bool L_35 = V_4;
		if (!L_35)
		{
			goto IL_0194;
		}
	}
	{
		goto IL_0200;
	}

IL_0194:
	{
		// else if (this.ping.Successful && !overtime)
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_36 = __this->get_U3CU3E4__this_2();
		NullCheck(L_36);
		PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * L_37 = L_36->get_ping_9();
		NullCheck(L_37);
		bool L_38 = L_37->get_Successful_1();
		if (!L_38)
		{
			goto IL_01b1;
		}
	}
	{
		bool L_39 = __this->get_U3CovertimeU3E5__4_6();
		G_B25_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		goto IL_01b2;
	}

IL_01b1:
	{
		G_B25_0 = 0;
	}

IL_01b2:
	{
		V_5 = (bool)G_B25_0;
		bool L_40 = V_5;
		if (!L_40)
		{
			goto IL_0200;
		}
	}
	{
		// rttSum += rtt;
		float L_41 = __this->get_U3CrttSumU3E5__1_3();
		int32_t L_42 = __this->get_U3CrttU3E5__5_7();
		__this->set_U3CrttSumU3E5__1_3(((float)il2cpp_codegen_add((float)L_41, (float)(((float)((float)L_42))))));
		// replyCount++;
		int32_t L_43 = __this->get_U3CreplyCountU3E5__2_4();
		V_6 = L_43;
		int32_t L_44 = V_6;
		__this->set_U3CreplyCountU3E5__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1)));
		// this.region.Ping = (int)((rttSum) / replyCount);
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_45 = __this->get_U3CU3E4__this_2();
		NullCheck(L_45);
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_46 = L_45->get_region_4();
		float L_47 = __this->get_U3CrttSumU3E5__1_3();
		int32_t L_48 = __this->get_U3CreplyCountU3E5__2_4();
		NullCheck(L_46);
		Region_set_Ping_m2344D4A01D7469DB0CE158C98EC2067BD5F6A435_inline(L_46, (((int32_t)((int32_t)((float)((float)L_47/(float)(((float)((float)L_48)))))))), /*hidden argument*/NULL);
	}

IL_0200:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_49 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_49, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_49);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0219:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (this.CurrentAttempt = 0; this.CurrentAttempt < Attempts; this.CurrentAttempt++)
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_50 = __this->get_U3CU3E4__this_2();
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_51 = __this->get_U3CU3E4__this_2();
		NullCheck(L_51);
		int32_t L_52 = L_51->get_CurrentAttempt_6();
		NullCheck(L_50);
		L_50->set_CurrentAttempt_6(((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1)));
	}

IL_0239:
	{
		// for (this.CurrentAttempt = 0; this.CurrentAttempt < Attempts; this.CurrentAttempt++)
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_53 = __this->get_U3CU3E4__this_2();
		NullCheck(L_53);
		int32_t L_54 = L_53->get_CurrentAttempt_6();
		IL2CPP_RUNTIME_CLASS_INIT(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var);
		int32_t L_55 = ((RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_StaticFields*)il2cpp_codegen_static_fields_for(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139_il2cpp_TypeInfo_var))->get_Attempts_0();
		V_7 = (bool)((((int32_t)L_54) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_7;
		if (L_56)
		{
			goto IL_007e;
		}
	}

IL_0254:
	{
		// this.Done = true;
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_57 = __this->get_U3CU3E4__this_2();
		NullCheck(L_57);
		RegionPinger_set_Done_m24F52F5A80F1DBCE7FB49D542884D7D9060EB565_inline(L_57, (bool)1, /*hidden argument*/NULL);
		// this.ping.Dispose();
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_58 = __this->get_U3CU3E4__this_2();
		NullCheck(L_58);
		PhotonPing_tB78082B526E48B82BE1A26E96CEEF16855FCAA9D * L_59 = L_58->get_ping_9();
		NullCheck(L_59);
		VirtActionInvoker0::Invoke(7 /* System.Void Photon.Realtime.PhotonPing::Dispose() */, L_59);
		// this.onDoneCall(this.region);
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_60 = __this->get_U3CU3E4__this_2();
		NullCheck(L_60);
		Action_1_t231742BF57382D661E5293DFD290CFA71FDAD752 * L_61 = L_60->get_onDoneCall_8();
		RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * L_62 = __this->get_U3CU3E4__this_2();
		NullCheck(L_62);
		Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * L_63 = L_62->get_region_4();
		NullCheck(L_61);
		Action_1_Invoke_mD49F210C998553BDD0B2CB38A3089052FC20F675(L_61, L_63, /*hidden argument*/Action_1_Invoke_mD49F210C998553BDD0B2CB38A3089052FC20F675_RuntimeMethod_var);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_029e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRegionPingCoroutineU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m305CABF14729412A20B4D773A3200D7AD1A3A658 (U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegionPingCoroutineU3Ed__19_System_Collections_IEnumerator_Reset_mFCCB66E1232CF6645B1DA455C9D5154948EE2ECB (U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRegionPingCoroutineU3Ed__19_System_Collections_IEnumerator_Reset_mFCCB66E1232CF6645B1DA455C9D5154948EE2ECB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CRegionPingCoroutineU3Ed__19_System_Collections_IEnumerator_Reset_mFCCB66E1232CF6645B1DA455C9D5154948EE2ECB_RuntimeMethod_var);
	}
}
// System.Object Photon.Realtime.RegionPinger_<RegionPingCoroutine>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRegionPingCoroutineU3Ed__19_System_Collections_IEnumerator_get_Current_m196E9A3F91AD0D67555FD8E1C45476A7170689F3 (U3CRegionPingCoroutineU3Ed__19_tEF56D244EF97D066044008185D1A6C5854B9E43B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m50B0F7EE07B876923EFF2EF60778A037A0FA9DA6_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->get_U3CPlayerCountU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m937391BF1C4BCB01331FFF4E5C93664ECC9A56FA_inline (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPlayerCountU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_0 = __this->get_U3CLoadBalancingPeerU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_mB84C1C7601B9506EDF2A5A5F22BAA90C53AA426D_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mFA53FE244C2CBAD64709882193BA30826B8B69C5_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * LoadBalancingClient_get_AuthValues_m6CFE88D5746FE66CF036F3BDEE97FD3F3B080947_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m08A780475DA96A78E6D982816DB4002A149BB1AA_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public string CloudRegion { get; private set; }
		String_t* L_0 = __this->get_U3CCloudRegionU3Ek__BackingField_42();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * PhotonPeer_get_SocketImplementation_m16659ED69E90B56CC9765F73AF8528BAE89C293F_inline (PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CSocketImplementationU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * LoadBalancingClient_get_CurrentLobby_m3FD1849CCACF880D859A75E3006627CC77E847E7_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public TypedLobby CurrentLobby { get; internal set; }
		TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * L_0 = __this->get_U3CCurrentLobbyU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public Room CurrentRoom { get; set; }
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_0 = __this->get_U3CCurrentRoomU3Ek__BackingField_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_mC8284CC749DD6C046B97C985CA64B7B3A96CB5A8_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public string GameServerAddress { get; protected internal set; }
		String_t* L_0 = __this->get_U3CGameServerAddressU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m749A18E937D3DB5BC3FCF0735AF445816008D874_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->get_U3CResultCodeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_mF04DF90BF2C4DD9C079F36247717F3FD47B3F913_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_mF97550D30C70A60EBFC6C5100F75F6BD1AA76A7C_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_m60D6C87664B71424D0E8D77FF51A8D5218FDB3A9_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_m73D3541B04947DF3F96B17F396E1841579F2A3A5_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_m80D3C968F66A22B396A54635F100540265684371_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_mC87FDF0AF60CBD02DECEE672A52B8193CE63A8D9_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * WebRpcResponse_get_Parameters_mDABD8F7AB74C1C92EA3AFFA2E3C35B485139185C_inline (WebRpcResponse_t413EAD293A9B6A8541D4BFF9EE2366C825E272E2 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Region_get_Ping_m2892D706F0ED7342B95B8C68AD5B98E3C9EE9C71_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, const RuntimeMethod* method)
{
	{
		// public int Ping { get; set; }
		int32_t L_0 = __this->get_U3CPingU3Ek__BackingField_3();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Region_set_Ping_m2344D4A01D7469DB0CE158C98EC2067BD5F6A435_inline (Region_t89C627A5FBAABB9D76D611FB9A45515289752DA0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Ping { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPingU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionPinger_set_Done_m24F52F5A80F1DBCE7FB49D542884D7D9060EB565_inline (RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Done { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CDoneU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
