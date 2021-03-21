#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Void emotitron.Compression.QuatCompress::.cctor()
extern void QuatCompress__cctor_mB6E4B98ACC619D53A51B086D077564226AE4A8F5 (void);
// 0x00000002 System.UInt64 emotitron.Compression.QuatCompress::Compress(UnityEngine.Quaternion,emotitron.Compression.QuatCompress_Cache)
extern void QuatCompress_Compress_m2C07E23E7037370835B2A4A653683C971C260BF1 (void);
// 0x00000003 UnityEngine.Quaternion emotitron.Compression.QuatCompress::Decompress(System.UInt64,emotitron.Compression.QuatCompress_Cache)
extern void QuatCompress_Decompress_mE1093AA9D5019E0EF4B20F5A5EE96FF54D92DE29 (void);
// 0x00000004 emotitron.Compression.QuatCompress_Cache emotitron.Compression.QuatCompress::DivideBitsAmongChannels(System.Int32)
extern void QuatCompress_DivideBitsAmongChannels_mA746A7963BA2F0DCE5D2D350FB7BFFA313EA8930 (void);
// 0x00000005 System.Void emotitron.Compression.QuatCompress_Cache::.ctor(System.Int32,System.Int32,System.Int32)
extern void Cache__ctor_mE6F475726336D6C540C5BC2524A346317CE5F701_AdjustorThunk (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	QuatCompress__cctor_mB6E4B98ACC619D53A51B086D077564226AE4A8F5,
	QuatCompress_Compress_m2C07E23E7037370835B2A4A653683C971C260BF1,
	QuatCompress_Decompress_mE1093AA9D5019E0EF4B20F5A5EE96FF54D92DE29,
	QuatCompress_DivideBitsAmongChannels_mA746A7963BA2F0DCE5D2D350FB7BFFA313EA8930,
	Cache__ctor_mE6F475726336D6C540C5BC2524A346317CE5F701_AdjustorThunk,
};
static const int32_t s_InvokerIndices[5] = 
{
	3,
	2819,
	2820,
	2821,
	38,
};
extern const Il2CppCodeGenModule g_QuatCompressCodeGenModule;
const Il2CppCodeGenModule g_QuatCompressCodeGenModule = 
{
	"QuatCompress.dll",
	5,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
};
