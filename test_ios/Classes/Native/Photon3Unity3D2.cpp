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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// ExitGames.Client.Photon.ByteArraySlicePool
struct ByteArraySlicePool_t4CFA207F928745C6F3364B571853A949494D38C6;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// ExitGames.Client.Photon.EventData
struct EventData_tD0BF7DDA508EC2311DD363D9A636BE4FB7481C3A;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_tD431E2C0970B5C4003C9D5EF714BAE4CA9DEFF55;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.IOAsyncCallback
struct IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_t48BB73E6D08C75C189493872CB147112E4CCCA28;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_tF6D383A032E13DAEDCE2847F4805D6940CDC3B4B;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_tBF0AC8D2B76589CB71C2657718D0E0C46FD3738E;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.MulticastDelegate
struct MulticastDelegate_t;
// ExitGames.Client.Photon.NCommand
struct NCommand_t14CE1A9D4342055FD9A099DACBD0654127700F36;
// ExitGames.Client.Photon.NCommandPool
struct NCommandPool_tA5658B1EDA2DA6CF76C8483909CD01B1A211625E;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9;
// ExitGames.Client.Photon.SocketTcp
struct SocketTcp_tCCF7F43F38912B5FA3E9AFB1C1860893982D49D8;
// ExitGames.Client.Photon.SocketUdp
struct SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6;
// ExitGames.Client.Photon.SocketUdpAsync
struct SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7;
// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D;
// ExitGames.Client.Photon.SupportClass
struct SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F;
// ExitGames.Client.Photon.TPeer
struct TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t3D2409F70966749F514326896715927BF6E3A975;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct LogCallbackDelegate_t8309D667EC65641C9EDFF5CEE4AD7CC79A89BF17;
// ExitGames.Client.Photon.IPhotonSocket/<>c
struct U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F;
// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass109_0
struct U3CU3Ec__DisplayClass109_0_tB9C06CE21609B0986325FA09737A88C5CD37480B;
// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass110_0
struct U3CU3Ec__DisplayClass110_0_tACE8A621AF95A38B1BDC370F5BE77A0A4195BCD4;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46;
// ExitGames.Client.Photon.SocketNative/LogCallbackDelegate
struct LogCallbackDelegate_t2E023A5660AA6B1F913427471DE053B44315DD2E;
// ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext
struct ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395;
// ExitGames.Client.Photon.SupportClass/<>c
struct U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A;
// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246;
// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A;
// ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
struct ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t32CE63FA54BF126A18FDF69E778B381FF5EA4A15;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<System.Net.IPAddress,System.String>
struct Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t95750B1CF3F7626EC7AB30893A86E08F445DD75D;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_tB2A55ED8A3FA38E7CBC04EEC143DF532D721FB1D;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>
struct List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Threading.Thread>
struct List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_tC7CE6FD82D5475E0A375868406B2F269E1978A19;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Object>[]
struct EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
// ExitGames.Client.Photon.PeerBase/MyAction[]
struct MyActionU5BU5D_t4A3DCFDDFA7401BF8DFDEDC3458659FDD9C16169;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// ExitGames.Client.Photon.StreamBuffer[]
struct StreamBufferU5BU5D_t9144B1E6B25703043A6AF9333794E41D773C68CE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687;
// System.Threading.Thread[]
struct ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C RuntimeClass* AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionStateValue_t352CF1A14703A4CADF8BAC0142D148058CB6A807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeliveryMode_tC79CA467CAC59E5D0828AF87235DAF4AF7143B91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoProvider_tD431E2C0970B5C4003C9D5EF714BAE4CA9DEFF55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonSocketState_t2A5155A285C84EEDE019DF16C2DC769F192739AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Protocol_t1557750CB18DE3AE3EE581C9D2D6381A1D540CFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketTcp_tCCF7F43F38912B5FA3E9AFB1C1860893982D49D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_t05EBFF277C260B547926CE9330EB31A757B4FD8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466____022637F85E8F30533B9E68C6D7090348779F1C153369E421F811E0C07B928364_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466____D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A;
IL2CPP_EXTERN_C String_t* _stringLiteral0534DA20888B35E2203B7A82A0DB23B602CA0406;
IL2CPP_EXTERN_C String_t* _stringLiteral070D193C86BF98D0196B0B2AB6F7CF0437FEF24B;
IL2CPP_EXTERN_C String_t* _stringLiteral0844A3E92F62DCD91CD00D9084B9DB82474F02CA;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral105DCD844D9A45876F13A3503C14C3FC3A5186BA;
IL2CPP_EXTERN_C String_t* _stringLiteral106BEAE98A63EADA0EA9A8EBE5B91FD6703219EE;
IL2CPP_EXTERN_C String_t* _stringLiteral191D7F30D495BBE4F52FE89B64D411898274ED12;
IL2CPP_EXTERN_C String_t* _stringLiteral1D13C9FF2BABB29CC1B62A9FA42C9A371FA95548;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral282EBC3C837743F81BC130AD86C3F294D1DFBCDD;
IL2CPP_EXTERN_C String_t* _stringLiteral2A2D33772A2965A6EC7A260D6AEF68730D411384;
IL2CPP_EXTERN_C String_t* _stringLiteral331681871198787BC7941BD421E635F40B86CE38;
IL2CPP_EXTERN_C String_t* _stringLiteral3A5C73D4EFF4A8952E9F05744AF2498E099ACC1F;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC8D7011607DEE69C89FE518BB89125A3FD0309;
IL2CPP_EXTERN_C String_t* _stringLiteral4D5285CF040B43C9DE99AD4CEF2B806147D29654;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4DFA332AE0D80C3AC1B1B5FAFF88FFE9B1F07B91;
IL2CPP_EXTERN_C String_t* _stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B;
IL2CPP_EXTERN_C String_t* _stringLiteral5A22EC4707797C7AF782D7EE636368480C673139;
IL2CPP_EXTERN_C String_t* _stringLiteral5AF74A218C743A64A61DCB2CB5C232805167A4B2;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5C4ADB9302F8BA90019E6CDA1D9EABEB6C36113A;
IL2CPP_EXTERN_C String_t* _stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A;
IL2CPP_EXTERN_C String_t* _stringLiteral69DF42ED7D9003ADBED8F0B907784D7A1E6B9B80;
IL2CPP_EXTERN_C String_t* _stringLiteral7320E85A8DE6C28D8BEFAC38D01CE66FADFE0968;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43;
IL2CPP_EXTERN_C String_t* _stringLiteral842A27E71750F8CF75D57999C7CBBC93D24F416D;
IL2CPP_EXTERN_C String_t* _stringLiteral85278D80D353BA481AED82DD9BDB4E99BB5FD7B2;
IL2CPP_EXTERN_C String_t* _stringLiteral86A8294451A16C9100336EDF55F2B68CBD45BD67;
IL2CPP_EXTERN_C String_t* _stringLiteral872832AF3EB23DF490D84F89198394B33CB88A29;
IL2CPP_EXTERN_C String_t* _stringLiteral872DE60CB2239200B569B73387AEE6DEF5D86F24;
IL2CPP_EXTERN_C String_t* _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3;
IL2CPP_EXTERN_C String_t* _stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8;
IL2CPP_EXTERN_C String_t* _stringLiteral908BEA1D5D8065EACBEE7F2EC16BAE6A218408FB;
IL2CPP_EXTERN_C String_t* _stringLiteral919A195066BDFAFE43F7191F4F6DE66CCB82EF97;
IL2CPP_EXTERN_C String_t* _stringLiteral97568619B8C86463263770205820BF59EFA6457B;
IL2CPP_EXTERN_C String_t* _stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B;
IL2CPP_EXTERN_C String_t* _stringLiteral9CEE2204F2243F41DEEA3BB1E28F0E8465F59A5B;
IL2CPP_EXTERN_C String_t* _stringLiteral9D09DA33FDC3D1BC48C84D54B554B437D7EB433B;
IL2CPP_EXTERN_C String_t* _stringLiteralA0E8805215CAEBEA26EA83666E63812F01D6FE94;
IL2CPP_EXTERN_C String_t* _stringLiteralA11767B3AA037BEA810EDDF4B485E8DEC8406BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6;
IL2CPP_EXTERN_C String_t* _stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF8F05C11CD4B88A9CDCF0903EAA82BF03A32B6;
IL2CPP_EXTERN_C String_t* _stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralAC74A02B4CEED8538DF27EC8749B19526C0B8E0A;
IL2CPP_EXTERN_C String_t* _stringLiteralAD1E171FE9E55598FC5280CDCCB06C8AA67B5883;
IL2CPP_EXTERN_C String_t* _stringLiteralB73EE191F0E9F1AF4D345769EC47718AC55BF4D3;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC6F3CFE29387EC26E2DA25035AE8EFD559875EF5;
IL2CPP_EXTERN_C String_t* _stringLiteralC7D39E360ACE7C6B120D7DEAA16B87D3B72EF7DD;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B903907D31435907E8AF7300E995E55A75F00B;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C9B128ACA303C17E5837E2ACD6F203E1E4CC69;
IL2CPP_EXTERN_C String_t* _stringLiteralCB5FDD5E178BD05010055C518503A047E0BAB175;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC;
IL2CPP_EXTERN_C String_t* _stringLiteralD6789EA58E424F90511FD4613F868E6EBBA26766;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE006A5CE7156A78A0DE8873C065D509F1F758BCE;
IL2CPP_EXTERN_C String_t* _stringLiteralE43E64E1F69748B6D15E9C8A2E69C9A3A3C4D800;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3AA2628BF342A84CE7EB2AD8B7E300B7A91D26;
IL2CPP_EXTERN_C String_t* _stringLiteralF09647061E14A6AB82D0FE232AB0BC1838440C6D;
IL2CPP_EXTERN_C String_t* _stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1;
IL2CPP_EXTERN_C String_t* _stringLiteralF8F808E4FCC3D0D0121C42B98143D2469E80A9E9;
IL2CPP_EXTERN_C String_t* _stringLiteralFA07B40CD116E31A98C5D50C825A7ADEE8FC7227;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA3FB9719F4CC92744A8E6B02AD749893F764F1B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDC956B210DA5F5641333D067CE0C776477426121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9D6B83E05585D70614A61164D8E117620542B310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m00BA02E7355F634D3E02D8EC1CC5B8933A219F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6C79F9A026ACCB196BD430F260975C794ED4BD9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m69714C34DB1FDD074135DC48C79A49FF32A48867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mAAFDB42A3A04F93B97970BB5FA4EA046FD4568C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m880AD577F78AF8EC551CB7FB275790104FC2B28A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m34FDE8AB5875E6EF71EDB8FACB5C21591EF3C9E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3C888313B73CFAA9196022BCADD304B04ED400D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE34118C35A0CA41308255F3355DB36F8B99102EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m35B4314C8C0E347FB9ED41E23C03A01AB4ACE13C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA65130795293D1AD3BEFFCB9C2149507FFC273DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m40C58524762A67779257F0CF8835AB6EEE804F44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m9ED94410BC4CB5FE748E2752442D39ACF71FBEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mD751FF13AC697B5D8FD2BE494B530DEE1ED08F7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketUdpAsync_DnsAndConnect_mA1DEE4C23497CCB6AD832942F4347A41638766C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketUdpAsync_OnReceive_m2240FD4F9B9FD00C3FC208AE67B01348A7A618E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketUdp_DnsAndConnect_m967E81B1709F7E899E807D38CA35DFFD4E9B8B6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketUdp_ReceiveLoop_m0ACF9A8BA7FAA9B7EDB7BA09CE97EF1099321DEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamBuffer_ReadByte_m86008CCD250C16246BB2F6C434CF7EBF0F1C090D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamBuffer_Seek_mE74ACA1C6EBDB210E4C12A01147C0EAAE2BE7BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SupportClass_StartBackgroundCalls_mE36D14C2659FDD4E5153917520969372BF6939BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TPeer_EnqueueMessageAsPayload_m8488970C5FAFD200E3F2A9C5D3345D3D6DFB538F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__20_0_mB4858F1DDE2FE882183DAAE63EC29E149BAFBF4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m6B788C18E3B81448F3B4087439442F536EE53027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t IPhotonSocket_set_ServerIpAddress_mBCF0D1433A18F30CE257A8ED300B500675310C5BPhoton3Unity3D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogCallbackDelegate_BeginInvoke_m323A2FA5BEEF41A02392C4E0C37CE25017B3E432_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LogCallbackDelegate_BeginInvoke_m96B96426C56E5AF6E6896BFF7BD303BC8E34667F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdpAsync_Connect_m844154F0B6013E324D1E7F998D2066F528A16BF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdpAsync_Disconnect_mEEF49D5095AC78AB7600E1A0E9F81748DA107B16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdpAsync_Dispose_m561D2D7BC30239806366F9A924EE028DE06EB5A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdpAsync_DnsAndConnect_mA1DEE4C23497CCB6AD832942F4347A41638766C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdpAsync_OnReceive_m2240FD4F9B9FD00C3FC208AE67B01348A7A618E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdpAsync_Send_m00E01AA67FDCE6D05B2484A4EF159252A15304D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdpAsync_StartReceive_mA1B1BBEE6A409D3EB61324740A0C7B5514E85E14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdpAsync__ctor_m13DF5B77BFC0FE79CD95AFDA99ABE34829BFC51A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdp_Connect_mA300F39F22C592272EF56497B0FF776594F293BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdp_Disconnect_mA22067DA845F4CE0B6B35546EB77CA1B27C14C5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdp_Dispose_m84CC363B03A5650785884B689052FDC55CFB5AB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdp_DnsAndConnect_m967E81B1709F7E899E807D38CA35DFFD4E9B8B6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdp_ReceiveLoop_m0ACF9A8BA7FAA9B7EDB7BA09CE97EF1099321DEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdp_Send_mAD11BA0872CEC7F13CB9133DD5B64E672D16A240_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketUdp__ctor_m3B5854FBF8F85DDCB835756F69C31396C81832FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamBuffer_ReadByte_m86008CCD250C16246BB2F6C434CF7EBF0F1C090D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamBuffer_Seek_mE74ACA1C6EBDB210E4C12A01147C0EAAE2BE7BE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamBuffer_ToArrayFromPos_mC8D1058B4978E5E58B7F4F3397AC183D7C21F0C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamBuffer_ToArray_m88D3D14741F89657479737316F55B3F5B5B99703_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamBuffer__ctor_m47381FB62A38E25EF2D161B96CB551950E4390D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_ByteArrayToString_m06CC2E1D06F507B68285C4540F8F9747765AB594_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_CalculateCrc_m23B97C224BB2594C0EEE7359D211CF9B7CDB18EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_DictionaryToString_m0D5D175949A1EC31C2642F41AEAEDE72161DD275_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_DictionaryToString_m61761698CF15118FD5A3AC75B9E4F2475DCBA469_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_GetMethods_mC06882593678E83C3CC52D719B01206FF0A691D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_HashtableToString_mA4B9B00BAA7C47E0AAB05747D640772F4237E6B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_InitializeTable_mDF09AF40DDFA7BCB8069D4B5E998A997A4000C17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_StartBackgroundCalls_mE36D14C2659FDD4E5153917520969372BF6939BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_StopAllBackgroundCalls_mE201AD929402188CBF233B4E79DA6C0D8053F628_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_StopBackgroundCalls_m1B2BB2131153995A186447F978684CA6FA5DE618_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_WriteStackTrace_mD32365C3335A829A276C4ABB0637293EF71C48BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass__cctor_mEA1CEFE7A8DF9EBC913D8B798AF606717FA1DC9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_Connect_m9132775D693195CEF40B8AD1C99F582ACF28A205_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_Disconnect_m484FF6448A4ABD688E2AF7ABEA844FEE0B928878_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_DispatchIncomingCommands_m2E200CB9BF2AE80579D1C1E18FCA4058E0D7B5B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_EnqueueInit_mB126F729AAB6D2AF1716DE2243CF1640FDD603FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_EnqueueMessageAsPayload_m8488970C5FAFD200E3F2A9C5D3345D3D6DFB538F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_EnqueueMessage_m1934EF93EB714A47A1F6B6815EF72EE307E97CAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_EnqueueOperation_m47E8B4948096B255B8963BDBDAF5F067D12F7907_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_FetchServerTimestamp_mDBC2FCE51839BBEC037B2E95B1071DA8ADF50EC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_InitPeerBase_m48C8AF7FD6C50AA9E220C0912B2E1698FD7C17E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_OnConnect_m2E3DF2626E88250CBA8879425A421F5281552348_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_ReadPingResult_mA4AAA5DAFF806D19075BB5CA9D54E11140EFEC68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_ReadPingResult_mEDCCB531193E06273913A690641064FD5A1D9193_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_ReceiveIncomingCommands_m55A12AF075775D36517052D9330FE950528E1F7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_SendAcksOnly_mB72F6F1D6CAC258E99148A7A6FDBD333AC59184A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_SendData_m2D0567C7C1A88C8C95C11E4E350ECD2CA4279E31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_SendOutgoingCommands_m03BC5E284C2C2603CEDC0E88100CEABF13443912_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_SendPing_mB4A90BB52717584E836C4F1D0966A45404AFAB2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_SerializeOperationToMessage_mE33A80F82068818FB4527005896869F06B111AF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_StopConnection_m699C9B771DAECF3B28254CE4F9244464AD6B3C1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer__cctor_m152EAE93822F7EE03EC00A529A869B5E0E73630B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer__ctor_m20D416F157C3A5AF3D6FC91C67E7914B9065FF3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPeer_get_QueuedIncomingCommandsCount_mDBA311DE6F9BFDDF406122349066593E4698213D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadSafeRandom_Next_mB9B77D33AF8E77BA61DC63A6859D294BAA6DD7BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadSafeRandom__cctor_m4A363FA899BD1190C630990B8219F6B3E153978B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrafficStatsGameLevel_DispatchIncomingCommandsCalled_m935E56E2B34EB76789378AA2504A1AC1822637BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrafficStatsGameLevel_SendOutgoingCommandsCalled_mF77174D28C05D68B895EAEEF634A28CD5FFCFED5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrafficStatsGameLevel_ToStringVitalStats_mE1DBBD1250C74B291631E22C2399030569C90B47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrafficStatsGameLevel_ToString_mEE249BACB6E7BC9A71D0C18E25ACCA8304640D27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrafficStats_ToString_mE92A7FDDC4286EAAC56A1B88DDE04DEFB514811E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CGetIpAddressesU3Eb__55_0_m20731984220957D19C412202D61E8CA9028CF648_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass109_0_U3CEnqueueDebugReturnU3Eb__0_m0AE91F6C1C01F6FA9FBFEC098799B883A5FF923A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass110_0_U3CEnqueueStatusCallbackU3Eb__0_mEBF38A46D7965E06274002AF3DDFCF71529EBACF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m6B788C18E3B81448F3B4087439442F536EE53027_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m761835AF841685C6EF22649109E0F21982506FFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mAEDB6D0332C47C74489C3F7CCD7F7EAD0CA39C0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version__cctor_m95626072D1AF8CBCD49D9657D79187CB8E84E69E_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// ExitGames.Client.Photon.IPhotonSocket_<>c
struct  U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F_StaticFields
{
public:
	// ExitGames.Client.Photon.IPhotonSocket_<>c ExitGames.Client.Photon.IPhotonSocket_<>c::<>9
	U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F * ___U3CU3E9_0;
	// System.Func`2<System.Net.IPAddress,System.String> ExitGames.Client.Photon.IPhotonSocket_<>c::<>9__55_0
	Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * ___U3CU3E9__55_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__55_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F_StaticFields, ___U3CU3E9__55_0_1)); }
	inline Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * get_U3CU3E9__55_0_1() const { return ___U3CU3E9__55_0_1; }
	inline Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 ** get_address_of_U3CU3E9__55_0_1() { return &___U3CU3E9__55_0_1; }
	inline void set_U3CU3E9__55_0_1(Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * value)
	{
		___U3CU3E9__55_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__55_0_1), (void*)value);
	}
};


// ExitGames.Client.Photon.IProtocol
struct  IProtocol_tF6D383A032E13DAEDCE2847F4805D6940CDC3B4B  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.ByteArraySlicePool ExitGames.Client.Photon.IProtocol::ByteArraySlicePool
	ByteArraySlicePool_t4CFA207F928745C6F3364B571853A949494D38C6 * ___ByteArraySlicePool_0;

public:
	inline static int32_t get_offset_of_ByteArraySlicePool_0() { return static_cast<int32_t>(offsetof(IProtocol_tF6D383A032E13DAEDCE2847F4805D6940CDC3B4B, ___ByteArraySlicePool_0)); }
	inline ByteArraySlicePool_t4CFA207F928745C6F3364B571853A949494D38C6 * get_ByteArraySlicePool_0() const { return ___ByteArraySlicePool_0; }
	inline ByteArraySlicePool_t4CFA207F928745C6F3364B571853A949494D38C6 ** get_address_of_ByteArraySlicePool_0() { return &___ByteArraySlicePool_0; }
	inline void set_ByteArraySlicePool_0(ByteArraySlicePool_t4CFA207F928745C6F3364B571853A949494D38C6 * value)
	{
		___ByteArraySlicePool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ByteArraySlicePool_0), (void*)value);
	}
};


// ExitGames.Client.Photon.NetworkSimulationSet
struct  NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800  : public RuntimeObject
{
public:
	// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::isSimulationEnabled
	bool ___isSimulationEnabled_0;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLag
	int32_t ___outgoingLag_1;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingJitter
	int32_t ___outgoingJitter_2;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLossPercentage
	int32_t ___outgoingLossPercentage_3;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLag
	int32_t ___incomingLag_4;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingJitter
	int32_t ___incomingJitter_5;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLossPercentage
	int32_t ___incomingLossPercentage_6;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.NetworkSimulationSet::peerBase
	PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * ___peerBase_7;
	// System.Threading.Thread ExitGames.Client.Photon.NetworkSimulationSet::netSimThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___netSimThread_8;
	// System.Threading.ManualResetEvent ExitGames.Client.Photon.NetworkSimulationSet::NetSimManualResetEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___NetSimManualResetEvent_9;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesOut>k__BackingField
	int32_t ___U3CLostPackagesOutU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesIn>k__BackingField
	int32_t ___U3CLostPackagesInU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_isSimulationEnabled_0() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800, ___isSimulationEnabled_0)); }
	inline bool get_isSimulationEnabled_0() const { return ___isSimulationEnabled_0; }
	inline bool* get_address_of_isSimulationEnabled_0() { return &___isSimulationEnabled_0; }
	inline void set_isSimulationEnabled_0(bool value)
	{
		___isSimulationEnabled_0 = value;
	}

	inline static int32_t get_offset_of_outgoingLag_1() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800, ___outgoingLag_1)); }
	inline int32_t get_outgoingLag_1() const { return ___outgoingLag_1; }
	inline int32_t* get_address_of_outgoingLag_1() { return &___outgoingLag_1; }
	inline void set_outgoingLag_1(int32_t value)
	{
		___outgoingLag_1 = value;
	}

	inline static int32_t get_offset_of_outgoingJitter_2() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800, ___outgoingJitter_2)); }
	inline int32_t get_outgoingJitter_2() const { return ___outgoingJitter_2; }
	inline int32_t* get_address_of_outgoingJitter_2() { return &___outgoingJitter_2; }
	inline void set_outgoingJitter_2(int32_t value)
	{
		___outgoingJitter_2 = value;
	}

	inline static int32_t get_offset_of_outgoingLossPercentage_3() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800, ___outgoingLossPercentage_3)); }
	inline int32_t get_outgoingLossPercentage_3() const { return ___outgoingLossPercentage_3; }
	inline int32_t* get_address_of_outgoingLossPercentage_3() { return &___outgoingLossPercentage_3; }
	inline void set_outgoingLossPercentage_3(int32_t value)
	{
		___outgoingLossPercentage_3 = value;
	}

	inline static int32_t get_offset_of_incomingLag_4() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800, ___incomingLag_4)); }
	inline int32_t get_incomingLag_4() const { return ___incomingLag_4; }
	inline int32_t* get_address_of_incomingLag_4() { return &___incomingLag_4; }
	inline void set_incomingLag_4(int32_t value)
	{
		___incomingLag_4 = value;
	}

	inline static int32_t get_offset_of_incomingJitter_5() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800, ___incomingJitter_5)); }
	inline int32_t get_incomingJitter_5() const { return ___incomingJitter_5; }
	inline int32_t* get_address_of_incomingJitter_5() { return &___incomingJitter_5; }
	inline void set_incomingJitter_5(int32_t value)
	{
		___incomingJitter_5 = value;
	}

	inline static int32_t get_offset_of_incomingLossPercentage_6() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800, ___incomingLossPercentage_6)); }
	inline int32_t get_incomingLossPercentage_6() const { return ___incomingLossPercentage_6; }
	inline int32_t* get_address_of_incomingLossPercentage_6() { return &___incomingLossPercentage_6; }
	inline void set_incomingLossPercentage_6(int32_t value)
	{
		___incomingLossPercentage_6 = value;
	}

	inline static int32_t get_offset_of_peerBase_7() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800, ___peerBase_7)); }
	inline PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * get_peerBase_7() const { return ___peerBase_7; }
	inline PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 ** get_address_of_peerBase_7() { return &___peerBase_7; }
	inline void set_peerBase_7(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * value)
	{
		___peerBase_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_7), (void*)value);
	}

	inline static int32_t get_offset_of_netSimThread_8() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800, ___netSimThread_8)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_netSimThread_8() const { return ___netSimThread_8; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_netSimThread_8() { return &___netSimThread_8; }
	inline void set_netSimThread_8(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___netSimThread_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___netSimThread_8), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimManualResetEvent_9() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800, ___NetSimManualResetEvent_9)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_NetSimManualResetEvent_9() const { return ___NetSimManualResetEvent_9; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_NetSimManualResetEvent_9() { return &___NetSimManualResetEvent_9; }
	inline void set_NetSimManualResetEvent_9(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___NetSimManualResetEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimManualResetEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLostPackagesOutU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800, ___U3CLostPackagesOutU3Ek__BackingField_10)); }
	inline int32_t get_U3CLostPackagesOutU3Ek__BackingField_10() const { return ___U3CLostPackagesOutU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CLostPackagesOutU3Ek__BackingField_10() { return &___U3CLostPackagesOutU3Ek__BackingField_10; }
	inline void set_U3CLostPackagesOutU3Ek__BackingField_10(int32_t value)
	{
		___U3CLostPackagesOutU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLostPackagesInU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800, ___U3CLostPackagesInU3Ek__BackingField_11)); }
	inline int32_t get_U3CLostPackagesInU3Ek__BackingField_11() const { return ___U3CLostPackagesInU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CLostPackagesInU3Ek__BackingField_11() { return &___U3CLostPackagesInU3Ek__BackingField_11; }
	inline void set_U3CLostPackagesInU3Ek__BackingField_11(int32_t value)
	{
		___U3CLostPackagesInU3Ek__BackingField_11 = value;
	}
};


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


// ExitGames.Client.Photon.PhotonCodes
struct  PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470  : public RuntimeObject
{
public:

public:
};

struct PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_StaticFields
{
public:
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ClientKey
	uint8_t ___ClientKey_0;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ModeKey
	uint8_t ___ModeKey_1;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::ServerKey
	uint8_t ___ServerKey_2;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::InitEncryption
	uint8_t ___InitEncryption_3;
	// System.Byte ExitGames.Client.Photon.PhotonCodes::Ping
	uint8_t ___Ping_4;

public:
	inline static int32_t get_offset_of_ClientKey_0() { return static_cast<int32_t>(offsetof(PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_StaticFields, ___ClientKey_0)); }
	inline uint8_t get_ClientKey_0() const { return ___ClientKey_0; }
	inline uint8_t* get_address_of_ClientKey_0() { return &___ClientKey_0; }
	inline void set_ClientKey_0(uint8_t value)
	{
		___ClientKey_0 = value;
	}

	inline static int32_t get_offset_of_ModeKey_1() { return static_cast<int32_t>(offsetof(PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_StaticFields, ___ModeKey_1)); }
	inline uint8_t get_ModeKey_1() const { return ___ModeKey_1; }
	inline uint8_t* get_address_of_ModeKey_1() { return &___ModeKey_1; }
	inline void set_ModeKey_1(uint8_t value)
	{
		___ModeKey_1 = value;
	}

	inline static int32_t get_offset_of_ServerKey_2() { return static_cast<int32_t>(offsetof(PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_StaticFields, ___ServerKey_2)); }
	inline uint8_t get_ServerKey_2() const { return ___ServerKey_2; }
	inline uint8_t* get_address_of_ServerKey_2() { return &___ServerKey_2; }
	inline void set_ServerKey_2(uint8_t value)
	{
		___ServerKey_2 = value;
	}

	inline static int32_t get_offset_of_InitEncryption_3() { return static_cast<int32_t>(offsetof(PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_StaticFields, ___InitEncryption_3)); }
	inline uint8_t get_InitEncryption_3() const { return ___InitEncryption_3; }
	inline uint8_t* get_address_of_InitEncryption_3() { return &___InitEncryption_3; }
	inline void set_InitEncryption_3(uint8_t value)
	{
		___InitEncryption_3 = value;
	}

	inline static int32_t get_offset_of_Ping_4() { return static_cast<int32_t>(offsetof(PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_StaticFields, ___Ping_4)); }
	inline uint8_t get_Ping_4() const { return ___Ping_4; }
	inline uint8_t* get_address_of_Ping_4() { return &___Ping_4; }
	inline void set_Ping_4(uint8_t value)
	{
		___Ping_4 = value;
	}
};


// ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext
struct  ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::workSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___workSocket_0;
	// System.Int32 ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::ReceivedHeaderBytes
	int32_t ___ReceivedHeaderBytes_1;
	// System.Byte[] ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::HeaderBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HeaderBuffer_2;
	// System.Int32 ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::ExpectedMessageBytes
	int32_t ___ExpectedMessageBytes_3;
	// System.Int32 ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::ReceivedMessageBytes
	int32_t ___ReceivedMessageBytes_4;
	// System.Byte[] ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::MessageBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___MessageBuffer_5;

public:
	inline static int32_t get_offset_of_workSocket_0() { return static_cast<int32_t>(offsetof(ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395, ___workSocket_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_workSocket_0() const { return ___workSocket_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_workSocket_0() { return &___workSocket_0; }
	inline void set_workSocket_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___workSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_ReceivedHeaderBytes_1() { return static_cast<int32_t>(offsetof(ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395, ___ReceivedHeaderBytes_1)); }
	inline int32_t get_ReceivedHeaderBytes_1() const { return ___ReceivedHeaderBytes_1; }
	inline int32_t* get_address_of_ReceivedHeaderBytes_1() { return &___ReceivedHeaderBytes_1; }
	inline void set_ReceivedHeaderBytes_1(int32_t value)
	{
		___ReceivedHeaderBytes_1 = value;
	}

	inline static int32_t get_offset_of_HeaderBuffer_2() { return static_cast<int32_t>(offsetof(ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395, ___HeaderBuffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HeaderBuffer_2() const { return ___HeaderBuffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HeaderBuffer_2() { return &___HeaderBuffer_2; }
	inline void set_HeaderBuffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HeaderBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeaderBuffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_ExpectedMessageBytes_3() { return static_cast<int32_t>(offsetof(ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395, ___ExpectedMessageBytes_3)); }
	inline int32_t get_ExpectedMessageBytes_3() const { return ___ExpectedMessageBytes_3; }
	inline int32_t* get_address_of_ExpectedMessageBytes_3() { return &___ExpectedMessageBytes_3; }
	inline void set_ExpectedMessageBytes_3(int32_t value)
	{
		___ExpectedMessageBytes_3 = value;
	}

	inline static int32_t get_offset_of_ReceivedMessageBytes_4() { return static_cast<int32_t>(offsetof(ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395, ___ReceivedMessageBytes_4)); }
	inline int32_t get_ReceivedMessageBytes_4() const { return ___ReceivedMessageBytes_4; }
	inline int32_t* get_address_of_ReceivedMessageBytes_4() { return &___ReceivedMessageBytes_4; }
	inline void set_ReceivedMessageBytes_4(int32_t value)
	{
		___ReceivedMessageBytes_4 = value;
	}

	inline static int32_t get_offset_of_MessageBuffer_5() { return static_cast<int32_t>(offsetof(ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395, ___MessageBuffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_MessageBuffer_5() const { return ___MessageBuffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_MessageBuffer_5() { return &___MessageBuffer_5; }
	inline void set_MessageBuffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___MessageBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageBuffer_5), (void*)value);
	}
};


// ExitGames.Client.Photon.StreamBuffer
struct  StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::pos
	int32_t ___pos_1;
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::len
	int32_t ___len_2;
	// System.Byte[] ExitGames.Client.Photon.StreamBuffer::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_3;

public:
	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_buf_3() { return static_cast<int32_t>(offsetof(StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D, ___buf_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_3() const { return ___buf_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_3() { return &___buf_3; }
	inline void set_buf_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_3), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass
struct  SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F  : public RuntimeObject
{
public:

public:
};

struct SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Threading.Thread> ExitGames.Client.Photon.SupportClass::threadList
	List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * ___threadList_0;
	// System.Object ExitGames.Client.Photon.SupportClass::ThreadListLock
	RuntimeObject * ___ThreadListLock_1;
	// ExitGames.Client.Photon.SupportClass_IntegerMillisecondsDelegate ExitGames.Client.Photon.SupportClass::IntegerMilliseconds
	IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A * ___IntegerMilliseconds_2;
	// System.UInt32[] ExitGames.Client.Photon.SupportClass::crcLookupTable
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___crcLookupTable_3;

public:
	inline static int32_t get_offset_of_threadList_0() { return static_cast<int32_t>(offsetof(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields, ___threadList_0)); }
	inline List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * get_threadList_0() const { return ___threadList_0; }
	inline List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 ** get_address_of_threadList_0() { return &___threadList_0; }
	inline void set_threadList_0(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * value)
	{
		___threadList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadList_0), (void*)value);
	}

	inline static int32_t get_offset_of_ThreadListLock_1() { return static_cast<int32_t>(offsetof(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields, ___ThreadListLock_1)); }
	inline RuntimeObject * get_ThreadListLock_1() const { return ___ThreadListLock_1; }
	inline RuntimeObject ** get_address_of_ThreadListLock_1() { return &___ThreadListLock_1; }
	inline void set_ThreadListLock_1(RuntimeObject * value)
	{
		___ThreadListLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ThreadListLock_1), (void*)value);
	}

	inline static int32_t get_offset_of_IntegerMilliseconds_2() { return static_cast<int32_t>(offsetof(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields, ___IntegerMilliseconds_2)); }
	inline IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A * get_IntegerMilliseconds_2() const { return ___IntegerMilliseconds_2; }
	inline IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A ** get_address_of_IntegerMilliseconds_2() { return &___IntegerMilliseconds_2; }
	inline void set_IntegerMilliseconds_2(IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A * value)
	{
		___IntegerMilliseconds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IntegerMilliseconds_2), (void*)value);
	}

	inline static int32_t get_offset_of_crcLookupTable_3() { return static_cast<int32_t>(offsetof(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields, ___crcLookupTable_3)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_crcLookupTable_3() const { return ___crcLookupTable_3; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_crcLookupTable_3() { return &___crcLookupTable_3; }
	inline void set_crcLookupTable_3(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___crcLookupTable_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crcLookupTable_3), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass_<>c
struct  U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A_StaticFields
{
public:
	// ExitGames.Client.Photon.SupportClass_<>c ExitGames.Client.Photon.SupportClass_<>c::<>9
	U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass_<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.SupportClass_<>c__DisplayClass6_0::millisecondsInterval
	int32_t ___millisecondsInterval_0;
	// System.Func`1<System.Boolean> ExitGames.Client.Photon.SupportClass_<>c__DisplayClass6_0::myThread
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___myThread_1;

public:
	inline static int32_t get_offset_of_millisecondsInterval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246, ___millisecondsInterval_0)); }
	inline int32_t get_millisecondsInterval_0() const { return ___millisecondsInterval_0; }
	inline int32_t* get_address_of_millisecondsInterval_0() { return &___millisecondsInterval_0; }
	inline void set_millisecondsInterval_0(int32_t value)
	{
		___millisecondsInterval_0 = value;
	}

	inline static int32_t get_offset_of_myThread_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246, ___myThread_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_myThread_1() const { return ___myThread_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_myThread_1() { return &___myThread_1; }
	inline void set_myThread_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___myThread_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myThread_1), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass_ThreadSafeRandom
struct  ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE  : public RuntimeObject
{
public:

public:
};

struct ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE_StaticFields
{
public:
	// System.Random ExitGames.Client.Photon.SupportClass_ThreadSafeRandom::_r
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ____r_0;

public:
	inline static int32_t get_offset_of__r_0() { return static_cast<int32_t>(offsetof(ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE_StaticFields, ____r_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get__r_0() const { return ____r_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of__r_0() { return &____r_0; }
	inline void set__r_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		____r_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____r_0), (void*)value);
	}
};


// ExitGames.Client.Photon.TrafficStats
struct  TrafficStats_t3D2409F70966749F514326896715927BF6E3A975  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<PackageHeaderSize>k__BackingField
	int32_t ___U3CPackageHeaderSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandCount>k__BackingField
	int32_t ___U3CReliableCommandCountU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandCount>k__BackingField
	int32_t ___U3CUnreliableCommandCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandCount>k__BackingField
	int32_t ___U3CFragmentCommandCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandCount>k__BackingField
	int32_t ___U3CControlCommandCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalPacketCount>k__BackingField
	int32_t ___U3CTotalPacketCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalCommandsInPackets>k__BackingField
	int32_t ___U3CTotalCommandsInPacketsU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandBytes>k__BackingField
	int32_t ___U3CReliableCommandBytesU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandBytes>k__BackingField
	int32_t ___U3CUnreliableCommandBytesU3Ek__BackingField_8;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandBytes>k__BackingField
	int32_t ___U3CFragmentCommandBytesU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandBytes>k__BackingField
	int32_t ___U3CControlCommandBytesU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastAck>k__BackingField
	int32_t ___U3CTimestampOfLastAckU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastReliableCommand>k__BackingField
	int32_t ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CPackageHeaderSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CPackageHeaderSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CPackageHeaderSizeU3Ek__BackingField_0() const { return ___U3CPackageHeaderSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CPackageHeaderSizeU3Ek__BackingField_0() { return &___U3CPackageHeaderSizeU3Ek__BackingField_0; }
	inline void set_U3CPackageHeaderSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CPackageHeaderSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReliableCommandCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CReliableCommandCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CReliableCommandCountU3Ek__BackingField_1() const { return ___U3CReliableCommandCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CReliableCommandCountU3Ek__BackingField_1() { return &___U3CReliableCommandCountU3Ek__BackingField_1; }
	inline void set_U3CReliableCommandCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CReliableCommandCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUnreliableCommandCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CUnreliableCommandCountU3Ek__BackingField_2)); }
	inline int32_t get_U3CUnreliableCommandCountU3Ek__BackingField_2() const { return ___U3CUnreliableCommandCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CUnreliableCommandCountU3Ek__BackingField_2() { return &___U3CUnreliableCommandCountU3Ek__BackingField_2; }
	inline void set_U3CUnreliableCommandCountU3Ek__BackingField_2(int32_t value)
	{
		___U3CUnreliableCommandCountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFragmentCommandCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CFragmentCommandCountU3Ek__BackingField_3)); }
	inline int32_t get_U3CFragmentCommandCountU3Ek__BackingField_3() const { return ___U3CFragmentCommandCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFragmentCommandCountU3Ek__BackingField_3() { return &___U3CFragmentCommandCountU3Ek__BackingField_3; }
	inline void set_U3CFragmentCommandCountU3Ek__BackingField_3(int32_t value)
	{
		___U3CFragmentCommandCountU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CControlCommandCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CControlCommandCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CControlCommandCountU3Ek__BackingField_4() const { return ___U3CControlCommandCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CControlCommandCountU3Ek__BackingField_4() { return &___U3CControlCommandCountU3Ek__BackingField_4; }
	inline void set_U3CControlCommandCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CControlCommandCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTotalPacketCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CTotalPacketCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CTotalPacketCountU3Ek__BackingField_5() const { return ___U3CTotalPacketCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTotalPacketCountU3Ek__BackingField_5() { return &___U3CTotalPacketCountU3Ek__BackingField_5; }
	inline void set_U3CTotalPacketCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CTotalPacketCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTotalCommandsInPacketsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CTotalCommandsInPacketsU3Ek__BackingField_6)); }
	inline int32_t get_U3CTotalCommandsInPacketsU3Ek__BackingField_6() const { return ___U3CTotalCommandsInPacketsU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CTotalCommandsInPacketsU3Ek__BackingField_6() { return &___U3CTotalCommandsInPacketsU3Ek__BackingField_6; }
	inline void set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(int32_t value)
	{
		___U3CTotalCommandsInPacketsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CReliableCommandBytesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CReliableCommandBytesU3Ek__BackingField_7)); }
	inline int32_t get_U3CReliableCommandBytesU3Ek__BackingField_7() const { return ___U3CReliableCommandBytesU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CReliableCommandBytesU3Ek__BackingField_7() { return &___U3CReliableCommandBytesU3Ek__BackingField_7; }
	inline void set_U3CReliableCommandBytesU3Ek__BackingField_7(int32_t value)
	{
		___U3CReliableCommandBytesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CUnreliableCommandBytesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CUnreliableCommandBytesU3Ek__BackingField_8)); }
	inline int32_t get_U3CUnreliableCommandBytesU3Ek__BackingField_8() const { return ___U3CUnreliableCommandBytesU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CUnreliableCommandBytesU3Ek__BackingField_8() { return &___U3CUnreliableCommandBytesU3Ek__BackingField_8; }
	inline void set_U3CUnreliableCommandBytesU3Ek__BackingField_8(int32_t value)
	{
		___U3CUnreliableCommandBytesU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CFragmentCommandBytesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CFragmentCommandBytesU3Ek__BackingField_9)); }
	inline int32_t get_U3CFragmentCommandBytesU3Ek__BackingField_9() const { return ___U3CFragmentCommandBytesU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFragmentCommandBytesU3Ek__BackingField_9() { return &___U3CFragmentCommandBytesU3Ek__BackingField_9; }
	inline void set_U3CFragmentCommandBytesU3Ek__BackingField_9(int32_t value)
	{
		___U3CFragmentCommandBytesU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CControlCommandBytesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CControlCommandBytesU3Ek__BackingField_10)); }
	inline int32_t get_U3CControlCommandBytesU3Ek__BackingField_10() const { return ___U3CControlCommandBytesU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CControlCommandBytesU3Ek__BackingField_10() { return &___U3CControlCommandBytesU3Ek__BackingField_10; }
	inline void set_U3CControlCommandBytesU3Ek__BackingField_10(int32_t value)
	{
		___U3CControlCommandBytesU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampOfLastAckU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CTimestampOfLastAckU3Ek__BackingField_11)); }
	inline int32_t get_U3CTimestampOfLastAckU3Ek__BackingField_11() const { return ___U3CTimestampOfLastAckU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CTimestampOfLastAckU3Ek__BackingField_11() { return &___U3CTimestampOfLastAckU3Ek__BackingField_11; }
	inline void set_U3CTimestampOfLastAckU3Ek__BackingField_11(int32_t value)
	{
		___U3CTimestampOfLastAckU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TrafficStats_t3D2409F70966749F514326896715927BF6E3A975, ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12)); }
	inline int32_t get_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() const { return ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() { return &___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12; }
	inline void set_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12(int32_t value)
	{
		___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12 = value;
	}
};


// ExitGames.Client.Photon.TrafficStatsGameLevel
struct  TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastDispatchCall
	int32_t ___timeOfLastDispatchCall_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastSendCall
	int32_t ___timeOfLastSendCall_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationByteCount>k__BackingField
	int32_t ___U3COperationByteCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationCount>k__BackingField
	int32_t ___U3COperationCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultByteCount>k__BackingField
	int32_t ___U3CResultByteCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultCount>k__BackingField
	int32_t ___U3CResultCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventByteCount>k__BackingField
	int32_t ___U3CEventByteCountU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventCount>k__BackingField
	int32_t ___U3CEventCountU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallback>k__BackingField
	int32_t ___U3CLongestOpResponseCallbackU3Ek__BackingField_8;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallbackOpCode>k__BackingField
	uint8_t ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallback>k__BackingField
	int32_t ___U3CLongestEventCallbackU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestMessageCallback>k__BackingField
	int32_t ___U3CLongestMessageCallbackU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestRawMessageCallback>k__BackingField
	int32_t ___U3CLongestRawMessageCallbackU3Ek__BackingField_12;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallbackCode>k__BackingField
	uint8_t ___U3CLongestEventCallbackCodeU3Ek__BackingField_13;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenDispatching>k__BackingField
	int32_t ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenSending>k__BackingField
	int32_t ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<DispatchIncomingCommandsCalls>k__BackingField
	int32_t ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<SendOutgoingCommandsCalls>k__BackingField
	int32_t ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_timeOfLastDispatchCall_0() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___timeOfLastDispatchCall_0)); }
	inline int32_t get_timeOfLastDispatchCall_0() const { return ___timeOfLastDispatchCall_0; }
	inline int32_t* get_address_of_timeOfLastDispatchCall_0() { return &___timeOfLastDispatchCall_0; }
	inline void set_timeOfLastDispatchCall_0(int32_t value)
	{
		___timeOfLastDispatchCall_0 = value;
	}

	inline static int32_t get_offset_of_timeOfLastSendCall_1() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___timeOfLastSendCall_1)); }
	inline int32_t get_timeOfLastSendCall_1() const { return ___timeOfLastSendCall_1; }
	inline int32_t* get_address_of_timeOfLastSendCall_1() { return &___timeOfLastSendCall_1; }
	inline void set_timeOfLastSendCall_1(int32_t value)
	{
		___timeOfLastSendCall_1 = value;
	}

	inline static int32_t get_offset_of_U3COperationByteCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3COperationByteCountU3Ek__BackingField_2)); }
	inline int32_t get_U3COperationByteCountU3Ek__BackingField_2() const { return ___U3COperationByteCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3COperationByteCountU3Ek__BackingField_2() { return &___U3COperationByteCountU3Ek__BackingField_2; }
	inline void set_U3COperationByteCountU3Ek__BackingField_2(int32_t value)
	{
		___U3COperationByteCountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COperationCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3COperationCountU3Ek__BackingField_3)); }
	inline int32_t get_U3COperationCountU3Ek__BackingField_3() const { return ___U3COperationCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3COperationCountU3Ek__BackingField_3() { return &___U3COperationCountU3Ek__BackingField_3; }
	inline void set_U3COperationCountU3Ek__BackingField_3(int32_t value)
	{
		___U3COperationCountU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CResultByteCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CResultByteCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CResultByteCountU3Ek__BackingField_4() const { return ___U3CResultByteCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CResultByteCountU3Ek__BackingField_4() { return &___U3CResultByteCountU3Ek__BackingField_4; }
	inline void set_U3CResultByteCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CResultByteCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CResultCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CResultCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CResultCountU3Ek__BackingField_5() const { return ___U3CResultCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CResultCountU3Ek__BackingField_5() { return &___U3CResultCountU3Ek__BackingField_5; }
	inline void set_U3CResultCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CResultCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CEventByteCountU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CEventByteCountU3Ek__BackingField_6)); }
	inline int32_t get_U3CEventByteCountU3Ek__BackingField_6() const { return ___U3CEventByteCountU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CEventByteCountU3Ek__BackingField_6() { return &___U3CEventByteCountU3Ek__BackingField_6; }
	inline void set_U3CEventByteCountU3Ek__BackingField_6(int32_t value)
	{
		___U3CEventByteCountU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEventCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CEventCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CEventCountU3Ek__BackingField_7() const { return ___U3CEventCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CEventCountU3Ek__BackingField_7() { return &___U3CEventCountU3Ek__BackingField_7; }
	inline void set_U3CEventCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CEventCountU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CLongestOpResponseCallbackU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CLongestOpResponseCallbackU3Ek__BackingField_8)); }
	inline int32_t get_U3CLongestOpResponseCallbackU3Ek__BackingField_8() const { return ___U3CLongestOpResponseCallbackU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CLongestOpResponseCallbackU3Ek__BackingField_8() { return &___U3CLongestOpResponseCallbackU3Ek__BackingField_8; }
	inline void set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(int32_t value)
	{
		___U3CLongestOpResponseCallbackU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9)); }
	inline uint8_t get_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() const { return ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9; }
	inline uint8_t* get_address_of_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() { return &___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9; }
	inline void set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(uint8_t value)
	{
		___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CLongestEventCallbackU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CLongestEventCallbackU3Ek__BackingField_10)); }
	inline int32_t get_U3CLongestEventCallbackU3Ek__BackingField_10() const { return ___U3CLongestEventCallbackU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CLongestEventCallbackU3Ek__BackingField_10() { return &___U3CLongestEventCallbackU3Ek__BackingField_10; }
	inline void set_U3CLongestEventCallbackU3Ek__BackingField_10(int32_t value)
	{
		___U3CLongestEventCallbackU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLongestMessageCallbackU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CLongestMessageCallbackU3Ek__BackingField_11)); }
	inline int32_t get_U3CLongestMessageCallbackU3Ek__BackingField_11() const { return ___U3CLongestMessageCallbackU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CLongestMessageCallbackU3Ek__BackingField_11() { return &___U3CLongestMessageCallbackU3Ek__BackingField_11; }
	inline void set_U3CLongestMessageCallbackU3Ek__BackingField_11(int32_t value)
	{
		___U3CLongestMessageCallbackU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CLongestRawMessageCallbackU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CLongestRawMessageCallbackU3Ek__BackingField_12)); }
	inline int32_t get_U3CLongestRawMessageCallbackU3Ek__BackingField_12() const { return ___U3CLongestRawMessageCallbackU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CLongestRawMessageCallbackU3Ek__BackingField_12() { return &___U3CLongestRawMessageCallbackU3Ek__BackingField_12; }
	inline void set_U3CLongestRawMessageCallbackU3Ek__BackingField_12(int32_t value)
	{
		___U3CLongestRawMessageCallbackU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CLongestEventCallbackCodeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CLongestEventCallbackCodeU3Ek__BackingField_13)); }
	inline uint8_t get_U3CLongestEventCallbackCodeU3Ek__BackingField_13() const { return ___U3CLongestEventCallbackCodeU3Ek__BackingField_13; }
	inline uint8_t* get_address_of_U3CLongestEventCallbackCodeU3Ek__BackingField_13() { return &___U3CLongestEventCallbackCodeU3Ek__BackingField_13; }
	inline void set_U3CLongestEventCallbackCodeU3Ek__BackingField_13(uint8_t value)
	{
		___U3CLongestEventCallbackCodeU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14)); }
	inline int32_t get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14() const { return ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14() { return &___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14; }
	inline void set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14(int32_t value)
	{
		___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15)); }
	inline int32_t get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15() const { return ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15() { return &___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15; }
	inline void set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15(int32_t value)
	{
		___U3CLongestDeltaBetweenSendingU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16)); }
	inline int32_t get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16() const { return ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16() { return &___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16; }
	inline void set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16(int32_t value)
	{
		___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8, ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17)); }
	inline int32_t get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17() const { return ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17() { return &___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17; }
	inline void set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17(int32_t value)
	{
		___U3CSendOutgoingCommandsCallsU3Ek__BackingField_17 = value;
	}
};


// ExitGames.Client.Photon.Version
struct  Version_t05EBFF277C260B547926CE9330EB31A757B4FD8D  : public RuntimeObject
{
public:

public:
};

struct Version_t05EBFF277C260B547926CE9330EB31A757B4FD8D_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.Version::clientVersion
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___clientVersion_0;

public:
	inline static int32_t get_offset_of_clientVersion_0() { return static_cast<int32_t>(offsetof(Version_t05EBFF277C260B547926CE9330EB31A757B4FD8D_StaticFields, ___clientVersion_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_clientVersion_0() const { return ___clientVersion_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_clientVersion_0() { return &___clientVersion_0; }
	inline void set_clientVersion_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___clientVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_0), (void*)value);
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


// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>
struct  List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StreamBufferU5BU5D_t9144B1E6B25703043A6AF9333794E41D773C68CE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480, ____items_1)); }
	inline StreamBufferU5BU5D_t9144B1E6B25703043A6AF9333794E41D773C68CE* get__items_1() const { return ____items_1; }
	inline StreamBufferU5BU5D_t9144B1E6B25703043A6AF9333794E41D773C68CE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StreamBufferU5BU5D_t9144B1E6B25703043A6AF9333794E41D773C68CE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StreamBufferU5BU5D_t9144B1E6B25703043A6AF9333794E41D773C68CE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480_StaticFields, ____emptyArray_5)); }
	inline StreamBufferU5BU5D_t9144B1E6B25703043A6AF9333794E41D773C68CE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StreamBufferU5BU5D_t9144B1E6B25703043A6AF9333794E41D773C68CE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StreamBufferU5BU5D_t9144B1E6B25703043A6AF9333794E41D773C68CE* value)
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


// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct  List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4, ____items_1)); }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* get__items_1() const { return ____items_1; }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4_StaticFields, ____emptyArray_5)); }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Threading.Thread>
struct  List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118, ____items_1)); }
	inline ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* get__items_1() const { return ____items_1; }
	inline ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_StaticFields, ____emptyArray_5)); }
	inline ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ThreadU5BU5D_t9AB1EEE437F00EABE533CB2261E519C3976BD81F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase_MyAction>
struct  Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	MyActionU5BU5D_t4A3DCFDDFA7401BF8DFDEDC3458659FDD9C16169* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777, ____array_0)); }
	inline MyActionU5BU5D_t4A3DCFDDFA7401BF8DFDEDC3458659FDD9C16169* get__array_0() const { return ____array_0; }
	inline MyActionU5BU5D_t4A3DCFDDFA7401BF8DFDEDC3458659FDD9C16169** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(MyActionU5BU5D_t4A3DCFDDFA7401BF8DFDEDC3458659FDD9C16169* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Byte[]>
struct  Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____array_0)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__array_0() const { return ____array_0; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Net.EndPoint
struct  EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
};


// System.Random
struct  Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
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

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D120
struct  __StaticArrayInitTypeSizeU3D120_tFD42CB5001EC74ECA5B53363275971127CCD8A22 
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
		uint8_t __StaticArrayInitTypeSizeU3D120_tFD42CB5001EC74ECA5B53363275971127CCD8A22__padding[120];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D1212
struct  __StaticArrayInitTypeSizeU3D1212_tE8FE0B1B5F91224CF44AC4678B9C45A402BF9306 
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
		uint8_t __StaticArrayInitTypeSizeU3D1212_tE8FE0B1B5F91224CF44AC4678B9C45A402BF9306__padding[1212];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D128
struct  __StaticArrayInitTypeSizeU3D128_t307F538E80EF3D7C78A765F2A8928547362ECFD4 
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
		uint8_t __StaticArrayInitTypeSizeU3D128_t307F538E80EF3D7C78A765F2A8928547362ECFD4__padding[128];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D192
struct  __StaticArrayInitTypeSizeU3D192_t47E98FC1ADC3D5BEBDDA5835C08E646CF8F7B23C 
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
		uint8_t __StaticArrayInitTypeSizeU3D192_t47E98FC1ADC3D5BEBDDA5835C08E646CF8F7B23C__padding[192];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D9
struct  __StaticArrayInitTypeSizeU3D9_tB4DB5C7ED82A67BE6864199FD28B7E89842A32DC 
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
		uint8_t __StaticArrayInitTypeSizeU3D9_tB4DB5C7ED82A67BE6864199FD28B7E89842A32DC__padding[9];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D96
struct  __StaticArrayInitTypeSizeU3D96_tA9AD20E4AD1C97A9FC11AA48D2B8BDF05706E5ED 
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
		uint8_t __StaticArrayInitTypeSizeU3D96_tA9AD20E4AD1C97A9FC11AA48D2B8BDF05706E5ED__padding[96];
	};

public:
};


// ExitGames.Client.Photon.Hashtable
struct  Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3  : public Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D
{
public:

public:
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


// System.Collections.Generic.List`1_Enumerator<System.Threading.Thread>
struct  Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5, ___list_0)); }
	inline List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * get_list_0() const { return ___list_0; }
	inline List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5, ___current_3)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_3() const { return ___current_3; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
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

// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Threading.Thread
struct  Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466_StaticFields
{
public:
	// System.Int32 <PrivateImplementationDetails>::022637F85E8F30533B9E68C6D7090348779F1C153369E421F811E0C07B928364
	int32_t ___022637F85E8F30533B9E68C6D7090348779F1C153369E421F811E0C07B928364_0;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D128 <PrivateImplementationDetails>::3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0
	__StaticArrayInitTypeSizeU3D128_t307F538E80EF3D7C78A765F2A8928547362ECFD4  ___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1;
	// System.Int64 <PrivateImplementationDetails>::5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5
	int64_t ___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D192 <PrivateImplementationDetails>::64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B
	__StaticArrayInitTypeSizeU3D192_t47E98FC1ADC3D5BEBDDA5835C08E646CF8F7B23C  ___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D1212 <PrivateImplementationDetails>::AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080
	__StaticArrayInitTypeSizeU3D1212_tE8FE0B1B5F91224CF44AC4678B9C45A402BF9306  ___AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D96 <PrivateImplementationDetails>::B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D
	__StaticArrayInitTypeSizeU3D96_tA9AD20E4AD1C97A9FC11AA48D2B8BDF05706E5ED  ___B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D9 <PrivateImplementationDetails>::D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC
	__StaticArrayInitTypeSizeU3D9_tB4DB5C7ED82A67BE6864199FD28B7E89842A32DC  ___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D120 <PrivateImplementationDetails>::FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175
	__StaticArrayInitTypeSizeU3D120_tFD42CB5001EC74ECA5B53363275971127CCD8A22  ___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_7;

public:
	inline static int32_t get_offset_of_U3022637F85E8F30533B9E68C6D7090348779F1C153369E421F811E0C07B928364_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466_StaticFields, ___022637F85E8F30533B9E68C6D7090348779F1C153369E421F811E0C07B928364_0)); }
	inline int32_t get_U3022637F85E8F30533B9E68C6D7090348779F1C153369E421F811E0C07B928364_0() const { return ___022637F85E8F30533B9E68C6D7090348779F1C153369E421F811E0C07B928364_0; }
	inline int32_t* get_address_of_U3022637F85E8F30533B9E68C6D7090348779F1C153369E421F811E0C07B928364_0() { return &___022637F85E8F30533B9E68C6D7090348779F1C153369E421F811E0C07B928364_0; }
	inline void set_U3022637F85E8F30533B9E68C6D7090348779F1C153369E421F811E0C07B928364_0(int32_t value)
	{
		___022637F85E8F30533B9E68C6D7090348779F1C153369E421F811E0C07B928364_0 = value;
	}

	inline static int32_t get_offset_of_U33F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466_StaticFields, ___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1)); }
	inline __StaticArrayInitTypeSizeU3D128_t307F538E80EF3D7C78A765F2A8928547362ECFD4  get_U33F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1() const { return ___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1; }
	inline __StaticArrayInitTypeSizeU3D128_t307F538E80EF3D7C78A765F2A8928547362ECFD4 * get_address_of_U33F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1() { return &___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1; }
	inline void set_U33F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1(__StaticArrayInitTypeSizeU3D128_t307F538E80EF3D7C78A765F2A8928547362ECFD4  value)
	{
		___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_1 = value;
	}

	inline static int32_t get_offset_of_U35AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466_StaticFields, ___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2)); }
	inline int64_t get_U35AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2() const { return ___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2; }
	inline int64_t* get_address_of_U35AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2() { return &___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2; }
	inline void set_U35AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2(int64_t value)
	{
		___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_2 = value;
	}

	inline static int32_t get_offset_of_U364FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466_StaticFields, ___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3)); }
	inline __StaticArrayInitTypeSizeU3D192_t47E98FC1ADC3D5BEBDDA5835C08E646CF8F7B23C  get_U364FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3() const { return ___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3; }
	inline __StaticArrayInitTypeSizeU3D192_t47E98FC1ADC3D5BEBDDA5835C08E646CF8F7B23C * get_address_of_U364FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3() { return &___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3; }
	inline void set_U364FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3(__StaticArrayInitTypeSizeU3D192_t47E98FC1ADC3D5BEBDDA5835C08E646CF8F7B23C  value)
	{
		___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_3 = value;
	}

	inline static int32_t get_offset_of_AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466_StaticFields, ___AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4)); }
	inline __StaticArrayInitTypeSizeU3D1212_tE8FE0B1B5F91224CF44AC4678B9C45A402BF9306  get_AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4() const { return ___AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4; }
	inline __StaticArrayInitTypeSizeU3D1212_tE8FE0B1B5F91224CF44AC4678B9C45A402BF9306 * get_address_of_AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4() { return &___AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4; }
	inline void set_AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4(__StaticArrayInitTypeSizeU3D1212_tE8FE0B1B5F91224CF44AC4678B9C45A402BF9306  value)
	{
		___AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4 = value;
	}

	inline static int32_t get_offset_of_B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466_StaticFields, ___B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5)); }
	inline __StaticArrayInitTypeSizeU3D96_tA9AD20E4AD1C97A9FC11AA48D2B8BDF05706E5ED  get_B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5() const { return ___B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5; }
	inline __StaticArrayInitTypeSizeU3D96_tA9AD20E4AD1C97A9FC11AA48D2B8BDF05706E5ED * get_address_of_B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5() { return &___B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5; }
	inline void set_B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5(__StaticArrayInitTypeSizeU3D96_tA9AD20E4AD1C97A9FC11AA48D2B8BDF05706E5ED  value)
	{
		___B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5 = value;
	}

	inline static int32_t get_offset_of_D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466_StaticFields, ___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6)); }
	inline __StaticArrayInitTypeSizeU3D9_tB4DB5C7ED82A67BE6864199FD28B7E89842A32DC  get_D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6() const { return ___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6; }
	inline __StaticArrayInitTypeSizeU3D9_tB4DB5C7ED82A67BE6864199FD28B7E89842A32DC * get_address_of_D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6() { return &___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6; }
	inline void set_D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6(__StaticArrayInitTypeSizeU3D9_tB4DB5C7ED82A67BE6864199FD28B7E89842A32DC  value)
	{
		___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6 = value;
	}

	inline static int32_t get_offset_of_FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466_StaticFields, ___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_7)); }
	inline __StaticArrayInitTypeSizeU3D120_tFD42CB5001EC74ECA5B53363275971127CCD8A22  get_FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_7() const { return ___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_7; }
	inline __StaticArrayInitTypeSizeU3D120_tFD42CB5001EC74ECA5B53363275971127CCD8A22 * get_address_of_FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_7() { return &___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_7; }
	inline void set_FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_7(__StaticArrayInitTypeSizeU3D120_tFD42CB5001EC74ECA5B53363275971127CCD8A22  value)
	{
		___FA856B58B602D1AFB828D70020BB2D88B0C50B97FE8920E56AEBF6D280C11175_7 = value;
	}
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


// ExitGames.Client.Photon.ConnectionStateValue
struct  ConnectionStateValue_t352CF1A14703A4CADF8BAC0142D148058CB6A807 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionStateValue_t352CF1A14703A4CADF8BAC0142D148058CB6A807, ___value___2)); }
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


// ExitGames.Client.Photon.DeliveryMode
struct  DeliveryMode_tC79CA467CAC59E5D0828AF87235DAF4AF7143B91 
{
public:
	// System.Int32 ExitGames.Client.Photon.DeliveryMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeliveryMode_tC79CA467CAC59E5D0828AF87235DAF4AF7143B91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.EgMessageType
struct  EgMessageType_t35441366A94169A79C26242966CB3BBA951FA11B 
{
public:
	// System.Byte ExitGames.Client.Photon.EgMessageType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EgMessageType_t35441366A94169A79C26242966CB3BBA951FA11B, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Encryption.EncryptorNative_egDebugLevel
struct  egDebugLevel_t6FB75D1A8A53A8D06969672BC9E88327BA8D4A50 
{
public:
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative_egDebugLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(egDebugLevel_t6FB75D1A8A53A8D06969672BC9E88327BA8D4A50, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.IProtocol_DeserializationFlags
struct  DeserializationFlags_tDDD082CFBC6DA10CD0E7275CFBC7FC12F799A4B8 
{
public:
	// System.Int32 ExitGames.Client.Photon.IProtocol_DeserializationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeserializationFlags_tDDD082CFBC6DA10CD0E7275CFBC7FC12F799A4B8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.PhotonSocketError
struct  PhotonSocketError_tC5C8503F8400AFC3FE5C80046635D916783CDA51 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketError_tC5C8503F8400AFC3FE5C80046635D916783CDA51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.PhotonSocketState
struct  PhotonSocketState_t2A5155A285C84EEDE019DF16C2DC769F192739AB 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketState_t2A5155A285C84EEDE019DF16C2DC769F192739AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Protocol16_GpType
struct  GpType_tD1F6B1D5FFC108A93AC24B8113C1A30712584599 
{
public:
	// System.Byte ExitGames.Client.Photon.Protocol16_GpType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GpType_tD1F6B1D5FFC108A93AC24B8113C1A30712584599, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Protocol18_GpType
struct  GpType_t98FC231F71F4491B036B51848B0F5813AF6CD573 
{
public:
	// System.Byte ExitGames.Client.Photon.Protocol18_GpType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GpType_t98FC231F71F4491B036B51848B0F5813AF6CD573, ___value___2)); }
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


// ExitGames.Client.Photon.SocketNative_NativeDebugLevel
struct  NativeDebugLevel_t7480100CAD2D6F26C3AFF5D5E00D33DD9876E829 
{
public:
	// System.Byte ExitGames.Client.Photon.SocketNative_NativeDebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeDebugLevel_t7480100CAD2D6F26C3AFF5D5E00D33DD9876E829, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SocketNative_NativeSocketState
struct  NativeSocketState_t782ABC72E5F36823EDB71605F479BE3AA4C10091 
{
public:
	// System.Byte ExitGames.Client.Photon.SocketNative_NativeSocketState::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeSocketState_t782ABC72E5F36823EDB71605F479BE3AA4C10091, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.StatusCode
struct  StatusCode_t2E1D06D00C59F0E6A217A680CFF19A512B1A7893 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_t2E1D06D00C59F0E6A217A680CFF19A512B1A7893, ___value___2)); }
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

// System.IO.SeekOrigin
struct  SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.ProtocolType
struct  ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketError
struct  SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketFlags
struct  SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct  SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// ExitGames.Client.Photon.IPhotonSocket
struct  IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * ___peerBase_0;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::Protocol
	uint8_t ___Protocol_1;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::ConnectAddress
	String_t* ___ConnectAddress_4;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_5;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_8;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::<AddressResolvedAsIpv6>k__BackingField
	bool ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlProtocol>k__BackingField
	String_t* ___U3CUrlProtocolU3Ek__BackingField_10;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlPath>k__BackingField
	String_t* ___U3CUrlPathU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_peerBase_0() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E, ___peerBase_0)); }
	inline PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * get_peerBase_0() const { return ___peerBase_0; }
	inline PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 ** get_address_of_peerBase_0() { return &___peerBase_0; }
	inline void set_peerBase_0(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * value)
	{
		___peerBase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_0), (void*)value);
	}

	inline static int32_t get_offset_of_Protocol_1() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E, ___Protocol_1)); }
	inline uint8_t get_Protocol_1() const { return ___Protocol_1; }
	inline uint8_t* get_address_of_Protocol_1() { return &___Protocol_1; }
	inline void set_Protocol_1(uint8_t value)
	{
		___Protocol_1 = value;
	}

	inline static int32_t get_offset_of_PollReceive_2() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E, ___PollReceive_2)); }
	inline bool get_PollReceive_2() const { return ___PollReceive_2; }
	inline bool* get_address_of_PollReceive_2() { return &___PollReceive_2; }
	inline void set_PollReceive_2(bool value)
	{
		___PollReceive_2 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E, ___U3CStateU3Ek__BackingField_3)); }
	inline int32_t get_U3CStateU3Ek__BackingField_3() const { return ___U3CStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_3() { return &___U3CStateU3Ek__BackingField_3; }
	inline void set_U3CStateU3Ek__BackingField_3(int32_t value)
	{
		___U3CStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_ConnectAddress_4() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E, ___ConnectAddress_4)); }
	inline String_t* get_ConnectAddress_4() const { return ___ConnectAddress_4; }
	inline String_t** get_address_of_ConnectAddress_4() { return &___ConnectAddress_4; }
	inline void set_ConnectAddress_4(String_t* value)
	{
		___ConnectAddress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAddress_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E, ___U3CServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_5() const { return ___U3CServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_5() { return &___U3CServerAddressU3Ek__BackingField_5; }
	inline void set_U3CServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E, ___U3CProxyServerAddressU3Ek__BackingField_6)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_6() const { return ___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_6() { return &___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_6(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerPortU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E, ___U3CServerPortU3Ek__BackingField_8)); }
	inline int32_t get_U3CServerPortU3Ek__BackingField_8() const { return ___U3CServerPortU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CServerPortU3Ek__BackingField_8() { return &___U3CServerPortU3Ek__BackingField_8; }
	inline void set_U3CServerPortU3Ek__BackingField_8(int32_t value)
	{
		___U3CServerPortU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E, ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9)); }
	inline bool get_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() const { return ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9; }
	inline bool* get_address_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() { return &___U3CAddressResolvedAsIpv6U3Ek__BackingField_9; }
	inline void set_U3CAddressResolvedAsIpv6U3Ek__BackingField_9(bool value)
	{
		___U3CAddressResolvedAsIpv6U3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUrlProtocolU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E, ___U3CUrlProtocolU3Ek__BackingField_10)); }
	inline String_t* get_U3CUrlProtocolU3Ek__BackingField_10() const { return ___U3CUrlProtocolU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUrlProtocolU3Ek__BackingField_10() { return &___U3CUrlProtocolU3Ek__BackingField_10; }
	inline void set_U3CUrlProtocolU3Ek__BackingField_10(String_t* value)
	{
		___U3CUrlProtocolU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlProtocolU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUrlPathU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E, ___U3CUrlPathU3Ek__BackingField_11)); }
	inline String_t* get_U3CUrlPathU3Ek__BackingField_11() const { return ___U3CUrlPathU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CUrlPathU3Ek__BackingField_11() { return &___U3CUrlPathU3Ek__BackingField_11; }
	inline void set_U3CUrlPathU3Ek__BackingField_11(String_t* value)
	{
		___U3CUrlPathU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlPathU3Ek__BackingField_11), (void*)value);
	}
};

struct IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E_StaticFields
{
public:
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerIpAddress>k__BackingField
	String_t* ___U3CServerIpAddressU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CServerIpAddressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E_StaticFields, ___U3CServerIpAddressU3Ek__BackingField_7)); }
	inline String_t* get_U3CServerIpAddressU3Ek__BackingField_7() const { return ___U3CServerIpAddressU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CServerIpAddressU3Ek__BackingField_7() { return &___U3CServerIpAddressU3Ek__BackingField_7; }
	inline void set_U3CServerIpAddressU3Ek__BackingField_7(String_t* value)
	{
		___U3CServerIpAddressU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerIpAddressU3Ek__BackingField_7), (void*)value);
	}
};


// ExitGames.Client.Photon.PeerBase
struct  PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E * ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_tF6D383A032E13DAEDCE2847F4805D6940CDC3B4B * ___SerializationProtocol_1;
	// ExitGames.Client.Photon.NCommandPool ExitGames.Client.Photon.PeerBase::nCommandPool
	NCommandPool_tA5658B1EDA2DA6CF76C8483909CD01B1A211625E * ___nCommandPool_2;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_3;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * ___PhotonSocket_4;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_5;
	// System.String ExitGames.Client.Photon.PeerBase::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_6;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_7;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_8;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_9;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t14CE1A9D4342055FD9A099DACBD0654127700F36 * ___CommandInCurrentDispatch_10;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_11;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_12;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase_MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 * ___ActionQueue_13;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_14;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_15;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_21;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_22;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_24;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_25;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject * ___CustomInitData_26;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_27;
	// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.PeerBase::reusableEventData
	EventData_tD0BF7DDA508EC2311DD363D9A636BE4FB7481C3A * ___reusableEventData_28;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::longestSentCall
	int32_t ___longestSentCall_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_33;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_34;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_35;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_36;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_37;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_39;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___lagRandomizer_40;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_tB2A55ED8A3FA38E7CBC04EEC143DF532D721FB1D * ___NetSimListOutgoing_41;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_tB2A55ED8A3FA38E7CBC04EEC143DF532D721FB1D * ___NetSimListIncoming_42;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800 * ___networkSimulationSettings_43;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_44;

public:
	inline static int32_t get_offset_of_photonPeer_0() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___photonPeer_0)); }
	inline PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E * get_photonPeer_0() const { return ___photonPeer_0; }
	inline PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E ** get_address_of_photonPeer_0() { return &___photonPeer_0; }
	inline void set_photonPeer_0(PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E * value)
	{
		___photonPeer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonPeer_0), (void*)value);
	}

	inline static int32_t get_offset_of_SerializationProtocol_1() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___SerializationProtocol_1)); }
	inline IProtocol_tF6D383A032E13DAEDCE2847F4805D6940CDC3B4B * get_SerializationProtocol_1() const { return ___SerializationProtocol_1; }
	inline IProtocol_tF6D383A032E13DAEDCE2847F4805D6940CDC3B4B ** get_address_of_SerializationProtocol_1() { return &___SerializationProtocol_1; }
	inline void set_SerializationProtocol_1(IProtocol_tF6D383A032E13DAEDCE2847F4805D6940CDC3B4B * value)
	{
		___SerializationProtocol_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerializationProtocol_1), (void*)value);
	}

	inline static int32_t get_offset_of_nCommandPool_2() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___nCommandPool_2)); }
	inline NCommandPool_tA5658B1EDA2DA6CF76C8483909CD01B1A211625E * get_nCommandPool_2() const { return ___nCommandPool_2; }
	inline NCommandPool_tA5658B1EDA2DA6CF76C8483909CD01B1A211625E ** get_address_of_nCommandPool_2() { return &___nCommandPool_2; }
	inline void set_nCommandPool_2(NCommandPool_tA5658B1EDA2DA6CF76C8483909CD01B1A211625E * value)
	{
		___nCommandPool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nCommandPool_2), (void*)value);
	}

	inline static int32_t get_offset_of_usedTransportProtocol_3() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___usedTransportProtocol_3)); }
	inline uint8_t get_usedTransportProtocol_3() const { return ___usedTransportProtocol_3; }
	inline uint8_t* get_address_of_usedTransportProtocol_3() { return &___usedTransportProtocol_3; }
	inline void set_usedTransportProtocol_3(uint8_t value)
	{
		___usedTransportProtocol_3 = value;
	}

	inline static int32_t get_offset_of_PhotonSocket_4() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___PhotonSocket_4)); }
	inline IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * get_PhotonSocket_4() const { return ___PhotonSocket_4; }
	inline IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E ** get_address_of_PhotonSocket_4() { return &___PhotonSocket_4; }
	inline void set_PhotonSocket_4(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * value)
	{
		___PhotonSocket_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonSocket_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___U3CServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_5() const { return ___U3CServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_5() { return &___U3CServerAddressU3Ek__BackingField_5; }
	inline void set_U3CServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___U3CProxyServerAddressU3Ek__BackingField_6)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_6() const { return ___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_6() { return &___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_6(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_peerConnectionState_7() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___peerConnectionState_7)); }
	inline uint8_t get_peerConnectionState_7() const { return ___peerConnectionState_7; }
	inline uint8_t* get_address_of_peerConnectionState_7() { return &___peerConnectionState_7; }
	inline void set_peerConnectionState_7(uint8_t value)
	{
		___peerConnectionState_7 = value;
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_8() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___ByteCountLastOperation_8)); }
	inline int32_t get_ByteCountLastOperation_8() const { return ___ByteCountLastOperation_8; }
	inline int32_t* get_address_of_ByteCountLastOperation_8() { return &___ByteCountLastOperation_8; }
	inline void set_ByteCountLastOperation_8(int32_t value)
	{
		___ByteCountLastOperation_8 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_9() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___ByteCountCurrentDispatch_9)); }
	inline int32_t get_ByteCountCurrentDispatch_9() const { return ___ByteCountCurrentDispatch_9; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_9() { return &___ByteCountCurrentDispatch_9; }
	inline void set_ByteCountCurrentDispatch_9(int32_t value)
	{
		___ByteCountCurrentDispatch_9 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_10() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___CommandInCurrentDispatch_10)); }
	inline NCommand_t14CE1A9D4342055FD9A099DACBD0654127700F36 * get_CommandInCurrentDispatch_10() const { return ___CommandInCurrentDispatch_10; }
	inline NCommand_t14CE1A9D4342055FD9A099DACBD0654127700F36 ** get_address_of_CommandInCurrentDispatch_10() { return &___CommandInCurrentDispatch_10; }
	inline void set_CommandInCurrentDispatch_10(NCommand_t14CE1A9D4342055FD9A099DACBD0654127700F36 * value)
	{
		___CommandInCurrentDispatch_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandInCurrentDispatch_10), (void*)value);
	}

	inline static int32_t get_offset_of_packetLossByCrc_11() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___packetLossByCrc_11)); }
	inline int32_t get_packetLossByCrc_11() const { return ___packetLossByCrc_11; }
	inline int32_t* get_address_of_packetLossByCrc_11() { return &___packetLossByCrc_11; }
	inline void set_packetLossByCrc_11(int32_t value)
	{
		___packetLossByCrc_11 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_12() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___packetLossByChallenge_12)); }
	inline int32_t get_packetLossByChallenge_12() const { return ___packetLossByChallenge_12; }
	inline int32_t* get_address_of_packetLossByChallenge_12() { return &___packetLossByChallenge_12; }
	inline void set_packetLossByChallenge_12(int32_t value)
	{
		___packetLossByChallenge_12 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_13() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___ActionQueue_13)); }
	inline Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 * get_ActionQueue_13() const { return ___ActionQueue_13; }
	inline Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 ** get_address_of_ActionQueue_13() { return &___ActionQueue_13; }
	inline void set_ActionQueue_13(Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 * value)
	{
		___ActionQueue_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionQueue_13), (void*)value);
	}

	inline static int32_t get_offset_of_peerID_14() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___peerID_14)); }
	inline int16_t get_peerID_14() const { return ___peerID_14; }
	inline int16_t* get_address_of_peerID_14() { return &___peerID_14; }
	inline void set_peerID_14(int16_t value)
	{
		___peerID_14 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_15() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___serverTimeOffset_15)); }
	inline int32_t get_serverTimeOffset_15() const { return ___serverTimeOffset_15; }
	inline int32_t* get_address_of_serverTimeOffset_15() { return &___serverTimeOffset_15; }
	inline void set_serverTimeOffset_15(int32_t value)
	{
		___serverTimeOffset_15 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_16() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___serverTimeOffsetIsAvailable_16)); }
	inline bool get_serverTimeOffsetIsAvailable_16() const { return ___serverTimeOffsetIsAvailable_16; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_16() { return &___serverTimeOffsetIsAvailable_16; }
	inline void set_serverTimeOffsetIsAvailable_16(bool value)
	{
		___serverTimeOffsetIsAvailable_16 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_17() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___roundTripTime_17)); }
	inline int32_t get_roundTripTime_17() const { return ___roundTripTime_17; }
	inline int32_t* get_address_of_roundTripTime_17() { return &___roundTripTime_17; }
	inline void set_roundTripTime_17(int32_t value)
	{
		___roundTripTime_17 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_18() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___roundTripTimeVariance_18)); }
	inline int32_t get_roundTripTimeVariance_18() const { return ___roundTripTimeVariance_18; }
	inline int32_t* get_address_of_roundTripTimeVariance_18() { return &___roundTripTimeVariance_18; }
	inline void set_roundTripTimeVariance_18(int32_t value)
	{
		___roundTripTimeVariance_18 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_19() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___lastRoundTripTime_19)); }
	inline int32_t get_lastRoundTripTime_19() const { return ___lastRoundTripTime_19; }
	inline int32_t* get_address_of_lastRoundTripTime_19() { return &___lastRoundTripTime_19; }
	inline void set_lastRoundTripTime_19(int32_t value)
	{
		___lastRoundTripTime_19 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_20() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___lowestRoundTripTime_20)); }
	inline int32_t get_lowestRoundTripTime_20() const { return ___lowestRoundTripTime_20; }
	inline int32_t* get_address_of_lowestRoundTripTime_20() { return &___lowestRoundTripTime_20; }
	inline void set_lowestRoundTripTime_20(int32_t value)
	{
		___lowestRoundTripTime_20 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_21() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___highestRoundTripTimeVariance_21)); }
	inline int32_t get_highestRoundTripTimeVariance_21() const { return ___highestRoundTripTimeVariance_21; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_21() { return &___highestRoundTripTimeVariance_21; }
	inline void set_highestRoundTripTimeVariance_21(int32_t value)
	{
		___highestRoundTripTimeVariance_21 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_22() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___timestampOfLastReceive_22)); }
	inline int32_t get_timestampOfLastReceive_22() const { return ___timestampOfLastReceive_22; }
	inline int32_t* get_address_of_timestampOfLastReceive_22() { return &___timestampOfLastReceive_22; }
	inline void set_timestampOfLastReceive_22(int32_t value)
	{
		___timestampOfLastReceive_22 = value;
	}

	inline static int32_t get_offset_of_bytesOut_24() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___bytesOut_24)); }
	inline int64_t get_bytesOut_24() const { return ___bytesOut_24; }
	inline int64_t* get_address_of_bytesOut_24() { return &___bytesOut_24; }
	inline void set_bytesOut_24(int64_t value)
	{
		___bytesOut_24 = value;
	}

	inline static int32_t get_offset_of_bytesIn_25() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___bytesIn_25)); }
	inline int64_t get_bytesIn_25() const { return ___bytesIn_25; }
	inline int64_t* get_address_of_bytesIn_25() { return &___bytesIn_25; }
	inline void set_bytesIn_25(int64_t value)
	{
		___bytesIn_25 = value;
	}

	inline static int32_t get_offset_of_CustomInitData_26() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___CustomInitData_26)); }
	inline RuntimeObject * get_CustomInitData_26() const { return ___CustomInitData_26; }
	inline RuntimeObject ** get_address_of_CustomInitData_26() { return &___CustomInitData_26; }
	inline void set_CustomInitData_26(RuntimeObject * value)
	{
		___CustomInitData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomInitData_26), (void*)value);
	}

	inline static int32_t get_offset_of_AppId_27() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___AppId_27)); }
	inline String_t* get_AppId_27() const { return ___AppId_27; }
	inline String_t** get_address_of_AppId_27() { return &___AppId_27; }
	inline void set_AppId_27(String_t* value)
	{
		___AppId_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_27), (void*)value);
	}

	inline static int32_t get_offset_of_reusableEventData_28() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___reusableEventData_28)); }
	inline EventData_tD0BF7DDA508EC2311DD363D9A636BE4FB7481C3A * get_reusableEventData_28() const { return ___reusableEventData_28; }
	inline EventData_tD0BF7DDA508EC2311DD363D9A636BE4FB7481C3A ** get_address_of_reusableEventData_28() { return &___reusableEventData_28; }
	inline void set_reusableEventData_28(EventData_tD0BF7DDA508EC2311DD363D9A636BE4FB7481C3A * value)
	{
		___reusableEventData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableEventData_28), (void*)value);
	}

	inline static int32_t get_offset_of_timeBase_29() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___timeBase_29)); }
	inline int32_t get_timeBase_29() const { return ___timeBase_29; }
	inline int32_t* get_address_of_timeBase_29() { return &___timeBase_29; }
	inline void set_timeBase_29(int32_t value)
	{
		___timeBase_29 = value;
	}

	inline static int32_t get_offset_of_timeoutInt_30() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___timeoutInt_30)); }
	inline int32_t get_timeoutInt_30() const { return ___timeoutInt_30; }
	inline int32_t* get_address_of_timeoutInt_30() { return &___timeoutInt_30; }
	inline void set_timeoutInt_30(int32_t value)
	{
		___timeoutInt_30 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_31() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___timeLastAckReceive_31)); }
	inline int32_t get_timeLastAckReceive_31() const { return ___timeLastAckReceive_31; }
	inline int32_t* get_address_of_timeLastAckReceive_31() { return &___timeLastAckReceive_31; }
	inline void set_timeLastAckReceive_31(int32_t value)
	{
		___timeLastAckReceive_31 = value;
	}

	inline static int32_t get_offset_of_longestSentCall_32() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___longestSentCall_32)); }
	inline int32_t get_longestSentCall_32() const { return ___longestSentCall_32; }
	inline int32_t* get_address_of_longestSentCall_32() { return &___longestSentCall_32; }
	inline void set_longestSentCall_32(int32_t value)
	{
		___longestSentCall_32 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_33() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___timeLastSendAck_33)); }
	inline int32_t get_timeLastSendAck_33() const { return ___timeLastSendAck_33; }
	inline int32_t* get_address_of_timeLastSendAck_33() { return &___timeLastSendAck_33; }
	inline void set_timeLastSendAck_33(int32_t value)
	{
		___timeLastSendAck_33 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_34() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___timeLastSendOutgoing_34)); }
	inline int32_t get_timeLastSendOutgoing_34() const { return ___timeLastSendOutgoing_34; }
	inline int32_t* get_address_of_timeLastSendOutgoing_34() { return &___timeLastSendOutgoing_34; }
	inline void set_timeLastSendOutgoing_34(int32_t value)
	{
		___timeLastSendOutgoing_34 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_35() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___ApplicationIsInitialized_35)); }
	inline bool get_ApplicationIsInitialized_35() const { return ___ApplicationIsInitialized_35; }
	inline bool* get_address_of_ApplicationIsInitialized_35() { return &___ApplicationIsInitialized_35; }
	inline void set_ApplicationIsInitialized_35(bool value)
	{
		___ApplicationIsInitialized_35 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_36() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___isEncryptionAvailable_36)); }
	inline bool get_isEncryptionAvailable_36() const { return ___isEncryptionAvailable_36; }
	inline bool* get_address_of_isEncryptionAvailable_36() { return &___isEncryptionAvailable_36; }
	inline void set_isEncryptionAvailable_36(bool value)
	{
		___isEncryptionAvailable_36 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_37() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___outgoingCommandsInStream_37)); }
	inline int32_t get_outgoingCommandsInStream_37() const { return ___outgoingCommandsInStream_37; }
	inline int32_t* get_address_of_outgoingCommandsInStream_37() { return &___outgoingCommandsInStream_37; }
	inline void set_outgoingCommandsInStream_37(int32_t value)
	{
		___outgoingCommandsInStream_37 = value;
	}

	inline static int32_t get_offset_of_CryptoProvider_39() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___CryptoProvider_39)); }
	inline RuntimeObject* get_CryptoProvider_39() const { return ___CryptoProvider_39; }
	inline RuntimeObject** get_address_of_CryptoProvider_39() { return &___CryptoProvider_39; }
	inline void set_CryptoProvider_39(RuntimeObject* value)
	{
		___CryptoProvider_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CryptoProvider_39), (void*)value);
	}

	inline static int32_t get_offset_of_lagRandomizer_40() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___lagRandomizer_40)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_lagRandomizer_40() const { return ___lagRandomizer_40; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_lagRandomizer_40() { return &___lagRandomizer_40; }
	inline void set_lagRandomizer_40(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___lagRandomizer_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lagRandomizer_40), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_41() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___NetSimListOutgoing_41)); }
	inline LinkedList_1_tB2A55ED8A3FA38E7CBC04EEC143DF532D721FB1D * get_NetSimListOutgoing_41() const { return ___NetSimListOutgoing_41; }
	inline LinkedList_1_tB2A55ED8A3FA38E7CBC04EEC143DF532D721FB1D ** get_address_of_NetSimListOutgoing_41() { return &___NetSimListOutgoing_41; }
	inline void set_NetSimListOutgoing_41(LinkedList_1_tB2A55ED8A3FA38E7CBC04EEC143DF532D721FB1D * value)
	{
		___NetSimListOutgoing_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListOutgoing_41), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_42() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___NetSimListIncoming_42)); }
	inline LinkedList_1_tB2A55ED8A3FA38E7CBC04EEC143DF532D721FB1D * get_NetSimListIncoming_42() const { return ___NetSimListIncoming_42; }
	inline LinkedList_1_tB2A55ED8A3FA38E7CBC04EEC143DF532D721FB1D ** get_address_of_NetSimListIncoming_42() { return &___NetSimListIncoming_42; }
	inline void set_NetSimListIncoming_42(LinkedList_1_tB2A55ED8A3FA38E7CBC04EEC143DF532D721FB1D * value)
	{
		___NetSimListIncoming_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListIncoming_42), (void*)value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_43() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___networkSimulationSettings_43)); }
	inline NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800 * get_networkSimulationSettings_43() const { return ___networkSimulationSettings_43; }
	inline NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800 ** get_address_of_networkSimulationSettings_43() { return &___networkSimulationSettings_43; }
	inline void set_networkSimulationSettings_43(NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800 * value)
	{
		___networkSimulationSettings_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkSimulationSettings_43), (void*)value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_44() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05, ___TrafficPackageHeaderSize_44)); }
	inline int32_t get_TrafficPackageHeaderSize_44() const { return ___TrafficPackageHeaderSize_44; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_44() { return &___TrafficPackageHeaderSize_44; }
	inline void set_TrafficPackageHeaderSize_44(int32_t value)
	{
		___TrafficPackageHeaderSize_44 = value;
	}
};

struct PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_23;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_tC7CE6FD82D5475E0A375868406B2F269E1978A19 * ___MessageBufferPool_38;

public:
	inline static int32_t get_offset_of_peerCount_23() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05_StaticFields, ___peerCount_23)); }
	inline int16_t get_peerCount_23() const { return ___peerCount_23; }
	inline int16_t* get_address_of_peerCount_23() { return &___peerCount_23; }
	inline void set_peerCount_23(int16_t value)
	{
		___peerCount_23 = value;
	}

	inline static int32_t get_offset_of_MessageBufferPool_38() { return static_cast<int32_t>(offsetof(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05_StaticFields, ___MessageBufferPool_38)); }
	inline Queue_1_tC7CE6FD82D5475E0A375868406B2F269E1978A19 * get_MessageBufferPool_38() const { return ___MessageBufferPool_38; }
	inline Queue_1_tC7CE6FD82D5475E0A375868406B2F269E1978A19 ** get_address_of_MessageBufferPool_38() { return &___MessageBufferPool_38; }
	inline void set_MessageBufferPool_38(Queue_1_tC7CE6FD82D5475E0A375868406B2F269E1978A19 * value)
	{
		___MessageBufferPool_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageBufferPool_38), (void*)value);
	}
};


// ExitGames.Client.Photon.PeerBase_<>c__DisplayClass109_0
struct  U3CU3Ec__DisplayClass109_0_tB9C06CE21609B0986325FA09737A88C5CD37480B  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PeerBase_<>c__DisplayClass109_0::<>4__this
	PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * ___U3CU3E4__this_0;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase_<>c__DisplayClass109_0::level
	uint8_t ___level_1;
	// System.String ExitGames.Client.Photon.PeerBase_<>c__DisplayClass109_0::debugReturn
	String_t* ___debugReturn_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass109_0_tB9C06CE21609B0986325FA09737A88C5CD37480B, ___U3CU3E4__this_0)); }
	inline PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass109_0_tB9C06CE21609B0986325FA09737A88C5CD37480B, ___level_1)); }
	inline uint8_t get_level_1() const { return ___level_1; }
	inline uint8_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(uint8_t value)
	{
		___level_1 = value;
	}

	inline static int32_t get_offset_of_debugReturn_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass109_0_tB9C06CE21609B0986325FA09737A88C5CD37480B, ___debugReturn_2)); }
	inline String_t* get_debugReturn_2() const { return ___debugReturn_2; }
	inline String_t** get_address_of_debugReturn_2() { return &___debugReturn_2; }
	inline void set_debugReturn_2(String_t* value)
	{
		___debugReturn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugReturn_2), (void*)value);
	}
};


// ExitGames.Client.Photon.PeerBase_<>c__DisplayClass110_0
struct  U3CU3Ec__DisplayClass110_0_tACE8A621AF95A38B1BDC370F5BE77A0A4195BCD4  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PeerBase_<>c__DisplayClass110_0::<>4__this
	PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * ___U3CU3E4__this_0;
	// ExitGames.Client.Photon.StatusCode ExitGames.Client.Photon.PeerBase_<>c__DisplayClass110_0::statusValue
	int32_t ___statusValue_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass110_0_tACE8A621AF95A38B1BDC370F5BE77A0A4195BCD4, ___U3CU3E4__this_0)); }
	inline PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_statusValue_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass110_0_tACE8A621AF95A38B1BDC370F5BE77A0A4195BCD4, ___statusValue_1)); }
	inline int32_t get_statusValue_1() const { return ___statusValue_1; }
	inline int32_t* get_address_of_statusValue_1() { return &___statusValue_1; }
	inline void set_statusValue_1(int32_t value)
	{
		___statusValue_1 = value;
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


// ExitGames.Client.Photon.SendOptions
struct  SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED 
{
public:
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;

public:
	inline static int32_t get_offset_of_DeliveryMode_2() { return static_cast<int32_t>(offsetof(SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED, ___DeliveryMode_2)); }
	inline int32_t get_DeliveryMode_2() const { return ___DeliveryMode_2; }
	inline int32_t* get_address_of_DeliveryMode_2() { return &___DeliveryMode_2; }
	inline void set_DeliveryMode_2(int32_t value)
	{
		___DeliveryMode_2 = value;
	}

	inline static int32_t get_offset_of_Encrypt_3() { return static_cast<int32_t>(offsetof(SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED, ___Encrypt_3)); }
	inline bool get_Encrypt_3() const { return ___Encrypt_3; }
	inline bool* get_address_of_Encrypt_3() { return &___Encrypt_3; }
	inline void set_Encrypt_3(bool value)
	{
		___Encrypt_3 = value;
	}

	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED, ___Channel_4)); }
	inline uint8_t get_Channel_4() const { return ___Channel_4; }
	inline uint8_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(uint8_t value)
	{
		___Channel_4 = value;
	}
};

struct SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED_StaticFields
{
public:
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  ___SendUnreliable_1;

public:
	inline static int32_t get_offset_of_SendReliable_0() { return static_cast<int32_t>(offsetof(SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED_StaticFields, ___SendReliable_0)); }
	inline SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  get_SendReliable_0() const { return ___SendReliable_0; }
	inline SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED * get_address_of_SendReliable_0() { return &___SendReliable_0; }
	inline void set_SendReliable_0(SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  value)
	{
		___SendReliable_0 = value;
	}

	inline static int32_t get_offset_of_SendUnreliable_1() { return static_cast<int32_t>(offsetof(SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED_StaticFields, ___SendUnreliable_1)); }
	inline SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  get_SendUnreliable_1() const { return ___SendUnreliable_1; }
	inline SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED * get_address_of_SendUnreliable_1() { return &___SendUnreliable_1; }
	inline void set_SendUnreliable_1(SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  value)
	{
		___SendUnreliable_1 = value;
	}
};

// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
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

// System.Net.IPAddress
struct  IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.Net.Sockets.Socket
struct  Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_22;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_Handle_13)); }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_13), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___seed_endpoint_14)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ReadSem_15)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_15), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___WriteSem_16)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_16), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}

	inline static int32_t get_offset_of_ID_22() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ID_22)); }
	inline int32_t get_ID_22() const { return ___ID_22; }
	inline int32_t* get_address_of_ID_22() { return &___ID_22; }
	inline void set_ID_22(int32_t value)
	{
		___ID_22 = value;
	}
};

struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___AcceptAsyncCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptCallback_24;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptReceiveCallback_25;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ConnectAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginConnectCallback_27;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___DisconnectAsyncCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginDisconnectCallback_29;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveAsyncCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveGenericCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveFromAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveFromCallback_34;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendAsyncCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginSendGenericCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendToAsyncCallback_37;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_23() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___AcceptAsyncCallback_23)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_AcceptAsyncCallback_23() const { return ___AcceptAsyncCallback_23; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_AcceptAsyncCallback_23() { return &___AcceptAsyncCallback_23; }
	inline void set_AcceptAsyncCallback_23(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___AcceptAsyncCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_24() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptCallback_24)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptCallback_24() const { return ___BeginAcceptCallback_24; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptCallback_24() { return &___BeginAcceptCallback_24; }
	inline void set_BeginAcceptCallback_24(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_25() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptReceiveCallback_25)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptReceiveCallback_25() const { return ___BeginAcceptReceiveCallback_25; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptReceiveCallback_25() { return &___BeginAcceptReceiveCallback_25; }
	inline void set_BeginAcceptReceiveCallback_25(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptReceiveCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ConnectAsyncCallback_26)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ConnectAsyncCallback_26() const { return ___ConnectAsyncCallback_26; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ConnectAsyncCallback_26() { return &___ConnectAsyncCallback_26; }
	inline void set_ConnectAsyncCallback_26(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ConnectAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_27() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginConnectCallback_27)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginConnectCallback_27() const { return ___BeginConnectCallback_27; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginConnectCallback_27() { return &___BeginConnectCallback_27; }
	inline void set_BeginConnectCallback_27(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginConnectCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_28() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___DisconnectAsyncCallback_28)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_DisconnectAsyncCallback_28() const { return ___DisconnectAsyncCallback_28; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_DisconnectAsyncCallback_28() { return &___DisconnectAsyncCallback_28; }
	inline void set_DisconnectAsyncCallback_28(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___DisconnectAsyncCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_29() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginDisconnectCallback_29)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginDisconnectCallback_29() const { return ___BeginDisconnectCallback_29; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginDisconnectCallback_29() { return &___BeginDisconnectCallback_29; }
	inline void set_BeginDisconnectCallback_29(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginDisconnectCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_30() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveAsyncCallback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveAsyncCallback_30() const { return ___ReceiveAsyncCallback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveAsyncCallback_30() { return &___ReceiveAsyncCallback_30; }
	inline void set_ReceiveAsyncCallback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveAsyncCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_31() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveCallback_31)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveCallback_31() const { return ___BeginReceiveCallback_31; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveCallback_31() { return &___BeginReceiveCallback_31; }
	inline void set_BeginReceiveCallback_31(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_32() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveGenericCallback_32)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveGenericCallback_32() const { return ___BeginReceiveGenericCallback_32; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveGenericCallback_32() { return &___BeginReceiveGenericCallback_32; }
	inline void set_BeginReceiveGenericCallback_32(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveGenericCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveFromAsyncCallback_33)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveFromAsyncCallback_33() const { return ___ReceiveFromAsyncCallback_33; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveFromAsyncCallback_33() { return &___ReceiveFromAsyncCallback_33; }
	inline void set_ReceiveFromAsyncCallback_33(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveFromAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_34() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveFromCallback_34)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveFromCallback_34() const { return ___BeginReceiveFromCallback_34; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveFromCallback_34() { return &___BeginReceiveFromCallback_34; }
	inline void set_BeginReceiveFromCallback_34(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveFromCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_35() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendAsyncCallback_35)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendAsyncCallback_35() const { return ___SendAsyncCallback_35; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendAsyncCallback_35() { return &___SendAsyncCallback_35; }
	inline void set_SendAsyncCallback_35(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendAsyncCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_36() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginSendGenericCallback_36)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginSendGenericCallback_36() const { return ___BeginSendGenericCallback_36; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginSendGenericCallback_36() { return &___BeginSendGenericCallback_36; }
	inline void set_BeginSendGenericCallback_36(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginSendGenericCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_37() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendToAsyncCallback_37)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendToAsyncCallback_37() const { return ___SendToAsyncCallback_37; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendToAsyncCallback_37() { return &___SendToAsyncCallback_37; }
	inline void set_SendToAsyncCallback_37(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendToAsyncCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_37), (void*)value);
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


// ExitGames.Client.Photon.Encryption.EncryptorNative_LogCallbackDelegate
struct  LogCallbackDelegate_t8309D667EC65641C9EDFF5CEE4AD7CC79A89BF17  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.PeerBase_MyAction
struct  MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.SocketNative_LogCallbackDelegate
struct  LogCallbackDelegate_t2E023A5660AA6B1F913427471DE053B44315DD2E  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.SocketTcp
struct  SocketTcp_tCCF7F43F38912B5FA3E9AFB1C1860893982D49D8  : public IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketTcp::sock
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___sock_12;
	// System.Object ExitGames.Client.Photon.SocketTcp::syncer
	RuntimeObject * ___syncer_13;

public:
	inline static int32_t get_offset_of_sock_12() { return static_cast<int32_t>(offsetof(SocketTcp_tCCF7F43F38912B5FA3E9AFB1C1860893982D49D8, ___sock_12)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_sock_12() const { return ___sock_12; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_sock_12() { return &___sock_12; }
	inline void set_sock_12(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___sock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_12), (void*)value);
	}

	inline static int32_t get_offset_of_syncer_13() { return static_cast<int32_t>(offsetof(SocketTcp_tCCF7F43F38912B5FA3E9AFB1C1860893982D49D8, ___syncer_13)); }
	inline RuntimeObject * get_syncer_13() const { return ___syncer_13; }
	inline RuntimeObject ** get_address_of_syncer_13() { return &___syncer_13; }
	inline void set_syncer_13(RuntimeObject * value)
	{
		___syncer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncer_13), (void*)value);
	}
};


// ExitGames.Client.Photon.SocketUdp
struct  SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6  : public IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketUdp::sock
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___sock_12;
	// System.Object ExitGames.Client.Photon.SocketUdp::syncer
	RuntimeObject * ___syncer_13;

public:
	inline static int32_t get_offset_of_sock_12() { return static_cast<int32_t>(offsetof(SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6, ___sock_12)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_sock_12() const { return ___sock_12; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_sock_12() { return &___sock_12; }
	inline void set_sock_12(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___sock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_12), (void*)value);
	}

	inline static int32_t get_offset_of_syncer_13() { return static_cast<int32_t>(offsetof(SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6, ___syncer_13)); }
	inline RuntimeObject * get_syncer_13() const { return ___syncer_13; }
	inline RuntimeObject ** get_address_of_syncer_13() { return &___syncer_13; }
	inline void set_syncer_13(RuntimeObject * value)
	{
		___syncer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncer_13), (void*)value);
	}
};


// ExitGames.Client.Photon.SocketUdpAsync
struct  SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7  : public IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketUdpAsync::sock
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___sock_12;
	// System.Object ExitGames.Client.Photon.SocketUdpAsync::syncer
	RuntimeObject * ___syncer_13;

public:
	inline static int32_t get_offset_of_sock_12() { return static_cast<int32_t>(offsetof(SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7, ___sock_12)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_sock_12() const { return ___sock_12; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_sock_12() { return &___sock_12; }
	inline void set_sock_12(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___sock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_12), (void*)value);
	}

	inline static int32_t get_offset_of_syncer_13() { return static_cast<int32_t>(offsetof(SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7, ___syncer_13)); }
	inline RuntimeObject * get_syncer_13() const { return ___syncer_13; }
	inline RuntimeObject ** get_address_of_syncer_13() { return &___syncer_13; }
	inline void set_syncer_13(RuntimeObject * value)
	{
		___syncer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncer_13), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass_IntegerMillisecondsDelegate
struct  IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.TPeer
struct  TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A  : public PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05
{
public:
	// System.Collections.Generic.Queue`1<System.Byte[]> ExitGames.Client.Photon.TPeer::incomingList
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * ___incomingList_48;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.TPeer::outgoingStream
	List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * ___outgoingStream_49;
	// System.Int32 ExitGames.Client.Photon.TPeer::lastPingResult
	int32_t ___lastPingResult_50;
	// System.Byte[] ExitGames.Client.Photon.TPeer::pingRequest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pingRequest_51;
	// System.Byte[] ExitGames.Client.Photon.TPeer::messageHeader
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___messageHeader_54;
	// System.Boolean ExitGames.Client.Photon.TPeer::DoFraming
	bool ___DoFraming_55;

public:
	inline static int32_t get_offset_of_incomingList_48() { return static_cast<int32_t>(offsetof(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A, ___incomingList_48)); }
	inline Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * get_incomingList_48() const { return ___incomingList_48; }
	inline Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 ** get_address_of_incomingList_48() { return &___incomingList_48; }
	inline void set_incomingList_48(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * value)
	{
		___incomingList_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___incomingList_48), (void*)value);
	}

	inline static int32_t get_offset_of_outgoingStream_49() { return static_cast<int32_t>(offsetof(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A, ___outgoingStream_49)); }
	inline List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * get_outgoingStream_49() const { return ___outgoingStream_49; }
	inline List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 ** get_address_of_outgoingStream_49() { return &___outgoingStream_49; }
	inline void set_outgoingStream_49(List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * value)
	{
		___outgoingStream_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outgoingStream_49), (void*)value);
	}

	inline static int32_t get_offset_of_lastPingResult_50() { return static_cast<int32_t>(offsetof(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A, ___lastPingResult_50)); }
	inline int32_t get_lastPingResult_50() const { return ___lastPingResult_50; }
	inline int32_t* get_address_of_lastPingResult_50() { return &___lastPingResult_50; }
	inline void set_lastPingResult_50(int32_t value)
	{
		___lastPingResult_50 = value;
	}

	inline static int32_t get_offset_of_pingRequest_51() { return static_cast<int32_t>(offsetof(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A, ___pingRequest_51)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_pingRequest_51() const { return ___pingRequest_51; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_pingRequest_51() { return &___pingRequest_51; }
	inline void set_pingRequest_51(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___pingRequest_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pingRequest_51), (void*)value);
	}

	inline static int32_t get_offset_of_messageHeader_54() { return static_cast<int32_t>(offsetof(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A, ___messageHeader_54)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_messageHeader_54() const { return ___messageHeader_54; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_messageHeader_54() { return &___messageHeader_54; }
	inline void set_messageHeader_54(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___messageHeader_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHeader_54), (void*)value);
	}

	inline static int32_t get_offset_of_DoFraming_55() { return static_cast<int32_t>(offsetof(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A, ___DoFraming_55)); }
	inline bool get_DoFraming_55() const { return ___DoFraming_55; }
	inline bool* get_address_of_DoFraming_55() { return &___DoFraming_55; }
	inline void set_DoFraming_55(bool value)
	{
		___DoFraming_55 = value;
	}
};

struct TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpFramedMessageHead
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___tcpFramedMessageHead_52;
	// System.Byte[] ExitGames.Client.Photon.TPeer::tcpMsgHead
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___tcpMsgHead_53;

public:
	inline static int32_t get_offset_of_tcpFramedMessageHead_52() { return static_cast<int32_t>(offsetof(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_StaticFields, ___tcpFramedMessageHead_52)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_tcpFramedMessageHead_52() const { return ___tcpFramedMessageHead_52; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_tcpFramedMessageHead_52() { return &___tcpFramedMessageHead_52; }
	inline void set_tcpFramedMessageHead_52(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___tcpFramedMessageHead_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcpFramedMessageHead_52), (void*)value);
	}

	inline static int32_t get_offset_of_tcpMsgHead_53() { return static_cast<int32_t>(offsetof(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_StaticFields, ___tcpMsgHead_53)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_tcpMsgHead_53() const { return ___tcpMsgHead_53; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_tcpMsgHead_53() { return &___tcpMsgHead_53; }
	inline void set_tcpMsgHead_53(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___tcpMsgHead_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcpMsgHead_53), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct  Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Runtime.InteropServices.ExternalException
struct  ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ThreadAbortException
struct  ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ThreadStart
struct  ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.ComponentModel.Win32Exception
struct  Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950  : public ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// System.IO.EndOfStreamException
struct  EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
};


// System.Net.Sockets.SocketException
struct  SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88  : public Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88, ___m_EndPoint_20)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
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
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * m_Items[1];

public:
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
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
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
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
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3B357BA0DCB9E5A38ACBDFCA728A40E7F83104FF_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket__ctor_m014508E6D254505DAFEDD3D265951AB9B4C81A35 (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * ___peerBase0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, uint8_t ___levelOfMessage0, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IPhotonSocket_get_Listener_mACAD070580B0DBCE3A9BDE89D053762DC64EEE22 (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SocketUdp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdp_Dispose_m84CC363B03A5650785884B689052FDC55CFB5AB8 (SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, uint8_t ___debugLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_Connect_m20693F8370815F1A587F6172CDCE90EBDA590D59 (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Send_mF70EF17396CEA161F628B1923DA32463720D9A1E (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, const RuntimeMethod* method);
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * Socket_get_LocalEndPoint_m327EB4A6DD9260037F648B5ABA719BB305D40EB0 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_IsBound()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_IsBound_m67D559154A1B175E8B384DF0DBCC98EB0EA53830_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D (const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_AddressResolvedAsIpv6()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IPhotonSocket_get_AddressResolvedAsIpv6_m3CE218111A1154BB726964769A81D86EA8AE44DF_inline (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleException_m0383830DD81BFC546AD42D2F6E347079F0D81E71 (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, int32_t ___statusCode0, const RuntimeMethod* method);
// System.Net.IPAddress[] ExitGames.Client.Photon.IPhotonSocket::GetIpAddresses(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* IPhotonSocket_GetIpAddresses_mD6AFD701AE954124C0113B0AA0146F347BDA0C32 (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, String_t* ___hostname0, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_m93FE8342D1B3D548A62AB2A8B838EE270B073539_inline (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Connect(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Connect_mA7BB443E475AC35010CFB96E8F7091D34AC61247 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_AddressResolvedAsIpv6(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_AddressResolvedAsIpv6_m4A5DE9F22417A4AD4242A116C1AA83E2EBBCEFF4_inline (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerIpAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_ServerIpAddress_mBCF0D1433A18F30CE257A8ED300B500675310C5B_inline (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_MTU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_MTU_m13F58FDA75ECC485942B6A0E65756DA4519E940B (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_mD76EDDF7BFF5A9AB3D7FC197A13B8CF024DEC482 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleReceivedDatagram_m6EB22FABBF79FF477723E85E55DAE2ACFD7A5D30 (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inBuffer0, int32_t ___length1, bool ___willBeReused2, const RuntimeMethod* method);
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131 (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SocketUdpAsync::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdpAsync_Dispose_m561D2D7BC30239806366F9A924EE028DE06EB5A9 (SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SocketUdpAsync::StartReceive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdpAsync_StartReceive_mA1B1BBEE6A409D3EB61324740A0C7B5514E85E14 (SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Socket_BeginReceive_mE0B06265B8AFC35DADCA4184D6C8B8A062BCDE73 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___state5, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_EndReceive_m46B15199B81401BF6B7B76242C6E3A7E8156749C (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Length_m66693418C0F09811558415AEE30D7EAFF8135A32 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Position_mCB2E3FD6F89D6ABE2BC55DD88BBDD9538A1365D1 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_set_Position_m1670BFB25CB2281BAD58D1E819D078C05E1864FF (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_SetLength_mA6F2E03E66786A915A09DBF380B3FA8C445A34AF (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.StreamBuffer::CheckSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800 (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor()
inline void List_1__ctor_m3C888313B73CFAA9196022BCADD304B04ED400D2 (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Add(!0)
inline void List_1_Add_m6C79F9A026ACCB196BD430F260975C794ED4BD9B (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * __this, MethodInfo_t * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 *, MethodInfo_t *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_Invoke_m14863D1116E0D23C59D3B90A127B323B3B4BE6ED (IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB01A42CA5D087F0940AA87045AAB82D09E50A64E (U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Thread>::.ctor()
inline void List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, String_t* ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Threading.Thread>::get_Item(System.Int32)
inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * List_1_get_Item_m35B4314C8C0E347FB9ED41E23C03A01AB4ACE13C_inline (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Thread>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m40C58524762A67779257F0CF8835AB6EEE804F44 (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, int32_t ___index0, Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, int32_t, Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Threading.Thread>::get_Count()
inline int32_t List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_inline (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Thread>::Add(!0)
inline void List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Thread::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Abort_m9D4D14BFB0F9CC71D026C83EBF3606A6ABE96AF4 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Threading.Thread>::GetEnumerator()
inline Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5  List_1_GetEnumerator_m880AD577F78AF8EC551CB7FB275790104FC2B28A (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5  (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Threading.Thread>::get_Current()
inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Enumerator_get_Current_m9D6B83E05585D70614A61164D8E117620542B310_inline (Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5 * __this, const RuntimeMethod* method)
{
	return ((  Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * (*) (Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Threading.Thread>::MoveNext()
inline bool Enumerator_MoveNext_mDC956B210DA5F5641333D067CE0C776477426121 (Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Threading.Thread>::Dispose()
inline void Enumerator_Dispose_mA3FB9719F4CC92744A8E6B02AD749893F764F1B1 (Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Thread>::Clear()
inline void List_1_Clear_m69714C34DB1FDD074135DC48C79A49FF32A48867 (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Diagnostics.Debug::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0 (String_t* ___message0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_mB23C528EEC7D819A5FC8073A736BBD851111E176 (Exception_t * ___throwable0, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stream1, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m0D5D175949A1EC31C2642F41AEAEDE72161DD275 (RuntimeObject* ___dictionary0, bool ___includeTypes1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m61761698CF15118FD5A3AC75B9E4F2475DCBA469 (RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8 (StringBuilder_t * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.BitConverter::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_mD476DB63219FD7C7FFB472ABEB04A8BB2D171F30 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.UInt32[] ExitGames.Client.Photon.SupportClass::InitializeTable(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* SupportClass_InitializeTable_mDF09AF40DDFA7BCB8069D4B5E998A997A4000C17 (uint32_t ___polynomial0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMillisecondsDelegate__ctor_mB289B52D81C12DB118E6FB07ED549ECD7BE2766E (IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Byte[]>::get_Count()
inline int32_t Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_inline (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::.ctor(System.Int32)
inline void Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610 (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, int32_t, const RuntimeMethod*))Queue_1__ctor_m3B357BA0DCB9E5A38ACBDFCA728A40E7F83104FF_gshared)(__this, ___capacity0, method);
}
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase__ctor_m2CC3A55D74F6D581FF340A5FAB2F5AF46F2B3E19 (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_InitPeerBase_m51F15D99BFE73245CDD80D6FF05944D9C2521D1E (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase::get_debugOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PeerBase_get_debugOut_mF85F050E9E21DD0788C09A8D34E89AE69890C951 (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ServerAddress_m5ECBDF657067F35D962B80951BECBFB36BF05F65_inline (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::set_ProxyServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ProxyServerAddress_m777B7EB228C9CDE9CCDF7125231AE7EA72C5CAF8_inline (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::.ctor()
inline void List_1__ctor_m34FDE8AB5875E6EF71EDB8FACB5C21591EF3C9E5 (List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Type ExitGames.Client.Photon.PeerBase::get_SocketImplementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PeerBase_get_SocketImplementation_m64B25A8B0272E4542CAB4F67D8BED76C821EA92A (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1 (Type_t * ___type0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SocketTcp::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketTcp__ctor_m1B9006090C3664882B312AAEF1F36096835D3031 (SocketTcp_tCCF7F43F38912B5FA3E9AFB1C1860893982D49D8 * __this, PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * ___npeer0, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PeerBase::PepareWebSocketUrl(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PeerBase_PepareWebSocketUrl_mB05FF4824E77134377B0DA77CDA2BD695CD6C99D (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, String_t* ___serverAddress0, String_t* ___appId1, RuntimeObject * ___customData2, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_m906ED8850F15E791E411D68FB77BF1C09A198661_inline (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// System.Byte[] ExitGames.Client.Photon.PeerBase::PrepareConnectData(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PeerBase_PrepareConnectData_mF03416F0F9FBB25F1EFB9BFF16F5568E262A7FDC (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, String_t* ___serverAddress0, String_t* ___appID1, RuntimeObject * ___custom2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_EnqueueInit_mB126F729AAB6D2AF1716DE2243CF1640FDD603FA (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Clear()
inline void Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, const RuntimeMethod*))Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_EnqueueStatusCallback_m4D4F2B26D1413D3D02605A88F22D12D6D5CF9059 (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, int32_t ___statusValue0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendPing_mB4A90BB52717584E836C4F1D0966A45404AFAB2B (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer__ctor_m47381FB62A38E25EF2D161B96CB551950E4390D2 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int32,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol_Serialize_m063D5CE93F136F4DA060FCD9B062BEEFB8358E39 (int32_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___target1, int32_t* ___targetOffset2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.StreamBuffer::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_Write_mE303FCEB8046645C143B133744EA0CE39E024B9D (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___srcOffset1, int32_t ___count2, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PeerBase_get_TrafficStatsEnabled_mF1C1322EE4F9FE8C26B99D52D4956A69C8787236 (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsOutgoing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * PeerBase_get_TrafficStatsOutgoing_m841F1AB89DDF5888E6CFBD63BB8E6BF6E0A7E1F2 (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_m7EEBFA02D79D77E0E679EC2383385FB5107C3D85_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_mD501E171768C7D630B52715A6A9EEE32DD50047D_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_mFC42DA2582F98A9F79AAEC3E34A0083215E98B26_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_mEECEF723C40510D81017F4EB1EFA29AEC97CED69_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountControlCommand_mA8A9D79AB7B50463D962326199B6096A3C890B3A (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(ExitGames.Client.Photon.DeliveryMode,ExitGames.Client.Photon.StreamBuffer,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueMessageAsPayload_m8488970C5FAFD200E3F2A9C5D3345D3D6DFB538F (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, int32_t ___deliveryMode0, StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * ___opMessage1, uint8_t ___channelId2, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PeerBase::get_DisconnectTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerBase_get_DisconnectTimeout_m4C469931D82B4B9CA92D6F819E27D39E2EAC0457 (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction__ctor_mEFDA8E994528B465A4C5F4F0A0FE904AB013CC78 (MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_EnqueueActionForDispatch_m3E10A94DDC2220EB053E8D0C4092905D86AEB665 (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * ___action0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::get_Count()
inline int32_t Queue_1_get_Count_mD751FF13AC697B5D8FD2BE494B530DEE1ED08F7B_inline (Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>::Dequeue()
inline MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * Queue_1_Dequeue_m9ED94410BC4CB5FE748E2752442D39ACF71FBEEB (Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 * __this, const RuntimeMethod* method)
{
	return ((  MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * (*) (Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_Invoke_m3CA3583227A4C296988BEC0A30F65E334C399B99 (MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Byte[]>::Dequeue()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer__ctor_m9603DFC93FB6C74B915262F6DF81AF68265066E4 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_get_Connected_m46BA88AAF9CA8333895D0B71C251AAB81695DDAD (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PeerBase::get_timeInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerBase_get_timeInt_m1B0D5864289F9C57F51503CAE350345FD7E74F51 (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PeerBase::get_timePingInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeerBase_get_timePingInterval_m95459136DC60F075532F449B665371531ABEC78A (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::get_Item(System.Int32)
inline StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * List_1_get_Item_mA65130795293D1AD3BEFFCB9C2149507FFC273DA_inline (List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * (*) (List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* StreamBuffer_GetBuffer_mFCFC1C06C28A90CC86BCAD8FA3915F778B4DA359 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendData_m2D0567C7C1A88C8C95C11E4E350ECD2CA4279E31 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::MessageBufferPoolPut(ExitGames.Client.Photon.StreamBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_MessageBufferPoolPut_m40D49428F621247EF4AC8408CCCB11535B07A741 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * ___buff0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::get_Count()
inline int32_t List_1_get_Count_mE34118C35A0CA41308255F3355DB36F8B99102EC_inline (List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::Clear()
inline void List_1_Clear_mAAFDB42A3A04F93B97970BB5FA4EA046FD4568C4 (List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5 (uint8_t* __this, const RuntimeMethod* method);
// System.Byte ExitGames.Client.Photon.PeerBase::get_ChannelCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PeerBase_get_ChannelCount_mA337BDF2A9485C567E9F4F8300EED40149ACC74E (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::SerializeMessageToMessage(System.Object,System.Boolean,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * PeerBase_SerializeMessageToMessage_m0B671FB4EF8958C0456ADFAD6DC7D6493E4C7D7E (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, RuntimeObject * ___message0, bool ___encrypt1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___messageHeader2, bool ___writeLength3, const RuntimeMethod* method);
// ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::MessageBufferPoolGet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * PeerBase_MessageBufferPoolGet_m41C06F3A6FF353E9BC18630A93A307AE9652FA1D (const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ExitGames.Client.Photon.StreamBuffer>::Add(!0)
inline void List_1_Add_m00BA02E7355F634D3E02D8EC1CC5B8933A219F7A (List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * __this, StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 *, StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountUnreliableOpCommand_m4CC3DD32D89C57108C0AC7C802990DBED2C9FEE3 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountReliableOpCommand_mF741E8BD8801DF182E2695F51094122CDD515667 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___size0, const RuntimeMethod* method);
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PeerBase::get_TrafficStatsGameLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * PeerBase_get_TrafficStatsGameLevel_m8973A6F9628EB68F7A19E3FBFB9551066444E471 (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountOperation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountOperation_mE918C1DC1A6B4542E846FE0DCF6E331B9B0997DB (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___operationBytes0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
inline void Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, const RuntimeMethod*))Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947 (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_gshared)(__this, ___key0, ___value1, method);
}
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800 * PeerBase_get_NetworkSimulationSettings_m6B48E0DE2649B7124480F9C46F476985C130D520 (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::get_IsSimulationEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkSimulationSet_get_IsSimulationEnabled_mA39A4855B329E07E660134A3699633B39C05E73C (NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_SendNetworkSimulated_m621C9EFBAB599EBB2456D39AA7706070EFC1BCA4 (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataToSend0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_mD32365C3335A829A276C4ABB0637293EF71C48BA (Exception_t * ___throwable0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_EnqueueDebugReturn_m8D405623EFC13FC69FA373E387D1B4B46469389B (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, uint8_t ___level0, String_t* ___debugReturn1, const RuntimeMethod* method);
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsIncoming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * PeerBase_get_TrafficStatsIncoming_m111AB98ADC74BE448F8C449ADDFCF0709323A9AE (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Byte[]>::Enqueue(!0)
inline void Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_mEDCCB531193E06273913A690641064FD5A1D9193 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inbuff0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int32&,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol_Deserialize_mD2DDCB53DFBEF87C195B4C0AFEF4DCDBE60310BC (int32_t* ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source1, int32_t* ___offset2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerBase_UpdateRoundTripTimeAndVariance_mBAA468FE410DDA95511420D14A72842CADBC7D53 (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, int32_t ___lastRoundtripTime0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29 (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_gshared)(__this, ___key0, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m18AEB79F17E16B878A97E296AF950B6F14C67D85_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_mD5EF6AF06AFA20F861D43C9FF7337C8645C2621E_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_m4BB231D4F13CF7D8913A32BD9DF13B20A1BD5378_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_mA5BE9D7FFE2851B58DA492A3A74A50E57420DAE5_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_m3978FBD382EE3D038E26CFA7E0932A565B81284E_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_mF12FFF4534FCE0952B84E66BACD7C107DE3A24D9_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_mEBD5F707F34E753F6EC7C9288085A735F9215361_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_m6793E7A100951896ADBC9A0FD6BBFB6F53EF555E_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_m081132C669F62A152832D8B09C8004BA4F41F934_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandBytes_m5980467EEA5DDF9D9D319AD8D1A12F1F01D98C51 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_m53309ABD989B9411DB08556D7BAF1CD6AC884121_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_m6F8952762EDC54D6F4A21626CA19E8DCBC22904C_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_m49F9E117C515EF3B6073BAA4463EB877A08B2462_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_mB70E1379E29259C561DF139BF2ECE006EAF181AC_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_m0B303CD720BFD4BDDD59198EDA2243411220A094_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_m29ABE4A8C8FF26BA14A9F2C1C530ADDDFB9FDB58_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_mBDFAEB94629F8147F68B061B4DAB5B4D68FC5383_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_mBA2DD4B16E635C548EC93A794E8A2DF4EFD56189_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_mC71CDED81C1B62BEF1DFA224258A0CACE9E21735_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketBytes_mD74E542F597C9C511AA68E60B3F448FCF5F920DD (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchIncomingCommandsCalls()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m65627CC73970BC86A365DE5E2EED2581A5015218_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_m69CA7504051B278CEBDC798B2F3A9D238C201B29_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_mCA61CFB98C2536B70AE4CFB1F6E869216A2E2DEC_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_m097CD343B66D1A595610F3FABFB3FDB1A6B356D7_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_mA348F665CBA527FF134073D83745E472B73F069A_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_mBAE6B2C93A92F3266D6D3297BF8B9E197603920A_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_m63A6A271AC5D8E8A40E1CAC9A4CDA4C2823E811F_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_mAF599DCDE2592414B3A2FF20F029FCCDB2C4DE2A_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_mFAD38F73B36FFCF16DD191B19AB486A9BA331039_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_mD430F42F580E8E7124EB45150984F70B3EEF222F_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_m6D039092C8A5C450E752B6C97D6EAA9C915FB0FE_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m048C35054245C3CAA38CC8E3B746F7BD8CD09792_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_m77355BACCD14D5BF4D651BF0EA122AA55DF61146_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m390AB7A816F21A789E3389F0B76893A45B951CB0_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_mA36EC54B8C167AE5D7083076EBC4385E91452F47_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallbackOpCode(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m4A8600D5D8473D5DE25B4CBC52E0321A318DC17F_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m1751CDD5B0A14F624F8F599624416CEE2992BADE_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_mFEEC814D3E5003AB7DED5EFB22B58B5503128DAF_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallbackCode(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_mE4279C89C6FB896AF92931036C24AD63C90F2D98_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestMessageCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m01EC2454C32E825F7D8E871911EA0F8076DBF635_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestMessageCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_m10ACF1B603725D6A31D1DF2526D0C34E90A29340_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestRawMessageCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_m8698F108B925C29B14B4A8BE9987BFDFDE0DE85A_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestRawMessageCallback(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_m7347ACB4C024D08D0B8B55D2DB37F577AF68787A_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m6604BD424174ABDE28E3A43D61A1EDDF1609E4C5_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenDispatching(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m01550689EF170FFAE7708E3A4C4DE4A66C742C32_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_DispatchIncomingCommandsCalls(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m2286FAFC87873257BFF3598E52E4140DA90EA97C_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m6DF1327E04BD2DDD6B28855B841F2CA33578313B_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenSending(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m219337C4B0CDD8F8EE05351D9AFCE271CB5FB4B4_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_SendOutgoingCommandsCalls()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_mA0A1234BBC574014D947C2FB1FC0515342E35132_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_SendOutgoingCommandsCalls(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mC5C8E63B853BDF021F34AA0E671029CEED337EAD_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallbackCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_m1CCDFFD5D4A61A84F1A821AE45B4268567B518D4_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallbackOpCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m3500DA9ECABED11BCD4C8E3982888378A952BE77_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3532632C364F78F6357EDCF069DFFEF92695D6BE (U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_ReadingHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReceiveContext_get_ReadingHeader_mE18453A19C23C7D10A59FD49BA44872638D05DC5 (ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3407B5B3286A5A94450825673AF8B9F321721A2C (U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E (const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared)(__this, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SocketUdp::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdp__ctor_m3B5854FBF8F85DDCB835756F69C31396C81832FF (SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * __this, PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * ___npeer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp__ctor_m3B5854FBF8F85DDCB835756F69C31396C81832FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_syncer_13(L_0);
		PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * L_1 = ___npeer0;
		IPhotonSocket__ctor_m014508E6D254505DAFEDD3D265951AB9B4C81A35(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 3, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_4 = IPhotonSocket_get_Listener_mACAD070580B0DBCE3A9BDE89D053762DC64EEE22(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_4, 3, _stringLiteral2A2D33772A2965A6EC7A260D6AEF68730D411384);
	}

IL_0033:
	{
		((IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E *)__this)->set_PollReceive_2((bool)0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdp::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdp_Finalize_m20C4AADBCF86EEF73AC2B9B1071949DDF8D00A49 (SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		SocketUdp_Dispose_m84CC363B03A5650785884B689052FDC55CFB5AB8(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdp_Dispose_m84CC363B03A5650785884B689052FDC55CFB5AB8 (SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp_Dispose_m84CC363B03A5650785884B689052FDC55CFB5AB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Exception_t * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B7_3 = NULL;
	Exception_t * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B8_3 = NULL;
	{
		IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline(__this, 3, /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_sock_12();
		V_0 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = __this->get_sock_12();
			NullCheck(L_2);
			bool L_3 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0035;
			}
		}

IL_0027:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_5 = __this->get_sock_12();
			NullCheck(L_5);
			Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB(L_5, /*hidden argument*/NULL);
		}

IL_0035:
		{
			goto IL_005c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0038;
		throw e;
	}

CATCH_0038:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)__exception_local);
			Exception_t * L_6 = V_2;
			Exception_t * L_7 = L_6;
			G_B6_0 = L_7;
			G_B6_1 = _stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A;
			G_B6_2 = 3;
			G_B6_3 = __this;
			if (L_7)
			{
				G_B7_0 = L_7;
				G_B7_1 = _stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A;
				G_B7_2 = 3;
				G_B7_3 = __this;
				goto IL_0049;
			}
		}

IL_0045:
		{
			G_B8_0 = ((String_t*)(NULL));
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			G_B8_3 = G_B6_3;
			goto IL_004e;
		}

IL_0049:
		{
			NullCheck(G_B7_0);
			String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
			G_B8_0 = L_8;
			G_B8_1 = G_B7_1;
			G_B8_2 = G_B7_2;
			G_B8_3 = G_B7_3;
		}

IL_004e:
		{
			String_t* L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B8_1, G_B8_0, /*hidden argument*/NULL);
			NullCheck(G_B8_3);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B8_3, G_B8_2, L_9, /*hidden argument*/NULL);
			goto IL_005c;
		}
	} // end catch (depth: 1)

IL_005c:
	{
	}

IL_005d:
	{
		__this->set_sock_12((Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL);
		IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketUdp::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketUdp_Connect_mA300F39F22C592272EF56497B0FF776594F293BB (SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp_Connect_mA300F39F22C592272EF56497B0FF776594F293BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_syncer_13();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = IPhotonSocket_Connect_m20693F8370815F1A587F6172CDCE90EBDA590D59(__this, /*hidden argument*/NULL);
			V_2 = L_2;
			bool L_3 = V_2;
			V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_3;
			if (!L_4)
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x5E, FINALLY_0030);
		}

IL_0025:
		{
			IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline(__this, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x38, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0038:
	{
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_6 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_6, __this, (intptr_t)((intptr_t)SocketUdp_DnsAndConnect_m967E81B1709F7E899E807D38CA35DFFD4E9B8B6D_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_7 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_7, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_8 = V_0;
		NullCheck(L_8);
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_8, (bool)1, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_9 = V_0;
		NullCheck(L_9);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_9, /*hidden argument*/NULL);
		V_4 = (bool)1;
		goto IL_005e;
	}

IL_005e:
	{
		bool L_10 = V_4;
		return L_10;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketUdp::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketUdp_Disconnect_mA22067DA845F4CE0B6B35546EB77CA1B27C14C5C (SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp_Disconnect_mA22067DA845F4CE0B6B35546EB77CA1B27C14C5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Exception_t * G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	int32_t G_B9_2 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B9_3 = NULL;
	Exception_t * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B8_3 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	int32_t G_B10_2 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B10_3 = NULL;
	{
		bool L_0 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 3, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(__this, 3, _stringLiteral85278D80D353BA481AED82DD9BDB4E99BB5FD7B2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		RuntimeObject * L_2 = __this->get_syncer_13();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline(__this, 3, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4 = __this->get_sock_12();
			V_2 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0084;
			}
		}

IL_003f:
		{
		}

IL_0040:
		try
		{ // begin try (depth: 2)
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_6 = __this->get_sock_12();
			NullCheck(L_6);
			Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB(L_6, /*hidden argument*/NULL);
			goto IL_0083;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0050;
			throw e;
		}

CATCH_0050:
		{ // begin catch(System.Exception)
			{
				V_3 = ((Exception_t *)__exception_local);
				bool L_7 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 3, /*hidden argument*/NULL);
				V_4 = L_7;
				bool L_8 = V_4;
				if (!L_8)
				{
					goto IL_0080;
				}
			}

IL_005f:
			{
				Exception_t * L_9 = V_3;
				Exception_t * L_10 = L_9;
				G_B8_0 = L_10;
				G_B8_1 = _stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C;
				G_B8_2 = 3;
				G_B8_3 = __this;
				if (L_10)
				{
					G_B9_0 = L_10;
					G_B9_1 = _stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C;
					G_B9_2 = 3;
					G_B9_3 = __this;
					goto IL_006f;
				}
			}

IL_006b:
			{
				G_B10_0 = ((String_t*)(NULL));
				G_B10_1 = G_B8_1;
				G_B10_2 = G_B8_2;
				G_B10_3 = G_B8_3;
				goto IL_0074;
			}

IL_006f:
			{
				NullCheck(G_B9_0);
				String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B9_0);
				G_B10_0 = L_11;
				G_B10_1 = G_B9_1;
				G_B10_2 = G_B9_2;
				G_B10_3 = G_B9_3;
			}

IL_0074:
			{
				String_t* L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B10_1, G_B10_0, /*hidden argument*/NULL);
				NullCheck(G_B10_3);
				IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B10_3, G_B10_2, L_12, /*hidden argument*/NULL);
			}

IL_0080:
			{
				goto IL_0083;
			}
		} // end catch (depth: 2)

IL_0083:
		{
		}

IL_0084:
		{
			IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline(__this, 0, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x97, FINALLY_008f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_13 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(143)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0097:
	{
		V_5 = (bool)1;
		goto IL_009c;
	}

IL_009c:
	{
		bool L_14 = V_5;
		return L_14;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdp::Send(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketUdp_Send_mAD11BA0872CEC7F13CB9133DD5B64E672D16A240 (SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp_Send_mAD11BA0872CEC7F13CB9133DD5B64E672D16A240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B15_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B15_2 = NULL;
	String_t* G_B15_3 = NULL;
	int32_t G_B14_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B14_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B14_2 = NULL;
	String_t* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B16_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B16_3 = NULL;
	String_t* G_B16_4 = NULL;
	int32_t G_B18_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B18_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B18_2 = NULL;
	String_t* G_B18_3 = NULL;
	int32_t G_B17_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B17_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B17_2 = NULL;
	String_t* G_B17_3 = NULL;
	String_t* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B19_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B19_3 = NULL;
	String_t* G_B19_4 = NULL;
	int32_t G_B22_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B22_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B22_2 = NULL;
	String_t* G_B22_3 = NULL;
	int32_t G_B22_4 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B22_5 = NULL;
	int32_t G_B21_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B21_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B21_2 = NULL;
	String_t* G_B21_3 = NULL;
	int32_t G_B21_4 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B21_5 = NULL;
	String_t* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B23_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B23_3 = NULL;
	String_t* G_B23_4 = NULL;
	int32_t G_B23_5 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B23_6 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_sock_12();
			if (!L_0)
			{
				goto IL_001a;
			}
		}

IL_000a:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_1 = __this->get_sock_12();
			NullCheck(L_1);
			bool L_2 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_1, /*hidden argument*/NULL);
			G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
			goto IL_001b;
		}

IL_001a:
		{
			G_B4_0 = 1;
		}

IL_001b:
		{
			V_0 = (bool)G_B4_0;
			bool L_3 = V_0;
			if (!L_3)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			V_1 = 1;
			goto IL_017e;
		}

IL_0027:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4 = __this->get_sock_12();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
			int32_t L_6 = ___length1;
			NullCheck(L_4);
			Socket_Send_mF70EF17396CEA161F628B1923DA32463720D9A1E(L_4, L_5, 0, L_6, 0, /*hidden argument*/NULL);
			goto IL_017a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003d;
		throw e;
	}

CATCH_003d:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)__exception_local);
			int32_t L_7 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_7) == ((int32_t)3)))
			{
				goto IL_0053;
			}
		}

IL_0048:
		{
			int32_t L_8 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			G_B10_0 = ((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0054;
		}

IL_0053:
		{
			G_B10_0 = 0;
		}

IL_0054:
		{
			V_3 = (bool)G_B10_0;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0176;
			}
		}

IL_005b:
		{
			bool L_10 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 3, /*hidden argument*/NULL);
			V_4 = L_10;
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_0146;
			}
		}

IL_006c:
		{
			V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_12 = __this->get_sock_12();
			V_6 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_12) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_13 = V_6;
			if (!L_13)
			{
				goto IL_00eb;
			}
		}

IL_0083:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_16 = __this->get_sock_12();
			NullCheck(L_16);
			EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_17 = Socket_get_LocalEndPoint_m327EB4A6DD9260037F648B5ABA719BB305D40EB0(L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_17);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_15;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_19 = __this->get_sock_12();
			NullCheck(L_19);
			EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_20 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_20);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_20);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_18;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_22 = __this->get_sock_12();
			NullCheck(L_22);
			bool L_23 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_22, /*hidden argument*/NULL);
			G_B14_0 = 2;
			G_B14_1 = L_21;
			G_B14_2 = L_21;
			G_B14_3 = _stringLiteral105DCD844D9A45876F13A3503C14C3FC3A5186BA;
			if (L_23)
			{
				G_B15_0 = 2;
				G_B15_1 = L_21;
				G_B15_2 = L_21;
				G_B15_3 = _stringLiteral105DCD844D9A45876F13A3503C14C3FC3A5186BA;
				goto IL_00c1;
			}
		}

IL_00ba:
		{
			G_B16_0 = _stringLiteral3CC8D7011607DEE69C89FE518BB89125A3FD0309;
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			G_B16_3 = G_B14_2;
			G_B16_4 = G_B14_3;
			goto IL_00c6;
		}

IL_00c1:
		{
			G_B16_0 = _stringLiteral872832AF3EB23DF490D84F89198394B33CB88A29;
			G_B16_1 = G_B15_0;
			G_B16_2 = G_B15_1;
			G_B16_3 = G_B15_2;
			G_B16_4 = G_B15_3;
		}

IL_00c6:
		{
			NullCheck(G_B16_2);
			ArrayElementTypeCheck (G_B16_2, G_B16_0);
			(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (RuntimeObject *)G_B16_0);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = G_B16_3;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_25 = __this->get_sock_12();
			NullCheck(L_25);
			bool L_26 = Socket_get_IsBound_m67D559154A1B175E8B384DF0DBCC98EB0EA53830_inline(L_25, /*hidden argument*/NULL);
			G_B17_0 = 3;
			G_B17_1 = L_24;
			G_B17_2 = L_24;
			G_B17_3 = G_B16_4;
			if (L_26)
			{
				G_B18_0 = 3;
				G_B18_1 = L_24;
				G_B18_2 = L_24;
				G_B18_3 = G_B16_4;
				goto IL_00dd;
			}
		}

IL_00d6:
		{
			G_B19_0 = _stringLiteralC8C9B128ACA303C17E5837E2ACD6F203E1E4CC69;
			G_B19_1 = G_B17_0;
			G_B19_2 = G_B17_1;
			G_B19_3 = G_B17_2;
			G_B19_4 = G_B17_3;
			goto IL_00e2;
		}

IL_00dd:
		{
			G_B19_0 = _stringLiteral9CEE2204F2243F41DEEA3BB1E28F0E8465F59A5B;
			G_B19_1 = G_B18_0;
			G_B19_2 = G_B18_1;
			G_B19_3 = G_B18_2;
			G_B19_4 = G_B18_3;
		}

IL_00e2:
		{
			NullCheck(G_B19_2);
			ArrayElementTypeCheck (G_B19_2, G_B19_0);
			(G_B19_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B19_1), (RuntimeObject *)G_B19_0);
			String_t* L_27 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B19_4, G_B19_3, /*hidden argument*/NULL);
			V_5 = L_27;
		}

IL_00eb:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_28;
			String_t* L_30 = IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_29);
			ArrayElementTypeCheck (L_29, L_30);
			(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_30);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_31 = L_29;
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			int32_t L_32 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
			PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * L_33 = ((IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E *)__this)->get_peerBase_0();
			NullCheck(L_33);
			int32_t L_34 = L_33->get_timeBase_29();
			int32_t L_35 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_34));
			RuntimeObject * L_36 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_35);
			NullCheck(L_31);
			ArrayElementTypeCheck (L_31, L_36);
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_36);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = L_31;
			bool L_38 = IPhotonSocket_get_AddressResolvedAsIpv6_m3CE218111A1154BB726964769A81D86EA8AE44DF_inline(__this, /*hidden argument*/NULL);
			G_B21_0 = 2;
			G_B21_1 = L_37;
			G_B21_2 = L_37;
			G_B21_3 = _stringLiteralC8B903907D31435907E8AF7300E995E55A75F00B;
			G_B21_4 = 3;
			G_B21_5 = __this;
			if (L_38)
			{
				G_B22_0 = 2;
				G_B22_1 = L_37;
				G_B22_2 = L_37;
				G_B22_3 = _stringLiteralC8B903907D31435907E8AF7300E995E55A75F00B;
				G_B22_4 = 3;
				G_B22_5 = __this;
				goto IL_012b;
			}
		}

IL_0124:
		{
			String_t* L_39 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			G_B23_0 = L_39;
			G_B23_1 = G_B21_0;
			G_B23_2 = G_B21_1;
			G_B23_3 = G_B21_2;
			G_B23_4 = G_B21_3;
			G_B23_5 = G_B21_4;
			G_B23_6 = G_B21_5;
			goto IL_0130;
		}

IL_012b:
		{
			G_B23_0 = _stringLiteralCB5FDD5E178BD05010055C518503A047E0BAB175;
			G_B23_1 = G_B22_0;
			G_B23_2 = G_B22_1;
			G_B23_3 = G_B22_2;
			G_B23_4 = G_B22_3;
			G_B23_5 = G_B22_4;
			G_B23_6 = G_B22_5;
		}

IL_0130:
		{
			NullCheck(G_B23_2);
			ArrayElementTypeCheck (G_B23_2, G_B23_0);
			(G_B23_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B23_1), (RuntimeObject *)G_B23_0);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = G_B23_3;
			String_t* L_41 = V_5;
			NullCheck(L_40);
			ArrayElementTypeCheck (L_40, L_41);
			(L_40)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_41);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = L_40;
			Exception_t * L_43 = V_2;
			NullCheck(L_42);
			ArrayElementTypeCheck (L_42, L_43);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_43);
			String_t* L_44 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B23_4, L_42, /*hidden argument*/NULL);
			NullCheck(G_B23_6);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B23_6, G_B23_5, L_44, /*hidden argument*/NULL);
		}

IL_0146:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_45 = __this->get_sock_12();
			NullCheck(L_45);
			bool L_46 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_45, /*hidden argument*/NULL);
			V_7 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
			bool L_47 = V_7;
			if (!L_47)
			{
				goto IL_0175;
			}
		}

IL_015a:
		{
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(__this, 3, _stringLiteral5AF74A218C743A64A61DCB2CB5C232805167A4B2, /*hidden argument*/NULL);
			IPhotonSocket_HandleException_m0383830DD81BFC546AD42D2F6E347079F0D81E71(__this, ((int32_t)1030), /*hidden argument*/NULL);
		}

IL_0175:
		{
		}

IL_0176:
		{
			V_1 = 3;
			goto IL_017e;
		}
	} // end catch (depth: 1)

IL_017a:
	{
		V_1 = 0;
		goto IL_017e;
	}

IL_017e:
	{
		int32_t L_48 = V_1;
		return L_48;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdp::Receive(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketUdp_Receive_mD1288FBD1DF5B47A003E2D8CACEC0A4A94087EC9 (SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___data0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_0 = ___data0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		V_0 = 2;
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdp::DnsAndConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdp_DnsAndConnect_m967E81B1709F7E899E807D38CA35DFFD4E9B8B6D (SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp_DnsAndConnect_m967E81B1709F7E899E807D38CA35DFFD4E9B8B6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_0 = NULL;
	String_t* V_1 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * V_2 = NULL;
	bool V_3 = false;
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_4 = NULL;
	int32_t V_5 = 0;
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_6 = NULL;
	bool V_7 = false;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_8 = NULL;
	bool V_9 = false;
	int32_t V_10 = 0;
	Exception_t * V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B7_0 = 0;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	int32_t G_B16_2 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B16_3 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	int32_t G_B15_2 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B15_3 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	int32_t G_B17_2 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B17_3 = NULL;
	Exception_t * G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	Exception_t * G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	String_t* G_B23_0 = NULL;
	String_t* G_B23_1 = NULL;
	Exception_t * G_B25_0 = NULL;
	String_t* G_B25_1 = NULL;
	int32_t G_B25_2 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B25_3 = NULL;
	Exception_t * G_B24_0 = NULL;
	String_t* G_B24_1 = NULL;
	int32_t G_B24_2 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B24_3 = NULL;
	String_t* G_B26_0 = NULL;
	String_t* G_B26_1 = NULL;
	int32_t G_B26_2 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B26_3 = NULL;
	int32_t G_B33_0 = 0;
	{
		String_t* L_0 = IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline(__this, /*hidden argument*/NULL);
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_1 = IPhotonSocket_GetIpAddresses_mD6AFD701AE954124C0113B0AA0146F347BDA0C32(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_2 = V_0;
		V_3 = (bool)((((RuntimeObject*)(IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0228;
	}

IL_001c:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_4;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_5 = V_0;
		V_4 = L_5;
		V_5 = 0;
		goto IL_016c;
	}

IL_002e:
	{
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_6 = V_4;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_6 = L_9;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_10 = V_6;
			NullCheck(L_10);
			int32_t L_11 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_10, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_12 = (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)il2cpp_codegen_object_new(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
			Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C(L_12, L_11, 2, ((int32_t)17), /*hidden argument*/NULL);
			__this->set_sock_12(L_12);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_13 = __this->get_sock_12();
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_14 = V_6;
			int32_t L_15 = IPhotonSocket_get_ServerPort_m93FE8342D1B3D548A62AB2A8B838EE270B073539_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_13);
			Socket_Connect_mA7BB443E475AC35010CFB96E8F7091D34AC61247(L_13, L_14, L_15, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_16 = __this->get_sock_12();
			if (!L_16)
			{
				goto IL_0075;
			}
		}

IL_0068:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_17 = __this->get_sock_12();
			NullCheck(L_17);
			bool L_18 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_17, /*hidden argument*/NULL);
			G_B7_0 = ((int32_t)(L_18));
			goto IL_0076;
		}

IL_0075:
		{
			G_B7_0 = 0;
		}

IL_0076:
		{
			V_7 = (bool)G_B7_0;
			bool L_19 = V_7;
			if (!L_19)
			{
				goto IL_0082;
			}
		}

IL_007c:
		{
			goto IL_0177;
		}

IL_0082:
		{
			goto IL_0165;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0088;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0116;
		throw e;
	}

CATCH_0088:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_8 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)__exception_local);
			bool L_20 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 2, /*hidden argument*/NULL);
			V_9 = L_20;
			bool L_21 = V_9;
			if (!L_21)
			{
				goto IL_0113;
			}
		}

IL_0098:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
			String_t* L_24 = V_1;
			NullCheck(L_23);
			ArrayElementTypeCheck (L_23, L_24);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_24);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_23;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_26 = V_8;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_27 = L_26;
			G_B12_0 = L_27;
			G_B12_1 = 1;
			G_B12_2 = L_25;
			G_B12_3 = L_25;
			if (L_27)
			{
				G_B13_0 = L_27;
				G_B13_1 = 1;
				G_B13_2 = L_25;
				G_B13_3 = L_25;
				goto IL_00ae;
			}
		}

IL_00aa:
		{
			G_B14_0 = ((String_t*)(NULL));
			G_B14_1 = G_B12_1;
			G_B14_2 = G_B12_2;
			G_B14_3 = G_B12_3;
			goto IL_00b3;
		}

IL_00ae:
		{
			NullCheck(G_B13_0);
			String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B13_0);
			G_B14_0 = L_28;
			G_B14_1 = G_B13_1;
			G_B14_2 = G_B13_2;
			G_B14_3 = G_B13_3;
		}

IL_00b3:
		{
			NullCheck(G_B14_2);
			ArrayElementTypeCheck (G_B14_2, G_B14_0);
			(G_B14_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_1), (String_t*)G_B14_0);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = G_B14_3;
			NullCheck(L_29);
			ArrayElementTypeCheck (L_29, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
			(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_31 = V_8;
			NullCheck(L_31);
			int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_31);
			V_10 = L_32;
			String_t* L_33 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_10), /*hidden argument*/NULL);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_33);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_33);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_30;
			NullCheck(L_34);
			ArrayElementTypeCheck (L_34, _stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1);
			(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1);
			String_t* L_35 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_34, /*hidden argument*/NULL);
			V_1 = L_35;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_36 = V_8;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_37 = L_36;
			G_B15_0 = L_37;
			G_B15_1 = _stringLiteral86A8294451A16C9100336EDF55F2B68CBD45BD67;
			G_B15_2 = 2;
			G_B15_3 = __this;
			if (L_37)
			{
				G_B16_0 = L_37;
				G_B16_1 = _stringLiteral86A8294451A16C9100336EDF55F2B68CBD45BD67;
				G_B16_2 = 2;
				G_B16_3 = __this;
				goto IL_00ed;
			}
		}

IL_00e9:
		{
			G_B17_0 = ((String_t*)(NULL));
			G_B17_1 = G_B15_1;
			G_B17_2 = G_B15_2;
			G_B17_3 = G_B15_3;
			goto IL_00f2;
		}

IL_00ed:
		{
			NullCheck(G_B16_0);
			String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B16_0);
			G_B17_0 = L_38;
			G_B17_1 = G_B16_1;
			G_B17_2 = G_B16_2;
			G_B17_3 = G_B16_3;
		}

IL_00f2:
		{
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_39 = V_8;
			NullCheck(L_39);
			int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_39);
			V_10 = L_40;
			String_t* L_41 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_10), /*hidden argument*/NULL);
			String_t* L_42 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B17_1, G_B17_0, _stringLiteralD6789EA58E424F90511FD4613F868E6EBBA26766, L_41, /*hidden argument*/NULL);
			NullCheck(G_B17_3);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B17_3, G_B17_2, L_42, /*hidden argument*/NULL);
		}

IL_0113:
		{
			goto IL_0165;
		}
	} // end catch (depth: 1)

CATCH_0116:
	{ // begin catch(System.Exception)
		{
			V_11 = ((Exception_t *)__exception_local);
			bool L_43 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 2, /*hidden argument*/NULL);
			V_12 = L_43;
			bool L_44 = V_12;
			if (!L_44)
			{
				goto IL_0162;
			}
		}

IL_0126:
		{
			String_t* L_45 = V_1;
			Exception_t * L_46 = V_11;
			Exception_t * L_47 = L_46;
			G_B21_0 = L_47;
			G_B21_1 = L_45;
			if (L_47)
			{
				G_B22_0 = L_47;
				G_B22_1 = L_45;
				goto IL_0131;
			}
		}

IL_012d:
		{
			G_B23_0 = ((String_t*)(NULL));
			G_B23_1 = G_B21_1;
			goto IL_0136;
		}

IL_0131:
		{
			NullCheck(G_B22_0);
			String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B22_0);
			G_B23_0 = L_48;
			G_B23_1 = G_B22_1;
		}

IL_0136:
		{
			String_t* L_49 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B23_1, G_B23_0, _stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1, /*hidden argument*/NULL);
			V_1 = L_49;
			Exception_t * L_50 = V_11;
			Exception_t * L_51 = L_50;
			G_B24_0 = L_51;
			G_B24_1 = _stringLiteralB73EE191F0E9F1AF4D345769EC47718AC55BF4D3;
			G_B24_2 = 2;
			G_B24_3 = __this;
			if (L_51)
			{
				G_B25_0 = L_51;
				G_B25_1 = _stringLiteralB73EE191F0E9F1AF4D345769EC47718AC55BF4D3;
				G_B25_2 = 2;
				G_B25_3 = __this;
				goto IL_0151;
			}
		}

IL_014d:
		{
			G_B26_0 = ((String_t*)(NULL));
			G_B26_1 = G_B24_1;
			G_B26_2 = G_B24_2;
			G_B26_3 = G_B24_3;
			goto IL_0156;
		}

IL_0151:
		{
			NullCheck(G_B25_0);
			String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B25_0);
			G_B26_0 = L_52;
			G_B26_1 = G_B25_1;
			G_B26_2 = G_B25_2;
			G_B26_3 = G_B25_3;
		}

IL_0156:
		{
			String_t* L_53 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B26_1, G_B26_0, /*hidden argument*/NULL);
			NullCheck(G_B26_3);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B26_3, G_B26_2, L_53, /*hidden argument*/NULL);
		}

IL_0162:
		{
			goto IL_0165;
		}
	} // end catch (depth: 1)

IL_0165:
	{
		int32_t L_54 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_016c:
	{
		int32_t L_55 = V_5;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_56 = V_4;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))))
		{
			goto IL_002e;
		}
	}

IL_0177:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_57 = __this->get_sock_12();
		if (!L_57)
		{
			goto IL_018f;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_58 = __this->get_sock_12();
		NullCheck(L_58);
		bool L_59 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_58, /*hidden argument*/NULL);
		G_B33_0 = ((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		goto IL_0190;
	}

IL_018f:
	{
		G_B33_0 = 1;
	}

IL_0190:
	{
		V_13 = (bool)G_B33_0;
		bool L_60 = V_13;
		if (!L_60)
		{
			goto IL_01c7;
		}
	}
	{
		bool L_61 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 1, /*hidden argument*/NULL);
		V_14 = L_61;
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_01b9;
		}
	}
	{
		String_t* L_63 = V_1;
		String_t* L_64 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral191D7F30D495BBE4F52FE89B64D411898274ED12, L_63, /*hidden argument*/NULL);
		IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(__this, 1, L_64, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		IPhotonSocket_HandleException_m0383830DD81BFC546AD42D2F6E347079F0D81E71(__this, ((int32_t)1023), /*hidden argument*/NULL);
		goto IL_0228;
	}

IL_01c7:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_65 = __this->get_sock_12();
		NullCheck(L_65);
		int32_t L_66 = Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B_inline(L_65, /*hidden argument*/NULL);
		IPhotonSocket_set_AddressResolvedAsIpv6_m4A5DE9F22417A4AD4242A116C1AA83E2EBBCEFF4_inline(__this, (bool)((((int32_t)L_66) == ((int32_t)((int32_t)23)))? 1 : 0), /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_67 = __this->get_sock_12();
		NullCheck(L_67);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_68 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		String_t* L_69 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_68);
		IPhotonSocket_set_ServerIpAddress_mBCF0D1433A18F30CE257A8ED300B500675310C5B_inline(L_69, /*hidden argument*/NULL);
		IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline(__this, 2, /*hidden argument*/NULL);
		PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * L_70 = ((IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E *)__this)->get_peerBase_0();
		NullCheck(L_70);
		VirtActionInvoker0::Invoke(11 /* System.Void ExitGames.Client.Photon.PeerBase::OnConnect() */, L_70);
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_71 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_71, __this, (intptr_t)((intptr_t)SocketUdp_ReceiveLoop_m0ACF9A8BA7FAA9B7EDB7BA09CE97EF1099321DEC_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_72 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_72, L_71, /*hidden argument*/NULL);
		V_2 = L_72;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_73 = V_2;
		NullCheck(L_73);
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_73, (bool)1, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_74 = V_2;
		NullCheck(L_74);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_74, /*hidden argument*/NULL);
	}

IL_0228:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdp::ReceiveLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdp_ReceiveLoop_m0ACF9A8BA7FAA9B7EDB7BA09CE97EF1099321DEC (SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdp_ReceiveLoop_m0ACF9A8BA7FAA9B7EDB7BA09CE97EF1099321DEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Exception_t * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	RuntimeObject * V_12 = NULL;
	bool V_13 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B6_0 = 0;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	int32_t G_B10_4 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B10_5 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	int32_t G_B9_4 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B9_5 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	int32_t G_B11_4 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B11_5 = NULL;
	int32_t G_B17_0 = 0;
	Exception_t * G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_3 = NULL;
	int32_t G_B21_4 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B21_5 = NULL;
	Exception_t * G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	int32_t G_B20_4 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B20_5 = NULL;
	String_t* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_3 = NULL;
	int32_t G_B22_4 = 0;
	SocketUdp_t32DA2F5DC647B0024BCF5E6515AF811E403C1CA6 * G_B22_5 = NULL;
	int32_t G_B31_0 = 0;
	{
		int32_t L_0 = IPhotonSocket_get_MTU_m13F58FDA75ECC485942B6A0E65756DA4519E940B(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		goto IL_01d1;
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = __this->get_sock_12();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = Socket_Receive_mD76EDDF7BFF5A9AB3D7FC197A13B8CF024DEC482(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		int32_t L_6 = V_1;
		IPhotonSocket_HandleReceivedDatagram_m6EB22FABBF79FF477723E85E55DAE2ACFD7A5D30(__this, L_5, L_6, (bool)1, /*hidden argument*/NULL);
		goto IL_01d0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0031;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0120;
		throw e;
	}

CATCH_0031:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_2 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)__exception_local);
			int32_t L_7 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_7) == ((int32_t)3)))
			{
				goto IL_0047;
			}
		}

IL_003c:
		{
			int32_t L_8 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			G_B6_0 = ((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0048;
		}

IL_0047:
		{
			G_B6_0 = 0;
		}

IL_0048:
		{
			V_3 = (bool)G_B6_0;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_011a;
			}
		}

IL_004f:
		{
			bool L_10 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 1, /*hidden argument*/NULL);
			V_4 = L_10;
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_010d;
			}
		}

IL_0060:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
			NullCheck(L_13);
			ArrayElementTypeCheck (L_13, _stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
			int32_t L_15 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			V_5 = L_15;
			RuntimeObject * L_16 = Box(PhotonSocketState_t2A5155A285C84EEDE019DF16C2DC769F192739AB_il2cpp_TypeInfo_var, (&V_5));
			NullCheck(L_16);
			String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
			V_5 = *(int32_t*)UnBox(L_16);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_17);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_14;
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
			String_t* L_20 = IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_19);
			ArrayElementTypeCheck (L_19, L_20);
			(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_20);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_19;
			NullCheck(L_21);
			ArrayElementTypeCheck (L_21, _stringLiteral9D09DA33FDC3D1BC48C84D54B554B437D7EB433B);
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral9D09DA33FDC3D1BC48C84D54B554B437D7EB433B);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_23 = V_2;
			NullCheck(L_23);
			int32_t L_24 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_23);
			V_6 = L_24;
			String_t* L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_6), /*hidden argument*/NULL);
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_25);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_25);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_22;
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, _stringLiteralC7D39E360ACE7C6B120D7DEAA16B87D3B72EF7DD);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralC7D39E360ACE7C6B120D7DEAA16B87D3B72EF7DD);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_28 = V_2;
			NullCheck(L_28);
			int32_t L_29 = SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131(L_28, /*hidden argument*/NULL);
			V_7 = L_29;
			RuntimeObject * L_30 = Box(SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var, (&V_7));
			NullCheck(L_30);
			String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
			V_7 = *(int32_t*)UnBox(L_30);
			NullCheck(L_27);
			ArrayElementTypeCheck (L_27, L_31);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_31);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_27;
			NullCheck(L_32);
			ArrayElementTypeCheck (L_32, _stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC);
			(L_32)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_34 = V_2;
			NullCheck(L_34);
			String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_34);
			NullCheck(L_33);
			ArrayElementTypeCheck (L_33, L_35);
			(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_35);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_33;
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_38 = V_2;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_39 = L_38;
			G_B9_0 = L_39;
			G_B9_1 = ((int32_t)11);
			G_B9_2 = L_37;
			G_B9_3 = L_37;
			G_B9_4 = 1;
			G_B9_5 = __this;
			if (L_39)
			{
				G_B10_0 = L_39;
				G_B10_1 = ((int32_t)11);
				G_B10_2 = L_37;
				G_B10_3 = L_37;
				G_B10_4 = 1;
				G_B10_5 = __this;
				goto IL_00fb;
			}
		}

IL_00f7:
		{
			G_B11_0 = ((String_t*)(NULL));
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			G_B11_4 = G_B9_4;
			G_B11_5 = G_B9_5;
			goto IL_0100;
		}

IL_00fb:
		{
			NullCheck(G_B10_0);
			String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B10_0);
			G_B11_0 = L_40;
			G_B11_1 = G_B10_1;
			G_B11_2 = G_B10_2;
			G_B11_3 = G_B10_3;
			G_B11_4 = G_B10_4;
			G_B11_5 = G_B10_5;
		}

IL_0100:
		{
			NullCheck(G_B11_2);
			ArrayElementTypeCheck (G_B11_2, G_B11_0);
			(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
			String_t* L_41 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B11_3, /*hidden argument*/NULL);
			NullCheck(G_B11_5);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B11_5, G_B11_4, L_41, /*hidden argument*/NULL);
		}

IL_010d:
		{
			IPhotonSocket_HandleException_m0383830DD81BFC546AD42D2F6E347079F0D81E71(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_011a:
		{
			goto IL_01d0;
		}
	} // end catch (depth: 1)

CATCH_0120:
	{ // begin catch(System.Exception)
		{
			V_8 = ((Exception_t *)__exception_local);
			int32_t L_42 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_42) == ((int32_t)3)))
			{
				goto IL_0137;
			}
		}

IL_012c:
		{
			int32_t L_43 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			G_B17_0 = ((!(((uint32_t)L_43) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0138;
		}

IL_0137:
		{
			G_B17_0 = 0;
		}

IL_0138:
		{
			V_9 = (bool)G_B17_0;
			bool L_44 = V_9;
			if (!L_44)
			{
				goto IL_01cd;
			}
		}

IL_0141:
		{
			bool L_45 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 1, /*hidden argument*/NULL);
			V_10 = L_45;
			bool L_46 = V_10;
			if (!L_46)
			{
				goto IL_01c0;
			}
		}

IL_014f:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = L_47;
			NullCheck(L_48);
			ArrayElementTypeCheck (L_48, _stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF);
			(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = L_48;
			int32_t L_50 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			V_5 = L_50;
			RuntimeObject * L_51 = Box(PhotonSocketState_t2A5155A285C84EEDE019DF16C2DC769F192739AB_il2cpp_TypeInfo_var, (&V_5));
			NullCheck(L_51);
			String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_51);
			V_5 = *(int32_t*)UnBox(L_51);
			NullCheck(L_49);
			ArrayElementTypeCheck (L_49, L_52);
			(L_49)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_52);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = L_49;
			NullCheck(L_53);
			ArrayElementTypeCheck (L_53, _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			(L_53)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_54 = L_53;
			String_t* L_55 = IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_54);
			ArrayElementTypeCheck (L_54, L_55);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_55);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_54;
			NullCheck(L_56);
			ArrayElementTypeCheck (L_56, _stringLiteralC6F3CFE29387EC26E2DA25035AE8EFD559875EF5);
			(L_56)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC6F3CFE29387EC26E2DA25035AE8EFD559875EF5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_56;
			Exception_t * L_58 = V_8;
			NullCheck(L_58);
			String_t* L_59 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_58);
			NullCheck(L_57);
			ArrayElementTypeCheck (L_57, L_59);
			(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_59);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = L_57;
			NullCheck(L_60);
			ArrayElementTypeCheck (L_60, _stringLiteral1D13C9FF2BABB29CC1B62A9FA42C9A371FA95548);
			(L_60)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral1D13C9FF2BABB29CC1B62A9FA42C9A371FA95548);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = L_60;
			Exception_t * L_62 = V_8;
			Exception_t * L_63 = L_62;
			G_B20_0 = L_63;
			G_B20_1 = 7;
			G_B20_2 = L_61;
			G_B20_3 = L_61;
			G_B20_4 = 1;
			G_B20_5 = __this;
			if (L_63)
			{
				G_B21_0 = L_63;
				G_B21_1 = 7;
				G_B21_2 = L_61;
				G_B21_3 = L_61;
				G_B21_4 = 1;
				G_B21_5 = __this;
				goto IL_01ae;
			}
		}

IL_01aa:
		{
			G_B22_0 = ((String_t*)(NULL));
			G_B22_1 = G_B20_1;
			G_B22_2 = G_B20_2;
			G_B22_3 = G_B20_3;
			G_B22_4 = G_B20_4;
			G_B22_5 = G_B20_5;
			goto IL_01b3;
		}

IL_01ae:
		{
			NullCheck(G_B21_0);
			String_t* L_64 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B21_0);
			G_B22_0 = L_64;
			G_B22_1 = G_B21_1;
			G_B22_2 = G_B21_2;
			G_B22_3 = G_B21_3;
			G_B22_4 = G_B21_4;
			G_B22_5 = G_B21_5;
		}

IL_01b3:
		{
			NullCheck(G_B22_2);
			ArrayElementTypeCheck (G_B22_2, G_B22_0);
			(G_B22_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B22_1), (String_t*)G_B22_0);
			String_t* L_65 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B22_3, /*hidden argument*/NULL);
			NullCheck(G_B22_5);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B22_5, G_B22_4, L_65, /*hidden argument*/NULL);
		}

IL_01c0:
		{
			IPhotonSocket_HandleException_m0383830DD81BFC546AD42D2F6E347079F0D81E71(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_01cd:
		{
			goto IL_01d0;
		}
	} // end catch (depth: 1)

IL_01d0:
	{
	}

IL_01d1:
	{
		int32_t L_66 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_66) == ((int32_t)2))? 1 : 0);
		bool L_67 = V_11;
		if (L_67)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_68 = __this->get_syncer_13();
		V_12 = L_68;
		RuntimeObject * L_69 = V_12;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_69, /*hidden argument*/NULL);
	}

IL_01f3:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_70 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_70) == ((int32_t)3)))
			{
				goto IL_0208;
			}
		}

IL_01fd:
		{
			int32_t L_71 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			G_B31_0 = ((!(((uint32_t)L_71) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0209;
		}

IL_0208:
		{
			G_B31_0 = 0;
		}

IL_0209:
		{
			V_13 = (bool)G_B31_0;
			bool L_72 = V_13;
			if (!L_72)
			{
				goto IL_0218;
			}
		}

IL_020f:
		{
			VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, __this);
		}

IL_0218:
		{
			IL2CPP_LEAVE(0x224, FINALLY_021b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_021b;
	}

FINALLY_021b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_73 = V_12;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_73, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(539)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(539)
	{
		IL2CPP_JUMP_TBL(0x224, IL_0224)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0224:
	{
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
// System.Void ExitGames.Client.Photon.SocketUdpAsync::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdpAsync__ctor_m13DF5B77BFC0FE79CD95AFDA99ABE34829BFC51A (SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * __this, PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * ___npeer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdpAsync__ctor_m13DF5B77BFC0FE79CD95AFDA99ABE34829BFC51A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_syncer_13(L_0);
		PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * L_1 = ___npeer0;
		IPhotonSocket__ctor_m014508E6D254505DAFEDD3D265951AB9B4C81A35(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 3, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_4 = IPhotonSocket_get_Listener_mACAD070580B0DBCE3A9BDE89D053762DC64EEE22(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_4, 3, _stringLiteral5C4ADB9302F8BA90019E6CDA1D9EABEB6C36113A);
	}

IL_0033:
	{
		((IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E *)__this)->set_PollReceive_2((bool)0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdpAsync::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdpAsync_Finalize_mC95CE86C8C9C571EA3C2BB7BC005917A5EA4A476 (SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		SocketUdpAsync_Dispose_m561D2D7BC30239806366F9A924EE028DE06EB5A9(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdpAsync::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdpAsync_Dispose_m561D2D7BC30239806366F9A924EE028DE06EB5A9 (SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdpAsync_Dispose_m561D2D7BC30239806366F9A924EE028DE06EB5A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Exception_t * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B7_3 = NULL;
	Exception_t * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B8_3 = NULL;
	{
		IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline(__this, 3, /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_sock_12();
		V_0 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = __this->get_sock_12();
			NullCheck(L_2);
			bool L_3 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0035;
			}
		}

IL_0027:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_5 = __this->get_sock_12();
			NullCheck(L_5);
			Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB(L_5, /*hidden argument*/NULL);
		}

IL_0035:
		{
			goto IL_005c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0038;
		throw e;
	}

CATCH_0038:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)__exception_local);
			Exception_t * L_6 = V_2;
			Exception_t * L_7 = L_6;
			G_B6_0 = L_7;
			G_B6_1 = _stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A;
			G_B6_2 = 3;
			G_B6_3 = __this;
			if (L_7)
			{
				G_B7_0 = L_7;
				G_B7_1 = _stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A;
				G_B7_2 = 3;
				G_B7_3 = __this;
				goto IL_0049;
			}
		}

IL_0045:
		{
			G_B8_0 = ((String_t*)(NULL));
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			G_B8_3 = G_B6_3;
			goto IL_004e;
		}

IL_0049:
		{
			NullCheck(G_B7_0);
			String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
			G_B8_0 = L_8;
			G_B8_1 = G_B7_1;
			G_B8_2 = G_B7_2;
			G_B8_3 = G_B7_3;
		}

IL_004e:
		{
			String_t* L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B8_1, G_B8_0, /*hidden argument*/NULL);
			NullCheck(G_B8_3);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B8_3, G_B8_2, L_9, /*hidden argument*/NULL);
			goto IL_005c;
		}
	} // end catch (depth: 1)

IL_005c:
	{
	}

IL_005d:
	{
		__this->set_sock_12((Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL);
		IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketUdpAsync::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketUdpAsync_Connect_m844154F0B6013E324D1E7F998D2066F528A16BF9 (SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdpAsync_Connect_m844154F0B6013E324D1E7F998D2066F528A16BF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_syncer_13();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = IPhotonSocket_Connect_m20693F8370815F1A587F6172CDCE90EBDA590D59(__this, /*hidden argument*/NULL);
			V_2 = L_2;
			bool L_3 = V_2;
			V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_3;
			if (!L_4)
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x5E, FINALLY_0030);
		}

IL_0025:
		{
			IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline(__this, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x38, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0038:
	{
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_6 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_6, __this, (intptr_t)((intptr_t)SocketUdpAsync_DnsAndConnect_mA1DEE4C23497CCB6AD832942F4347A41638766C8_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_7 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_7, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_8 = V_0;
		NullCheck(L_8);
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_8, (bool)1, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_9 = V_0;
		NullCheck(L_9);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_9, /*hidden argument*/NULL);
		V_4 = (bool)1;
		goto IL_005e;
	}

IL_005e:
	{
		bool L_10 = V_4;
		return L_10;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketUdpAsync::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketUdpAsync_Disconnect_mEEF49D5095AC78AB7600E1A0E9F81748DA107B16 (SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdpAsync_Disconnect_mEEF49D5095AC78AB7600E1A0E9F81748DA107B16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Exception_t * G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	int32_t G_B9_2 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B9_3 = NULL;
	Exception_t * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B8_3 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	int32_t G_B10_2 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B10_3 = NULL;
	{
		bool L_0 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 3, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(__this, 3, _stringLiteralF8F808E4FCC3D0D0121C42B98143D2469E80A9E9, /*hidden argument*/NULL);
	}

IL_001b:
	{
		RuntimeObject * L_2 = __this->get_syncer_13();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline(__this, 3, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4 = __this->get_sock_12();
			V_2 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0084;
			}
		}

IL_003f:
		{
		}

IL_0040:
		try
		{ // begin try (depth: 2)
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_6 = __this->get_sock_12();
			NullCheck(L_6);
			Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB(L_6, /*hidden argument*/NULL);
			goto IL_0083;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0050;
			throw e;
		}

CATCH_0050:
		{ // begin catch(System.Exception)
			{
				V_3 = ((Exception_t *)__exception_local);
				bool L_7 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 3, /*hidden argument*/NULL);
				V_4 = L_7;
				bool L_8 = V_4;
				if (!L_8)
				{
					goto IL_0080;
				}
			}

IL_005f:
			{
				Exception_t * L_9 = V_3;
				Exception_t * L_10 = L_9;
				G_B8_0 = L_10;
				G_B8_1 = _stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C;
				G_B8_2 = 3;
				G_B8_3 = __this;
				if (L_10)
				{
					G_B9_0 = L_10;
					G_B9_1 = _stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C;
					G_B9_2 = 3;
					G_B9_3 = __this;
					goto IL_006f;
				}
			}

IL_006b:
			{
				G_B10_0 = ((String_t*)(NULL));
				G_B10_1 = G_B8_1;
				G_B10_2 = G_B8_2;
				G_B10_3 = G_B8_3;
				goto IL_0074;
			}

IL_006f:
			{
				NullCheck(G_B9_0);
				String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B9_0);
				G_B10_0 = L_11;
				G_B10_1 = G_B9_1;
				G_B10_2 = G_B9_2;
				G_B10_3 = G_B9_3;
			}

IL_0074:
			{
				String_t* L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B10_1, G_B10_0, /*hidden argument*/NULL);
				NullCheck(G_B10_3);
				IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B10_3, G_B10_2, L_12, /*hidden argument*/NULL);
			}

IL_0080:
			{
				goto IL_0083;
			}
		} // end catch (depth: 2)

IL_0083:
		{
		}

IL_0084:
		{
			IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline(__this, 0, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x97, FINALLY_008f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_13 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(143)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0097:
	{
		V_5 = (bool)1;
		goto IL_009c;
	}

IL_009c:
	{
		bool L_14 = V_5;
		return L_14;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdpAsync::Send(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketUdpAsync_Send_m00E01AA67FDCE6D05B2484A4EF159252A15304D1 (SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdpAsync_Send_m00E01AA67FDCE6D05B2484A4EF159252A15304D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B15_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B15_2 = NULL;
	String_t* G_B15_3 = NULL;
	int32_t G_B14_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B14_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B14_2 = NULL;
	String_t* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B16_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B16_3 = NULL;
	String_t* G_B16_4 = NULL;
	int32_t G_B18_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B18_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B18_2 = NULL;
	String_t* G_B18_3 = NULL;
	int32_t G_B17_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B17_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B17_2 = NULL;
	String_t* G_B17_3 = NULL;
	String_t* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B19_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B19_3 = NULL;
	String_t* G_B19_4 = NULL;
	int32_t G_B22_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B22_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B22_2 = NULL;
	String_t* G_B22_3 = NULL;
	int32_t G_B22_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B22_5 = NULL;
	int32_t G_B21_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B21_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B21_2 = NULL;
	String_t* G_B21_3 = NULL;
	int32_t G_B21_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B21_5 = NULL;
	String_t* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B23_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B23_3 = NULL;
	String_t* G_B23_4 = NULL;
	int32_t G_B23_5 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B23_6 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_sock_12();
			if (!L_0)
			{
				goto IL_001a;
			}
		}

IL_000a:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_1 = __this->get_sock_12();
			NullCheck(L_1);
			bool L_2 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_1, /*hidden argument*/NULL);
			G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
			goto IL_001b;
		}

IL_001a:
		{
			G_B4_0 = 1;
		}

IL_001b:
		{
			V_0 = (bool)G_B4_0;
			bool L_3 = V_0;
			if (!L_3)
			{
				goto IL_0027;
			}
		}

IL_001f:
		{
			V_1 = 1;
			goto IL_017e;
		}

IL_0027:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4 = __this->get_sock_12();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
			int32_t L_6 = ___length1;
			NullCheck(L_4);
			Socket_Send_mF70EF17396CEA161F628B1923DA32463720D9A1E(L_4, L_5, 0, L_6, 0, /*hidden argument*/NULL);
			goto IL_017a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003d;
		throw e;
	}

CATCH_003d:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)__exception_local);
			int32_t L_7 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_7) == ((int32_t)3)))
			{
				goto IL_0053;
			}
		}

IL_0048:
		{
			int32_t L_8 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			G_B10_0 = ((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0054;
		}

IL_0053:
		{
			G_B10_0 = 0;
		}

IL_0054:
		{
			V_3 = (bool)G_B10_0;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0176;
			}
		}

IL_005b:
		{
			bool L_10 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 3, /*hidden argument*/NULL);
			V_4 = L_10;
			bool L_11 = V_4;
			if (!L_11)
			{
				goto IL_0146;
			}
		}

IL_006c:
		{
			V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_12 = __this->get_sock_12();
			V_6 = (bool)((!(((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_12) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_13 = V_6;
			if (!L_13)
			{
				goto IL_00eb;
			}
		}

IL_0083:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_16 = __this->get_sock_12();
			NullCheck(L_16);
			EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_17 = Socket_get_LocalEndPoint_m327EB4A6DD9260037F648B5ABA719BB305D40EB0(L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_17);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_15;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_19 = __this->get_sock_12();
			NullCheck(L_19);
			EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_20 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_20);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_20);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_18;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_22 = __this->get_sock_12();
			NullCheck(L_22);
			bool L_23 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_22, /*hidden argument*/NULL);
			G_B14_0 = 2;
			G_B14_1 = L_21;
			G_B14_2 = L_21;
			G_B14_3 = _stringLiteral105DCD844D9A45876F13A3503C14C3FC3A5186BA;
			if (L_23)
			{
				G_B15_0 = 2;
				G_B15_1 = L_21;
				G_B15_2 = L_21;
				G_B15_3 = _stringLiteral105DCD844D9A45876F13A3503C14C3FC3A5186BA;
				goto IL_00c1;
			}
		}

IL_00ba:
		{
			G_B16_0 = _stringLiteral3CC8D7011607DEE69C89FE518BB89125A3FD0309;
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			G_B16_3 = G_B14_2;
			G_B16_4 = G_B14_3;
			goto IL_00c6;
		}

IL_00c1:
		{
			G_B16_0 = _stringLiteral872832AF3EB23DF490D84F89198394B33CB88A29;
			G_B16_1 = G_B15_0;
			G_B16_2 = G_B15_1;
			G_B16_3 = G_B15_2;
			G_B16_4 = G_B15_3;
		}

IL_00c6:
		{
			NullCheck(G_B16_2);
			ArrayElementTypeCheck (G_B16_2, G_B16_0);
			(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (RuntimeObject *)G_B16_0);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = G_B16_3;
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_25 = __this->get_sock_12();
			NullCheck(L_25);
			bool L_26 = Socket_get_IsBound_m67D559154A1B175E8B384DF0DBCC98EB0EA53830_inline(L_25, /*hidden argument*/NULL);
			G_B17_0 = 3;
			G_B17_1 = L_24;
			G_B17_2 = L_24;
			G_B17_3 = G_B16_4;
			if (L_26)
			{
				G_B18_0 = 3;
				G_B18_1 = L_24;
				G_B18_2 = L_24;
				G_B18_3 = G_B16_4;
				goto IL_00dd;
			}
		}

IL_00d6:
		{
			G_B19_0 = _stringLiteralC8C9B128ACA303C17E5837E2ACD6F203E1E4CC69;
			G_B19_1 = G_B17_0;
			G_B19_2 = G_B17_1;
			G_B19_3 = G_B17_2;
			G_B19_4 = G_B17_3;
			goto IL_00e2;
		}

IL_00dd:
		{
			G_B19_0 = _stringLiteral9CEE2204F2243F41DEEA3BB1E28F0E8465F59A5B;
			G_B19_1 = G_B18_0;
			G_B19_2 = G_B18_1;
			G_B19_3 = G_B18_2;
			G_B19_4 = G_B18_3;
		}

IL_00e2:
		{
			NullCheck(G_B19_2);
			ArrayElementTypeCheck (G_B19_2, G_B19_0);
			(G_B19_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B19_1), (RuntimeObject *)G_B19_0);
			String_t* L_27 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B19_4, G_B19_3, /*hidden argument*/NULL);
			V_5 = L_27;
		}

IL_00eb:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_28;
			String_t* L_30 = IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_29);
			ArrayElementTypeCheck (L_29, L_30);
			(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_30);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_31 = L_29;
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			int32_t L_32 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
			PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * L_33 = ((IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E *)__this)->get_peerBase_0();
			NullCheck(L_33);
			int32_t L_34 = L_33->get_timeBase_29();
			int32_t L_35 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_34));
			RuntimeObject * L_36 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_35);
			NullCheck(L_31);
			ArrayElementTypeCheck (L_31, L_36);
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_36);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = L_31;
			bool L_38 = IPhotonSocket_get_AddressResolvedAsIpv6_m3CE218111A1154BB726964769A81D86EA8AE44DF_inline(__this, /*hidden argument*/NULL);
			G_B21_0 = 2;
			G_B21_1 = L_37;
			G_B21_2 = L_37;
			G_B21_3 = _stringLiteralC8B903907D31435907E8AF7300E995E55A75F00B;
			G_B21_4 = 3;
			G_B21_5 = __this;
			if (L_38)
			{
				G_B22_0 = 2;
				G_B22_1 = L_37;
				G_B22_2 = L_37;
				G_B22_3 = _stringLiteralC8B903907D31435907E8AF7300E995E55A75F00B;
				G_B22_4 = 3;
				G_B22_5 = __this;
				goto IL_012b;
			}
		}

IL_0124:
		{
			String_t* L_39 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			G_B23_0 = L_39;
			G_B23_1 = G_B21_0;
			G_B23_2 = G_B21_1;
			G_B23_3 = G_B21_2;
			G_B23_4 = G_B21_3;
			G_B23_5 = G_B21_4;
			G_B23_6 = G_B21_5;
			goto IL_0130;
		}

IL_012b:
		{
			G_B23_0 = _stringLiteralCB5FDD5E178BD05010055C518503A047E0BAB175;
			G_B23_1 = G_B22_0;
			G_B23_2 = G_B22_1;
			G_B23_3 = G_B22_2;
			G_B23_4 = G_B22_3;
			G_B23_5 = G_B22_4;
			G_B23_6 = G_B22_5;
		}

IL_0130:
		{
			NullCheck(G_B23_2);
			ArrayElementTypeCheck (G_B23_2, G_B23_0);
			(G_B23_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B23_1), (RuntimeObject *)G_B23_0);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = G_B23_3;
			String_t* L_41 = V_5;
			NullCheck(L_40);
			ArrayElementTypeCheck (L_40, L_41);
			(L_40)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_41);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = L_40;
			Exception_t * L_43 = V_2;
			NullCheck(L_42);
			ArrayElementTypeCheck (L_42, L_43);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_43);
			String_t* L_44 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(G_B23_4, L_42, /*hidden argument*/NULL);
			NullCheck(G_B23_6);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B23_6, G_B23_5, L_44, /*hidden argument*/NULL);
		}

IL_0146:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_45 = __this->get_sock_12();
			NullCheck(L_45);
			bool L_46 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_45, /*hidden argument*/NULL);
			V_7 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
			bool L_47 = V_7;
			if (!L_47)
			{
				goto IL_0175;
			}
		}

IL_015a:
		{
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(__this, 3, _stringLiteral5AF74A218C743A64A61DCB2CB5C232805167A4B2, /*hidden argument*/NULL);
			IPhotonSocket_HandleException_m0383830DD81BFC546AD42D2F6E347079F0D81E71(__this, ((int32_t)1030), /*hidden argument*/NULL);
		}

IL_0175:
		{
		}

IL_0176:
		{
			V_1 = 3;
			goto IL_017e;
		}
	} // end catch (depth: 1)

IL_017a:
	{
		V_1 = 0;
		goto IL_017e;
	}

IL_017e:
	{
		int32_t L_48 = V_1;
		return L_48;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdpAsync::Receive(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketUdpAsync_Receive_mBB01474716842D6AF106675C6916DE14B1A5DC6C (SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___data0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_0 = ___data0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		V_0 = 2;
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdpAsync::DnsAndConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdpAsync_DnsAndConnect_mA1DEE4C23497CCB6AD832942F4347A41638766C8 (SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdpAsync_DnsAndConnect_mA1DEE4C23497CCB6AD832942F4347A41638766C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_3 = NULL;
	int32_t V_4 = 0;
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_5 = NULL;
	bool V_6 = false;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	Exception_t * V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B7_0 = 0;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	int32_t G_B16_2 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B16_3 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	int32_t G_B15_2 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B15_3 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	int32_t G_B17_2 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B17_3 = NULL;
	Exception_t * G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	Exception_t * G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	String_t* G_B23_0 = NULL;
	String_t* G_B23_1 = NULL;
	Exception_t * G_B25_0 = NULL;
	String_t* G_B25_1 = NULL;
	int32_t G_B25_2 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B25_3 = NULL;
	Exception_t * G_B24_0 = NULL;
	String_t* G_B24_1 = NULL;
	int32_t G_B24_2 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B24_3 = NULL;
	String_t* G_B26_0 = NULL;
	String_t* G_B26_1 = NULL;
	int32_t G_B26_2 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B26_3 = NULL;
	int32_t G_B33_0 = 0;
	{
		String_t* L_0 = IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline(__this, /*hidden argument*/NULL);
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_1 = IPhotonSocket_GetIpAddresses_mD6AFD701AE954124C0113B0AA0146F347BDA0C32(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_2 = V_0;
		V_2 = (bool)((((RuntimeObject*)(IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_020b;
	}

IL_001c:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_4;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_5 = V_0;
		V_3 = L_5;
		V_4 = 0;
		goto IL_016a;
	}

IL_002d:
	{
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = L_9;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_10 = V_5;
			NullCheck(L_10);
			int32_t L_11 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_10, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_12 = (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)il2cpp_codegen_object_new(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
			Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C(L_12, L_11, 2, ((int32_t)17), /*hidden argument*/NULL);
			__this->set_sock_12(L_12);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_13 = __this->get_sock_12();
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_14 = V_5;
			int32_t L_15 = IPhotonSocket_get_ServerPort_m93FE8342D1B3D548A62AB2A8B838EE270B073539_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_13);
			Socket_Connect_mA7BB443E475AC35010CFB96E8F7091D34AC61247(L_13, L_14, L_15, /*hidden argument*/NULL);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_16 = __this->get_sock_12();
			if (!L_16)
			{
				goto IL_0073;
			}
		}

IL_0066:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_17 = __this->get_sock_12();
			NullCheck(L_17);
			bool L_18 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_17, /*hidden argument*/NULL);
			G_B7_0 = ((int32_t)(L_18));
			goto IL_0074;
		}

IL_0073:
		{
			G_B7_0 = 0;
		}

IL_0074:
		{
			V_6 = (bool)G_B7_0;
			bool L_19 = V_6;
			if (!L_19)
			{
				goto IL_0080;
			}
		}

IL_007a:
		{
			goto IL_0174;
		}

IL_0080:
		{
			goto IL_0163;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0086;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0114;
		throw e;
	}

CATCH_0086:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_7 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)__exception_local);
			bool L_20 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 2, /*hidden argument*/NULL);
			V_8 = L_20;
			bool L_21 = V_8;
			if (!L_21)
			{
				goto IL_0111;
			}
		}

IL_0096:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
			String_t* L_24 = V_1;
			NullCheck(L_23);
			ArrayElementTypeCheck (L_23, L_24);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_24);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_23;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_26 = V_7;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_27 = L_26;
			G_B12_0 = L_27;
			G_B12_1 = 1;
			G_B12_2 = L_25;
			G_B12_3 = L_25;
			if (L_27)
			{
				G_B13_0 = L_27;
				G_B13_1 = 1;
				G_B13_2 = L_25;
				G_B13_3 = L_25;
				goto IL_00ac;
			}
		}

IL_00a8:
		{
			G_B14_0 = ((String_t*)(NULL));
			G_B14_1 = G_B12_1;
			G_B14_2 = G_B12_2;
			G_B14_3 = G_B12_3;
			goto IL_00b1;
		}

IL_00ac:
		{
			NullCheck(G_B13_0);
			String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B13_0);
			G_B14_0 = L_28;
			G_B14_1 = G_B13_1;
			G_B14_2 = G_B13_2;
			G_B14_3 = G_B13_3;
		}

IL_00b1:
		{
			NullCheck(G_B14_2);
			ArrayElementTypeCheck (G_B14_2, G_B14_0);
			(G_B14_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_1), (String_t*)G_B14_0);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = G_B14_3;
			NullCheck(L_29);
			ArrayElementTypeCheck (L_29, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
			(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_31 = V_7;
			NullCheck(L_31);
			int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_31);
			V_9 = L_32;
			String_t* L_33 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_9), /*hidden argument*/NULL);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_33);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_33);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_30;
			NullCheck(L_34);
			ArrayElementTypeCheck (L_34, _stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1);
			(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1);
			String_t* L_35 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_34, /*hidden argument*/NULL);
			V_1 = L_35;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_36 = V_7;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_37 = L_36;
			G_B15_0 = L_37;
			G_B15_1 = _stringLiteral86A8294451A16C9100336EDF55F2B68CBD45BD67;
			G_B15_2 = 2;
			G_B15_3 = __this;
			if (L_37)
			{
				G_B16_0 = L_37;
				G_B16_1 = _stringLiteral86A8294451A16C9100336EDF55F2B68CBD45BD67;
				G_B16_2 = 2;
				G_B16_3 = __this;
				goto IL_00eb;
			}
		}

IL_00e7:
		{
			G_B17_0 = ((String_t*)(NULL));
			G_B17_1 = G_B15_1;
			G_B17_2 = G_B15_2;
			G_B17_3 = G_B15_3;
			goto IL_00f0;
		}

IL_00eb:
		{
			NullCheck(G_B16_0);
			String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B16_0);
			G_B17_0 = L_38;
			G_B17_1 = G_B16_1;
			G_B17_2 = G_B16_2;
			G_B17_3 = G_B16_3;
		}

IL_00f0:
		{
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_39 = V_7;
			NullCheck(L_39);
			int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_39);
			V_9 = L_40;
			String_t* L_41 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_9), /*hidden argument*/NULL);
			String_t* L_42 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(G_B17_1, G_B17_0, _stringLiteralD6789EA58E424F90511FD4613F868E6EBBA26766, L_41, /*hidden argument*/NULL);
			NullCheck(G_B17_3);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B17_3, G_B17_2, L_42, /*hidden argument*/NULL);
		}

IL_0111:
		{
			goto IL_0163;
		}
	} // end catch (depth: 1)

CATCH_0114:
	{ // begin catch(System.Exception)
		{
			V_10 = ((Exception_t *)__exception_local);
			bool L_43 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 2, /*hidden argument*/NULL);
			V_11 = L_43;
			bool L_44 = V_11;
			if (!L_44)
			{
				goto IL_0160;
			}
		}

IL_0124:
		{
			String_t* L_45 = V_1;
			Exception_t * L_46 = V_10;
			Exception_t * L_47 = L_46;
			G_B21_0 = L_47;
			G_B21_1 = L_45;
			if (L_47)
			{
				G_B22_0 = L_47;
				G_B22_1 = L_45;
				goto IL_012f;
			}
		}

IL_012b:
		{
			G_B23_0 = ((String_t*)(NULL));
			G_B23_1 = G_B21_1;
			goto IL_0134;
		}

IL_012f:
		{
			NullCheck(G_B22_0);
			String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B22_0);
			G_B23_0 = L_48;
			G_B23_1 = G_B22_1;
		}

IL_0134:
		{
			String_t* L_49 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B23_1, G_B23_0, _stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1, /*hidden argument*/NULL);
			V_1 = L_49;
			Exception_t * L_50 = V_10;
			Exception_t * L_51 = L_50;
			G_B24_0 = L_51;
			G_B24_1 = _stringLiteralB73EE191F0E9F1AF4D345769EC47718AC55BF4D3;
			G_B24_2 = 2;
			G_B24_3 = __this;
			if (L_51)
			{
				G_B25_0 = L_51;
				G_B25_1 = _stringLiteralB73EE191F0E9F1AF4D345769EC47718AC55BF4D3;
				G_B25_2 = 2;
				G_B25_3 = __this;
				goto IL_014f;
			}
		}

IL_014b:
		{
			G_B26_0 = ((String_t*)(NULL));
			G_B26_1 = G_B24_1;
			G_B26_2 = G_B24_2;
			G_B26_3 = G_B24_3;
			goto IL_0154;
		}

IL_014f:
		{
			NullCheck(G_B25_0);
			String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B25_0);
			G_B26_0 = L_52;
			G_B26_1 = G_B25_1;
			G_B26_2 = G_B25_2;
			G_B26_3 = G_B25_3;
		}

IL_0154:
		{
			String_t* L_53 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B26_1, G_B26_0, /*hidden argument*/NULL);
			NullCheck(G_B26_3);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B26_3, G_B26_2, L_53, /*hidden argument*/NULL);
		}

IL_0160:
		{
			goto IL_0163;
		}
	} // end catch (depth: 1)

IL_0163:
	{
		int32_t L_54 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_016a:
	{
		int32_t L_55 = V_4;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_56 = V_3;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))))
		{
			goto IL_002d;
		}
	}

IL_0174:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_57 = __this->get_sock_12();
		if (!L_57)
		{
			goto IL_018c;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_58 = __this->get_sock_12();
		NullCheck(L_58);
		bool L_59 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_58, /*hidden argument*/NULL);
		G_B33_0 = ((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		goto IL_018d;
	}

IL_018c:
	{
		G_B33_0 = 1;
	}

IL_018d:
	{
		V_12 = (bool)G_B33_0;
		bool L_60 = V_12;
		if (!L_60)
		{
			goto IL_01c4;
		}
	}
	{
		bool L_61 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 1, /*hidden argument*/NULL);
		V_13 = L_61;
		bool L_62 = V_13;
		if (!L_62)
		{
			goto IL_01b6;
		}
	}
	{
		String_t* L_63 = V_1;
		String_t* L_64 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral191D7F30D495BBE4F52FE89B64D411898274ED12, L_63, /*hidden argument*/NULL);
		IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(__this, 1, L_64, /*hidden argument*/NULL);
	}

IL_01b6:
	{
		IPhotonSocket_HandleException_m0383830DD81BFC546AD42D2F6E347079F0D81E71(__this, ((int32_t)1023), /*hidden argument*/NULL);
		goto IL_020b;
	}

IL_01c4:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_65 = __this->get_sock_12();
		NullCheck(L_65);
		int32_t L_66 = Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B_inline(L_65, /*hidden argument*/NULL);
		IPhotonSocket_set_AddressResolvedAsIpv6_m4A5DE9F22417A4AD4242A116C1AA83E2EBBCEFF4_inline(__this, (bool)((((int32_t)L_66) == ((int32_t)((int32_t)23)))? 1 : 0), /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_67 = __this->get_sock_12();
		NullCheck(L_67);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_68 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		String_t* L_69 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_68);
		IPhotonSocket_set_ServerIpAddress_mBCF0D1433A18F30CE257A8ED300B500675310C5B_inline(L_69, /*hidden argument*/NULL);
		IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline(__this, 2, /*hidden argument*/NULL);
		PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * L_70 = ((IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E *)__this)->get_peerBase_0();
		NullCheck(L_70);
		VirtActionInvoker0::Invoke(11 /* System.Void ExitGames.Client.Photon.PeerBase::OnConnect() */, L_70);
		SocketUdpAsync_StartReceive_mA1B1BBEE6A409D3EB61324740A0C7B5514E85E14(__this, /*hidden argument*/NULL);
	}

IL_020b:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdpAsync::StartReceive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdpAsync_StartReceive_mA1B1BBEE6A409D3EB61324740A0C7B5514E85E14 (SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdpAsync_StartReceive_mA1B1BBEE6A409D3EB61324740A0C7B5514E85E14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	Exception_t * G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	int32_t G_B9_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B9_5 = NULL;
	Exception_t * G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	int32_t G_B8_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B8_5 = NULL;
	String_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	int32_t G_B10_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B10_5 = NULL;
	{
		int32_t L_0 = IPhotonSocket_get_MTU_m13F58FDA75ECC485942B6A0E65756DA4519E940B(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = __this->get_sock_12();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		NullCheck(L_4);
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_5 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_5, __this, (intptr_t)((intptr_t)SocketUdpAsync_OnReceive_m2240FD4F9B9FD00C3FC208AE67B01348A7A618E4_RuntimeMethod_var), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		NullCheck(L_2);
		Socket_BeginReceive_mE0B06265B8AFC35DADCA4184D6C8B8A062BCDE73(L_2, L_3, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))), 0, L_5, (RuntimeObject *)(RuntimeObject *)L_6, /*hidden argument*/NULL);
		goto IL_00c8;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0033;
		throw e;
	}

CATCH_0033:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t *)__exception_local);
			int32_t L_7 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_7) == ((int32_t)3)))
			{
				goto IL_0049;
			}
		}

IL_003e:
		{
			int32_t L_8 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			G_B5_0 = ((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
			goto IL_004a;
		}

IL_0049:
		{
			G_B5_0 = 0;
		}

IL_004a:
		{
			V_2 = (bool)G_B5_0;
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_00c5;
			}
		}

IL_004e:
		{
			bool L_10 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 1, /*hidden argument*/NULL);
			V_3 = L_10;
			bool L_11 = V_3;
			if (!L_11)
			{
				goto IL_00b8;
			}
		}

IL_005a:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
			NullCheck(L_13);
			ArrayElementTypeCheck (L_13, _stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
			int32_t L_15 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			V_4 = L_15;
			RuntimeObject * L_16 = Box(PhotonSocketState_t2A5155A285C84EEDE019DF16C2DC769F192739AB_il2cpp_TypeInfo_var, (&V_4));
			NullCheck(L_16);
			String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
			V_4 = *(int32_t*)UnBox(L_16);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_17);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_14;
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
			String_t* L_20 = IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_19);
			ArrayElementTypeCheck (L_19, L_20);
			(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_20);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_19;
			NullCheck(L_21);
			ArrayElementTypeCheck (L_21, _stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B);
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
			Exception_t * L_23 = V_1;
			Exception_t * L_24 = L_23;
			G_B8_0 = L_24;
			G_B8_1 = 5;
			G_B8_2 = L_22;
			G_B8_3 = L_22;
			G_B8_4 = 1;
			G_B8_5 = __this;
			if (L_24)
			{
				G_B9_0 = L_24;
				G_B9_1 = 5;
				G_B9_2 = L_22;
				G_B9_3 = L_22;
				G_B9_4 = 1;
				G_B9_5 = __this;
				goto IL_00a6;
			}
		}

IL_00a2:
		{
			G_B10_0 = ((String_t*)(NULL));
			G_B10_1 = G_B8_1;
			G_B10_2 = G_B8_2;
			G_B10_3 = G_B8_3;
			G_B10_4 = G_B8_4;
			G_B10_5 = G_B8_5;
			goto IL_00ab;
		}

IL_00a6:
		{
			NullCheck(G_B9_0);
			String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B9_0);
			G_B10_0 = L_25;
			G_B10_1 = G_B9_1;
			G_B10_2 = G_B9_2;
			G_B10_3 = G_B9_3;
			G_B10_4 = G_B9_4;
			G_B10_5 = G_B9_5;
		}

IL_00ab:
		{
			NullCheck(G_B10_2);
			ArrayElementTypeCheck (G_B10_2, G_B10_0);
			(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (String_t*)G_B10_0);
			String_t* L_26 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B10_3, /*hidden argument*/NULL);
			NullCheck(G_B10_5);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B10_5, G_B10_4, L_26, /*hidden argument*/NULL);
		}

IL_00b8:
		{
			IPhotonSocket_HandleException_m0383830DD81BFC546AD42D2F6E347079F0D81E71(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_00c5:
		{
			goto IL_00c8;
		}
	} // end catch (depth: 1)

IL_00c8:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketUdpAsync::OnReceive(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketUdpAsync_OnReceive_m2240FD4F9B9FD00C3FC208AE67B01348A7A618E4 (SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketUdpAsync_OnReceive_m2240FD4F9B9FD00C3FC208AE67B01348A7A618E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Exception_t * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	Exception_t * V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 6);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	int32_t G_B14_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B14_5 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	int32_t G_B13_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B13_5 = NULL;
	String_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	int32_t G_B15_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B15_5 = NULL;
	int32_t G_B21_0 = 0;
	Exception_t * G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B25_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B25_3 = NULL;
	int32_t G_B25_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B25_5 = NULL;
	Exception_t * G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_3 = NULL;
	int32_t G_B24_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B24_5 = NULL;
	String_t* G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B26_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B26_3 = NULL;
	int32_t G_B26_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B26_5 = NULL;
	int32_t G_B32_0 = 0;
	int32_t G_B39_0 = 0;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B43_0 = NULL;
	int32_t G_B43_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B43_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B43_3 = NULL;
	int32_t G_B43_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B43_5 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * G_B42_0 = NULL;
	int32_t G_B42_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B42_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B42_3 = NULL;
	int32_t G_B42_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B42_5 = NULL;
	String_t* G_B44_0 = NULL;
	int32_t G_B44_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B44_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B44_3 = NULL;
	int32_t G_B44_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B44_5 = NULL;
	int32_t G_B50_0 = 0;
	Exception_t * G_B54_0 = NULL;
	int32_t G_B54_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B54_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B54_3 = NULL;
	int32_t G_B54_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B54_5 = NULL;
	Exception_t * G_B53_0 = NULL;
	int32_t G_B53_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B53_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B53_3 = NULL;
	int32_t G_B53_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B53_5 = NULL;
	String_t* G_B55_0 = NULL;
	int32_t G_B55_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B55_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B55_3 = NULL;
	int32_t G_B55_4 = 0;
	SocketUdpAsync_t579611550A9D12D433513E98A0A501D1713F2DC7 * G_B55_5 = NULL;
	{
		int32_t L_0 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_03b0;
	}

IL_0020:
	{
		V_0 = 0;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_3 = __this->get_sock_12();
		RuntimeObject* L_4 = ___ar0;
		NullCheck(L_3);
		int32_t L_5 = Socket_EndReceive_m46B15199B81401BF6B7B76242C6E3A7E8156749C(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_01c2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0036;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0127;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_3 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)__exception_local);
			int32_t L_6 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_6) == ((int32_t)3)))
			{
				goto IL_004c;
			}
		}

IL_0041:
		{
			int32_t L_7 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			G_B10_0 = ((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
			goto IL_004d;
		}

IL_004c:
		{
			G_B10_0 = 0;
		}

IL_004d:
		{
			V_4 = (bool)G_B10_0;
			bool L_8 = V_4;
			if (!L_8)
			{
				goto IL_0121;
			}
		}

IL_0056:
		{
			bool L_9 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 1, /*hidden argument*/NULL);
			V_5 = L_9;
			bool L_10 = V_5;
			if (!L_10)
			{
				goto IL_0114;
			}
		}

IL_0067:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, _stringLiteral4DFA332AE0D80C3AC1B1B5FAFF88FFE9B1F07B91);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4DFA332AE0D80C3AC1B1B5FAFF88FFE9B1F07B91);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
			int32_t L_14 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			V_6 = L_14;
			RuntimeObject * L_15 = Box(PhotonSocketState_t2A5155A285C84EEDE019DF16C2DC769F192739AB_il2cpp_TypeInfo_var, (&V_6));
			NullCheck(L_15);
			String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
			V_6 = *(int32_t*)UnBox(L_15);
			NullCheck(L_13);
			ArrayElementTypeCheck (L_13, L_16);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_16);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_13;
			NullCheck(L_17);
			ArrayElementTypeCheck (L_17, _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
			String_t* L_19 = IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_19);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_18;
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, _stringLiteral9D09DA33FDC3D1BC48C84D54B554B437D7EB433B);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral9D09DA33FDC3D1BC48C84D54B554B437D7EB433B);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_22 = V_3;
			NullCheck(L_22);
			int32_t L_23 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_22);
			V_7 = L_23;
			String_t* L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_7), /*hidden argument*/NULL);
			NullCheck(L_21);
			ArrayElementTypeCheck (L_21, L_24);
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_24);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_21;
			NullCheck(L_25);
			ArrayElementTypeCheck (L_25, _stringLiteralC7D39E360ACE7C6B120D7DEAA16B87D3B72EF7DD);
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralC7D39E360ACE7C6B120D7DEAA16B87D3B72EF7DD);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_27 = V_3;
			NullCheck(L_27);
			int32_t L_28 = SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131(L_27, /*hidden argument*/NULL);
			V_8 = L_28;
			RuntimeObject * L_29 = Box(SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var, (&V_8));
			NullCheck(L_29);
			String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
			V_8 = *(int32_t*)UnBox(L_29);
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_30);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_30);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_26;
			NullCheck(L_31);
			ArrayElementTypeCheck (L_31, _stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC);
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_33 = V_3;
			NullCheck(L_33);
			String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_33);
			NullCheck(L_32);
			ArrayElementTypeCheck (L_32, L_34);
			(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_34);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_32;
			NullCheck(L_35);
			ArrayElementTypeCheck (L_35, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
			(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_35;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_37 = V_3;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_38 = L_37;
			G_B13_0 = L_38;
			G_B13_1 = ((int32_t)11);
			G_B13_2 = L_36;
			G_B13_3 = L_36;
			G_B13_4 = 1;
			G_B13_5 = __this;
			if (L_38)
			{
				G_B14_0 = L_38;
				G_B14_1 = ((int32_t)11);
				G_B14_2 = L_36;
				G_B14_3 = L_36;
				G_B14_4 = 1;
				G_B14_5 = __this;
				goto IL_0102;
			}
		}

IL_00fe:
		{
			G_B15_0 = ((String_t*)(NULL));
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			G_B15_4 = G_B13_4;
			G_B15_5 = G_B13_5;
			goto IL_0107;
		}

IL_0102:
		{
			NullCheck(G_B14_0);
			String_t* L_39 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B14_0);
			G_B15_0 = L_39;
			G_B15_1 = G_B14_1;
			G_B15_2 = G_B14_2;
			G_B15_3 = G_B14_3;
			G_B15_4 = G_B14_4;
			G_B15_5 = G_B14_5;
		}

IL_0107:
		{
			NullCheck(G_B15_2);
			ArrayElementTypeCheck (G_B15_2, G_B15_0);
			(G_B15_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B15_1), (String_t*)G_B15_0);
			String_t* L_40 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B15_3, /*hidden argument*/NULL);
			NullCheck(G_B15_5);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B15_5, G_B15_4, L_40, /*hidden argument*/NULL);
		}

IL_0114:
		{
			IPhotonSocket_HandleException_m0383830DD81BFC546AD42D2F6E347079F0D81E71(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_0121:
		{
			goto IL_01c2;
		}
	} // end catch (depth: 1)

CATCH_0127:
	{ // begin catch(System.Exception)
		{
			V_9 = ((Exception_t *)__exception_local);
			int32_t L_41 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_41) == ((int32_t)3)))
			{
				goto IL_013e;
			}
		}

IL_0133:
		{
			int32_t L_42 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			G_B21_0 = ((!(((uint32_t)L_42) <= ((uint32_t)0)))? 1 : 0);
			goto IL_013f;
		}

IL_013e:
		{
			G_B21_0 = 0;
		}

IL_013f:
		{
			V_10 = (bool)G_B21_0;
			bool L_43 = V_10;
			if (!L_43)
			{
				goto IL_01bf;
			}
		}

IL_0145:
		{
			bool L_44 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 1, /*hidden argument*/NULL);
			V_11 = L_44;
			bool L_45 = V_11;
			if (!L_45)
			{
				goto IL_01b2;
			}
		}

IL_0153:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = L_46;
			NullCheck(L_47);
			ArrayElementTypeCheck (L_47, _stringLiteralE006A5CE7156A78A0DE8873C065D509F1F758BCE);
			(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE006A5CE7156A78A0DE8873C065D509F1F758BCE);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = L_47;
			int32_t L_49 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			V_6 = L_49;
			RuntimeObject * L_50 = Box(PhotonSocketState_t2A5155A285C84EEDE019DF16C2DC769F192739AB_il2cpp_TypeInfo_var, (&V_6));
			NullCheck(L_50);
			String_t* L_51 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_50);
			V_6 = *(int32_t*)UnBox(L_50);
			NullCheck(L_48);
			ArrayElementTypeCheck (L_48, L_51);
			(L_48)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_51);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = L_48;
			NullCheck(L_52);
			ArrayElementTypeCheck (L_52, _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = L_52;
			String_t* L_54 = IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_53);
			ArrayElementTypeCheck (L_53, L_54);
			(L_53)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_54);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = L_53;
			NullCheck(L_55);
			ArrayElementTypeCheck (L_55, _stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B);
			(L_55)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_55;
			Exception_t * L_57 = V_9;
			Exception_t * L_58 = L_57;
			G_B24_0 = L_58;
			G_B24_1 = 5;
			G_B24_2 = L_56;
			G_B24_3 = L_56;
			G_B24_4 = 1;
			G_B24_5 = __this;
			if (L_58)
			{
				G_B25_0 = L_58;
				G_B25_1 = 5;
				G_B25_2 = L_56;
				G_B25_3 = L_56;
				G_B25_4 = 1;
				G_B25_5 = __this;
				goto IL_01a0;
			}
		}

IL_019c:
		{
			G_B26_0 = ((String_t*)(NULL));
			G_B26_1 = G_B24_1;
			G_B26_2 = G_B24_2;
			G_B26_3 = G_B24_3;
			G_B26_4 = G_B24_4;
			G_B26_5 = G_B24_5;
			goto IL_01a5;
		}

IL_01a0:
		{
			NullCheck(G_B25_0);
			String_t* L_59 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B25_0);
			G_B26_0 = L_59;
			G_B26_1 = G_B25_1;
			G_B26_2 = G_B25_2;
			G_B26_3 = G_B25_3;
			G_B26_4 = G_B25_4;
			G_B26_5 = G_B25_5;
		}

IL_01a5:
		{
			NullCheck(G_B26_2);
			ArrayElementTypeCheck (G_B26_2, G_B26_0);
			(G_B26_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B26_1), (String_t*)G_B26_0);
			String_t* L_60 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B26_3, /*hidden argument*/NULL);
			NullCheck(G_B26_5);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B26_5, G_B26_4, L_60, /*hidden argument*/NULL);
		}

IL_01b2:
		{
			IPhotonSocket_HandleException_m0383830DD81BFC546AD42D2F6E347079F0D81E71(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_01bf:
		{
			goto IL_01c2;
		}
	} // end catch (depth: 1)

IL_01c2:
	{
		int32_t L_61 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_61) == ((int32_t)3)))
		{
			goto IL_01d6;
		}
	}
	{
		int32_t L_62 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
		G_B32_0 = ((((int32_t)L_62) == ((int32_t)0))? 1 : 0);
		goto IL_01d7;
	}

IL_01d6:
	{
		G_B32_0 = 1;
	}

IL_01d7:
	{
		V_12 = (bool)G_B32_0;
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01e3;
		}
	}
	{
		goto IL_03b0;
	}

IL_01e3:
	{
		RuntimeObject* L_64 = ___ar0;
		NullCheck(L_64);
		RuntimeObject * L_65 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, L_64);
		V_1 = ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_65, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_66 = V_1;
		int32_t L_67 = V_0;
		IPhotonSocket_HandleReceivedDatagram_m6EB22FABBF79FF477723E85E55DAE2ACFD7A5D30(__this, L_66, L_67, (bool)1, /*hidden argument*/NULL);
	}

IL_01f9:
	try
	{ // begin try (depth: 1)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_68 = __this->get_sock_12();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_69 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_70 = V_1;
		NullCheck(L_70);
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_71 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_71, __this, (intptr_t)((intptr_t)SocketUdpAsync_OnReceive_m2240FD4F9B9FD00C3FC208AE67B01348A7A618E4_RuntimeMethod_var), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72 = V_1;
		NullCheck(L_68);
		Socket_BeginReceive_mE0B06265B8AFC35DADCA4184D6C8B8A062BCDE73(L_68, L_69, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))), 0, L_71, (RuntimeObject *)(RuntimeObject *)L_72, /*hidden argument*/NULL);
		goto IL_03b0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_021f;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0315;
		throw e;
	}

CATCH_021f:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_13 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)__exception_local);
			int32_t L_73 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_73) == ((int32_t)3)))
			{
				goto IL_0236;
			}
		}

IL_022b:
		{
			int32_t L_74 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			G_B39_0 = ((!(((uint32_t)L_74) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0237;
		}

IL_0236:
		{
			G_B39_0 = 0;
		}

IL_0237:
		{
			V_14 = (bool)G_B39_0;
			bool L_75 = V_14;
			if (!L_75)
			{
				goto IL_030f;
			}
		}

IL_0240:
		{
			bool L_76 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 1, /*hidden argument*/NULL);
			V_15 = L_76;
			bool L_77 = V_15;
			if (!L_77)
			{
				goto IL_0302;
			}
		}

IL_0251:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_78 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79 = L_78;
			NullCheck(L_79);
			ArrayElementTypeCheck (L_79, _stringLiteral282EBC3C837743F81BC130AD86C3F294D1DFBCDD);
			(L_79)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral282EBC3C837743F81BC130AD86C3F294D1DFBCDD);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = L_79;
			int32_t L_81 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			V_6 = L_81;
			RuntimeObject * L_82 = Box(PhotonSocketState_t2A5155A285C84EEDE019DF16C2DC769F192739AB_il2cpp_TypeInfo_var, (&V_6));
			NullCheck(L_82);
			String_t* L_83 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_82);
			V_6 = *(int32_t*)UnBox(L_82);
			NullCheck(L_80);
			ArrayElementTypeCheck (L_80, L_83);
			(L_80)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_83);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_84 = L_80;
			NullCheck(L_84);
			ArrayElementTypeCheck (L_84, _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			(L_84)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_85 = L_84;
			String_t* L_86 = IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_85);
			ArrayElementTypeCheck (L_85, L_86);
			(L_85)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_86);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_87 = L_85;
			NullCheck(L_87);
			ArrayElementTypeCheck (L_87, _stringLiteral9D09DA33FDC3D1BC48C84D54B554B437D7EB433B);
			(L_87)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral9D09DA33FDC3D1BC48C84D54B554B437D7EB433B);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_88 = L_87;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_89 = V_13;
			NullCheck(L_89);
			int32_t L_90 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_89);
			V_7 = L_90;
			String_t* L_91 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_7), /*hidden argument*/NULL);
			NullCheck(L_88);
			ArrayElementTypeCheck (L_88, L_91);
			(L_88)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_91);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_92 = L_88;
			NullCheck(L_92);
			ArrayElementTypeCheck (L_92, _stringLiteralC7D39E360ACE7C6B120D7DEAA16B87D3B72EF7DD);
			(L_92)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralC7D39E360ACE7C6B120D7DEAA16B87D3B72EF7DD);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_93 = L_92;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_94 = V_13;
			NullCheck(L_94);
			int32_t L_95 = SocketException_get_SocketErrorCode_m05A48632F6CC75FBD904E8E1AC56FC6B2577A131(L_94, /*hidden argument*/NULL);
			V_8 = L_95;
			RuntimeObject * L_96 = Box(SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var, (&V_8));
			NullCheck(L_96);
			String_t* L_97 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_96);
			V_8 = *(int32_t*)UnBox(L_96);
			NullCheck(L_93);
			ArrayElementTypeCheck (L_93, L_97);
			(L_93)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_97);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_98 = L_93;
			NullCheck(L_98);
			ArrayElementTypeCheck (L_98, _stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC);
			(L_98)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralCCD622A0C172A17233733204AD188DD1F1207FAC);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_99 = L_98;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_100 = V_13;
			NullCheck(L_100);
			String_t* L_101 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_100);
			NullCheck(L_99);
			ArrayElementTypeCheck (L_99, L_101);
			(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_101);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_102 = L_99;
			NullCheck(L_102);
			ArrayElementTypeCheck (L_102, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
			(L_102)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_103 = L_102;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_104 = V_13;
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_105 = L_104;
			G_B42_0 = L_105;
			G_B42_1 = ((int32_t)11);
			G_B42_2 = L_103;
			G_B42_3 = L_103;
			G_B42_4 = 1;
			G_B42_5 = __this;
			if (L_105)
			{
				G_B43_0 = L_105;
				G_B43_1 = ((int32_t)11);
				G_B43_2 = L_103;
				G_B43_3 = L_103;
				G_B43_4 = 1;
				G_B43_5 = __this;
				goto IL_02f0;
			}
		}

IL_02ec:
		{
			G_B44_0 = ((String_t*)(NULL));
			G_B44_1 = G_B42_1;
			G_B44_2 = G_B42_2;
			G_B44_3 = G_B42_3;
			G_B44_4 = G_B42_4;
			G_B44_5 = G_B42_5;
			goto IL_02f5;
		}

IL_02f0:
		{
			NullCheck(G_B43_0);
			String_t* L_106 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B43_0);
			G_B44_0 = L_106;
			G_B44_1 = G_B43_1;
			G_B44_2 = G_B43_2;
			G_B44_3 = G_B43_3;
			G_B44_4 = G_B43_4;
			G_B44_5 = G_B43_5;
		}

IL_02f5:
		{
			NullCheck(G_B44_2);
			ArrayElementTypeCheck (G_B44_2, G_B44_0);
			(G_B44_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B44_1), (String_t*)G_B44_0);
			String_t* L_107 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B44_3, /*hidden argument*/NULL);
			NullCheck(G_B44_5);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B44_5, G_B44_4, L_107, /*hidden argument*/NULL);
		}

IL_0302:
		{
			IPhotonSocket_HandleException_m0383830DD81BFC546AD42D2F6E347079F0D81E71(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_030f:
		{
			goto IL_03b0;
		}
	} // end catch (depth: 1)

CATCH_0315:
	{ // begin catch(System.Exception)
		{
			V_16 = ((Exception_t *)__exception_local);
			int32_t L_108 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_108) == ((int32_t)3)))
			{
				goto IL_032c;
			}
		}

IL_0321:
		{
			int32_t L_109 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			G_B50_0 = ((!(((uint32_t)L_109) <= ((uint32_t)0)))? 1 : 0);
			goto IL_032d;
		}

IL_032c:
		{
			G_B50_0 = 0;
		}

IL_032d:
		{
			V_17 = (bool)G_B50_0;
			bool L_110 = V_17;
			if (!L_110)
			{
				goto IL_03ad;
			}
		}

IL_0333:
		{
			bool L_111 = IPhotonSocket_ReportDebugOfLevel_m516F5BE2CCBDE8F69F4CFF989421DF8A343DE16F(__this, 1, /*hidden argument*/NULL);
			V_18 = L_111;
			bool L_112 = V_18;
			if (!L_112)
			{
				goto IL_03a0;
			}
		}

IL_0341:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_113 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_114 = L_113;
			NullCheck(L_114);
			ArrayElementTypeCheck (L_114, _stringLiteralFA07B40CD116E31A98C5D50C825A7ADEE8FC7227);
			(L_114)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFA07B40CD116E31A98C5D50C825A7ADEE8FC7227);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_115 = L_114;
			int32_t L_116 = IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline(__this, /*hidden argument*/NULL);
			V_6 = L_116;
			RuntimeObject * L_117 = Box(PhotonSocketState_t2A5155A285C84EEDE019DF16C2DC769F192739AB_il2cpp_TypeInfo_var, (&V_6));
			NullCheck(L_117);
			String_t* L_118 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_117);
			V_6 = *(int32_t*)UnBox(L_117);
			NullCheck(L_115);
			ArrayElementTypeCheck (L_115, L_118);
			(L_115)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_118);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_119 = L_115;
			NullCheck(L_119);
			ArrayElementTypeCheck (L_119, _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			(L_119)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_120 = L_119;
			String_t* L_121 = IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_120);
			ArrayElementTypeCheck (L_120, L_121);
			(L_120)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_121);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_122 = L_120;
			NullCheck(L_122);
			ArrayElementTypeCheck (L_122, _stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B);
			(L_122)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_123 = L_122;
			Exception_t * L_124 = V_16;
			Exception_t * L_125 = L_124;
			G_B53_0 = L_125;
			G_B53_1 = 5;
			G_B53_2 = L_123;
			G_B53_3 = L_123;
			G_B53_4 = 1;
			G_B53_5 = __this;
			if (L_125)
			{
				G_B54_0 = L_125;
				G_B54_1 = 5;
				G_B54_2 = L_123;
				G_B54_3 = L_123;
				G_B54_4 = 1;
				G_B54_5 = __this;
				goto IL_038e;
			}
		}

IL_038a:
		{
			G_B55_0 = ((String_t*)(NULL));
			G_B55_1 = G_B53_1;
			G_B55_2 = G_B53_2;
			G_B55_3 = G_B53_3;
			G_B55_4 = G_B53_4;
			G_B55_5 = G_B53_5;
			goto IL_0393;
		}

IL_038e:
		{
			NullCheck(G_B54_0);
			String_t* L_126 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B54_0);
			G_B55_0 = L_126;
			G_B55_1 = G_B54_1;
			G_B55_2 = G_B54_2;
			G_B55_3 = G_B54_3;
			G_B55_4 = G_B54_4;
			G_B55_5 = G_B54_5;
		}

IL_0393:
		{
			NullCheck(G_B55_2);
			ArrayElementTypeCheck (G_B55_2, G_B55_0);
			(G_B55_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B55_1), (String_t*)G_B55_0);
			String_t* L_127 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B55_3, /*hidden argument*/NULL);
			NullCheck(G_B55_5);
			IPhotonSocket_EnqueueDebugReturn_mEF9C1E808A2434EF8087733CC4892A7AB26C4B1D(G_B55_5, G_B55_4, L_127, /*hidden argument*/NULL);
		}

IL_03a0:
		{
			IPhotonSocket_HandleException_m0383830DD81BFC546AD42D2F6E347079F0D81E71(__this, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_03ad:
		{
			goto IL_03b0;
		}
	} // end catch (depth: 1)

IL_03b0:
	{
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
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer__ctor_m47381FB62A38E25EF2D161B96CB551950E4390D2 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamBuffer__ctor_m47381FB62A38E25EF2D161B96CB551950E4390D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___size0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_buf_3(L_1);
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer__ctor_m9603DFC93FB6C74B915262F6DF81AF68265066E4 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buf0;
		__this->set_buf_3(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buf0;
		NullCheck(L_1);
		__this->set_len_2((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))));
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* StreamBuffer_ToArray_m88D3D14741F89657479737316F55B3F5B5B99703 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamBuffer_ToArray_m88D3D14741F89657479737316F55B3F5B5B99703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		int32_t L_0 = __this->get_len_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_buf_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		int32_t L_4 = __this->get_len_2();
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, L_4, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0026:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		return L_6;
	}
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::ToArrayFromPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* StreamBuffer_ToArrayFromPos_mC8D1058B4978E5E58B7F4F3397AC183D7C21F0C0 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamBuffer_ToArrayFromPos_mC8D1058B4978E5E58B7F4F3397AC183D7C21F0C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	{
		int32_t L_0 = __this->get_len_2();
		int32_t L_1 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		V_3 = L_4;
		goto IL_0044;
	}

IL_0024:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_buf_3();
		int32_t L_8 = __this->get_pos_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		int32_t L_10 = V_0;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_7, L_8, (RuntimeArray *)(RuntimeArray *)L_9, 0, L_10, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_1;
		V_3 = L_11;
		goto IL_0044;
	}

IL_0044:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_3;
		return L_12;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::Compact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_Compact_m9735112946003F7E1A94F85F8F5A60C2DB90949A (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = StreamBuffer_get_Length_m66693418C0F09811558415AEE30D7EAFF8135A32(__this, /*hidden argument*/NULL);
		int32_t L_1 = StreamBuffer_get_Position_mCB2E3FD6F89D6ABE2BC55DD88BBDD9538A1365D1(__this, /*hidden argument*/NULL);
		V_0 = (((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)))));
		int64_t L_2 = V_0;
		V_1 = (bool)((((int64_t)L_2) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_buf_3();
		int32_t L_5 = StreamBuffer_get_Position_mCB2E3FD6F89D6ABE2BC55DD88BBDD9538A1365D1(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_buf_3();
		int64_t L_7 = V_0;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_4, L_5, (RuntimeArray *)(RuntimeArray *)L_6, 0, (((int32_t)((int32_t)L_7))), /*hidden argument*/NULL);
	}

IL_0036:
	{
		StreamBuffer_set_Position_m1670BFB25CB2281BAD58D1E819D078C05E1864FF(__this, 0, /*hidden argument*/NULL);
		int64_t L_8 = V_0;
		StreamBuffer_SetLength_mA6F2E03E66786A915A09DBF380B3FA8C445A34AF(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* StreamBuffer_GetBuffer_mFCFC1C06C28A90CC86BCAD8FA3915F778B4DA359 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_buf_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::GetBufferAndAdvance(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* StreamBuffer_GetBufferAndAdvance_mC0E2E3C5F9ADC91917E21B9D7975EA934B4C44D2 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, int32_t ___length0, int32_t* ___offset1, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		int32_t* L_0 = ___offset1;
		int32_t L_1 = StreamBuffer_get_Position_mCB2E3FD6F89D6ABE2BC55DD88BBDD9538A1365D1(__this, /*hidden argument*/NULL);
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t L_2 = StreamBuffer_get_Position_mCB2E3FD6F89D6ABE2BC55DD88BBDD9538A1365D1(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___length0;
		StreamBuffer_set_Position_m1670BFB25CB2281BAD58D1E819D078C05E1864FF(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_buf_3();
		V_0 = L_4;
		goto IL_0021;
	}

IL_0021:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		return L_5;
	}
}
// System.Boolean ExitGames.Client.Photon.StreamBuffer::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamBuffer_get_CanRead_mE70F09F4DC40976BF8A2D0500897BC9108B95F26 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean ExitGames.Client.Photon.StreamBuffer::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamBuffer_get_CanSeek_m6150AC686FC07A0DACA51D62D8AB406FB44DC915 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean ExitGames.Client.Photon.StreamBuffer::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamBuffer_get_CanWrite_m3FA784DDD3687D8A91FB34681DAE45E57742612E (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Length_m66693418C0F09811558415AEE30D7EAFF8135A32 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_len_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Position_mCB2E3FD6F89D6ABE2BC55DD88BBDD9538A1365D1 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_set_Position_m1670BFB25CB2281BAD58D1E819D078C05E1864FF (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___value0;
		__this->set_pos_1(L_0);
		int32_t L_1 = __this->get_len_2();
		int32_t L_2 = __this->get_pos_1();
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_4 = __this->get_pos_1();
		__this->set_len_2(L_4);
		int32_t L_5 = __this->get_len_2();
		StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096(__this, L_5, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_Flush_m5E9D359E5009DB3C9C01AD567E14CCAFFD0A642F (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int64 ExitGames.Client.Photon.StreamBuffer::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StreamBuffer_Seek_mE74ACA1C6EBDB210E4C12A01147C0EAAE2BE7BE1 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamBuffer_Seek_mE74ACA1C6EBDB210E4C12A01147C0EAAE2BE7BE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int64_t V_5 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___origin1;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_0038;
	}

IL_001b:
	{
		int64_t L_3 = ___offset0;
		V_0 = (((int32_t)((int32_t)L_3)));
		goto IL_0043;
	}

IL_0020:
	{
		int32_t L_4 = __this->get_pos_1();
		int64_t L_5 = ___offset0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)(((int32_t)((int32_t)L_5)))));
		goto IL_0043;
	}

IL_002c:
	{
		int32_t L_6 = __this->get_len_2();
		int64_t L_7 = ___offset0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)(((int32_t)((int32_t)L_7)))));
		goto IL_0043;
	}

IL_0038:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_8, _stringLiteral106BEAE98A63EADA0EA9A8EBE5B91FD6703219EE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, StreamBuffer_Seek_mE74ACA1C6EBDB210E4C12A01147C0EAAE2BE7BE1_RuntimeMethod_var);
	}

IL_0043:
	{
		int32_t L_9 = V_0;
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_11, _stringLiteral4D5285CF040B43C9DE99AD4CEF2B806147D29654, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, StreamBuffer_Seek_mE74ACA1C6EBDB210E4C12A01147C0EAAE2BE7BE1_RuntimeMethod_var);
	}

IL_0057:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->get_len_2();
		V_4 = (bool)((((int32_t)L_12) > ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0072;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_15 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_15, _stringLiteral3A5C73D4EFF4A8952E9F05744AF2498E099ACC1F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, StreamBuffer_Seek_mE74ACA1C6EBDB210E4C12A01147C0EAAE2BE7BE1_RuntimeMethod_var);
	}

IL_0072:
	{
		int32_t L_16 = V_0;
		__this->set_pos_1(L_16);
		int32_t L_17 = __this->get_pos_1();
		V_5 = (((int64_t)((int64_t)L_17)));
		goto IL_0084;
	}

IL_0084:
	{
		int64_t L_18 = V_5;
		return L_18;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_SetLength_mA6F2E03E66786A915A09DBF380B3FA8C445A34AF (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, int64_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int64_t L_0 = ___value0;
		__this->set_len_2((((int32_t)((int32_t)L_0))));
		int32_t L_1 = __this->get_len_2();
		StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_pos_1();
		int32_t L_3 = __this->get_len_2();
		V_0 = (bool)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_5 = __this->get_len_2();
		__this->set_pos_1(L_5);
	}

IL_0036:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::SetCapacityMinimum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_SetCapacityMinimum_m314200F9C340A1860945BDCE5E7C3AC32B52D8D3 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, int32_t ___neededSize0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___neededSize0;
		StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.StreamBuffer::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_Read_m332C9D5FFEFC3F37E8907FF2086E6F7165727ED0 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_len_2();
		int32_t L_1 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		int32_t L_4 = ___count2;
		int32_t L_5 = V_0;
		V_3 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_0;
		___count2 = L_7;
	}

IL_002c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_buf_3();
		int32_t L_9 = __this->get_pos_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___buffer0;
		int32_t L_11 = ___offset1;
		int32_t L_12 = ___count2;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_8, L_9, (RuntimeArray *)(RuntimeArray *)L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_pos_1();
		int32_t L_14 = ___count2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)));
		int32_t L_15 = ___count2;
		V_2 = L_15;
		goto IL_0053;
	}

IL_0053:
	{
		int32_t L_16 = V_2;
		return L_16;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_Write_mE303FCEB8046645C143B133744EA0CE39E024B9D (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___srcOffset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_pos_1();
		int32_t L_1 = ___count2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_len_2();
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_0;
		__this->set_len_2(L_6);
	}

IL_0028:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___buffer0;
		int32_t L_8 = ___srcOffset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_buf_3();
		int32_t L_10 = __this->get_pos_1();
		int32_t L_11 = ___count2;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_7, L_8, (RuntimeArray *)(RuntimeArray *)L_9, L_10, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		__this->set_pos_1(L_12);
		return;
	}
}
// System.Byte ExitGames.Client.Photon.StreamBuffer::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t StreamBuffer_ReadByte_m86008CCD250C16246BB2F6C434CF7EBF0F1C090D (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamBuffer_ReadByte_m86008CCD250C16246BB2F6C434CF7EBF0F1C090D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		int32_t L_0 = __this->get_pos_1();
		int32_t L_1 = __this->get_len_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_3 = __this->get_address_of_pos_1();
		String_t* L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		int32_t* L_5 = __this->get_address_of_len_2();
		String_t* L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral97568619B8C86463263770205820BF59EFA6457B, L_4, _stringLiteralE43E64E1F69748B6D15E9C8A2E69C9A3A3C4D800, L_6, /*hidden argument*/NULL);
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_8 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var);
		EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, StreamBuffer_ReadByte_m86008CCD250C16246BB2F6C434CF7EBF0F1C090D_RuntimeMethod_var);
	}

IL_0042:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_buf_3();
		int32_t L_10 = __this->get_pos_1();
		V_1 = L_10;
		int32_t L_11 = V_1;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		int32_t L_12 = V_1;
		NullCheck(L_9);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		goto IL_005d;
	}

IL_005d:
	{
		uint8_t L_15 = V_2;
		return L_15;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_WriteByte_m34E4BE29E36DE6C8F266FB659B5044EDBF81A03E (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		int32_t L_1 = __this->get_len_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3 = __this->get_pos_1();
		__this->set_len_2(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = __this->get_len_2();
		StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096(__this, L_4, /*hidden argument*/NULL);
	}

IL_0033:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_buf_3();
		int32_t L_6 = __this->get_pos_1();
		V_1 = L_6;
		int32_t L_7 = V_1;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		int32_t L_8 = V_1;
		uint8_t L_9 = ___value0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)L_9);
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::WriteBytes(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_WriteBytes_mA7D29BF00FA0AF050E38E441ECF1D23CF467E657 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, uint8_t ___v00, uint8_t ___v11, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = __this->get_len_2();
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = V_0;
		__this->set_len_2(L_4);
		int32_t L_5 = __this->get_len_2();
		StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096(__this, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_buf_3();
		int32_t L_7 = __this->get_pos_1();
		V_2 = L_7;
		int32_t L_8 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_2;
		uint8_t L_10 = ___v00;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_buf_3();
		int32_t L_12 = __this->get_pos_1();
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_2;
		uint8_t L_15 = ___v11;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)L_15);
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::WriteBytes(System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_WriteBytes_mBBAB2F96084DE877C0117050071B490056045C7C (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, uint8_t ___v00, uint8_t ___v11, uint8_t ___v22, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3));
		int32_t L_1 = __this->get_len_2();
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = V_0;
		__this->set_len_2(L_4);
		int32_t L_5 = __this->get_len_2();
		StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096(__this, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_buf_3();
		int32_t L_7 = __this->get_pos_1();
		V_2 = L_7;
		int32_t L_8 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_2;
		uint8_t L_10 = ___v00;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_buf_3();
		int32_t L_12 = __this->get_pos_1();
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_2;
		uint8_t L_15 = ___v11;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)L_15);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_buf_3();
		int32_t L_17 = __this->get_pos_1();
		V_2 = L_17;
		int32_t L_18 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		int32_t L_19 = V_2;
		uint8_t L_20 = ___v22;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)L_20);
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::WriteBytes(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_WriteBytes_m6C260D02FFB120A195ED5025D4CDA80701A9C1CB (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, uint8_t ___v00, uint8_t ___v11, uint8_t ___v22, uint8_t ___v33, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)4));
		int32_t L_1 = __this->get_len_2();
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = V_0;
		__this->set_len_2(L_4);
		int32_t L_5 = __this->get_len_2();
		StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096(__this, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_buf_3();
		int32_t L_7 = __this->get_pos_1();
		V_2 = L_7;
		int32_t L_8 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_2;
		uint8_t L_10 = ___v00;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_buf_3();
		int32_t L_12 = __this->get_pos_1();
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_2;
		uint8_t L_15 = ___v11;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)L_15);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_buf_3();
		int32_t L_17 = __this->get_pos_1();
		V_2 = L_17;
		int32_t L_18 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		int32_t L_19 = V_2;
		uint8_t L_20 = ___v22;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)L_20);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get_buf_3();
		int32_t L_22 = __this->get_pos_1();
		V_2 = L_22;
		int32_t L_23 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		int32_t L_24 = V_2;
		uint8_t L_25 = ___v33;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)L_25);
		return;
	}
}
// System.Void ExitGames.Client.Photon.StreamBuffer::WriteBytes(System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_WriteBytes_m4F13A2E10CE38B39A5801EA9185CD44DA5371444 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, uint8_t ___v00, uint8_t ___v11, uint8_t ___v22, uint8_t ___v33, uint8_t ___v44, uint8_t ___v55, uint8_t ___v66, uint8_t ___v77, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)8));
		int32_t L_1 = __this->get_len_2();
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = V_0;
		__this->set_len_2(L_4);
		int32_t L_5 = __this->get_len_2();
		StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096(__this, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_buf_3();
		int32_t L_7 = __this->get_pos_1();
		V_2 = L_7;
		int32_t L_8 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_2;
		uint8_t L_10 = ___v00;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_buf_3();
		int32_t L_12 = __this->get_pos_1();
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_2;
		uint8_t L_15 = ___v11;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)L_15);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_buf_3();
		int32_t L_17 = __this->get_pos_1();
		V_2 = L_17;
		int32_t L_18 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		int32_t L_19 = V_2;
		uint8_t L_20 = ___v22;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)L_20);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get_buf_3();
		int32_t L_22 = __this->get_pos_1();
		V_2 = L_22;
		int32_t L_23 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		int32_t L_24 = V_2;
		uint8_t L_25 = ___v33;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)L_25);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = __this->get_buf_3();
		int32_t L_27 = __this->get_pos_1();
		V_2 = L_27;
		int32_t L_28 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		int32_t L_29 = V_2;
		uint8_t L_30 = ___v44;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint8_t)L_30);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = __this->get_buf_3();
		int32_t L_32 = __this->get_pos_1();
		V_2 = L_32;
		int32_t L_33 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1)));
		int32_t L_34 = V_2;
		uint8_t L_35 = ___v55;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint8_t)L_35);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = __this->get_buf_3();
		int32_t L_37 = __this->get_pos_1();
		V_2 = L_37;
		int32_t L_38 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1)));
		int32_t L_39 = V_2;
		uint8_t L_40 = ___v66;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (uint8_t)L_40);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = __this->get_buf_3();
		int32_t L_42 = __this->get_pos_1();
		V_2 = L_42;
		int32_t L_43 = V_2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1)));
		int32_t L_44 = V_2;
		uint8_t L_45 = ___v77;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint8_t)L_45);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.StreamBuffer::CheckSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096 (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamBuffer_CheckSize_m21A0DA5BFFB8979A27407379D31FAF58B974C096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0 = ___size0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_buf_3();
		NullCheck(L_1);
		V_2 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_006a;
	}

IL_0018:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_buf_3();
		NullCheck(L_3);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		int32_t L_4 = V_0;
		V_4 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		V_0 = 1;
	}

IL_002f:
	{
		goto IL_0037;
	}

IL_0031:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2));
	}

IL_0037:
	{
		int32_t L_7 = ___size0;
		int32_t L_8 = V_0;
		V_5 = (bool)((((int32_t)L_7) > ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_5;
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_10 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_1 = L_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_buf_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_buf_3();
		NullCheck(L_14);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_12, 0, (RuntimeArray *)(RuntimeArray *)L_13, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_1;
		__this->set_buf_3(L_15);
		V_3 = (bool)1;
		goto IL_006a;
	}

IL_006a:
	{
		bool L_16 = V_3;
		return L_16;
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
// System.Collections.Generic.List`1<System.Reflection.MethodInfo> ExitGames.Client.Photon.SupportClass::GetMethods(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * SupportClass_GetMethods_mC06882593678E83C3CC52D719B01206FF0A691D2 (Type_t * ___type0, Type_t * ___attribute1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_GetMethods_mC06882593678E83C3CC52D719B01206FF0A691D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * V_0 = NULL;
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* V_1 = NULL;
	bool V_2 = false;
	List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * V_3 = NULL;
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* V_4 = NULL;
	int32_t V_5 = 0;
	MethodInfo_t * V_6 = NULL;
	bool V_7 = false;
	int32_t G_B6_0 = 0;
	{
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_0 = (List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 *)il2cpp_codegen_object_new(List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4_il2cpp_TypeInfo_var);
		List_1__ctor_m3C888313B73CFAA9196022BCADD304B04ED400D2(L_0, /*hidden argument*/List_1__ctor_m3C888313B73CFAA9196022BCADD304B04ED400D2_RuntimeMethod_var);
		V_0 = L_0;
		Type_t * L_1 = ___type0;
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_3 = V_0;
		V_3 = L_3;
		goto IL_0061;
	}

IL_0014:
	{
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_5 = VirtFuncInvoker1< MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E*, int32_t >::Invoke(41 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_4, ((int32_t)52));
		V_1 = L_5;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_6 = V_1;
		V_4 = L_6;
		V_5 = 0;
		goto IL_0055;
	}

IL_0026:
	{
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MethodInfo_t * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_6 = L_10;
		Type_t * L_11 = ___attribute1;
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		MethodInfo_t * L_12 = V_6;
		Type_t * L_13 = ___attribute1;
		NullCheck(L_12);
		bool L_14 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(12 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_12, L_13, (bool)0);
		G_B6_0 = ((int32_t)(L_14));
		goto IL_003d;
	}

IL_003c:
	{
		G_B6_0 = 1;
	}

IL_003d:
	{
		V_7 = (bool)G_B6_0;
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_004e;
		}
	}
	{
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_16 = V_0;
		MethodInfo_t * L_17 = V_6;
		NullCheck(L_16);
		List_1_Add_m6C79F9A026ACCB196BD430F260975C794ED4BD9B(L_16, L_17, /*hidden argument*/List_1_Add_m6C79F9A026ACCB196BD430F260975C794ED4BD9B_RuntimeMethod_var);
	}

IL_004e:
	{
		int32_t L_18 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_19 = V_5;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_20 = V_4;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
		{
			goto IL_0026;
		}
	}
	{
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_21 = V_0;
		V_3 = L_21;
		goto IL_0061;
	}

IL_0061:
	{
		List_1_t110010ECD885734BF7EEAE609A01E1C757A363C4 * L_22 = V_3;
		return L_22;
	}
}
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A * L_0 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_IntegerMilliseconds_2();
		NullCheck(L_0);
		int32_t L_1 = IntegerMillisecondsDelegate_Invoke_m14863D1116E0D23C59D3B90A127B323B3B4BE6ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_mE36D14C2659FDD4E5153917520969372BF6939BB (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_StartBackgroundCalls_mE36D14C2659FDD4E5153917520969372BF6939BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	uint8_t V_7 = 0x0;
	bool V_8 = false;
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246 * L_0 = (U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_mB01A42CA5D087F0940AA87045AAB82D09E50A64E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246 * L_1 = V_0;
		int32_t L_2 = ___millisecondsInterval1;
		NullCheck(L_1);
		L_1->set_millisecondsInterval_0(L_2);
		U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246 * L_3 = V_0;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = ___myThread0;
		NullCheck(L_3);
		L_3->set_myThread_1(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		RuntimeObject * L_5 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_ThreadListLock_1();
		V_1 = L_5;
		RuntimeObject * L_6 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_6, /*hidden argument*/NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_7 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			V_3 = (bool)((((RuntimeObject*)(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_8 = V_3;
			if (!L_8)
			{
				goto IL_003b;
			}
		}

IL_002f:
		{
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_9 = (List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *)il2cpp_codegen_object_new(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118_il2cpp_TypeInfo_var);
			List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C(L_9, /*hidden argument*/List_1__ctor_m36355704B10200ABC2B12900E77E4A9987640F3C_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->set_threadList_0(L_9);
		}

IL_003b:
		{
			U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246 * L_10 = V_0;
			ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_11 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
			ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m6B788C18E3B81448F3B4087439442F536EE53027_RuntimeMethod_var), /*hidden argument*/NULL);
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_12 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
			Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_12, L_11, /*hidden argument*/NULL);
			V_2 = L_12;
			String_t* L_13 = ___taskName2;
			bool L_14 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_13, /*hidden argument*/NULL);
			V_4 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			bool L_15 = V_4;
			if (!L_15)
			{
				goto IL_0066;
			}
		}

IL_005c:
		{
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_16 = V_2;
			String_t* L_17 = ___taskName2;
			NullCheck(L_16);
			Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE(L_16, L_17, /*hidden argument*/NULL);
		}

IL_0066:
		{
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_18 = V_2;
			NullCheck(L_18);
			Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_18, (bool)1, /*hidden argument*/NULL);
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_19 = V_2;
			NullCheck(L_19);
			Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_19, /*hidden argument*/NULL);
			V_5 = 0;
			goto IL_00ad;
		}

IL_007a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_20 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			int32_t L_21 = V_5;
			NullCheck(L_20);
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_22 = List_1_get_Item_m35B4314C8C0E347FB9ED41E23C03A01AB4ACE13C_inline(L_20, L_21, /*hidden argument*/List_1_get_Item_m35B4314C8C0E347FB9ED41E23C03A01AB4ACE13C_RuntimeMethod_var);
			V_6 = (bool)((((RuntimeObject*)(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)L_22) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_23 = V_6;
			if (!L_23)
			{
				goto IL_00a6;
			}
		}

IL_0090:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_24 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			int32_t L_25 = V_5;
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_26 = V_2;
			NullCheck(L_24);
			List_1_set_Item_m40C58524762A67779257F0CF8835AB6EEE804F44(L_24, L_25, L_26, /*hidden argument*/List_1_set_Item_m40C58524762A67779257F0CF8835AB6EEE804F44_RuntimeMethod_var);
			int32_t L_27 = V_5;
			V_7 = (uint8_t)(((int32_t)((uint8_t)L_27)));
			IL2CPP_LEAVE(0x10C, FINALLY_0104);
		}

IL_00a6:
		{
			int32_t L_28 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		}

IL_00ad:
		{
			int32_t L_29 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_30 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			NullCheck(L_30);
			int32_t L_31 = List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_inline(L_30, /*hidden argument*/List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_RuntimeMethod_var);
			V_8 = (bool)((((int32_t)L_29) < ((int32_t)L_31))? 1 : 0);
			bool L_32 = V_8;
			if (L_32)
			{
				goto IL_007a;
			}
		}

IL_00c1:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_33 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			NullCheck(L_33);
			int32_t L_34 = List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_inline(L_33, /*hidden argument*/List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_RuntimeMethod_var);
			V_9 = (bool)((((int32_t)((((int32_t)L_34) < ((int32_t)((int32_t)255)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_35 = V_9;
			if (!L_35)
			{
				goto IL_00e7;
			}
		}

IL_00db:
		{
			NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_36 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
			NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_36, _stringLiteralA0E8805215CAEBEA26EA83666E63812F01D6FE94, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, SupportClass_StartBackgroundCalls_mE36D14C2659FDD4E5153917520969372BF6939BB_RuntimeMethod_var);
		}

IL_00e7:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_37 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_38 = V_2;
			NullCheck(L_37);
			List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA(L_37, L_38, /*hidden argument*/List_1_Add_m383F9AF12DF2593726E7F63FE9438E8ECEA542BA_RuntimeMethod_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_39 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			NullCheck(L_39);
			int32_t L_40 = List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_inline(L_39, /*hidden argument*/List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_RuntimeMethod_var);
			V_7 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1)))));
			IL2CPP_LEAVE(0x10C, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		RuntimeObject * L_41 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_41, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(260)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x10C, IL_010c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_010c:
	{
		uint8_t L_42 = V_7;
		return L_42;
	}
}
// System.Boolean ExitGames.Client.Photon.SupportClass::StopBackgroundCalls(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportClass_StopBackgroundCalls_m1B2BB2131153995A186447F978684CA6FA5DE618 (uint8_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_StopBackgroundCalls_m1B2BB2131153995A186447F978684CA6FA5DE618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_ThreadListLock_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_2 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			if (!L_2)
			{
				goto IL_0033;
			}
		}

IL_0016:
		{
			uint8_t L_3 = ___id0;
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_4 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			NullCheck(L_4);
			int32_t L_5 = List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_inline(L_4, /*hidden argument*/List_1_get_Count_mF4F192665FB9D652A220E87BD65C5EFF1AA3476D_RuntimeMethod_var);
			if ((((int32_t)L_3) >= ((int32_t)L_5)))
			{
				goto IL_0033;
			}
		}

IL_0023:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_6 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			uint8_t L_7 = ___id0;
			NullCheck(L_6);
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_8 = List_1_get_Item_m35B4314C8C0E347FB9ED41E23C03A01AB4ACE13C_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m35B4314C8C0E347FB9ED41E23C03A01AB4ACE13C_RuntimeMethod_var);
			G_B5_0 = ((((RuntimeObject*)(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			goto IL_0034;
		}

IL_0033:
		{
			G_B5_0 = 1;
		}

IL_0034:
		{
			V_1 = (bool)G_B5_0;
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_003d;
			}
		}

IL_0038:
		{
			V_2 = (bool)0;
			IL2CPP_LEAVE(0x67, FINALLY_005f);
		}

IL_003d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_10 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			uint8_t L_11 = ___id0;
			NullCheck(L_10);
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_12 = List_1_get_Item_m35B4314C8C0E347FB9ED41E23C03A01AB4ACE13C_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m35B4314C8C0E347FB9ED41E23C03A01AB4ACE13C_RuntimeMethod_var);
			NullCheck(L_12);
			Thread_Abort_m9D4D14BFB0F9CC71D026C83EBF3606A6ABE96AF4(L_12, /*hidden argument*/NULL);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_13 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			uint8_t L_14 = ___id0;
			NullCheck(L_13);
			List_1_set_Item_m40C58524762A67779257F0CF8835AB6EEE804F44(L_13, L_14, (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)NULL, /*hidden argument*/List_1_set_Item_m40C58524762A67779257F0CF8835AB6EEE804F44_RuntimeMethod_var);
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x67, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_15 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x67, IL_0067)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0067:
	{
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Boolean ExitGames.Client.Photon.SupportClass::StopAllBackgroundCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportClass_StopAllBackgroundCalls_mE201AD929402188CBF233B4E79DA6C0D8053F628 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_StopAllBackgroundCalls_mE201AD929402188CBF233B4E79DA6C0D8053F628_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * V_4 = NULL;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_ThreadListLock_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_2 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			V_1 = (bool)((((RuntimeObject*)(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0020;
			}
		}

IL_001b:
		{
			V_2 = (bool)0;
			IL2CPP_LEAVE(0x82, FINALLY_0076);
		}

IL_0020:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_4 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			NullCheck(L_4);
			Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5  L_5 = List_1_GetEnumerator_m880AD577F78AF8EC551CB7FB275790104FC2B28A(L_4, /*hidden argument*/List_1_GetEnumerator_m880AD577F78AF8EC551CB7FB275790104FC2B28A_RuntimeMethod_var);
			V_3 = L_5;
		}

IL_002c:
		try
		{ // begin try (depth: 2)
			{
				goto IL_004e;
			}

IL_002e:
			{
				Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_6 = Enumerator_get_Current_m9D6B83E05585D70614A61164D8E117620542B310_inline((Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m9D6B83E05585D70614A61164D8E117620542B310_RuntimeMethod_var);
				V_4 = L_6;
				Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_7 = V_4;
				V_5 = (bool)((!(((RuntimeObject*)(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
				bool L_8 = V_5;
				if (!L_8)
				{
					goto IL_004d;
				}
			}

IL_0043:
			{
				Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_9 = V_4;
				NullCheck(L_9);
				Thread_Abort_m9D4D14BFB0F9CC71D026C83EBF3606A6ABE96AF4(L_9, /*hidden argument*/NULL);
			}

IL_004d:
			{
			}

IL_004e:
			{
				bool L_10 = Enumerator_MoveNext_mDC956B210DA5F5641333D067CE0C776477426121((Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mDC956B210DA5F5641333D067CE0C776477426121_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_002e;
				}
			}

IL_0057:
			{
				IL2CPP_LEAVE(0x68, FINALLY_0059);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0059;
		}

FINALLY_0059:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mA3FB9719F4CC92744A8E6B02AD749893F764F1B1((Enumerator_tC1FF599F9BF82C7BA445C25087700503D344D1C5 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mA3FB9719F4CC92744A8E6B02AD749893F764F1B1_RuntimeMethod_var);
			IL2CPP_END_FINALLY(89)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(89)
		{
			IL2CPP_JUMP_TBL(0x68, IL_0068)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0068:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * L_11 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_threadList_0();
			NullCheck(L_11);
			List_1_Clear_m69714C34DB1FDD074135DC48C79A49FF32A48867(L_11, /*hidden argument*/List_1_Clear_m69714C34DB1FDD074135DC48C79A49FF32A48867_RuntimeMethod_var);
			IL2CPP_LEAVE(0x7E, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		RuntimeObject * L_12 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_JUMP_TBL(0x82, IL_0082)
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007e:
	{
		V_2 = (bool)1;
		goto IL_0082;
	}

IL_0082:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_mB23C528EEC7D819A5FC8073A736BBD851111E176 (Exception_t * ___throwable0, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stream1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ___stream1;
		V_0 = (bool)((!(((RuntimeObject*)(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2 = ___stream1;
		Exception_t * L_3 = ___throwable0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_2, L_4);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_5 = ___stream1;
		Exception_t * L_6 = ___throwable0;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_6);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_5, L_7);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_8 = ___stream1;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, L_8);
		goto IL_0048;
	}

IL_002e:
	{
		Exception_t * L_9 = ___throwable0;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0(L_10, /*hidden argument*/NULL);
		Exception_t * L_11 = ___throwable0;
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_11);
		Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0(L_12, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_WriteStackTrace_mD32365C3335A829A276C4ABB0637293EF71C48BA (Exception_t * ___throwable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_WriteStackTrace_mD32365C3335A829A276C4ABB0637293EF71C48BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___throwable0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		SupportClass_WriteStackTrace_mB23C528EEC7D819A5FC8073A736BBD851111E176(L_0, (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m61761698CF15118FD5A3AC75B9E4F2475DCBA469 (RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_DictionaryToString_m61761698CF15118FD5A3AC75B9E4F2475DCBA469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		String_t* L_1 = SupportClass_DictionaryToString_m0D5D175949A1EC31C2642F41AEAEDE72161DD275(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m0D5D175949A1EC31C2642F41AEAEDE72161DD275 (RuntimeObject* ___dictionary0, bool ___includeTypes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_DictionaryToString_m0D5D175949A1EC31C2642F41AEAEDE72161DD275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B12_0 = 0;
	{
		RuntimeObject* L_0 = ___dictionary0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_4 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		goto IL_01d3;
	}

IL_0016:
	{
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		StringBuilder_t * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_3, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___dictionary0;
		NullCheck(L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_5);
		V_5 = L_6;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0199;
		}

IL_003b:
		{
			RuntimeObject* L_7 = V_5;
			NullCheck(L_7);
			RuntimeObject * L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
			V_6 = L_8;
			StringBuilder_t * L_9 = V_0;
			NullCheck(L_9);
			int32_t L_10 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_9, /*hidden argument*/NULL);
			V_7 = (bool)((((int32_t)L_10) > ((int32_t)1))? 1 : 0);
			bool L_11 = V_7;
			if (!L_11)
			{
				goto IL_0062;
			}
		}

IL_0054:
		{
			StringBuilder_t * L_12 = V_0;
			NullCheck(L_12);
			StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		}

IL_0062:
		{
			RuntimeObject* L_13 = ___dictionary0;
			RuntimeObject * L_14 = V_6;
			NullCheck(L_13);
			RuntimeObject * L_15 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_13, L_14);
			V_8 = (bool)((((RuntimeObject*)(RuntimeObject *)L_15) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_16 = V_8;
			if (!L_16)
			{
				goto IL_0088;
			}
		}

IL_0073:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_17, /*hidden argument*/NULL);
			V_1 = L_18;
			V_2 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
			goto IL_00a6;
		}

IL_0088:
		{
			RuntimeObject* L_19 = ___dictionary0;
			RuntimeObject * L_20 = V_6;
			NullCheck(L_19);
			RuntimeObject * L_21 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_19, L_20);
			NullCheck(L_21);
			Type_t * L_22 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_21, /*hidden argument*/NULL);
			V_1 = L_22;
			RuntimeObject* L_23 = ___dictionary0;
			RuntimeObject * L_24 = V_6;
			NullCheck(L_23);
			RuntimeObject * L_25 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_23, L_24);
			NullCheck(L_25);
			String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
			V_2 = L_26;
		}

IL_00a6:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_27 = { reinterpret_cast<intptr_t> (IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_28 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_27, /*hidden argument*/NULL);
			Type_t * L_29 = V_1;
			if ((((RuntimeObject*)(Type_t *)L_28) == ((RuntimeObject*)(Type_t *)L_29)))
			{
				goto IL_00c2;
			}
		}

IL_00b3:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_30 = { reinterpret_cast<intptr_t> (Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_31 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_30, /*hidden argument*/NULL);
			Type_t * L_32 = V_1;
			G_B12_0 = ((((RuntimeObject*)(Type_t *)L_31) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
			goto IL_00c3;
		}

IL_00c2:
		{
			G_B12_0 = 1;
		}

IL_00c3:
		{
			V_9 = (bool)G_B12_0;
			bool L_33 = V_9;
			if (!L_33)
			{
				goto IL_00de;
			}
		}

IL_00c9:
		{
			RuntimeObject* L_34 = ___dictionary0;
			RuntimeObject * L_35 = V_6;
			NullCheck(L_34);
			RuntimeObject * L_36 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_34, L_35);
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			String_t* L_37 = SupportClass_DictionaryToString_m61761698CF15118FD5A3AC75B9E4F2475DCBA469(((RuntimeObject*)Castclass((RuntimeObject*)L_36, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			V_2 = L_37;
		}

IL_00de:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_38 = { reinterpret_cast<intptr_t> (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_39 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_38, /*hidden argument*/NULL);
			Type_t * L_40 = V_1;
			V_10 = (bool)((((RuntimeObject*)(Type_t *)L_39) == ((RuntimeObject*)(Type_t *)L_40))? 1 : 0);
			bool L_41 = V_10;
			if (!L_41)
			{
				goto IL_0115;
			}
		}

IL_00f1:
		{
			RuntimeObject* L_42 = ___dictionary0;
			RuntimeObject * L_43 = V_6;
			NullCheck(L_42);
			RuntimeObject * L_44 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_42, L_43);
			String_t* L_45 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_44, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			String_t* L_46 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5A22EC4707797C7AF782D7EE636368480C673139, L_45, /*hidden argument*/NULL);
			V_2 = L_46;
		}

IL_0115:
		{
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_47 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_48 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_47, /*hidden argument*/NULL);
			Type_t * L_49 = V_1;
			V_11 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_49))? 1 : 0);
			bool L_50 = V_11;
			if (!L_50)
			{
				goto IL_0149;
			}
		}

IL_0128:
		{
			RuntimeObject* L_51 = ___dictionary0;
			RuntimeObject * L_52 = V_6;
			NullCheck(L_51);
			RuntimeObject * L_53 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_51, L_52);
			NullCheck(((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_53, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)));
			int32_t L_54 = (((int32_t)((int32_t)(((RuntimeArray*)((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_53, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)))->max_length))));
			RuntimeObject * L_55 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_54);
			String_t* L_56 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralAD1E171FE9E55598FC5280CDCCB06C8AA67B5883, L_55, /*hidden argument*/NULL);
			V_2 = L_56;
		}

IL_0149:
		{
			bool L_57 = ___includeTypes1;
			V_12 = L_57;
			bool L_58 = V_12;
			if (!L_58)
			{
				goto IL_0187;
			}
		}

IL_0150:
		{
			StringBuilder_t * L_59 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_61 = L_60;
			RuntimeObject * L_62 = V_6;
			NullCheck(L_62);
			Type_t * L_63 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_62, /*hidden argument*/NULL);
			NullCheck(L_63);
			String_t* L_64 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_63);
			NullCheck(L_61);
			ArrayElementTypeCheck (L_61, L_64);
			(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_64);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_65 = L_61;
			RuntimeObject * L_66 = V_6;
			NullCheck(L_65);
			ArrayElementTypeCheck (L_65, L_66);
			(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_66);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_67 = L_65;
			Type_t * L_68 = V_1;
			NullCheck(L_68);
			String_t* L_69 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_68);
			NullCheck(L_67);
			ArrayElementTypeCheck (L_67, L_69);
			(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_69);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_70 = L_67;
			String_t* L_71 = V_2;
			NullCheck(L_70);
			ArrayElementTypeCheck (L_70, L_71);
			(L_70)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_71);
			NullCheck(L_59);
			StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8(L_59, _stringLiteral331681871198787BC7941BD421E635F40B86CE38, L_70, /*hidden argument*/NULL);
			goto IL_0198;
		}

IL_0187:
		{
			StringBuilder_t * L_72 = V_0;
			RuntimeObject * L_73 = V_6;
			String_t* L_74 = V_2;
			NullCheck(L_72);
			StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_72, _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A, L_73, L_74, /*hidden argument*/NULL);
		}

IL_0198:
		{
		}

IL_0199:
		{
			RuntimeObject* L_75 = V_5;
			NullCheck(L_75);
			bool L_76 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_75);
			if (L_76)
			{
				goto IL_003b;
			}
		}

IL_01a5:
		{
			IL2CPP_LEAVE(0x1BD, FINALLY_01a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01a7;
	}

FINALLY_01a7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_77 = V_5;
			V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_77, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_78 = V_13;
			if (!L_78)
			{
				goto IL_01bc;
			}
		}

IL_01b4:
		{
			RuntimeObject* L_79 = V_13;
			NullCheck(L_79);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_79);
		}

IL_01bc:
		{
			IL2CPP_END_FINALLY(423)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(423)
	{
		IL2CPP_JUMP_TBL(0x1BD, IL_01bd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01bd:
	{
		StringBuilder_t * L_80 = V_0;
		NullCheck(L_80);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_80, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		StringBuilder_t * L_81 = V_0;
		NullCheck(L_81);
		String_t* L_82 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_81);
		V_4 = L_82;
		goto IL_01d3;
	}

IL_01d3:
	{
		String_t* L_83 = V_4;
		return L_83;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::HashtableToString(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_HashtableToString_mA4B9B00BAA7C47E0AAB05747D640772F4237E6B3 (Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * ___hash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_HashtableToString_mA4B9B00BAA7C47E0AAB05747D640772F4237E6B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Hashtable_tE270901A6A1D5A6F386B98A525350411DC8278E3 * L_0 = ___hash0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		String_t* L_1 = SupportClass_DictionaryToString_m61761698CF15118FD5A3AC75B9E4F2475DCBA469(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String ExitGames.Client.Photon.SupportClass::ByteArrayToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_ByteArrayToString_m06CC2E1D06F507B68285C4540F8F9747765AB594 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_ByteArrayToString_m06CC2E1D06F507B68285C4540F8F9747765AB594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___list0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_2;
		goto IL_001b;
	}

IL_0012:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___list0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		String_t* L_4 = BitConverter_ToString_mD476DB63219FD7C7FFB472ABEB04A8BB2D171F30(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.UInt32[] ExitGames.Client.Photon.SupportClass::InitializeTable(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* SupportClass_InitializeTable_mDF09AF40DDFA7BCB8069D4B5E998A997A4000C17 (uint32_t ___polynomial0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_InitializeTable_mDF09AF40DDFA7BCB8069D4B5E998A997A4000C17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_7 = NULL;
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_0 = L_0;
		V_1 = 0;
		goto IL_004c;
	}

IL_0010:
	{
		int32_t L_1 = V_1;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0039;
	}

IL_0017:
	{
		uint32_t L_2 = V_2;
		V_4 = (bool)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)1))) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		uint32_t L_4 = V_2;
		uint32_t L_5 = ___polynomial0;
		V_2 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_4>>1))^(int32_t)L_5));
		goto IL_0034;
	}

IL_002e:
	{
		uint32_t L_6 = V_2;
		V_2 = ((int32_t)((uint32_t)L_6>>1));
	}

IL_0034:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_8 = V_3;
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)8))? 1 : 0);
		bool L_9 = V_5;
		if (L_9)
		{
			goto IL_0017;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_10 = V_0;
		int32_t L_11 = V_1;
		uint32_t L_12 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004c:
	{
		int32_t L_14 = V_1;
		V_6 = (bool)((((int32_t)L_14) < ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_15 = V_6;
		if (L_15)
		{
			goto IL_0010;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_16 = V_0;
		V_7 = L_16;
		goto IL_005f;
	}

IL_005f:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_17 = V_7;
		return L_17;
	}
}
// System.UInt32 ExitGames.Client.Photon.SupportClass::CalculateCrc(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SupportClass_CalculateCrc_m23B97C224BB2594C0EEE7359D211CF9B7CDB18EF (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_CalculateCrc_m23B97C224BB2594C0EEE7359D211CF9B7CDB18EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint32_t V_5 = 0;
	{
		V_0 = (-1);
		V_1 = ((int32_t)-306674912);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_crcLookupTable_3();
		V_2 = (bool)((((RuntimeObject*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		uint32_t L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = SupportClass_InitializeTable_mDF09AF40DDFA7BCB8069D4B5E998A997A4000C17(L_2, /*hidden argument*/NULL);
		((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->set_crcLookupTable_3(L_3);
	}

IL_0022:
	{
		V_3 = 0;
		goto IL_0042;
	}

IL_0026:
	{
		uint32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = ((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->get_crcLookupTable_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___buffer0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		uint32_t L_10 = V_0;
		NullCheck(L_5);
		int32_t L_11 = ((int32_t)((int32_t)L_9^(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))));
		uint32_t L_12 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_4>>8))^(int32_t)L_12));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = ___length1;
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_0026;
		}
	}
	{
		uint32_t L_17 = V_0;
		V_5 = L_17;
		goto IL_0051;
	}

IL_0051:
	{
		uint32_t L_18 = V_5;
		return L_18;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass__ctor_mA7CE9429BD035F66142038FBA4EEC1187D1A72E6 (SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass__cctor_mEA1CEFE7A8DF9EBC913D8B798AF606717FA1DC9D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass__cctor_mEA1CEFE7A8DF9EBC913D8B798AF606717FA1DC9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->set_ThreadListLock_1(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A_il2cpp_TypeInfo_var);
		U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A * L_1 = ((U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A * L_2 = (IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A *)il2cpp_codegen_object_new(IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A_il2cpp_TypeInfo_var);
		IntegerMillisecondsDelegate__ctor_mB289B52D81C12DB118E6FB07ED549ECD7BE2766E(L_2, L_1, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__20_0_mB4858F1DDE2FE882183DAAE63EC29E149BAFBF4D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_StaticFields*)il2cpp_codegen_static_fields_for(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var))->set_IntegerMilliseconds_2(L_2);
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
// System.Int32 ExitGames.Client.Photon.TPeer::get_QueuedIncomingCommandsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TPeer_get_QueuedIncomingCommandsCount_mDBA311DE6F9BFDDF406122349066593E4698213D (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_get_QueuedIncomingCommandsCount_mDBA311DE6F9BFDDF406122349066593E4698213D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_0 = __this->get_incomingList_48();
		NullCheck(L_0);
		int32_t L_1 = Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_inline(L_0, /*hidden argument*/Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 ExitGames.Client.Photon.TPeer::get_QueuedOutgoingCommandsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TPeer_get_QueuedOutgoingCommandsCount_m06053DBF469ED4099FA13832F332A4C7C984812E (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_outgoingCommandsInStream_37();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer__ctor_m20D416F157C3A5AF3D6FC91C67E7914B9065FF3D (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer__ctor_m20D416F157C3A5AF3D6FC91C67E7914B9065FF3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_0 = (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *)il2cpp_codegen_object_new(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var);
		Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610(L_0, ((int32_t)32), /*hidden argument*/Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var);
		__this->set_incomingList_48(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)240));
		__this->set_pingRequest_51(L_2);
		__this->set_DoFraming_55((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05_il2cpp_TypeInfo_var);
		PeerBase__ctor_m2CC3A55D74F6D581FF340A5FAB2F5AF46F2B3E19(__this, /*hidden argument*/NULL);
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_TrafficPackageHeaderSize_44(0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::InitPeerBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_InitPeerBase_m48C8AF7FD6C50AA9E220C0912B2E1698FD7C17E9 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_InitPeerBase_m48C8AF7FD6C50AA9E220C0912B2E1698FD7C17E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_InitPeerBase_m51F15D99BFE73245CDD80D6FF05944D9C2521D1E(__this, /*hidden argument*/NULL);
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_0 = (Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 *)il2cpp_codegen_object_new(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4_il2cpp_TypeInfo_var);
		Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610(L_0, ((int32_t)32), /*hidden argument*/Queue_1__ctor_m77A700976BCE8508C7EEC542FA014BB67577F610_RuntimeMethod_var);
		__this->set_incomingList_48(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_1 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_timestampOfLastReceive_22(L_1);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::Connect(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_Connect_mE55469D73D72CB6460E39F729E6C512A19E41A10 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, String_t* ___serverAddress0, String_t* ___appID1, RuntimeObject * ___customData2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___serverAddress0;
		String_t* L_1 = ___appID1;
		RuntimeObject * L_2 = ___customData2;
		bool L_3 = VirtFuncInvoker4< bool, String_t*, String_t*, String_t*, RuntimeObject * >::Invoke(10 /* System.Boolean ExitGames.Client.Photon.PeerBase::Connect(System.String,System.String,System.String,System.Object) */, __this, L_0, (String_t*)NULL, L_1, L_2);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::Connect(System.String,System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_Connect_m9132775D693195CEF40B8AD1C99F582ACF28A205 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, String_t* ___serverAddress0, String_t* ___proxyServerAddress1, String_t* ___appID2, RuntimeObject * ___customData3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_Connect_m9132775D693195CEF40B8AD1C99F582ACF28A205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Type_t * G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	int32_t G_B10_2 = 0;
	RuntimeObject* G_B10_3 = NULL;
	Type_t * G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	int32_t G_B9_2 = 0;
	RuntimeObject* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	int32_t G_B11_2 = 0;
	RuntimeObject* G_B11_3 = NULL;
	TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * G_B14_0 = NULL;
	TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * G_B13_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B15_0 = NULL;
	TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * G_B15_1 = NULL;
	int32_t G_B18_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_peerConnectionState_7();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_2, 2, _stringLiteral7320E85A8DE6C28D8BEFAC38D01CE66FADFE0968);
		V_1 = (bool)0;
		goto IL_015e;
	}

IL_0028:
	{
		uint8_t L_3 = PeerBase_get_debugOut_mF85F050E9E21DD0788C09A8D34E89AE69890C951(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_5 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_5, 5, _stringLiteralEB3AA2628BF342A84CE7EB2AD8B7E300B7A91D26);
	}

IL_004c:
	{
		String_t* L_6 = ___serverAddress0;
		PeerBase_set_ServerAddress_m5ECBDF657067F35D962B80951BECBFB36BF05F65_inline(__this, L_6, /*hidden argument*/NULL);
		String_t* L_7 = ___proxyServerAddress1;
		PeerBase_set_ProxyServerAddress_m777B7EB228C9CDE9CCDF7125231AE7EA72C5CAF8_inline(__this, L_7, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase() */, __this);
		List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * L_8 = (List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 *)il2cpp_codegen_object_new(List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480_il2cpp_TypeInfo_var);
		List_1__ctor_m34FDE8AB5875E6EF71EDB8FACB5C21591EF3C9E5(L_8, /*hidden argument*/List_1__ctor_m34FDE8AB5875E6EF71EDB8FACB5C21591EF3C9E5_RuntimeMethod_var);
		__this->set_outgoingStream_49(L_8);
		Type_t * L_9 = PeerBase_get_SocketImplementation_m64B25A8B0272E4542CAB4F67D8BED76C821EA92A(__this, /*hidden argument*/NULL);
		V_3 = (bool)((!(((RuntimeObject*)(Type_t *)L_9) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_009f;
		}
	}
	{
		Type_t * L_11 = PeerBase_get_SocketImplementation_m64B25A8B0272E4542CAB4F67D8BED76C821EA92A(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, __this);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		RuntimeObject * L_14 = Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1(L_11, L_13, /*hidden argument*/NULL);
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_PhotonSocket_4(((IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E *)CastclassClass((RuntimeObject*)L_14, IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E_il2cpp_TypeInfo_var)));
		goto IL_00ad;
	}

IL_009f:
	{
		SocketTcp_tCCF7F43F38912B5FA3E9AFB1C1860893982D49D8 * L_15 = (SocketTcp_tCCF7F43F38912B5FA3E9AFB1C1860893982D49D8 *)il2cpp_codegen_object_new(SocketTcp_tCCF7F43F38912B5FA3E9AFB1C1860893982D49D8_il2cpp_TypeInfo_var);
		SocketTcp__ctor_m1B9006090C3664882B312AAEF1F36096835D3031(L_15, __this, /*hidden argument*/NULL);
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_PhotonSocket_4(L_15);
	}

IL_00ad:
	{
		IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * L_16 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_PhotonSocket_4();
		V_4 = (bool)((((RuntimeObject*)(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E *)L_16) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_18 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		Type_t * L_19 = PeerBase_get_SocketImplementation_m64B25A8B0272E4542CAB4F67D8BED76C821EA92A(__this, /*hidden argument*/NULL);
		Type_t * L_20 = L_19;
		G_B9_0 = L_20;
		G_B9_1 = _stringLiteralA11767B3AA037BEA810EDDF4B485E8DEC8406BC8;
		G_B9_2 = 1;
		G_B9_3 = L_18;
		if (L_20)
		{
			G_B10_0 = L_20;
			G_B10_1 = _stringLiteralA11767B3AA037BEA810EDDF4B485E8DEC8406BC8;
			G_B10_2 = 1;
			G_B10_3 = L_18;
			goto IL_00d6;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_00db;
	}

IL_00d6:
	{
		NullCheck(G_B10_0);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B10_0);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_00db:
	{
		String_t* L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B11_1, G_B11_0, /*hidden argument*/NULL);
		NullCheck(G_B11_3);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, G_B11_3, G_B11_2, L_22);
		V_1 = (bool)0;
		goto IL_015e;
	}

IL_00ea:
	{
		bool L_23 = __this->get_DoFraming_55();
		G_B13_0 = __this;
		if (L_23)
		{
			G_B14_0 = __this;
			goto IL_00fa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ((TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_il2cpp_TypeInfo_var))->get_tcpMsgHead_53();
		G_B15_0 = L_24;
		G_B15_1 = G_B13_0;
		goto IL_00ff;
	}

IL_00fa:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = ((TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_il2cpp_TypeInfo_var))->get_tcpFramedMessageHead_52();
		G_B15_0 = L_25;
		G_B15_1 = G_B14_0;
	}

IL_00ff:
	{
		NullCheck(G_B15_1);
		G_B15_1->set_messageHeader_54(G_B15_0);
		uint8_t L_26 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_usedTransportProtocol_3();
		if ((((int32_t)L_26) == ((int32_t)4)))
		{
			goto IL_0118;
		}
	}
	{
		uint8_t L_27 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_usedTransportProtocol_3();
		G_B18_0 = ((((int32_t)L_27) == ((int32_t)5))? 1 : 0);
		goto IL_0119;
	}

IL_0118:
	{
		G_B18_0 = 1;
	}

IL_0119:
	{
		V_5 = (bool)G_B18_0;
		bool L_28 = V_5;
		if (!L_28)
		{
			goto IL_0136;
		}
	}
	{
		IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * L_29 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_PhotonSocket_4();
		String_t* L_30 = ___serverAddress0;
		String_t* L_31 = ___appID2;
		RuntimeObject * L_32 = ___customData3;
		String_t* L_33 = PeerBase_PepareWebSocketUrl_mB05FF4824E77134377B0DA77CDA2BD695CD6C99D(__this, L_30, L_31, L_32, /*hidden argument*/NULL);
		NullCheck(L_29);
		L_29->set_ConnectAddress_4(L_33);
	}

IL_0136:
	{
		IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * L_34 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_PhotonSocket_4();
		NullCheck(L_34);
		bool L_35 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Connect() */, L_34);
		V_6 = L_35;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_0153;
		}
	}
	{
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_peerConnectionState_7(1);
		V_1 = (bool)1;
		goto IL_015e;
	}

IL_0153:
	{
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_peerConnectionState_7(0);
		V_1 = (bool)0;
		goto IL_015e;
	}

IL_015e:
	{
		bool L_37 = V_1;
		return L_37;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::OnConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_OnConnect_m2E3DF2626E88250CBA8879425A421F5281552348 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_OnConnect_m2E3DF2626E88250CBA8879425A421F5281552348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_0 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		__this->set_lastPingResult_50(L_0);
		bool L_1 = __this->get_DoFraming_55();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject * L_2 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_CustomInitData_26();
		G_B3_0 = ((!(((RuntimeObject*)(RuntimeObject *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_4 = PeerBase_get_ServerAddress_m906ED8850F15E791E411D68FB77BF1C09A198661_inline(__this, /*hidden argument*/NULL);
		String_t* L_5 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_AppId_27();
		RuntimeObject * L_6 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_CustomInitData_26();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = PeerBase_PrepareConnectData_mF03416F0F9FBB25F1EFB9BFF16F5568E262A7FDC(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
		TPeer_EnqueueInit_mB126F729AAB6D2AF1716DE2243CF1640FDD603FA(__this, L_8, /*hidden argument*/NULL);
	}

IL_0047:
	{
		VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean ExitGames.Client.Photon.PeerBase::SendOutgoingCommands() */, __this);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_Disconnect_m484FF6448A4ABD688E2AF7ABEA844FEE0B928878 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_Disconnect_m484FF6448A4ABD688E2AF7ABEA844FEE0B928878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_peerConnectionState_7();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint8_t L_1 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_peerConnectionState_7();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0047;
	}

IL_001c:
	{
		uint8_t L_3 = PeerBase_get_debugOut_mF85F050E9E21DD0788C09A8D34E89AE69890C951(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_5 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_5, 5, _stringLiteral070D193C86BF98D0196B0B2AB6F7CF0437FEF24B);
	}

IL_0040:
	{
		VirtActionInvoker0::Invoke(13 /* System.Void ExitGames.Client.Photon.PeerBase::StopConnection() */, __this);
	}

IL_0047:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::StopConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_StopConnection_m699C9B771DAECF3B28254CE4F9244464AD6B3C1C (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_StopConnection_m699C9B771DAECF3B28254CE4F9244464AD6B3C1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_peerConnectionState_7(4);
		IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * L_0 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_PhotonSocket_4();
		V_0 = (bool)((!(((RuntimeObject*)(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * L_2 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_PhotonSocket_4();
		NullCheck(L_2);
		VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, L_2);
	}

IL_0023:
	{
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_3 = __this->get_incomingList_48();
		V_1 = L_3;
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_4 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_5 = __this->get_incomingList_48();
		NullCheck(L_5);
		Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB(L_5, /*hidden argument*/Queue_1_Clear_m83F66337973B90D44B04DA1302077D6CCA463BCB_RuntimeMethod_var);
		IL2CPP_LEAVE(0x49, FINALLY_0041);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_6 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0049:
	{
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_peerConnectionState_7(0);
		PeerBase_EnqueueStatusCallback_m4D4F2B26D1413D3D02605A88F22D12D6D5CF9059(__this, ((int32_t)1025), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::FetchServerTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_FetchServerTimestamp_mDBC2FCE51839BBEC037B2E95B1071DA8ADF50EC9 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_FetchServerTimestamp_mDBC2FCE51839BBEC037B2E95B1071DA8ADF50EC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint8_t L_0 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_peerConnectionState_7();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		uint8_t L_2 = PeerBase_get_debugOut_mF85F050E9E21DD0788C09A8D34E89AE69890C951(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_4 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		uint8_t* L_5 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_address_of_peerConnectionState_7();
		RuntimeObject * L_6 = Box(ConnectionStateValue_t352CF1A14703A4CADF8BAC0142D148058CB6A807_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		*L_5 = *(uint8_t*)UnBox(L_6);
		String_t* L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0844A3E92F62DCD91CD00D9084B9DB82474F02CA, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_4, 3, L_8);
	}

IL_004c:
	{
		RuntimeObject* L_9 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_9, ((int32_t)1030));
		goto IL_006d;
	}

IL_005f:
	{
		TPeer_SendPing_mB4A90BB52717584E836C4F1D0966A45404AFAB2B(__this, /*hidden argument*/NULL);
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_serverTimeOffsetIsAvailable_16((bool)0);
	}

IL_006d:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::EnqueueInit(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_EnqueueInit_mB126F729AAB6D2AF1716DE2243CF1640FDD603FA (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_EnqueueInit_mB126F729AAB6D2AF1716DE2243CF1640FDD603FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		NullCheck(L_0);
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_1 = (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D *)il2cpp_codegen_object_new(StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_m47381FB62A38E25EF2D161B96CB551950E4390D2(L_1, ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), (int32_t)((int32_t)32))), /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)251));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)1);
		V_1 = L_4;
		V_2 = 1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data0;
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_t1557750CB18DE3AE3EE581C9D2D6381A1D540CFE_il2cpp_TypeInfo_var);
		Protocol_Serialize_m063D5CE93F136F4DA060FCD9B062BEEFB8358E39(((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))), L_7, (int32_t*)(&V_2), /*hidden argument*/NULL);
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_1;
		NullCheck(L_10);
		NullCheck(L_8);
		StreamBuffer_Write_mE303FCEB8046645C143B133744EA0CE39E024B9D(L_8, L_9, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))), /*hidden argument*/NULL);
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_11 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___data0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___data0;
		NullCheck(L_13);
		NullCheck(L_11);
		StreamBuffer_Write_mE303FCEB8046645C143B133744EA0CE39E024B9D(L_11, L_12, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))), /*hidden argument*/NULL);
		bool L_14 = PeerBase_get_TrafficStatsEnabled_mF1C1322EE4F9FE8C26B99D52D4956A69C8787236(__this, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0098;
		}
	}
	{
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_16 = PeerBase_get_TrafficStatsOutgoing_m841F1AB89DDF5888E6CFBD63BB8E6BF6E0A7E1F2(__this, /*hidden argument*/NULL);
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = TrafficStats_get_TotalPacketCount_m7EEBFA02D79D77E0E679EC2383385FB5107C3D85_inline(L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		int32_t L_19 = V_4;
		NullCheck(L_17);
		TrafficStats_set_TotalPacketCount_mD501E171768C7D630B52715A6A9EEE32DD50047D_inline(L_17, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_20 = PeerBase_get_TrafficStatsOutgoing_m841F1AB89DDF5888E6CFBD63BB8E6BF6E0A7E1F2(__this, /*hidden argument*/NULL);
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_21 = L_20;
		NullCheck(L_21);
		int32_t L_22 = TrafficStats_get_TotalCommandsInPackets_mFC42DA2582F98A9F79AAEC3E34A0083215E98B26_inline(L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		int32_t L_23 = V_4;
		NullCheck(L_21);
		TrafficStats_set_TotalCommandsInPackets_mEECEF723C40510D81017F4EB1EFA29AEC97CED69_inline(L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_24 = PeerBase_get_TrafficStatsOutgoing_m841F1AB89DDF5888E6CFBD63BB8E6BF6E0A7E1F2(__this, /*hidden argument*/NULL);
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = StreamBuffer_get_Length_m66693418C0F09811558415AEE30D7EAFF8135A32(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		TrafficStats_CountControlCommand_mA8A9D79AB7B50463D962326199B6096A3C890B3A(L_24, L_26, /*hidden argument*/NULL);
	}

IL_0098:
	{
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_27 = V_0;
		TPeer_EnqueueMessageAsPayload_m8488970C5FAFD200E3F2A9C5D3345D3D6DFB538F(__this, 1, L_27, (uint8_t)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::DispatchIncomingCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_DispatchIncomingCommands_m2E200CB9BF2AE80579D1C1E18FCA4058E0D7B5B0 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_DispatchIncomingCommands_m2E200CB9BF2AE80579D1C1E18FCA4058E0D7B5B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_peerConnectionState_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_1 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		int32_t L_2 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_timestampOfLastReceive_22();
		int32_t L_3 = PeerBase_get_DisconnectTimeout_m4C469931D82B4B9CA92D6F819E27D39E2EAC0457(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))) > ((int32_t)L_3))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		PeerBase_EnqueueStatusCallback_m4D4F2B26D1413D3D02605A88F22D12D6D5CF9059(__this, ((int32_t)1040), /*hidden argument*/NULL);
		MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * L_5 = (MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 *)il2cpp_codegen_object_new(MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46_il2cpp_TypeInfo_var);
		MyAction__ctor_mEFDA8E994528B465A4C5F4F0A0FE904AB013CC78(L_5, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 12)), /*hidden argument*/NULL);
		PeerBase_EnqueueActionForDispatch_m3E10A94DDC2220EB053E8D0C4092905D86AEB665(__this, L_5, /*hidden argument*/NULL);
	}

IL_0047:
	{
		goto IL_0092;
	}

IL_0049:
	{
		Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 * L_6 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_ActionQueue_13();
		V_3 = L_6;
		Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 * L_7 = V_3;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_7, /*hidden argument*/NULL);
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 * L_8 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_ActionQueue_13();
			NullCheck(L_8);
			int32_t L_9 = Queue_1_get_Count_mD751FF13AC697B5D8FD2BE494B530DEE1ED08F7B_inline(L_8, /*hidden argument*/Queue_1_get_Count_mD751FF13AC697B5D8FD2BE494B530DEE1ED08F7B_RuntimeMethod_var);
			V_4 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_10 = V_4;
			if (!L_10)
			{
				goto IL_0073;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x97, FINALLY_0082);
		}

IL_0073:
		{
			Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 * L_11 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_ActionQueue_13();
			NullCheck(L_11);
			MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * L_12 = Queue_1_Dequeue_m9ED94410BC4CB5FE748E2752442D39ACF71FBEEB(L_11, /*hidden argument*/Queue_1_Dequeue_m9ED94410BC4CB5FE748E2752442D39ACF71FBEEB_RuntimeMethod_var);
			V_0 = L_12;
			IL2CPP_LEAVE(0x8A, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		Queue_1_tCF44960B2A6108A9AFC5D6703991A3B24F80A777 * L_13 = V_3;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(130)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008a:
	{
		MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * L_14 = V_0;
		NullCheck(L_14);
		MyAction_Invoke_m3CA3583227A4C296988BEC0A30F65E334C399B99(L_14, /*hidden argument*/NULL);
	}

IL_0092:
	{
		V_5 = (bool)1;
		goto IL_0049;
	}

IL_0097:
	{
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_15 = __this->get_incomingList_48();
		V_6 = L_15;
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_16 = V_6;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_16, /*hidden argument*/NULL);
	}

IL_00a7:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_17 = __this->get_incomingList_48();
			NullCheck(L_17);
			int32_t L_18 = Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_inline(L_17, /*hidden argument*/Queue_1_get_Count_m1D55723B47270D04849E24BC09480DCD17C0CEBA_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)((((int32_t)L_18) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_19 = V_7;
			if (!L_19)
			{
				goto IL_00c5;
			}
		}

IL_00bf:
		{
			V_8 = (bool)0;
			IL2CPP_LEAVE(0xF8, FINALLY_00d4);
		}

IL_00c5:
		{
			Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_20 = __this->get_incomingList_48();
			NullCheck(L_20);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D(L_20, /*hidden argument*/Queue_1_Dequeue_m2EA4ED50C9D3AFC5608B9ACDF7C611D244872F0D_RuntimeMethod_var);
			V_1 = L_21;
			IL2CPP_LEAVE(0xDD, FINALLY_00d4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d4;
	}

FINALLY_00d4:
	{ // begin finally (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_22 = V_6;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_22, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(212)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(212)
	{
		IL2CPP_JUMP_TBL(0xF8, IL_00f8)
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00dd:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_1;
		NullCheck(L_23);
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_ByteCountCurrentDispatch_9(((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))), (int32_t)3)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_1;
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_25 = (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D *)il2cpp_codegen_object_new(StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_m9603DFC93FB6C74B915262F6DF81AF68265066E4(L_25, L_24, /*hidden argument*/NULL);
		bool L_26 = VirtFuncInvoker1< bool, StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * >::Invoke(22 /* System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(ExitGames.Client.Photon.StreamBuffer) */, __this, L_25);
		V_8 = L_26;
		goto IL_00f8;
	}

IL_00f8:
	{
		bool L_27 = V_8;
		return L_27;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::SendOutgoingCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_SendOutgoingCommands_m03BC5E284C2C2603CEDC0E88100CEABF13443912 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_SendOutgoingCommands_m03BC5E284C2C2603CEDC0E88100CEABF13443912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * V_4 = NULL;
	int32_t V_5 = 0;
	StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * V_6 = NULL;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B7_0 = 0;
	{
		uint8_t L_0 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_peerConnectionState_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_00f0;
	}

IL_0016:
	{
		IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * L_2 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_PhotonSocket_4();
		NullCheck(L_2);
		bool L_3 = IPhotonSocket_get_Connected_m46BA88AAF9CA8333895D0B71C251AAB81695DDAD(L_2, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_00f0;
	}

IL_0030:
	{
		int32_t L_5 = PeerBase_get_timeInt_m1B0D5864289F9C57F51503CAE350345FD7E74F51(__this, /*hidden argument*/NULL);
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_timeLastSendOutgoing_34(L_5);
		uint8_t L_6 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_peerConnectionState_7();
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_7 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		int32_t L_8 = __this->get_lastPingResult_50();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_9 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)));
		int32_t L_10 = PeerBase_get_timePingInterval_m95459136DC60F075532F449B665371531ABEC78A(__this, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)L_9) > ((int32_t)L_10))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B7_0 = 0;
	}

IL_0061:
	{
		V_3 = (bool)G_B7_0;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		TPeer_SendPing_mB4A90BB52717584E836C4F1D0966A45404AFAB2B(__this, /*hidden argument*/NULL);
	}

IL_006e:
	{
		List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * L_12 = __this->get_outgoingStream_49();
		V_4 = L_12;
		List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * L_13 = V_4;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_13, /*hidden argument*/NULL);
	}

IL_007e:
	try
	{ // begin try (depth: 1)
		{
			V_5 = 0;
			goto IL_00b8;
		}

IL_0084:
		{
			List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * L_14 = __this->get_outgoingStream_49();
			int32_t L_15 = V_5;
			NullCheck(L_14);
			StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_16 = List_1_get_Item_mA65130795293D1AD3BEFFCB9C2149507FFC273DA_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_mA65130795293D1AD3BEFFCB9C2149507FFC273DA_RuntimeMethod_var);
			V_6 = L_16;
			StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_17 = V_6;
			NullCheck(L_17);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = StreamBuffer_GetBuffer_mFCFC1C06C28A90CC86BCAD8FA3915F778B4DA359(L_17, /*hidden argument*/NULL);
			StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_19 = V_6;
			NullCheck(L_19);
			int32_t L_20 = StreamBuffer_get_Length_m66693418C0F09811558415AEE30D7EAFF8135A32(L_19, /*hidden argument*/NULL);
			TPeer_SendData_m2D0567C7C1A88C8C95C11E4E350ECD2CA4279E31(__this, L_18, L_20, /*hidden argument*/NULL);
			StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_21 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05_il2cpp_TypeInfo_var);
			PeerBase_MessageBufferPoolPut_m40D49428F621247EF4AC8408CCCB11535B07A741(L_21, /*hidden argument*/NULL);
			int32_t L_22 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		}

IL_00b8:
		{
			int32_t L_23 = V_5;
			List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * L_24 = __this->get_outgoingStream_49();
			NullCheck(L_24);
			int32_t L_25 = List_1_get_Count_mE34118C35A0CA41308255F3355DB36F8B99102EC_inline(L_24, /*hidden argument*/List_1_get_Count_mE34118C35A0CA41308255F3355DB36F8B99102EC_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
			bool L_26 = V_7;
			if (L_26)
			{
				goto IL_0084;
			}
		}

IL_00cd:
		{
			List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * L_27 = __this->get_outgoingStream_49();
			NullCheck(L_27);
			List_1_Clear_mAAFDB42A3A04F93B97970BB5FA4EA046FD4568C4(L_27, /*hidden argument*/List_1_Clear_mAAFDB42A3A04F93B97970BB5FA4EA046FD4568C4_RuntimeMethod_var);
			((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_outgoingCommandsInStream_37(0);
			IL2CPP_LEAVE(0xEC, FINALLY_00e3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e3;
	}

FINALLY_00e3:
	{ // begin finally (depth: 1)
		List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * L_28 = V_4;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_28, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(227)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(227)
	{
		IL2CPP_JUMP_TBL(0xEC, IL_00ec)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ec:
	{
		V_1 = (bool)0;
		goto IL_00f0;
	}

IL_00f0:
	{
		bool L_29 = V_1;
		return L_29;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::SendAcksOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_SendAcksOnly_mB72F6F1D6CAC258E99148A7A6FDBD333AC59184A (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_SendAcksOnly_mB72F6F1D6CAC258E99148A7A6FDBD333AC59184A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * L_0 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_PhotonSocket_4();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * L_1 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_PhotonSocket_4();
		NullCheck(L_1);
		bool L_2 = IPhotonSocket_get_Connected_m46BA88AAF9CA8333895D0B71C251AAB81695DDAD(L_1, /*hidden argument*/NULL);
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
			goto IL_0023;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0023:
	{
		uint8_t L_4 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_peerConnectionState_7();
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_5 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		int32_t L_6 = __this->get_lastPingResult_50();
		int32_t L_7 = PeerBase_get_timePingInterval_m95459136DC60F075532F449B665371531ABEC78A(__this, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6))) > ((int32_t)L_7))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = (bool)G_B8_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		TPeer_SendPing_mB4A90BB52717584E836C4F1D0966A45404AFAB2B(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		V_1 = (bool)0;
		goto IL_0054;
	}

IL_0054:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,ExitGames.Client.Photon.SendOptions,ExitGames.Client.Photon.EgMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueOperation_m47E8B4948096B255B8963BDBDAF5F067D12F7907 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___parameters0, uint8_t ___opCode1, SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  ___sendParams2, uint8_t ___messageType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_EnqueueOperation_m47E8B4948096B255B8963BDBDAF5F067D12F7907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	uint8_t V_6 = 0x0;
	{
		uint8_t L_0 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_peerConnectionState_7();
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0070;
		}
	}
	{
		uint8_t L_2 = PeerBase_get_debugOut_mF85F050E9E21DD0788C09A8D34E89AE69890C951(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_4 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		String_t* L_5 = Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5((uint8_t*)(&___opCode1), /*hidden argument*/NULL);
		uint8_t* L_6 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_address_of_peerConnectionState_7();
		RuntimeObject * L_7 = Box(ConnectionStateValue_t352CF1A14703A4CADF8BAC0142D148058CB6A807_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		*L_6 = *(uint8_t*)UnBox(L_7);
		String_t* L_9 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralA1C16855D8192424FC88BE50A772F28AFBF3D5E6, L_5, _stringLiteral8CBACC8665E098574C09F925D61F052BBB7E22B8, L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_4, 1, L_9);
	}

IL_0058:
	{
		RuntimeObject* L_10 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_10, ((int32_t)1030));
		V_3 = (bool)0;
		goto IL_0129;
	}

IL_0070:
	{
		SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  L_11 = ___sendParams2;
		uint8_t L_12 = L_11.get_Channel_4();
		uint8_t L_13 = PeerBase_get_ChannelCount_mA337BDF2A9485C567E9F4F8300EED40149ACC74E(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0102;
		}
	}
	{
		uint8_t L_15 = PeerBase_get_debugOut_mF85F050E9E21DD0788C09A8D34E89AE69890C951(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_00ed;
		}
	}
	{
		RuntimeObject* L_17 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		uint8_t* L_21 = (&___sendParams2)->get_address_of_Channel_4();
		String_t* L_22 = Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5((uint8_t*)L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_20;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		uint8_t L_25 = PeerBase_get_ChannelCount_mA337BDF2A9485C567E9F4F8300EED40149ACC74E(__this, /*hidden argument*/NULL);
		V_6 = L_25;
		String_t* L_26 = Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5((uint8_t*)(&V_6), /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_26);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_24;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_28 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_27, /*hidden argument*/NULL);
		NullCheck(L_17);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_17, 1, L_28);
	}

IL_00ed:
	{
		RuntimeObject* L_29 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_29, ((int32_t)1030));
		V_3 = (bool)0;
		goto IL_0129;
	}

IL_0102:
	{
		uint8_t L_30 = ___opCode1;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_31 = ___parameters0;
		uint8_t L_32 = ___messageType3;
		SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  L_33 = ___sendParams2;
		bool L_34 = L_33.get_Encrypt_3();
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_35 = VirtFuncInvoker4< StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D *, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, bool >::Invoke(16 /* ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean) */, __this, L_30, L_31, L_32, L_34);
		V_0 = L_35;
		SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  L_36 = ___sendParams2;
		int32_t L_37 = L_36.get_DeliveryMode_2();
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_38 = V_0;
		SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  L_39 = ___sendParams2;
		uint8_t L_40 = L_39.get_Channel_4();
		bool L_41 = TPeer_EnqueueMessageAsPayload_m8488970C5FAFD200E3F2A9C5D3345D3D6DFB538F(__this, L_37, L_38, L_40, /*hidden argument*/NULL);
		V_3 = L_41;
		goto IL_0129;
	}

IL_0129:
	{
		bool L_42 = V_3;
		return L_42;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessage(System.Object,ExitGames.Client.Photon.SendOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueMessage_m1934EF93EB714A47A1F6B6815EF72EE307E97CAB (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, RuntimeObject * ___msg0, SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  ___sendOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_EnqueueMessage_m1934EF93EB714A47A1F6B6815EF72EE307E97CAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	uint8_t V_7 = 0x0;
	{
		uint8_t L_0 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_peerConnectionState_7();
		V_2 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_2 = PeerBase_get_debugOut_mF85F050E9E21DD0788C09A8D34E89AE69890C951(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_4 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		uint8_t* L_5 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_address_of_peerConnectionState_7();
		RuntimeObject * L_6 = Box(ConnectionStateValue_t352CF1A14703A4CADF8BAC0142D148058CB6A807_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		*L_5 = *(uint8_t*)UnBox(L_6);
		String_t* L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral69DF42ED7D9003ADBED8F0B907784D7A1E6B9B80, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_4, 1, L_8);
	}

IL_004c:
	{
		RuntimeObject* L_9 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_9, ((int32_t)1030));
		V_4 = (bool)0;
		goto IL_011c;
	}

IL_0065:
	{
		SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  L_10 = ___sendOptions1;
		uint8_t L_11 = L_10.get_Channel_4();
		V_0 = L_11;
		uint8_t L_12 = V_0;
		uint8_t L_13 = PeerBase_get_ChannelCount_mA337BDF2A9485C567E9F4F8300EED40149ACC74E(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00f5;
		}
	}
	{
		uint8_t L_15 = PeerBase_get_debugOut_mF85F050E9E21DD0788C09A8D34E89AE69890C951(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00df;
		}
	}
	{
		RuntimeObject* L_17 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral75D46515E5FA1E41165D1F1235FDED4C00F15F43);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		String_t* L_21 = Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5((uint8_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_21);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_20;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9CDB75C7B635278885D0B7EA4B060ED5D6CDDC2B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		uint8_t L_24 = PeerBase_get_ChannelCount_mA337BDF2A9485C567E9F4F8300EED40149ACC74E(__this, /*hidden argument*/NULL);
		V_7 = L_24;
		String_t* L_25 = Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5((uint8_t*)(&V_7), /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_23;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_27 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_26, /*hidden argument*/NULL);
		NullCheck(L_17);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_17, 1, L_27);
	}

IL_00df:
	{
		RuntimeObject* L_28 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_28, ((int32_t)1030));
		V_4 = (bool)0;
		goto IL_011c;
	}

IL_00f5:
	{
		RuntimeObject * L_29 = ___msg0;
		SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  L_30 = ___sendOptions1;
		bool L_31 = L_30.get_Encrypt_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = __this->get_messageHeader_54();
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_33 = PeerBase_SerializeMessageToMessage_m0B671FB4EF8958C0456ADFAD6DC7D6493E4C7D7E(__this, L_29, L_31, L_32, (bool)1, /*hidden argument*/NULL);
		V_1 = L_33;
		SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  L_34 = ___sendOptions1;
		int32_t L_35 = L_34.get_DeliveryMode_2();
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_36 = V_1;
		uint8_t L_37 = V_0;
		bool L_38 = TPeer_EnqueueMessageAsPayload_m8488970C5FAFD200E3F2A9C5D3345D3D6DFB538F(__this, L_35, L_36, L_37, /*hidden argument*/NULL);
		V_4 = L_38;
		goto IL_011c;
	}

IL_011c:
	{
		bool L_39 = V_4;
		return L_39;
	}
}
// ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.TPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * TPeer_SerializeOperationToMessage_mE33A80F82068818FB4527005896869F06B111AF0 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, uint8_t ___opCode0, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___parameters1, uint8_t ___messageType2, bool ___encrypt3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_SerializeOperationToMessage_mE33A80F82068818FB4527005896869F06B111AF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * V_10 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	{
		bool L_0 = ___encrypt3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		uint8_t L_1 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_usedTransportProtocol_3();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05_il2cpp_TypeInfo_var);
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_2 = PeerBase_MessageBufferPoolGet_m41C06F3A6FF353E9BC18630A93A307AE9652FA1D(/*hidden argument*/NULL);
		V_1 = L_2;
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_3 = V_1;
		NullCheck(L_3);
		StreamBuffer_SetLength_mA6F2E03E66786A915A09DBF380B3FA8C445A34AF(L_3, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		bool L_4 = V_0;
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_6 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_messageHeader_54();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_messageHeader_54();
		NullCheck(L_8);
		NullCheck(L_6);
		StreamBuffer_Write_mE303FCEB8046645C143B133744EA0CE39E024B9D(L_6, L_7, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))), /*hidden argument*/NULL);
	}

IL_0044:
	{
		IProtocol_tF6D383A032E13DAEDCE2847F4805D6940CDC3B4B * L_9 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_SerializationProtocol_1();
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_10 = V_1;
		uint8_t L_11 = ___opCode0;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_12 = ___parameters1;
		NullCheck(L_9);
		VirtActionInvoker4< StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D *, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, bool >::Invoke(10 /* System.Void ExitGames.Client.Photon.IProtocol::SerializeOperationRequest(ExitGames.Client.Photon.StreamBuffer,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_9, L_10, L_11, L_12, (bool)0);
		bool L_13 = V_0;
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeObject* L_15 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_CryptoProvider_39();
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_16 = V_1;
		NullCheck(L_16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = StreamBuffer_GetBuffer_mFCFC1C06C28A90CC86BCAD8FA3915F778B4DA359(L_16, /*hidden argument*/NULL);
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = StreamBuffer_get_Length_m66693418C0F09811558415AEE30D7EAFF8135A32(L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = InterfaceFuncInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(2 /* System.Byte[] Photon.SocketServer.Security.ICryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32) */, ICryptoProvider_tD431E2C0970B5C4003C9D5EF714BAE4CA9DEFF55_il2cpp_TypeInfo_var, L_15, L_17, 0, L_19);
		V_5 = L_20;
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_21 = V_1;
		NullCheck(L_21);
		StreamBuffer_SetLength_mA6F2E03E66786A915A09DBF380B3FA8C445A34AF(L_21, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_22 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = __this->get_messageHeader_54();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = __this->get_messageHeader_54();
		NullCheck(L_24);
		NullCheck(L_22);
		StreamBuffer_Write_mE303FCEB8046645C143B133744EA0CE39E024B9D(L_22, L_23, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))), /*hidden argument*/NULL);
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_25 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = V_5;
		NullCheck(L_27);
		NullCheck(L_25);
		StreamBuffer_Write_mE303FCEB8046645C143B133744EA0CE39E024B9D(L_25, L_26, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))), /*hidden argument*/NULL);
	}

IL_00a4:
	{
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_28 = V_1;
		NullCheck(L_28);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = StreamBuffer_GetBuffer_mFCFC1C06C28A90CC86BCAD8FA3915F778B4DA359(L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		uint8_t L_30 = ___messageType2;
		V_6 = (bool)((((int32_t)((((int32_t)L_30) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = __this->get_messageHeader_54();
		NullCheck(L_33);
		uint8_t L_34 = ___messageType2;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))), (int32_t)1))), (uint8_t)L_34);
	}

IL_00c7:
	{
		bool L_35 = V_0;
		if (L_35)
		{
			goto IL_00de;
		}
	}
	{
		bool L_36 = ___encrypt3;
		if (!L_36)
		{
			goto IL_00db;
		}
	}
	{
		PhotonPeer_tFF56040AC104B63E46A9F288F2E9E9499C56022E * L_37 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_photonPeer_0();
		NullCheck(L_37);
		bool L_38 = L_37->get_EnableEncryptedFlag_29();
		G_B13_0 = ((int32_t)(L_38));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B13_0 = 0;
	}

IL_00dc:
	{
		G_B15_0 = G_B13_0;
		goto IL_00df;
	}

IL_00de:
	{
		G_B15_0 = 1;
	}

IL_00df:
	{
		V_7 = (bool)G_B15_0;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_0106;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = __this->get_messageHeader_54();
		NullCheck(L_41);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = __this->get_messageHeader_54();
		NullCheck(L_43);
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))), (int32_t)1));
		uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))), (int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_45|(int32_t)((int32_t)128)))))));
	}

IL_0106:
	{
		bool L_46 = __this->get_DoFraming_55();
		V_8 = L_46;
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0126;
		}
	}
	{
		V_9 = 1;
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_48 = V_1;
		NullCheck(L_48);
		int32_t L_49 = StreamBuffer_get_Length_m66693418C0F09811558415AEE30D7EAFF8135A32(L_48, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_t1557750CB18DE3AE3EE581C9D2D6381A1D540CFE_il2cpp_TypeInfo_var);
		Protocol_Serialize_m063D5CE93F136F4DA060FCD9B062BEEFB8358E39(L_49, L_50, (int32_t*)(&V_9), /*hidden argument*/NULL);
	}

IL_0126:
	{
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_51 = V_1;
		V_10 = L_51;
		goto IL_012b;
	}

IL_012b:
	{
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_52 = V_10;
		return L_52;
	}
}
// System.Boolean ExitGames.Client.Photon.TPeer::EnqueueMessageAsPayload(ExitGames.Client.Photon.DeliveryMode,ExitGames.Client.Photon.StreamBuffer,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPeer_EnqueueMessageAsPayload_m8488970C5FAFD200E3F2A9C5D3345D3D6DFB538F (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, int32_t ___deliveryMode0, StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * ___opMessage1, uint8_t ___channelId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_EnqueueMessageAsPayload_m8488970C5FAFD200E3F2A9C5D3345D3D6DFB538F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_0 = ___opMessage1;
		V_1 = (bool)((((RuntimeObject*)(StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0121;
	}

IL_0011:
	{
		bool L_2 = __this->get_DoFraming_55();
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0078;
		}
	}
	{
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_4 = ___opMessage1;
		NullCheck(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = StreamBuffer_GetBuffer_mFCFC1C06C28A90CC86BCAD8FA3915F778B4DA359(L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_4;
		uint8_t L_7 = ___channelId2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_7);
		int32_t L_8 = ___deliveryMode0;
		V_6 = L_8;
		int32_t L_9 = V_6;
		V_5 = L_9;
		int32_t L_10 = V_5;
		switch (L_10)
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_005e;
			}
		}
	}
	{
		goto IL_0065;
	}

IL_0049:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_4;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)0);
		goto IL_0077;
	}

IL_0050:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_4;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)1);
		goto IL_0077;
	}

IL_0057:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_4;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)2);
		goto IL_0077;
	}

IL_005e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_4;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)3);
		goto IL_0077;
	}

IL_0065:
	{
		int32_t L_15 = ___deliveryMode0;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(DeliveryMode_tC79CA467CAC59E5D0828AF87235DAF4AF7143B91_il2cpp_TypeInfo_var, &L_16);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_18 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_18, _stringLiteralAC74A02B4CEED8538DF27EC8749B19526C0B8E0A, L_17, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, TPeer_EnqueueMessageAsPayload_m8488970C5FAFD200E3F2A9C5D3345D3D6DFB538F_RuntimeMethod_var);
	}

IL_0077:
	{
	}

IL_0078:
	{
		List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * L_19 = __this->get_outgoingStream_49();
		V_7 = L_19;
		List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * L_20 = V_7;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_20, /*hidden argument*/NULL);
	}

IL_0088:
	try
	{ // begin try (depth: 1)
		List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * L_21 = __this->get_outgoingStream_49();
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_22 = ___opMessage1;
		NullCheck(L_21);
		List_1_Add_m00BA02E7355F634D3E02D8EC1CC5B8933A219F7A(L_21, L_22, /*hidden argument*/List_1_Add_m00BA02E7355F634D3E02D8EC1CC5B8933A219F7A_RuntimeMethod_var);
		int32_t L_23 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_outgoingCommandsInStream_37();
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_outgoingCommandsInStream_37(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		IL2CPP_LEAVE(0xB0, FINALLY_00a7);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a7;
	}

FINALLY_00a7:
	{ // begin finally (depth: 1)
		List_1_t9DE8DA2D7B26E78C1F4E9AC6291AAE8FC6AA9480 * L_24 = V_7;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_24, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(167)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(167)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b0:
	{
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_25 = ___opMessage1;
		NullCheck(L_25);
		int32_t L_26 = StreamBuffer_get_Length_m66693418C0F09811558415AEE30D7EAFF8135A32(L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		int32_t L_27 = V_0;
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_ByteCountLastOperation_8(L_27);
		bool L_28 = PeerBase_get_TrafficStatsEnabled_mF1C1322EE4F9FE8C26B99D52D4956A69C8787236(__this, /*hidden argument*/NULL);
		V_8 = L_28;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_30 = ___deliveryMode0;
		V_10 = L_30;
		int32_t L_31 = V_10;
		V_9 = L_31;
		int32_t L_32 = V_9;
		if (!L_32)
		{
			goto IL_00df;
		}
	}
	{
		goto IL_00d8;
	}

IL_00d8:
	{
		int32_t L_33 = V_9;
		if ((((int32_t)L_33) == ((int32_t)1)))
		{
			goto IL_00ee;
		}
	}
	{
		goto IL_00fd;
	}

IL_00df:
	{
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_34 = PeerBase_get_TrafficStatsOutgoing_m841F1AB89DDF5888E6CFBD63BB8E6BF6E0A7E1F2(__this, /*hidden argument*/NULL);
		int32_t L_35 = V_0;
		NullCheck(L_34);
		TrafficStats_CountUnreliableOpCommand_m4CC3DD32D89C57108C0AC7C802990DBED2C9FEE3(L_34, L_35, /*hidden argument*/NULL);
		goto IL_010f;
	}

IL_00ee:
	{
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_36 = PeerBase_get_TrafficStatsOutgoing_m841F1AB89DDF5888E6CFBD63BB8E6BF6E0A7E1F2(__this, /*hidden argument*/NULL);
		int32_t L_37 = V_0;
		NullCheck(L_36);
		TrafficStats_CountReliableOpCommand_mF741E8BD8801DF182E2695F51094122CDD515667(L_36, L_37, /*hidden argument*/NULL);
		goto IL_010f;
	}

IL_00fd:
	{
		int32_t L_38 = ___deliveryMode0;
		int32_t L_39 = L_38;
		RuntimeObject * L_40 = Box(DeliveryMode_tC79CA467CAC59E5D0828AF87235DAF4AF7143B91_il2cpp_TypeInfo_var, &L_39);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_41 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_41, _stringLiteral872DE60CB2239200B569B73387AEE6DEF5D86F24, L_40, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, TPeer_EnqueueMessageAsPayload_m8488970C5FAFD200E3F2A9C5D3345D3D6DFB538F_RuntimeMethod_var);
	}

IL_010f:
	{
		TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * L_42 = PeerBase_get_TrafficStatsGameLevel_m8973A6F9628EB68F7A19E3FBFB9551066444E471(__this, /*hidden argument*/NULL);
		int32_t L_43 = V_0;
		NullCheck(L_42);
		TrafficStatsGameLevel_CountOperation_mE918C1DC1A6B4542E846FE0DCF6E331B9B0997DB(L_42, L_43, /*hidden argument*/NULL);
	}

IL_011d:
	{
		V_2 = (bool)1;
		goto IL_0121;
	}

IL_0121:
	{
		bool L_44 = V_2;
		return L_44;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::SendPing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendPing_mB4A90BB52717584E836C4F1D0966A45404AFAB2B (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_SendPing_mB4A90BB52717584E836C4F1D0966A45404AFAB2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  V_2;
	memset((&V_2), 0, sizeof(V_2));
	StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * V_3 = NULL;
	SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_0 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set_lastPingResult_50(L_1);
		bool L_2 = __this->get_DoFraming_55();
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0092;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED ));
		(&V_4)->set_DeliveryMode_2(1);
		SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  L_4 = V_4;
		V_2 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_il2cpp_TypeInfo_var);
		uint8_t L_5 = ((PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_StaticFields*)il2cpp_codegen_static_fields_for(PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_il2cpp_TypeInfo_var))->get_Ping_4();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_6 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_6, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_7 = L_6;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_7, (uint8_t)1, L_10, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		SendOptions_t83F308E6DE3FB4CA4BE83CDFF9BD5DD58258B2ED  L_11 = V_2;
		bool L_12 = L_11.get_Encrypt_3();
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_13 = VirtFuncInvoker4< StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D *, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, bool >::Invoke(16 /* ExitGames.Client.Photon.StreamBuffer ExitGames.Client.Photon.PeerBase::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.EgMessageType,System.Boolean) */, __this, L_5, L_7, 6, L_12);
		V_3 = L_13;
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_14 = V_3;
		NullCheck(L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = StreamBuffer_GetBuffer_mFCFC1C06C28A90CC86BCAD8FA3915F778B4DA359(L_14, /*hidden argument*/NULL);
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17 = StreamBuffer_get_Length_m66693418C0F09811558415AEE30D7EAFF8135A32(L_16, /*hidden argument*/NULL);
		TPeer_SendData_m2D0567C7C1A88C8C95C11E4E350ECD2CA4279E31(__this, L_15, L_17, /*hidden argument*/NULL);
		bool L_18 = PeerBase_get_TrafficStatsEnabled_mF1C1322EE4F9FE8C26B99D52D4956A69C8787236(__this, /*hidden argument*/NULL);
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_20 = PeerBase_get_TrafficStatsOutgoing_m841F1AB89DDF5888E6CFBD63BB8E6BF6E0A7E1F2(__this, /*hidden argument*/NULL);
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22 = StreamBuffer_get_Length_m66693418C0F09811558415AEE30D7EAFF8135A32(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		TrafficStats_CountControlCommand_mA8A9D79AB7B50463D962326199B6096A3C890B3A(L_20, L_22, /*hidden argument*/NULL);
	}

IL_0088:
	{
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_23 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05_il2cpp_TypeInfo_var);
		PeerBase_MessageBufferPoolPut_m40D49428F621247EF4AC8408CCCB11535B07A741(L_23, /*hidden argument*/NULL);
		goto IL_00dd;
	}

IL_0092:
	{
		V_6 = 1;
		int32_t L_24 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = __this->get_pingRequest_51();
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_t1557750CB18DE3AE3EE581C9D2D6381A1D540CFE_il2cpp_TypeInfo_var);
		Protocol_Serialize_m063D5CE93F136F4DA060FCD9B062BEEFB8358E39(L_24, L_25, (int32_t*)(&V_6), /*hidden argument*/NULL);
		bool L_26 = PeerBase_get_TrafficStatsEnabled_mF1C1322EE4F9FE8C26B99D52D4956A69C8787236(__this, /*hidden argument*/NULL);
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_28 = PeerBase_get_TrafficStatsOutgoing_m841F1AB89DDF5888E6CFBD63BB8E6BF6E0A7E1F2(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = __this->get_pingRequest_51();
		NullCheck(L_29);
		NullCheck(L_28);
		TrafficStats_CountControlCommand_mA8A9D79AB7B50463D962326199B6096A3C890B3A(L_28, (((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))), /*hidden argument*/NULL);
	}

IL_00c7:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = __this->get_pingRequest_51();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = __this->get_pingRequest_51();
		NullCheck(L_31);
		TPeer_SendData_m2D0567C7C1A88C8C95C11E4E350ECD2CA4279E31(__this, L_30, (((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))), /*hidden argument*/NULL);
	}

IL_00dd:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::SendData(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_SendData_m2D0567C7C1A88C8C95C11E4E350ECD2CA4279E31 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_SendData_m2D0567C7C1A88C8C95C11E4E350ECD2CA4279E31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	Exception_t * V_4 = NULL;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			int64_t L_0 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_bytesOut_24();
			int32_t L_1 = ___length1;
			((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_bytesOut_24(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)(((int64_t)((int64_t)L_1))))));
			bool L_2 = PeerBase_get_TrafficStatsEnabled_mF1C1322EE4F9FE8C26B99D52D4956A69C8787236(__this, /*hidden argument*/NULL);
			V_0 = L_2;
			bool L_3 = V_0;
			if (!L_3)
			{
				goto IL_004c;
			}
		}

IL_001b:
		{
			TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_4 = PeerBase_get_TrafficStatsOutgoing_m841F1AB89DDF5888E6CFBD63BB8E6BF6E0A7E1F2(__this, /*hidden argument*/NULL);
			TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_5 = L_4;
			NullCheck(L_5);
			int32_t L_6 = TrafficStats_get_TotalPacketCount_m7EEBFA02D79D77E0E679EC2383385FB5107C3D85_inline(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			int32_t L_7 = V_1;
			NullCheck(L_5);
			TrafficStats_set_TotalPacketCount_mD501E171768C7D630B52715A6A9EEE32DD50047D_inline(L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
			TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_8 = PeerBase_get_TrafficStatsOutgoing_m841F1AB89DDF5888E6CFBD63BB8E6BF6E0A7E1F2(__this, /*hidden argument*/NULL);
			TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_9 = L_8;
			NullCheck(L_9);
			int32_t L_10 = TrafficStats_get_TotalCommandsInPackets_mFC42DA2582F98A9F79AAEC3E34A0083215E98B26_inline(L_9, /*hidden argument*/NULL);
			int32_t L_11 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_outgoingCommandsInStream_37();
			NullCheck(L_9);
			TrafficStats_set_TotalCommandsInPackets_mEECEF723C40510D81017F4EB1EFA29AEC97CED69_inline(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), /*hidden argument*/NULL);
		}

IL_004c:
		{
			NetworkSimulationSet_tE6B3FC4279E412FC57EC9FFE2EDBE2623E53A800 * L_12 = PeerBase_get_NetworkSimulationSettings_m6B48E0DE2649B7124480F9C46F476985C130D520(__this, /*hidden argument*/NULL);
			NullCheck(L_12);
			bool L_13 = NetworkSimulationSet_get_IsSimulationEnabled_mA39A4855B329E07E660134A3699633B39C05E73C(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_0079;
			}
		}

IL_005b:
		{
			int32_t L_15 = ___length1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_15);
			V_3 = L_16;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___data0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_3;
			int32_t L_19 = ___length1;
			Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_17, 0, (RuntimeArray *)(RuntimeArray *)L_18, 0, L_19, /*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = V_3;
			PeerBase_SendNetworkSimulated_m621C9EFBAB599EBB2456D39AA7706070EFC1BCA4(__this, L_20, /*hidden argument*/NULL);
			goto IL_0089;
		}

IL_0079:
		{
			IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * L_21 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_PhotonSocket_4();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = ___data0;
			int32_t L_23 = ___length1;
			NullCheck(L_21);
			VirtFuncInvoker2< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(6 /* ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.IPhotonSocket::Send(System.Byte[],System.Int32) */, L_21, L_22, L_23);
		}

IL_0089:
		{
			goto IL_00c2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_008c;
		throw e;
	}

CATCH_008c:
	{ // begin catch(System.Exception)
		{
			V_4 = ((Exception_t *)__exception_local);
			uint8_t L_24 = PeerBase_get_debugOut_mF85F050E9E21DD0788C09A8D34E89AE69890C951(__this, /*hidden argument*/NULL);
			V_5 = (bool)((((int32_t)((((int32_t)L_24) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_25 = V_5;
			if (!L_25)
			{
				goto IL_00b7;
			}
		}

IL_00a1:
		{
			RuntimeObject* L_26 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(__this, /*hidden argument*/NULL);
			Exception_t * L_27 = V_4;
			NullCheck(L_27);
			String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
			NullCheck(L_26);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_26, 1, L_28);
		}

IL_00b7:
		{
			Exception_t * L_29 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
			SupportClass_WriteStackTrace_mD32365C3335A829A276C4ABB0637293EF71C48BA(L_29, /*hidden argument*/NULL);
			goto IL_00c2;
		}
	} // end catch (depth: 1)

IL_00c2:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReceiveIncomingCommands_m55A12AF075775D36517052D9330FE950528E1F7B (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inbuff0, int32_t ___dataLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_ReceiveIncomingCommands_m55A12AF075775D36517052D9330FE950528E1F7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	bool V_8 = false;
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B10_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___inbuff0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		uint8_t L_2 = PeerBase_get_debugOut_mF85F050E9E21DD0788C09A8D34E89AE69890C951(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		PeerBase_EnqueueDebugReturn_m8D405623EFC13FC69FA373E387D1B4B46469389B(__this, 1, _stringLiteralAAF8F05C11CD4B88A9CDCF0903EAA82BF03A32B6, /*hidden argument*/NULL);
	}

IL_0029:
	{
		goto IL_016a;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_4 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_timestampOfLastReceive_22(L_4);
		int64_t L_5 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_bytesIn_25();
		int32_t L_6 = ___dataLength1;
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_bytesIn_25(((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)7))))))));
		bool L_7 = PeerBase_get_TrafficStatsEnabled_mF1C1322EE4F9FE8C26B99D52D4956A69C8787236(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0082;
		}
	}
	{
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_9 = PeerBase_get_TrafficStatsIncoming_m111AB98ADC74BE448F8C449ADDFCF0709323A9AE(__this, /*hidden argument*/NULL);
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = TrafficStats_get_TotalPacketCount_m7EEBFA02D79D77E0E679EC2383385FB5107C3D85_inline(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		int32_t L_12 = V_3;
		NullCheck(L_10);
		TrafficStats_set_TotalPacketCount_mD501E171768C7D630B52715A6A9EEE32DD50047D_inline(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_13 = PeerBase_get_TrafficStatsIncoming_m111AB98ADC74BE448F8C449ADDFCF0709323A9AE(__this, /*hidden argument*/NULL);
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_14 = L_13;
		NullCheck(L_14);
		int32_t L_15 = TrafficStats_get_TotalCommandsInPackets_mFC42DA2582F98A9F79AAEC3E34A0083215E98B26_inline(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		int32_t L_16 = V_3;
		NullCheck(L_14);
		TrafficStats_set_TotalCommandsInPackets_mEECEF723C40510D81017F4EB1EFA29AEC97CED69_inline(L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0082:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___inbuff0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)((int32_t)243)))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010d;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ___inbuff0;
		NullCheck(L_21);
		int32_t L_22 = 1;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_23&(int32_t)((int32_t)127))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___inbuff0;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_6 = L_26;
		uint8_t L_27 = V_5;
		if ((!(((uint32_t)L_27) == ((uint32_t)7))))
		{
			goto IL_00b1;
		}
	}
	{
		uint8_t L_28 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_il2cpp_TypeInfo_var);
		uint8_t L_29 = ((PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_StaticFields*)il2cpp_codegen_static_fields_for(PhotonCodes_t218EB2E35E5E73AA27D88839D8E9FE57DBCA6470_il2cpp_TypeInfo_var))->get_Ping_4();
		G_B10_0 = ((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0);
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B10_0 = 0;
	}

IL_00b2:
	{
		V_8 = (bool)G_B10_0;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00cb;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = ___inbuff0;
		StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * L_32 = (StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D *)il2cpp_codegen_object_new(StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D_il2cpp_TypeInfo_var);
		StreamBuffer__ctor_m9603DFC93FB6C74B915262F6DF81AF68265066E4(L_32, L_31, /*hidden argument*/NULL);
		VirtFuncInvoker1< bool, StreamBuffer_t150C1A93931566242B84D31203028C4FA872CF2D * >::Invoke(22 /* System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(ExitGames.Client.Photon.StreamBuffer) */, __this, L_32);
		goto IL_016a;
	}

IL_00cb:
	{
		int32_t L_33 = ___dataLength1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_33);
		V_7 = L_34;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = ___inbuff0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = V_7;
		int32_t L_37 = ___dataLength1;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_35, 0, (RuntimeArray *)(RuntimeArray *)L_36, 0, L_37, /*hidden argument*/NULL);
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_38 = __this->get_incomingList_48();
		V_9 = L_38;
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_39 = V_9;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_39, /*hidden argument*/NULL);
	}

IL_00ef:
	try
	{ // begin try (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_40 = __this->get_incomingList_48();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = V_7;
		NullCheck(L_40);
		Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A(L_40, L_41, /*hidden argument*/Queue_1_Enqueue_m7970BCC9C6190DE84A9EAE57CF52472B3795380A_RuntimeMethod_var);
		IL2CPP_LEAVE(0x10A, FINALLY_0101);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0101;
	}

FINALLY_0101:
	{ // begin finally (depth: 1)
		Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * L_42 = V_9;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_42, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(257)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(257)
	{
		IL2CPP_JUMP_TBL(0x10A, IL_010a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_010a:
	{
		goto IL_016a;
	}

IL_010d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = ___inbuff0;
		NullCheck(L_43);
		int32_t L_44 = 0;
		uint8_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_10 = (bool)((((int32_t)L_45) == ((int32_t)((int32_t)240)))? 1 : 0);
		bool L_46 = V_10;
		if (!L_46)
		{
			goto IL_0138;
		}
	}
	{
		TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * L_47 = PeerBase_get_TrafficStatsIncoming_m111AB98ADC74BE448F8C449ADDFCF0709323A9AE(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = ___inbuff0;
		NullCheck(L_48);
		NullCheck(L_47);
		TrafficStats_CountControlCommand_mA8A9D79AB7B50463D962326199B6096A3C890B3A(L_47, (((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = ___inbuff0;
		TPeer_ReadPingResult_mEDCCB531193E06273913A690641064FD5A1D9193(__this, L_49, /*hidden argument*/NULL);
		goto IL_016a;
	}

IL_0138:
	{
		uint8_t L_50 = PeerBase_get_debugOut_mF85F050E9E21DD0788C09A8D34E89AE69890C951(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_50) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_11;
		if (!L_51)
		{
			goto IL_016a;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = ___inbuff0;
		NullCheck(L_52);
		String_t* L_53 = Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5((uint8_t*)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		String_t* L_54 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral919A195066BDFAFE43F7191F4F6DE66CCB82EF97, L_53, /*hidden argument*/NULL);
		PeerBase_EnqueueDebugReturn_m8D405623EFC13FC69FA373E387D1B4B46469389B(__this, 1, L_54, /*hidden argument*/NULL);
	}

IL_016a:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_mEDCCB531193E06273913A690641064FD5A1D9193 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inbuff0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_ReadPingResult_mEDCCB531193E06273913A690641064FD5A1D9193_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___inbuff0;
		IL2CPP_RUNTIME_CLASS_INIT(Protocol_t1557750CB18DE3AE3EE581C9D2D6381A1D540CFE_il2cpp_TypeInfo_var);
		Protocol_Deserialize_mD2DDCB53DFBEF87C195B4C0AFEF4DCDBE60310BC((int32_t*)(&V_0), L_0, (int32_t*)(&V_2), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___inbuff0;
		Protocol_Deserialize_mD2DDCB53DFBEF87C195B4C0AFEF4DCDBE60310BC((int32_t*)(&V_1), L_1, (int32_t*)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_2 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		int32_t L_3 = V_1;
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_lastRoundTripTime_19(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)));
		bool L_4 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_serverTimeOffsetIsAvailable_16();
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_6 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_lastRoundTripTime_19();
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_roundTripTime_17(L_6);
	}

IL_0045:
	{
		int32_t L_7 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_lastRoundTripTime_19();
		PeerBase_UpdateRoundTripTimeAndVariance_mBAA468FE410DDA95511420D14A72842CADBC7D53(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_serverTimeOffsetIsAvailable_16();
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_lastRoundTripTime_19();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_12 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_serverTimeOffset_15(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)((int32_t)L_11>>(int32_t)1)))), (int32_t)L_12)));
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_serverTimeOffsetIsAvailable_16((bool)1);
	}

IL_0080:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::ReadPingResult(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer_ReadPingResult_mA4AAA5DAFF806D19075BB5CA9D54E11140EFEC68 (TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A * __this, OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer_ReadPingResult_mA4AAA5DAFF806D19075BB5CA9D54E11140EFEC68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * L_0 = ___operationResponse0;
		NullCheck(L_0);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_1 = L_0->get_Parameters_3();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29(L_1, (uint8_t)2, /*hidden argument*/Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_RuntimeMethod_var);
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_2, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		OperationResponse_t8191B2F3816ABF0AB904894365BE8A31D531574A * L_3 = ___operationResponse0;
		NullCheck(L_3);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_4 = L_3->get_Parameters_3();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29(L_4, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_m8EAE235A8AA510698BE04B4EC44DCA6979E58D29_RuntimeMethod_var);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_6 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		int32_t L_7 = V_1;
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_lastRoundTripTime_19(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)));
		bool L_8 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_serverTimeOffsetIsAvailable_16();
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_10 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_lastRoundTripTime_19();
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_roundTripTime_17(L_10);
	}

IL_004d:
	{
		int32_t L_11 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_lastRoundTripTime_19();
		PeerBase_UpdateRoundTripTimeAndVariance_mBAA468FE410DDA95511420D14A72842CADBC7D53(__this, L_11, /*hidden argument*/NULL);
		bool L_12 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_serverTimeOffsetIsAvailable_16();
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->get_lastRoundTripTime_19();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_16 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_serverTimeOffset_15(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)((int32_t)((int32_t)L_15>>(int32_t)1)))), (int32_t)L_16)));
		((PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 *)__this)->set_serverTimeOffsetIsAvailable_16((bool)1);
	}

IL_0086:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TPeer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPeer__cctor_m152EAE93822F7EE03EC00A529A869B5E0E73630B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPeer__cctor_m152EAE93822F7EE03EC00A529A869B5E0E73630B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466____D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_il2cpp_TypeInfo_var))->set_tcpFramedMessageHead_52(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)243));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		((TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_StaticFields*)il2cpp_codegen_static_fields_for(TPeer_t80EDD96E2C1D1E5D61E77BB6CDB2E22E4BB8C90A_il2cpp_TypeInfo_var))->set_tcpMsgHead_53(L_5);
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
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_m53309ABD989B9411DB08556D7BAF1CD6AC884121 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPackageHeaderSizeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m18AEB79F17E16B878A97E296AF950B6F14C67D85 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPackageHeaderSizeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_mD5EF6AF06AFA20F861D43C9FF7337C8645C2621E (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandCountU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_m0B303CD720BFD4BDDD59198EDA2243411220A094 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandCountU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_m4BB231D4F13CF7D8913A32BD9DF13B20A1BD5378 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_mBDFAEB94629F8147F68B061B4DAB5B4D68FC5383 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandCountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_mA5BE9D7FFE2851B58DA492A3A74A50E57420DAE5 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandCountU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_mC71CDED81C1B62BEF1DFA224258A0CACE9E21735 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandCountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_m3978FBD382EE3D038E26CFA7E0932A565B81284E (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandCountU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_m49F9E117C515EF3B6073BAA4463EB877A08B2462 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandCountU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_m7EEBFA02D79D77E0E679EC2383385FB5107C3D85 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalPacketCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_mD501E171768C7D630B52715A6A9EEE32DD50047D (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalPacketCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_mFC42DA2582F98A9F79AAEC3E34A0083215E98B26 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalCommandsInPacketsU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_mEECEF723C40510D81017F4EB1EFA29AEC97CED69 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_mF12FFF4534FCE0952B84E66BACD7C107DE3A24D9 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandBytesU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_mB70E1379E29259C561DF139BF2ECE006EAF181AC (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandBytesU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_mEBD5F707F34E753F6EC7C9288085A735F9215361 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandBytesU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_m29ABE4A8C8FF26BA14A9F2C1C530ADDDFB9FDB58 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandBytesU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_m6793E7A100951896ADBC9A0FD6BBFB6F53EF555E (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandBytesU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_mBA2DD4B16E635C548EC93A794E8A2DF4EFD56189 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandBytesU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_m081132C669F62A152832D8B09C8004BA4F41F934 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandBytesU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_m6F8952762EDC54D6F4A21626CA19E8DCBC22904C (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandBytesU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats__ctor_mDC42EB9D158C1920AD996765846B065F9874EDD2 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___packageHeaderSize0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___packageHeaderSize0;
		TrafficStats_set_PackageHeaderSize_m18AEB79F17E16B878A97E296AF950B6F14C67D85_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandCount_mD8E37D8A67BBBF6B758A7E9203E79A7494E90CA5 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_ReliableCommandCount_mD5EF6AF06AFA20F861D43C9FF7337C8645C2621E_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStats_get_UnreliableCommandCount_m4BB231D4F13CF7D8913A32BD9DF13B20A1BD5378_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_FragmentCommandCount_mA5BE9D7FFE2851B58DA492A3A74A50E57420DAE5_inline(__this, /*hidden argument*/NULL);
		int32_t L_3 = TrafficStats_get_ControlCommandCount_m3978FBD382EE3D038E26CFA7E0932A565B81284E_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2)), (int32_t)L_3));
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandBytes_m5980467EEA5DDF9D9D319AD8D1A12F1F01D98C51 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_ReliableCommandBytes_mF12FFF4534FCE0952B84E66BACD7C107DE3A24D9_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStats_get_UnreliableCommandBytes_mEBD5F707F34E753F6EC7C9288085A735F9215361_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_FragmentCommandBytes_m6793E7A100951896ADBC9A0FD6BBFB6F53EF555E_inline(__this, /*hidden argument*/NULL);
		int32_t L_3 = TrafficStats_get_ControlCommandBytes_m081132C669F62A152832D8B09C8004BA4F41F934_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2)), (int32_t)L_3));
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketBytes_mD74E542F597C9C511AA68E60B3F448FCF5F920DD (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_TotalCommandBytes_m5980467EEA5DDF9D9D319AD8D1A12F1F01D98C51(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStats_get_TotalPacketCount_m7EEBFA02D79D77E0E679EC2383385FB5107C3D85_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_PackageHeaderSize_m53309ABD989B9411DB08556D7BAF1CD6AC884121_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2))));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TimestampOfLastAck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TimestampOfLastAck_m8CF3A1F0DE081C8FAA026F57FD769B0E287590FC (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTimestampOfLastAckU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastAck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TimestampOfLastAck_m23615DB603AE496416D3B55EA6F8BA0EC58EEDB0 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampOfLastAckU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TimestampOfLastReliableCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TimestampOfLastReliableCommand_m47471160FF308706FB20C064304CA0366162F3E0 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastReliableCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_set_TimestampOfLastReliableCommand_mA15264755755F85753DDE3966C7A74F5F619FC7E (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountControlCommand_mA8A9D79AB7B50463D962326199B6096A3C890B3A (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_ControlCommandBytes_m081132C669F62A152832D8B09C8004BA4F41F934_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_ControlCommandBytes_m6F8952762EDC54D6F4A21626CA19E8DCBC22904C_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_ControlCommandCount_m3978FBD382EE3D038E26CFA7E0932A565B81284E_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_ControlCommandCount_m49F9E117C515EF3B6073BAA4463EB877A08B2462_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountReliableOpCommand_mF741E8BD8801DF182E2695F51094122CDD515667 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_ReliableCommandBytes_mF12FFF4534FCE0952B84E66BACD7C107DE3A24D9_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_ReliableCommandBytes_mB70E1379E29259C561DF139BF2ECE006EAF181AC_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_ReliableCommandCount_mD5EF6AF06AFA20F861D43C9FF7337C8645C2621E_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_ReliableCommandCount_m0B303CD720BFD4BDDD59198EDA2243411220A094_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountUnreliableOpCommand_m4CC3DD32D89C57108C0AC7C802990DBED2C9FEE3 (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_UnreliableCommandBytes_mEBD5F707F34E753F6EC7C9288085A735F9215361_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_UnreliableCommandBytes_m29ABE4A8C8FF26BA14A9F2C1C530ADDDFB9FDB58_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_UnreliableCommandCount_m4BB231D4F13CF7D8913A32BD9DF13B20A1BD5378_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_UnreliableCommandCount_mBDFAEB94629F8147F68B061B4DAB5B4D68FC5383_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountFragmentOpCommand(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStats_CountFragmentOpCommand_mCCE9941C9C08CB47D994876DCC27033F1815EBFA (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_FragmentCommandBytes_m6793E7A100951896ADBC9A0FD6BBFB6F53EF555E_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_FragmentCommandBytes_mBA2DD4B16E635C548EC93A794E8A2DF4EFD56189_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_FragmentCommandCount_mA5BE9D7FFE2851B58DA492A3A74A50E57420DAE5_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_FragmentCommandCount_mC71CDED81C1B62BEF1DFA224258A0CACE9E21735_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.TrafficStats::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrafficStats_ToString_mE92A7FDDC4286EAAC56A1B88DDE04DEFB514811E (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStats_ToString_mE92A7FDDC4286EAAC56A1B88DDE04DEFB514811E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2 = TrafficStats_get_TotalPacketBytes_mD74E542F597C9C511AA68E60B3F448FCF5F920DD(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		int32_t L_6 = TrafficStats_get_TotalCommandBytes_m5980467EEA5DDF9D9D319AD8D1A12F1F01D98C51(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		int32_t L_10 = TrafficStats_get_TotalPacketCount_m7EEBFA02D79D77E0E679EC2383385FB5107C3D85_inline(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		int32_t L_14 = TrafficStats_get_TotalCommandsInPackets_mFC42DA2582F98A9F79AAEC3E34A0083215E98B26_inline(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralF09647061E14A6AB82D0FE232AB0BC1838440C6D, L_13, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_18 = V_0;
		return L_18;
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
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_m69CA7504051B278CEBDC798B2F3A9D238C201B29 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationByteCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_mAF599DCDE2592414B3A2FF20F029FCCDB2C4DE2A (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationByteCountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_mA348F665CBA527FF134073D83745E472B73F069A (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationCountU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_mFAD38F73B36FFCF16DD191B19AB486A9BA331039 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationCountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_mCA61CFB98C2536B70AE4CFB1F6E869216A2E2DEC (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultByteCountU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_mD430F42F580E8E7124EB45150984F70B3EEF222F (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultByteCountU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_mBAE6B2C93A92F3266D6D3297BF8B9E197603920A (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_m6D039092C8A5C450E752B6C97D6EAA9C915FB0FE (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_m097CD343B66D1A595610F3FABFB3FDB1A6B356D7 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventByteCountU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m048C35054245C3CAA38CC8E3B746F7BD8CD09792 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventByteCountU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_m63A6A271AC5D8E8A40E1CAC9A4CDA4C2823E811F (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventCountU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_m77355BACCD14D5BF4D651BF0EA122AA55DF61146 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventCountU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m390AB7A816F21A789E3389F0B76893A45B951CB0 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestOpResponseCallbackU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_mA36EC54B8C167AE5D7083076EBC4385E91452F47 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallbackOpCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m3500DA9ECABED11BCD4C8E3982888378A952BE77 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallbackOpCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m4A8600D5D8473D5DE25B4CBC52E0321A318DC17F (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m1751CDD5B0A14F624F8F599624416CEE2992BADE (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestEventCallbackU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_mFEEC814D3E5003AB7DED5EFB22B58B5503128DAF (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestMessageCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m01EC2454C32E825F7D8E871911EA0F8076DBF635 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestMessageCallbackU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_m10ACF1B603725D6A31D1DF2526D0C34E90A29340 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestMessageCallbackU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestRawMessageCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_m8698F108B925C29B14B4A8BE9987BFDFDE0DE85A (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestRawMessageCallbackU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestRawMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_m7347ACB4C024D08D0B8B55D2DB37F577AF68787A (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestRawMessageCallbackU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallbackCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_m1CCDFFD5D4A61A84F1A821AE45B4268567B518D4 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CLongestEventCallbackCodeU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallbackCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_mE4279C89C6FB896AF92931036C24AD63C90F2D98 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackCodeU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m6604BD424174ABDE28E3A43D61A1EDDF1609E4C5 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenDispatching(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m01550689EF170FFAE7708E3A4C4DE4A66C742C32 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m6DF1327E04BD2DDD6B28855B841F2CA33578313B (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenSending(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m219337C4B0CDD8F8EE05351D9AFCE271CB5FB4B4 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchCalls_m56BB9A8EC95D39A83A17225063C7DC6C90FC5ADF (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m65627CC73970BC86A365DE5E2EED2581A5015218_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchIncomingCommandsCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m65627CC73970BC86A365DE5E2EED2581A5015218 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_DispatchIncomingCommandsCalls(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m2286FAFC87873257BFF3598E52E4140DA90EA97C (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_SendOutgoingCommandsCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_mA0A1234BBC574014D947C2FB1FC0515342E35132 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_SendOutgoingCommandsCalls(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mC5C8E63B853BDF021F34AA0E671029CEED337EAD (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalByteCount_m0076AEFD0F99D4770249E1AEACB0FC36C3D083D0 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationByteCount_m69CA7504051B278CEBDC798B2F3A9D238C201B29_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStatsGameLevel_get_ResultByteCount_mCA61CFB98C2536B70AE4CFB1F6E869216A2E2DEC_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_EventByteCount_m097CD343B66D1A595610F3FABFB3FDB1A6B356D7_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalMessageCount_mB46CA8425DD13C9E7569CB8DE710F3D7D91B26A5 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationCount_mA348F665CBA527FF134073D83745E472B73F069A_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStatsGameLevel_get_ResultCount_mBAE6B2C93A92F3266D6D3297BF8B9E197603920A_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_EventCount_m63A6A271AC5D8E8A40E1CAC9A4CDA4C2823E811F_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalIncomingByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalIncomingByteCount_mCA0AC3774E2D10366D4AB0A2F8605544BB6F668B (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_ResultByteCount_mCA61CFB98C2536B70AE4CFB1F6E869216A2E2DEC_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStatsGameLevel_get_EventByteCount_m097CD343B66D1A595610F3FABFB3FDB1A6B356D7_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalIncomingMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalIncomingMessageCount_m646D9A5D6E04AFA91CF92285028B232D49E96C69 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_ResultCount_mBAE6B2C93A92F3266D6D3297BF8B9E197603920A_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStatsGameLevel_get_EventCount_m63A6A271AC5D8E8A40E1CAC9A4CDA4C2823E811F_inline(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalOutgoingByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalOutgoingByteCount_mAD2A77D8486A76457210149449C872DA03B3C915 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationByteCount_m69CA7504051B278CEBDC798B2F3A9D238C201B29_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalOutgoingMessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_TotalOutgoingMessageCount_m80600BEFD0462DBE4114152FE6569BD3BD6FDB72 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationCount_mA348F665CBA527FF134073D83745E472B73F069A_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountOperation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountOperation_mE918C1DC1A6B4542E846FE0DCF6E331B9B0997DB (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___operationBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationByteCount_m69CA7504051B278CEBDC798B2F3A9D238C201B29_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___operationBytes0;
		TrafficStatsGameLevel_set_OperationByteCount_mAF599DCDE2592414B3A2FF20F029FCCDB2C4DE2A_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_OperationCount_mA348F665CBA527FF134073D83745E472B73F069A_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_OperationCount_mFAD38F73B36FFCF16DD191B19AB486A9BA331039_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountResult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountResult_m354174F655E15C04F47360B4CB48CCB39988A344 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___resultBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_ResultByteCount_mCA61CFB98C2536B70AE4CFB1F6E869216A2E2DEC_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___resultBytes0;
		TrafficStatsGameLevel_set_ResultByteCount_mD430F42F580E8E7124EB45150984F70B3EEF222F_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_ResultCount_mBAE6B2C93A92F3266D6D3297BF8B9E197603920A_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_ResultCount_m6D039092C8A5C450E752B6C97D6EAA9C915FB0FE_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_CountEvent_m21439AD362E31C1E1B477165AB4DBBAA752CF7A5 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___eventBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_EventByteCount_m097CD343B66D1A595610F3FABFB3FDB1A6B356D7_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___eventBytes0;
		TrafficStatsGameLevel_set_EventByteCount_m048C35054245C3CAA38CC8E3B746F7BD8CD09792_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_EventCount_m63A6A271AC5D8E8A40E1CAC9A4CDA4C2823E811F_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_EventCount_m77355BACCD14D5BF4D651BF0EA122AA55DF61146_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForResponseCallback(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForResponseCallback_mF28871A76D384F972109FF8D6F946E79CAAA927D (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, uint8_t ___code0, int32_t ___time1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time1;
		int32_t L_1 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m390AB7A816F21A789E3389F0B76893A45B951CB0_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___time1;
		TrafficStatsGameLevel_set_LongestOpResponseCallback_mA36EC54B8C167AE5D7083076EBC4385E91452F47_inline(__this, L_3, /*hidden argument*/NULL);
		uint8_t L_4 = ___code0;
		TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m4A8600D5D8473D5DE25B4CBC52E0321A318DC17F_inline(__this, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForEventCallback(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForEventCallback_mF8AF69247F96A3285EFFB1B30E86A7E54388B190 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, uint8_t ___code0, int32_t ___time1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time1;
		int32_t L_1 = TrafficStatsGameLevel_get_LongestEventCallback_m1751CDD5B0A14F624F8F599624416CEE2992BADE_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___time1;
		TrafficStatsGameLevel_set_LongestEventCallback_mFEEC814D3E5003AB7DED5EFB22B58B5503128DAF_inline(__this, L_3, /*hidden argument*/NULL);
		uint8_t L_4 = ___code0;
		TrafficStatsGameLevel_set_LongestEventCallbackCode_mE4279C89C6FB896AF92931036C24AD63C90F2D98_inline(__this, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForMessageCallback_m2D5539AB256F56E5C4D7779CFAA6DCD33978D043 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___time0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time0;
		int32_t L_1 = TrafficStatsGameLevel_get_LongestMessageCallback_m01EC2454C32E825F7D8E871911EA0F8076DBF635_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___time0;
		TrafficStatsGameLevel_set_LongestMessageCallback_m10ACF1B603725D6A31D1DF2526D0C34E90A29340_inline(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForRawMessageCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_TimeForRawMessageCallback_mD478638BF1A5759901EE5A7A0E98E92CE3415E23 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___time0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time0;
		int32_t L_1 = TrafficStatsGameLevel_get_LongestRawMessageCallback_m8698F108B925C29B14B4A8BE9987BFDFDE0DE85A_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___time0;
		TrafficStatsGameLevel_set_LongestRawMessageCallback_m7347ACB4C024D08D0B8B55D2DB37F577AF68787A_inline(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::DispatchIncomingCommandsCalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_DispatchIncomingCommandsCalled_m935E56E2B34EB76789378AA2504A1AC1822637BC (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStatsGameLevel_DispatchIncomingCommandsCalled_m935E56E2B34EB76789378AA2504A1AC1822637BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_timeOfLastDispatchCall_0();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_2 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		int32_t L_3 = __this->get_timeOfLastDispatchCall_0();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_1;
		int32_t L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m6604BD424174ABDE28E3A43D61A1EDDF1609E4C5_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m01550689EF170FFAE7708E3A4C4DE4A66C742C32_inline(__this, L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8 = TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m65627CC73970BC86A365DE5E2EED2581A5015218_inline(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m2286FAFC87873257BFF3598E52E4140DA90EA97C_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_10 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		__this->set_timeOfLastDispatchCall_0(L_10);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::SendOutgoingCommandsCalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_SendOutgoingCommandsCalled_mF77174D28C05D68B895EAEEF634A28CD5FFCFED5 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStatsGameLevel_SendOutgoingCommandsCalled_mF77174D28C05D68B895EAEEF634A28CD5FFCFED5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_timeOfLastSendCall_1();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_2 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		int32_t L_3 = __this->get_timeOfLastSendCall_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_1;
		int32_t L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m6DF1327E04BD2DDD6B28855B841F2CA33578313B_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m219337C4B0CDD8F8EE05351D9AFCE271CB5FB4B4_inline(__this, L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8 = TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_mA0A1234BBC574014D947C2FB1FC0515342E35132_inline(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mC5C8E63B853BDF021F34AA0E671029CEED337EAD_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tAE15BD06CA1CB8D3614C8F42736E4A571A90683F_il2cpp_TypeInfo_var);
		int32_t L_10 = SupportClass_GetTickCount_mD56BE5B05D431E23A26C39D6153BE3FF1444DC3D(/*hidden argument*/NULL);
		__this->set_timeOfLastSendCall_1(L_10);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::ResetMaximumCounters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_ResetMaximumCounters_m8D8412E40F3C751463A87AE96DC6AE33AF386BB2 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m01550689EF170FFAE7708E3A4C4DE4A66C742C32_inline(__this, 0, /*hidden argument*/NULL);
		TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m219337C4B0CDD8F8EE05351D9AFCE271CB5FB4B4_inline(__this, 0, /*hidden argument*/NULL);
		TrafficStatsGameLevel_set_LongestEventCallback_mFEEC814D3E5003AB7DED5EFB22B58B5503128DAF_inline(__this, 0, /*hidden argument*/NULL);
		TrafficStatsGameLevel_set_LongestEventCallbackCode_mE4279C89C6FB896AF92931036C24AD63C90F2D98_inline(__this, (uint8_t)0, /*hidden argument*/NULL);
		TrafficStatsGameLevel_set_LongestOpResponseCallback_mA36EC54B8C167AE5D7083076EBC4385E91452F47_inline(__this, 0, /*hidden argument*/NULL);
		TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m4A8600D5D8473D5DE25B4CBC52E0321A318DC17F_inline(__this, (uint8_t)0, /*hidden argument*/NULL);
		__this->set_timeOfLastDispatchCall_0(0);
		__this->set_timeOfLastSendCall_1(0);
		return;
	}
}
// System.String ExitGames.Client.Photon.TrafficStatsGameLevel::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrafficStatsGameLevel_ToString_mEE249BACB6E7BC9A71D0C18E25ACCA8304640D27 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStatsGameLevel_ToString_mEE249BACB6E7BC9A71D0C18E25ACCA8304640D27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationByteCount_m69CA7504051B278CEBDC798B2F3A9D238C201B29_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = TrafficStatsGameLevel_get_ResultByteCount_mCA61CFB98C2536B70AE4CFB1F6E869216A2E2DEC_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = TrafficStatsGameLevel_get_EventByteCount_m097CD343B66D1A595610F3FABFB3FDB1A6B356D7_inline(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral908BEA1D5D8065EACBEE7F2EC16BAE6A218408FB, L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String ExitGames.Client.Photon.TrafficStatsGameLevel::ToStringVitalStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrafficStatsGameLevel_ToStringVitalStats_mE1DBBD1250C74B291631E22C2399030569C90B47 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStatsGameLevel_ToStringVitalStats_mE1DBBD1250C74B291631E22C2399030569C90B47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m6DF1327E04BD2DDD6B28855B841F2CA33578313B_inline(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		int32_t L_6 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m6604BD424174ABDE28E3A43D61A1EDDF1609E4C5_inline(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		int32_t L_10 = TrafficStatsGameLevel_get_LongestEventCallback_m1751CDD5B0A14F624F8F599624416CEE2992BADE_inline(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		uint8_t L_14 = TrafficStatsGameLevel_get_LongestEventCallbackCode_m1CCDFFD5D4A61A84F1A821AE45B4268567B518D4_inline(__this, /*hidden argument*/NULL);
		uint8_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		int32_t L_18 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m390AB7A816F21A789E3389F0B76893A45B951CB0_inline(__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_20);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_17;
		uint8_t L_22 = TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m3500DA9ECABED11BCD4C8E3982888378A952BE77_inline(__this, /*hidden argument*/NULL);
		uint8_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_24);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_21;
		int32_t L_26 = TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_mA0A1234BBC574014D947C2FB1FC0515342E35132_inline(__this, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_28);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_25;
		int32_t L_30 = TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m65627CC73970BC86A365DE5E2EED2581A5015218_inline(__this, /*hidden argument*/NULL);
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_32);
		String_t* L_33 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral842A27E71750F8CF75D57999C7CBBC93D24F416D, L_29, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_0084;
	}

IL_0084:
	{
		String_t* L_34 = V_0;
		return L_34;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficStatsGameLevel__ctor_m844AD9EE82C8E12C99852F4A6856B5CA881B6BC3 (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void ExitGames.Client.Photon.Version::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__cctor_m95626072D1AF8CBCD49D9657D79187CB8E84E69E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__cctor_m95626072D1AF8CBCD49D9657D79187CB8E84E69E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7B7DE701345FC450BDA52A7AE0F43F8E2BBA7466____022637F85E8F30533B9E68C6D7090348779F1C153369E421F811E0C07B928364_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Version_t05EBFF277C260B547926CE9330EB31A757B4FD8D_StaticFields*)il2cpp_codegen_static_fields_for(Version_t05EBFF277C260B547926CE9330EB31A757B4FD8D_il2cpp_TypeInfo_var))->set_clientVersion_0(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_t8309D667EC65641C9EDFF5CEE4AD7CC79A89BF17 (LogCallbackDelegate_t8309D667EC65641C9EDFF5CEE4AD7CC79A89BF17 * __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___userData0, ___level1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative_LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_m1E35FAA5E23BAF1EC9FAA3886638FFC4B6ADE475 (LogCallbackDelegate_t8309D667EC65641C9EDFF5CEE4AD7CC79A89BF17 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative_LogCallbackDelegate::Invoke(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mB5C3D3E7C1B2F7A3A79E5C130B927B3359B6A0F7 (LogCallbackDelegate_t8309D667EC65641C9EDFF5CEE4AD7CC79A89BF17 * __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___userData0, ___level1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___level1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___userData0, ___level1, ___msg2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___userData0, ___level1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userData0, ___level1, ___msg2);
					else
						VirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userData0, ___level1, ___msg2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___userData0) - 1), ___level1, ___msg2, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___level1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Client.Photon.Encryption.EncryptorNative_LogCallbackDelegate::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallbackDelegate_BeginInvoke_m323A2FA5BEEF41A02392C4E0C37CE25017B3E432 (LogCallbackDelegate_t8309D667EC65641C9EDFF5CEE4AD7CC79A89BF17 * __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogCallbackDelegate_BeginInvoke_m323A2FA5BEEF41A02392C4E0C37CE25017B3E432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userData0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___level1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative_LogCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_EndInvoke_mAFAB2E1E8E879A7D0C2B08D2BEBA3E8D0BABEEFC (LogCallbackDelegate_t8309D667EC65641C9EDFF5CEE4AD7CC79A89BF17 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void ExitGames.Client.Photon.IPhotonSocket_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAEDB6D0332C47C74489C3F7CCD7F7EAD0CA39C0F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mAEDB6D0332C47C74489C3F7CCD7F7EAD0CA39C0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F * L_0 = (U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F *)il2cpp_codegen_object_new(U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3532632C364F78F6357EDCF069DFFEF92695D6BE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.IPhotonSocket_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3532632C364F78F6357EDCF069DFFEF92695D6BE (U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.IPhotonSocket_<>c::<GetIpAddresses>b__55_0(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetIpAddressesU3Eb__55_0_m20731984220957D19C412202D61E8CA9028CF648 (U3CU3Ec_t695AA7ECB675E99B980E90CAEA141B5A773E8A4F * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetIpAddressesU3Eb__55_0_m20731984220957D19C412202D61E8CA9028CF648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_2 = ___x0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_6 = ___x0;
		NullCheck(L_6);
		int32_t L_7 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = Box(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		V_0 = *(int32_t*)UnBox(L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_5;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_12 = ___x0;
		NullCheck(L_12);
		int32_t L_13 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		String_t* L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral0534DA20888B35E2203B7A82A0DB23B602CA0406);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral0534DA20888B35E2203B7A82A0DB23B602CA0406);
		String_t* L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_15, /*hidden argument*/NULL);
		return L_16;
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
// System.Void ExitGames.Client.Photon.PeerBase_<>c__DisplayClass109_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass109_0__ctor_mA48CB50CFB6D8C1D7B1D3EB785759089C9C64E10 (U3CU3Ec__DisplayClass109_0_tB9C06CE21609B0986325FA09737A88C5CD37480B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.PeerBase_<>c__DisplayClass109_0::<EnqueueDebugReturn>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass109_0_U3CEnqueueDebugReturnU3Eb__0_m0AE91F6C1C01F6FA9FBFEC098799B883A5FF923A (U3CU3Ec__DisplayClass109_0_tB9C06CE21609B0986325FA09737A88C5CD37480B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass109_0_U3CEnqueueDebugReturnU3Eb__0_m0AE91F6C1C01F6FA9FBFEC098799B883A5FF923A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(L_0, /*hidden argument*/NULL);
		uint8_t L_2 = __this->get_level_1();
		String_t* L_3 = __this->get_debugReturn_2();
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_1, L_2, L_3);
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
// System.Void ExitGames.Client.Photon.PeerBase_<>c__DisplayClass110_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass110_0__ctor_m202448252C32129DF596C230B20A29751C6E9890 (U3CU3Ec__DisplayClass110_0_tACE8A621AF95A38B1BDC370F5BE77A0A4195BCD4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.PeerBase_<>c__DisplayClass110_0::<EnqueueStatusCallback>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass110_0_U3CEnqueueStatusCallbackU3Eb__0_mEBF38A46D7965E06274002AF3DDFCF71529EBACF (U3CU3Ec__DisplayClass110_0_tACE8A621AF95A38B1BDC370F5BE77A0A4195BCD4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass110_0_U3CEnqueueStatusCallbackU3Eb__0_mEBF38A46D7965E06274002AF3DDFCF71529EBACF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = PeerBase_get_Listener_m994F0867B04D61F4A3B5B0E64118786637E6E35F(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_statusValue_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t22F800F1CB0A27206230B0C123BA547FFF3F4DA1_il2cpp_TypeInfo_var, L_1, L_2);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 (MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ExitGames.Client.Photon.PeerBase_MyAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction__ctor_mEFDA8E994528B465A4C5F4F0A0FE904AB013CC78 (MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Client.Photon.PeerBase_MyAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_Invoke_m3CA3583227A4C296988BEC0A30F65E334C399B99 (MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Client.Photon.PeerBase_MyAction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MyAction_BeginInvoke_mD2FC63BC176C8420B93B627C8EC3B6FB88AAC116 (MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void ExitGames.Client.Photon.PeerBase_MyAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_EndInvoke_mAC482FFB1A4E89955B88F33A82A72C3EF97FF343 (MyAction_tDF714945B96893AEB8E0F818525D19F777A56B46 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_t2E023A5660AA6B1F913427471DE053B44315DD2E (LogCallbackDelegate_t2E023A5660AA6B1F913427471DE053B44315DD2E * __this, intptr_t ___pUserData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___pUserData0, ___level1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void ExitGames.Client.Photon.SocketNative_LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_m97A8F8C49E9C2110A72804596546733044186469 (LogCallbackDelegate_t2E023A5660AA6B1F913427471DE053B44315DD2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Client.Photon.SocketNative_LogCallbackDelegate::Invoke(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mD9C716FEAFA142ABE08211884255C190B59CFA25 (LogCallbackDelegate_t2E023A5660AA6B1F913427471DE053B44315DD2E * __this, intptr_t ___pUserData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pUserData0, ___level1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pUserData0, ___level1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___pUserData0, ___level1, ___msg2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___pUserData0, ___level1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pUserData0, ___level1, ___msg2);
					else
						VirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pUserData0, ___level1, ___msg2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pUserData0) - 1), ___level1, ___msg2, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pUserData0, ___level1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Client.Photon.SocketNative_LogCallbackDelegate::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallbackDelegate_BeginInvoke_m96B96426C56E5AF6E6896BFF7BD303BC8E34667F (LogCallbackDelegate_t2E023A5660AA6B1F913427471DE053B44315DD2E * __this, intptr_t ___pUserData0, int32_t ___level1, String_t* ___msg2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LogCallbackDelegate_BeginInvoke_m96B96426C56E5AF6E6896BFF7BD303BC8E34667F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pUserData0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___level1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void ExitGames.Client.Photon.SocketNative_LogCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_EndInvoke_mF6C062A1971D80C24E1B21D0B9331AB1364CFEA1 (LogCallbackDelegate_t2E023A5660AA6B1F913427471DE053B44315DD2E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::.ctor(System.Net.Sockets.Socket,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveContext__ctor_m33CF571330BCA76697FC507969C00FF1FEA8D98B (ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___headerBuffer1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___messageBuffer2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___headerBuffer1;
		__this->set_HeaderBuffer_2(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___messageBuffer2;
		__this->set_MessageBuffer_5(L_1);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = ___socket0;
		__this->set_workSocket_0(L_2);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::get_ReadingHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReceiveContext_get_ReadingHeader_mE18453A19C23C7D10A59FD49BA44872638D05DC5 (ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_ExpectedMessageBytes_3();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::get_ReadingMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReceiveContext_get_ReadingMessage_mD0D28E248AD4FF371CB6291AE847D5823F2580D8 (ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_ExpectedMessageBytes_3();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::get_CurrentBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ReceiveContext_get_CurrentBuffer_mA686536767B0586A997858CB62629CA78AC144C6 (ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_0 = NULL;
	{
		bool L_0 = ReceiveContext_get_ReadingHeader_mE18453A19C23C7D10A59FD49BA44872638D05DC5(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_MessageBuffer_5();
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0011:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_HeaderBuffer_2();
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::get_CurrentOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReceiveContext_get_CurrentOffset_m89C19D71DEEF86581AD097AFF72DA9A399CFB2D5 (ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ReceiveContext_get_ReadingHeader_mE18453A19C23C7D10A59FD49BA44872638D05DC5(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_ReceivedMessageBytes_4();
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0011:
	{
		int32_t L_2 = __this->get_ReceivedHeaderBytes_1();
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::get_CurrentExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReceiveContext_get_CurrentExpected_m62D5E10B0493707D23B9718968DD7E2BE997C1D0 (ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ReceiveContext_get_ReadingHeader_mE18453A19C23C7D10A59FD49BA44872638D05DC5(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_ExpectedMessageBytes_3();
		G_B3_0 = L_1;
		goto IL_0013;
	}

IL_0011:
	{
		G_B3_0 = ((int32_t)9);
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void ExitGames.Client.Photon.SocketTcpAsync_ReceiveContext::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveContext_Reset_m68A1918A3A86DEFA328C24AE2847CBDB72141D3F (ReceiveContext_t8596A9E1DE217E1D9BA8188A5FCA17B287A11395 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ReceivedHeaderBytes_1(0);
		__this->set_ExpectedMessageBytes_3(0);
		__this->set_ReceivedMessageBytes_4(0);
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
// System.Void ExitGames.Client.Photon.SupportClass_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m761835AF841685C6EF22649109E0F21982506FFA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m761835AF841685C6EF22649109E0F21982506FFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A * L_0 = (U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A *)il2cpp_codegen_object_new(U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3407B5B3286A5A94450825673AF8B9F321721A2C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3407B5B3286A5A94450825673AF8B9F321721A2C (U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.SupportClass_<>c::<.cctor>b__20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__20_0_mB4858F1DDE2FE882183DAAE63EC29E149BAFBF4D (U3CU3Ec_t41418D0DAD6573CDAD93780E78BA11D1DFB39D4A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
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
// System.Void ExitGames.Client.Photon.SupportClass_<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB01A42CA5D087F0940AA87045AAB82D09E50A64E (U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass_<>c__DisplayClass6_0::<StartBackgroundCalls>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m6B788C18E3B81448F3B4087439442F536EE53027 (U3CU3Ec__DisplayClass6_0_t4E3813E9DE61E0C95549C9CC45062E3F8183D246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m6B788C18E3B81448F3B4087439442F536EE53027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0012;
		}

IL_0004:
		{
			int32_t L_0 = __this->get_millisecondsInterval_0();
			Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(L_0, /*hidden argument*/NULL);
		}

IL_0012:
		{
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = __this->get_myThread_1();
			NullCheck(L_1);
			bool L_2 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_1, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
			V_0 = L_2;
			bool L_3 = V_0;
			if (L_3)
			{
				goto IL_0004;
			}
		}

IL_0021:
		{
			goto IL_0029;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0024;
		throw e;
	}

CATCH_0024:
	{ // begin catch(System.Threading.ThreadAbortException)
		goto IL_0029;
	} // end catch (depth: 1)

IL_0029:
	{
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A (IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A * __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ExitGames.Client.Photon.SupportClass_IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMillisecondsDelegate__ctor_mB289B52D81C12DB118E6FB07ED549ECD7BE2766E (IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 ExitGames.Client.Photon.SupportClass_IntegerMillisecondsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_Invoke_m14863D1116E0D23C59D3B90A127B323B3B4BE6ED (IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A * __this, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult ExitGames.Client.Photon.SupportClass_IntegerMillisecondsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntegerMillisecondsDelegate_BeginInvoke_mE12827AE516357EDF378C70C260D91410A112E97 (IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Int32 ExitGames.Client.Photon.SupportClass_IntegerMillisecondsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_EndInvoke_m59CFDC293E4B7D81EF85EFC57AA4C6F85EA876DF (IntegerMillisecondsDelegate_t3CEDEA1692A141FA64B7B7555BF30EA0A463793A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ExitGames.Client.Photon.SupportClass_ThreadSafeRandom::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreadSafeRandom_Next_mB9B77D33AF8E77BA61DC63A6859D294BAA6DD7BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadSafeRandom_Next_mB9B77D33AF8E77BA61DC63A6859D294BAA6DD7BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = ((ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE_il2cpp_TypeInfo_var))->get__r_0();
		V_0 = L_0;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = ((ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE_il2cpp_TypeInfo_var))->get__r_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_2);
		V_1 = L_3;
		IL2CPP_LEAVE(0x24, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0024:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass_ThreadSafeRandom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeRandom__ctor_m25B47573F39BFA824385485F3794FA7DF02118A7 (ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass_ThreadSafeRandom::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeRandom__cctor_m4A363FA899BD1190C630990B8219F6B3E153978B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadSafeRandom__cctor_m4A363FA899BD1190C630990B8219F6B3E153978B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		((ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t1F92FE20EFD04EC951920CAAE5CF4FDCEDE61DFE_il2cpp_TypeInfo_var))->set__r_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m0A53C8895B85BB4D6EB42FEF766EC6B0BE33977E_inline (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_connected_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_mBEEC1D82264F5C07C89656CB73F9524723419AAD_inline (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_IsBound_m67D559154A1B175E8B384DF0DBCC98EB0EA53830_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_bound_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_m5F455E14778E36C5D1E00FA57D47598EECBA37B6_inline (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CServerAddressU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IPhotonSocket_get_AddressResolvedAsIpv6_m3CE218111A1154BB726964769A81D86EA8AE44DF_inline (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAddressResolvedAsIpv6U3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Family_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_m93FE8342D1B3D548A62AB2A8B838EE270B073539_inline (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CServerPortU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Socket_get_AddressFamily_m390B53FAAF0DFF8E8BE844F83AFB06D9E53D891B_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_addressFamily_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_AddressResolvedAsIpv6_m4A5DE9F22417A4AD4242A116C1AA83E2EBBCEFF4_inline (IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAddressResolvedAsIpv6U3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_ServerIpAddress_mBCF0D1433A18F30CE257A8ED300B500675310C5B_inline (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPhotonSocket_set_ServerIpAddress_mBCF0D1433A18F30CE257A8ED300B500675310C5BPhoton3Unity3D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		((IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E_StaticFields*)il2cpp_codegen_static_fields_for(IPhotonSocket_t1C7EE8A88C1BC6AA76A1FF68FB7DDA5BC05A422E_il2cpp_TypeInfo_var))->set_U3CServerIpAddressU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ServerAddress_m5ECBDF657067F35D962B80951BECBFB36BF05F65_inline (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CServerAddressU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PeerBase_set_ProxyServerAddress_m777B7EB228C9CDE9CCDF7125231AE7EA72C5CAF8_inline (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CProxyServerAddressU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_m906ED8850F15E791E411D68FB77BF1C09A198661_inline (PeerBase_tE9FBFA2E2E2FB098414F9D50B9065AFE6E434C05 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CServerAddressU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalPacketCount_m7EEBFA02D79D77E0E679EC2383385FB5107C3D85_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalPacketCountU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalPacketCount_mD501E171768C7D630B52715A6A9EEE32DD50047D_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalPacketCountU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_TotalCommandsInPackets_mFC42DA2582F98A9F79AAEC3E34A0083215E98B26_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalCommandsInPacketsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_TotalCommandsInPackets_mEECEF723C40510D81017F4EB1EFA29AEC97CED69_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_PackageHeaderSize_m18AEB79F17E16B878A97E296AF950B6F14C67D85_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPackageHeaderSizeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandCount_mD5EF6AF06AFA20F861D43C9FF7337C8645C2621E_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandCountU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandCount_m4BB231D4F13CF7D8913A32BD9DF13B20A1BD5378_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandCount_mA5BE9D7FFE2851B58DA492A3A74A50E57420DAE5_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandCountU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandCount_m3978FBD382EE3D038E26CFA7E0932A565B81284E_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandCountU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ReliableCommandBytes_mF12FFF4534FCE0952B84E66BACD7C107DE3A24D9_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandBytesU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_UnreliableCommandBytes_mEBD5F707F34E753F6EC7C9288085A735F9215361_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandBytesU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_FragmentCommandBytes_m6793E7A100951896ADBC9A0FD6BBFB6F53EF555E_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandBytesU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_ControlCommandBytes_m081132C669F62A152832D8B09C8004BA4F41F934_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandBytesU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStats_get_PackageHeaderSize_m53309ABD989B9411DB08556D7BAF1CD6AC884121_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPackageHeaderSizeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandBytes_m6F8952762EDC54D6F4A21626CA19E8DCBC22904C_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandBytesU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ControlCommandCount_m49F9E117C515EF3B6073BAA4463EB877A08B2462_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandCountU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandBytes_mB70E1379E29259C561DF139BF2ECE006EAF181AC_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandBytesU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_ReliableCommandCount_m0B303CD720BFD4BDDD59198EDA2243411220A094_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandCountU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandBytes_m29ABE4A8C8FF26BA14A9F2C1C530ADDDFB9FDB58_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandBytesU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_UnreliableCommandCount_mBDFAEB94629F8147F68B061B4DAB5B4D68FC5383_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandCountU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandBytes_mBA2DD4B16E635C548EC93A794E8A2DF4EFD56189_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandBytesU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStats_set_FragmentCommandCount_mC71CDED81C1B62BEF1DFA224258A0CACE9E21735_inline (TrafficStats_t3D2409F70966749F514326896715927BF6E3A975 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandCountU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m65627CC73970BC86A365DE5E2EED2581A5015218_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationByteCount_m69CA7504051B278CEBDC798B2F3A9D238C201B29_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationByteCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultByteCount_mCA61CFB98C2536B70AE4CFB1F6E869216A2E2DEC_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultByteCountU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventByteCount_m097CD343B66D1A595610F3FABFB3FDB1A6B356D7_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventByteCountU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_OperationCount_mA348F665CBA527FF134073D83745E472B73F069A_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationCountU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_ResultCount_mBAE6B2C93A92F3266D6D3297BF8B9E197603920A_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultCountU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_EventCount_m63A6A271AC5D8E8A40E1CAC9A4CDA4C2823E811F_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventCountU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationByteCount_mAF599DCDE2592414B3A2FF20F029FCCDB2C4DE2A_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationByteCountU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_OperationCount_mFAD38F73B36FFCF16DD191B19AB486A9BA331039_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationCountU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultByteCount_mD430F42F580E8E7124EB45150984F70B3EEF222F_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultByteCountU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_ResultCount_m6D039092C8A5C450E752B6C97D6EAA9C915FB0FE_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultCountU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventByteCount_m048C35054245C3CAA38CC8E3B746F7BD8CD09792_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventByteCountU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_EventCount_m77355BACCD14D5BF4D651BF0EA122AA55DF61146_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventCountU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m390AB7A816F21A789E3389F0B76893A45B951CB0_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestOpResponseCallbackU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallback_mA36EC54B8C167AE5D7083076EBC4385E91452F47_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m4A8600D5D8473D5DE25B4CBC52E0321A318DC17F_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestEventCallback_m1751CDD5B0A14F624F8F599624416CEE2992BADE_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestEventCallbackU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallback_mFEEC814D3E5003AB7DED5EFB22B58B5503128DAF_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestEventCallbackCode_mE4279C89C6FB896AF92931036C24AD63C90F2D98_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackCodeU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestMessageCallback_m01EC2454C32E825F7D8E871911EA0F8076DBF635_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestMessageCallbackU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestMessageCallback_m10ACF1B603725D6A31D1DF2526D0C34E90A29340_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestMessageCallbackU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestRawMessageCallback_m8698F108B925C29B14B4A8BE9987BFDFDE0DE85A_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestRawMessageCallbackU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestRawMessageCallback_m7347ACB4C024D08D0B8B55D2DB37F577AF68787A_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestRawMessageCallbackU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m6604BD424174ABDE28E3A43D61A1EDDF1609E4C5_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m01550689EF170FFAE7708E3A4C4DE4A66C742C32_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m2286FAFC87873257BFF3598E52E4140DA90EA97C_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m6DF1327E04BD2DDD6B28855B841F2CA33578313B_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m219337C4B0CDD8F8EE05351D9AFCE271CB5FB4B4_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_mA0A1234BBC574014D947C2FB1FC0515342E35132_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mC5C8E63B853BDF021F34AA0E671029CEED337EAD_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_m1CCDFFD5D4A61A84F1A821AE45B4268567B518D4_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CLongestEventCallbackCodeU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m3500DA9ECABED11BCD4C8E3982888378A952BE77_inline (TrafficStatsGameLevel_t8E594B1646E4DA8D9336FD8CF5C6CB6FBDF6BDC8 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9();
		return L_0;
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
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return L_0;
	}
}
