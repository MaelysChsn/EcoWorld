#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// emotitron.Compression.QuatCompress/Cache[]
struct CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t QuatCompress_Decompress_mE1093AA9D5019E0EF4B20F5A5EE96FF54D92DE29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QuatCompress__cctor_mB6E4B98ACC619D53A51B086D077564226AE4A8F5_MetadataUsageId;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t8E61DB3A9169AF498289A432201231C7946B8F8B 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// emotitron.Compression.QuatCompress
struct  QuatCompress_t449B7946595ECDE9F72746C8762537515276310B  : public RuntimeObject
{
public:

public:
};

struct QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_StaticFields
{
public:
	// System.Single[] emotitron.Compression.QuatCompress::invHalfRange
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___invHalfRange_0;
	// emotitron.Compression.QuatCompress_Cache[] emotitron.Compression.QuatCompress::caches
	CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205* ___caches_1;
	// System.Byte[] emotitron.Compression.QuatCompress::reusableByteArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___reusableByteArray_2;

public:
	inline static int32_t get_offset_of_invHalfRange_0() { return static_cast<int32_t>(offsetof(QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_StaticFields, ___invHalfRange_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_invHalfRange_0() const { return ___invHalfRange_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_invHalfRange_0() { return &___invHalfRange_0; }
	inline void set_invHalfRange_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___invHalfRange_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invHalfRange_0), (void*)value);
	}

	inline static int32_t get_offset_of_caches_1() { return static_cast<int32_t>(offsetof(QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_StaticFields, ___caches_1)); }
	inline CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205* get_caches_1() const { return ___caches_1; }
	inline CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205** get_address_of_caches_1() { return &___caches_1; }
	inline void set_caches_1(CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205* value)
	{
		___caches_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caches_1), (void*)value);
	}

	inline static int32_t get_offset_of_reusableByteArray_2() { return static_cast<int32_t>(offsetof(QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_StaticFields, ___reusableByteArray_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_reusableByteArray_2() const { return ___reusableByteArray_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_reusableByteArray_2() { return &___reusableByteArray_2; }
	inline void set_reusableByteArray_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___reusableByteArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableByteArray_2), (void*)value);
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


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// emotitron.Compression.QuatCompress_Cache
struct  Cache_tE319587E8719208BE410088084A7E717B432983D 
{
public:
	// System.Int32 emotitron.Compression.QuatCompress_Cache::bitsA
	int32_t ___bitsA_0;
	// System.Int32 emotitron.Compression.QuatCompress_Cache::bitsB
	int32_t ___bitsB_1;
	// System.Int32 emotitron.Compression.QuatCompress_Cache::bitsC
	int32_t ___bitsC_2;
	// System.Int32 emotitron.Compression.QuatCompress_Cache::shiftB
	int32_t ___shiftB_3;
	// System.Int32 emotitron.Compression.QuatCompress_Cache::shiftC
	int32_t ___shiftC_4;
	// System.Int32 emotitron.Compression.QuatCompress_Cache::shiftExtra
	int32_t ___shiftExtra_5;
	// System.UInt32 emotitron.Compression.QuatCompress_Cache::halfA
	uint32_t ___halfA_6;
	// System.UInt32 emotitron.Compression.QuatCompress_Cache::halfB
	uint32_t ___halfB_7;
	// System.UInt32 emotitron.Compression.QuatCompress_Cache::halfC
	uint32_t ___halfC_8;
	// System.UInt32 emotitron.Compression.QuatCompress_Cache::maxA
	uint32_t ___maxA_9;
	// System.UInt32 emotitron.Compression.QuatCompress_Cache::maxB
	uint32_t ___maxB_10;
	// System.UInt32 emotitron.Compression.QuatCompress_Cache::maxC
	uint32_t ___maxC_11;
	// System.Single emotitron.Compression.QuatCompress_Cache::decoderA
	float ___decoderA_12;
	// System.Single emotitron.Compression.QuatCompress_Cache::decoderB
	float ___decoderB_13;
	// System.Single emotitron.Compression.QuatCompress_Cache::decoderC
	float ___decoderC_14;
	// System.Single emotitron.Compression.QuatCompress_Cache::encoderA
	float ___encoderA_15;
	// System.Single emotitron.Compression.QuatCompress_Cache::encoderB
	float ___encoderB_16;
	// System.Single emotitron.Compression.QuatCompress_Cache::encoderC
	float ___encoderC_17;

public:
	inline static int32_t get_offset_of_bitsA_0() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___bitsA_0)); }
	inline int32_t get_bitsA_0() const { return ___bitsA_0; }
	inline int32_t* get_address_of_bitsA_0() { return &___bitsA_0; }
	inline void set_bitsA_0(int32_t value)
	{
		___bitsA_0 = value;
	}

	inline static int32_t get_offset_of_bitsB_1() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___bitsB_1)); }
	inline int32_t get_bitsB_1() const { return ___bitsB_1; }
	inline int32_t* get_address_of_bitsB_1() { return &___bitsB_1; }
	inline void set_bitsB_1(int32_t value)
	{
		___bitsB_1 = value;
	}

	inline static int32_t get_offset_of_bitsC_2() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___bitsC_2)); }
	inline int32_t get_bitsC_2() const { return ___bitsC_2; }
	inline int32_t* get_address_of_bitsC_2() { return &___bitsC_2; }
	inline void set_bitsC_2(int32_t value)
	{
		___bitsC_2 = value;
	}

	inline static int32_t get_offset_of_shiftB_3() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___shiftB_3)); }
	inline int32_t get_shiftB_3() const { return ___shiftB_3; }
	inline int32_t* get_address_of_shiftB_3() { return &___shiftB_3; }
	inline void set_shiftB_3(int32_t value)
	{
		___shiftB_3 = value;
	}

	inline static int32_t get_offset_of_shiftC_4() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___shiftC_4)); }
	inline int32_t get_shiftC_4() const { return ___shiftC_4; }
	inline int32_t* get_address_of_shiftC_4() { return &___shiftC_4; }
	inline void set_shiftC_4(int32_t value)
	{
		___shiftC_4 = value;
	}

	inline static int32_t get_offset_of_shiftExtra_5() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___shiftExtra_5)); }
	inline int32_t get_shiftExtra_5() const { return ___shiftExtra_5; }
	inline int32_t* get_address_of_shiftExtra_5() { return &___shiftExtra_5; }
	inline void set_shiftExtra_5(int32_t value)
	{
		___shiftExtra_5 = value;
	}

	inline static int32_t get_offset_of_halfA_6() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___halfA_6)); }
	inline uint32_t get_halfA_6() const { return ___halfA_6; }
	inline uint32_t* get_address_of_halfA_6() { return &___halfA_6; }
	inline void set_halfA_6(uint32_t value)
	{
		___halfA_6 = value;
	}

	inline static int32_t get_offset_of_halfB_7() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___halfB_7)); }
	inline uint32_t get_halfB_7() const { return ___halfB_7; }
	inline uint32_t* get_address_of_halfB_7() { return &___halfB_7; }
	inline void set_halfB_7(uint32_t value)
	{
		___halfB_7 = value;
	}

	inline static int32_t get_offset_of_halfC_8() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___halfC_8)); }
	inline uint32_t get_halfC_8() const { return ___halfC_8; }
	inline uint32_t* get_address_of_halfC_8() { return &___halfC_8; }
	inline void set_halfC_8(uint32_t value)
	{
		___halfC_8 = value;
	}

	inline static int32_t get_offset_of_maxA_9() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___maxA_9)); }
	inline uint32_t get_maxA_9() const { return ___maxA_9; }
	inline uint32_t* get_address_of_maxA_9() { return &___maxA_9; }
	inline void set_maxA_9(uint32_t value)
	{
		___maxA_9 = value;
	}

	inline static int32_t get_offset_of_maxB_10() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___maxB_10)); }
	inline uint32_t get_maxB_10() const { return ___maxB_10; }
	inline uint32_t* get_address_of_maxB_10() { return &___maxB_10; }
	inline void set_maxB_10(uint32_t value)
	{
		___maxB_10 = value;
	}

	inline static int32_t get_offset_of_maxC_11() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___maxC_11)); }
	inline uint32_t get_maxC_11() const { return ___maxC_11; }
	inline uint32_t* get_address_of_maxC_11() { return &___maxC_11; }
	inline void set_maxC_11(uint32_t value)
	{
		___maxC_11 = value;
	}

	inline static int32_t get_offset_of_decoderA_12() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___decoderA_12)); }
	inline float get_decoderA_12() const { return ___decoderA_12; }
	inline float* get_address_of_decoderA_12() { return &___decoderA_12; }
	inline void set_decoderA_12(float value)
	{
		___decoderA_12 = value;
	}

	inline static int32_t get_offset_of_decoderB_13() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___decoderB_13)); }
	inline float get_decoderB_13() const { return ___decoderB_13; }
	inline float* get_address_of_decoderB_13() { return &___decoderB_13; }
	inline void set_decoderB_13(float value)
	{
		___decoderB_13 = value;
	}

	inline static int32_t get_offset_of_decoderC_14() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___decoderC_14)); }
	inline float get_decoderC_14() const { return ___decoderC_14; }
	inline float* get_address_of_decoderC_14() { return &___decoderC_14; }
	inline void set_decoderC_14(float value)
	{
		___decoderC_14 = value;
	}

	inline static int32_t get_offset_of_encoderA_15() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___encoderA_15)); }
	inline float get_encoderA_15() const { return ___encoderA_15; }
	inline float* get_address_of_encoderA_15() { return &___encoderA_15; }
	inline void set_encoderA_15(float value)
	{
		___encoderA_15 = value;
	}

	inline static int32_t get_offset_of_encoderB_16() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___encoderB_16)); }
	inline float get_encoderB_16() const { return ___encoderB_16; }
	inline float* get_address_of_encoderB_16() { return &___encoderB_16; }
	inline void set_encoderB_16(float value)
	{
		___encoderB_16 = value;
	}

	inline static int32_t get_offset_of_encoderC_17() { return static_cast<int32_t>(offsetof(Cache_tE319587E8719208BE410088084A7E717B432983D, ___encoderC_17)); }
	inline float get_encoderC_17() const { return ___encoderC_17; }
	inline float* get_address_of_encoderC_17() { return &___encoderC_17; }
	inline void set_encoderC_17(float value)
	{
		___encoderC_17 = value;
	}
};


// emotitron.Compression.QuatCompress_FastAbs
struct  FastAbs_t5DCBF197273D7917D9B80C6D11C42366C27654E3 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 emotitron.Compression.QuatCompress_FastAbs::uint32
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single emotitron.Compression.QuatCompress_FastAbs::single
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_uint32_0() { return static_cast<int32_t>(offsetof(FastAbs_t5DCBF197273D7917D9B80C6D11C42366C27654E3, ___uint32_0)); }
	inline uint32_t get_uint32_0() const { return ___uint32_0; }
	inline uint32_t* get_address_of_uint32_0() { return &___uint32_0; }
	inline void set_uint32_0(uint32_t value)
	{
		___uint32_0 = value;
	}

	inline static int32_t get_offset_of_single_1() { return static_cast<int32_t>(offsetof(FastAbs_t5DCBF197273D7917D9B80C6D11C42366C27654E3, ___single_1)); }
	inline float get_single_1() const { return ___single_1; }
	inline float* get_address_of_single_1() { return &___single_1; }
	inline void set_single_1(float value)
	{
		___single_1 = value;
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
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// emotitron.Compression.QuatCompress_Cache[]
struct CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Cache_tE319587E8719208BE410088084A7E717B432983D  m_Items[1];

public:
	inline Cache_tE319587E8719208BE410088084A7E717B432983D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Cache_tE319587E8719208BE410088084A7E717B432983D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Cache_tE319587E8719208BE410088084A7E717B432983D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Cache_tE319587E8719208BE410088084A7E717B432983D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Cache_tE319587E8719208BE410088084A7E717B432983D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Cache_tE319587E8719208BE410088084A7E717B432983D  value)
	{
		m_Items[index] = value;
	}
};



// emotitron.Compression.QuatCompress/Cache emotitron.Compression.QuatCompress::DivideBitsAmongChannels(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cache_tE319587E8719208BE410088084A7E717B432983D  QuatCompress_DivideBitsAmongChannels_mA746A7963BA2F0DCE5D2D350FB7BFFA313EA8930 (int32_t ___totalbits0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void emotitron.Compression.QuatCompress/Cache::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cache__ctor_mE6F475726336D6C540C5BC2524A346317CE5F701 (Cache_tE319587E8719208BE410088084A7E717B432983D * __this, int32_t ____bitsA0, int32_t ____bitsB1, int32_t ____bitsC2, const RuntimeMethod* method);
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
// System.Void emotitron.Compression.QuatCompress::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuatCompress__cctor_mB6E4B98ACC619D53A51B086D077564226AE4A8F5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QuatCompress__cctor_mB6E4B98ACC619D53A51B086D077564226AE4A8F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		((QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_StaticFields*)il2cpp_codegen_static_fields_for(QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_il2cpp_TypeInfo_var))->set_reusableByteArray_2(L_0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)23));
		((QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_StaticFields*)il2cpp_codegen_static_fields_for(QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_il2cpp_TypeInfo_var))->set_invHalfRange_0(L_1);
		V_0 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ((QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_StaticFields*)il2cpp_codegen_static_fields_for(QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_il2cpp_TypeInfo_var))->get_invHalfRange_0();
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)((float)((float)(1.0f)/(float)(((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)31)))))/(int32_t)2))))))));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)23))))
		{
			goto IL_001b;
		}
	}
	{
		CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205* L_7 = (CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205*)(CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205*)SZArrayNew(CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205_il2cpp_TypeInfo_var, (uint32_t)((int32_t)65));
		((QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_StaticFields*)il2cpp_codegen_static_fields_for(QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_il2cpp_TypeInfo_var))->set_caches_1(L_7);
		V_1 = ((int32_t)16);
		goto IL_0060;
	}

IL_004b:
	{
		CacheU5BU5D_tAA6BBBCE001072567B474EC303C23D1540AA1205* L_8 = ((QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_StaticFields*)il2cpp_codegen_static_fields_for(QuatCompress_t449B7946595ECDE9F72746C8762537515276310B_il2cpp_TypeInfo_var))->get_caches_1();
		int32_t L_9 = V_1;
		int32_t L_10 = V_1;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_11 = QuatCompress_DivideBitsAmongChannels_mA746A7963BA2F0DCE5D2D350FB7BFFA313EA8930(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Cache_tE319587E8719208BE410088084A7E717B432983D )L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)65))))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
// System.UInt64 emotitron.Compression.QuatCompress::Compress(UnityEngine.Quaternion,emotitron.Compression.QuatCompress_Cache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t QuatCompress_Compress_m2C07E23E7037370835B2A4A653683C971C260BF1 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot0, Cache_tE319587E8719208BE410088084A7E717B432983D  ___cache1, const RuntimeMethod* method)
{
	FastAbs_t5DCBF197273D7917D9B80C6D11C42366C27654E3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	float G_B9_0 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	int32_t G_B15_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FastAbs_t5DCBF197273D7917D9B80C6D11C42366C27654E3 ));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___rot0;
		float L_1 = L_0.get_x_0();
		(&V_0)->set_single_1(L_1);
		uint32_t* L_2 = (&V_0)->get_address_of_uint32_0();
		uint32_t* L_3 = L_2;
		int32_t L_4 = *((uint32_t*)L_3);
		*((int32_t*)L_3) = (int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)2147483647LL)));
		FastAbs_t5DCBF197273D7917D9B80C6D11C42366C27654E3  L_5 = V_0;
		float L_6 = L_5.get_single_1();
		V_1 = L_6;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = ___rot0;
		float L_8 = L_7.get_y_1();
		(&V_0)->set_single_1(L_8);
		uint32_t* L_9 = (&V_0)->get_address_of_uint32_0();
		uint32_t* L_10 = L_9;
		int32_t L_11 = *((uint32_t*)L_10);
		*((int32_t*)L_10) = (int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)2147483647LL)));
		FastAbs_t5DCBF197273D7917D9B80C6D11C42366C27654E3  L_12 = V_0;
		float L_13 = L_12.get_single_1();
		V_2 = L_13;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14 = ___rot0;
		float L_15 = L_14.get_z_2();
		(&V_0)->set_single_1(L_15);
		uint32_t* L_16 = (&V_0)->get_address_of_uint32_0();
		uint32_t* L_17 = L_16;
		int32_t L_18 = *((uint32_t*)L_17);
		*((int32_t*)L_17) = (int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)2147483647LL)));
		FastAbs_t5DCBF197273D7917D9B80C6D11C42366C27654E3  L_19 = V_0;
		float L_20 = L_19.get_single_1();
		V_3 = L_20;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21 = ___rot0;
		float L_22 = L_21.get_w_3();
		(&V_0)->set_single_1(L_22);
		uint32_t* L_23 = (&V_0)->get_address_of_uint32_0();
		uint32_t* L_24 = L_23;
		int32_t L_25 = *((uint32_t*)L_24);
		*((int32_t*)L_24) = (int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)2147483647LL)));
		FastAbs_t5DCBF197273D7917D9B80C6D11C42366C27654E3  L_26 = V_0;
		float L_27 = L_26.get_single_1();
		V_4 = L_27;
		float L_28 = V_1;
		float L_29 = V_2;
		if ((((float)L_28) > ((float)L_29)))
		{
			goto IL_00a0;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_00a1;
	}

IL_00a0:
	{
		G_B3_0 = 0;
	}

IL_00a1:
	{
		V_5 = G_B3_0;
		float L_30 = V_3;
		float L_31 = V_4;
		if ((((float)L_30) > ((float)L_31)))
		{
			goto IL_00ab;
		}
	}
	{
		G_B6_0 = 3;
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B6_0 = 2;
	}

IL_00ac:
	{
		V_6 = G_B6_0;
		int32_t L_32 = V_5;
		if (!L_32)
		{
			goto IL_00b5;
		}
	}
	{
		float L_33 = V_2;
		G_B9_0 = L_33;
		goto IL_00b6;
	}

IL_00b5:
	{
		float L_34 = V_1;
		G_B9_0 = L_34;
	}

IL_00b6:
	{
		int32_t L_35 = V_6;
		G_B10_0 = G_B9_0;
		if ((((int32_t)L_35) == ((int32_t)2)))
		{
			G_B11_0 = G_B9_0;
			goto IL_00bf;
		}
	}
	{
		float L_36 = V_4;
		G_B12_0 = L_36;
		G_B12_1 = G_B10_0;
		goto IL_00c0;
	}

IL_00bf:
	{
		float L_37 = V_3;
		G_B12_0 = L_37;
		G_B12_1 = G_B11_0;
	}

IL_00c0:
	{
		if ((((float)G_B12_1) > ((float)G_B12_0)))
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_38 = V_6;
		G_B15_0 = L_38;
		goto IL_00c8;
	}

IL_00c6:
	{
		int32_t L_39 = V_5;
		G_B15_0 = L_39;
	}

IL_00c8:
	{
		V_7 = G_B15_0;
		int32_t L_40 = V_7;
		switch (L_40)
		{
			case 0:
			{
				goto IL_00df;
			}
			case 1:
			{
				goto IL_0101;
			}
			case 2:
			{
				goto IL_0123;
			}
		}
	}
	{
		goto IL_0145;
	}

IL_00df:
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41 = ___rot0;
		float L_42 = L_41.get_y_1();
		V_8 = L_42;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43 = ___rot0;
		float L_44 = L_43.get_z_2();
		V_9 = L_44;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_45 = ___rot0;
		float L_46 = L_45.get_w_3();
		V_10 = L_46;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_47 = ___rot0;
		float L_48 = L_47.get_x_0();
		V_11 = L_48;
		goto IL_0165;
	}

IL_0101:
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_49 = ___rot0;
		float L_50 = L_49.get_x_0();
		V_8 = L_50;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51 = ___rot0;
		float L_52 = L_51.get_z_2();
		V_9 = L_52;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53 = ___rot0;
		float L_54 = L_53.get_w_3();
		V_10 = L_54;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55 = ___rot0;
		float L_56 = L_55.get_y_1();
		V_11 = L_56;
		goto IL_0165;
	}

IL_0123:
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_57 = ___rot0;
		float L_58 = L_57.get_x_0();
		V_8 = L_58;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_59 = ___rot0;
		float L_60 = L_59.get_y_1();
		V_9 = L_60;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_61 = ___rot0;
		float L_62 = L_61.get_w_3();
		V_10 = L_62;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_63 = ___rot0;
		float L_64 = L_63.get_z_2();
		V_11 = L_64;
		goto IL_0165;
	}

IL_0145:
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_65 = ___rot0;
		float L_66 = L_65.get_x_0();
		V_8 = L_66;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_67 = ___rot0;
		float L_68 = L_67.get_y_1();
		V_9 = L_68;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_69 = ___rot0;
		float L_70 = L_69.get_z_2();
		V_10 = L_70;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_71 = ___rot0;
		float L_72 = L_71.get_w_3();
		V_11 = L_72;
	}

IL_0165:
	{
		float L_73 = V_11;
		if ((!(((float)L_73) > ((float)(0.0f)))))
		{
			goto IL_01cc;
		}
	}
	{
		float L_74 = V_8;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_75 = ___cache1;
		float L_76 = L_75.get_encoderA_15();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_77 = ___cache1;
		uint32_t L_78 = L_77.get_halfA_6();
		float L_79 = V_9;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_80 = ___cache1;
		float L_81 = L_80.get_encoderB_16();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_82 = ___cache1;
		uint32_t L_83 = L_82.get_halfB_7();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_84 = ___cache1;
		int32_t L_85 = L_84.get_shiftB_3();
		float L_86 = V_10;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_87 = ___cache1;
		float L_88 = L_87.get_encoderC_17();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_89 = ___cache1;
		uint32_t L_90 = L_89.get_halfC_8();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_91 = ___cache1;
		int32_t L_92 = L_91.get_shiftC_4();
		int32_t L_93 = V_7;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_94 = ___cache1;
		int32_t L_95 = L_94.get_shiftExtra_5();
		return ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)(il2cpp_codegen_cast_floating_point<uint64_t, int64_t, float>(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_74, (float)L_76)), (float)(((float)((float)(((double)((uint32_t)L_78))))))))))|(int64_t)((int64_t)((int64_t)(il2cpp_codegen_cast_floating_point<uint64_t, int64_t, float>(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_79, (float)L_81)), (float)(((float)((float)(((double)((uint32_t)L_83))))))))))<<(int32_t)((int32_t)((int32_t)L_85&(int32_t)((int32_t)63)))))))|(int64_t)((int64_t)((int64_t)(il2cpp_codegen_cast_floating_point<uint64_t, int64_t, float>(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_86, (float)L_88)), (float)(((float)((float)(((double)((uint32_t)L_90))))))))))<<(int32_t)((int32_t)((int32_t)L_92&(int32_t)((int32_t)63)))))))|(int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)L_93)))<<(int32_t)((int32_t)((int32_t)L_95&(int32_t)((int32_t)63)))))));
	}

IL_01cc:
	{
		float L_96 = V_8;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_97 = ___cache1;
		float L_98 = L_97.get_encoderA_15();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_99 = ___cache1;
		uint32_t L_100 = L_99.get_halfA_6();
		float L_101 = V_9;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_102 = ___cache1;
		float L_103 = L_102.get_encoderB_16();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_104 = ___cache1;
		uint32_t L_105 = L_104.get_halfB_7();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_106 = ___cache1;
		int32_t L_107 = L_106.get_shiftB_3();
		float L_108 = V_10;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_109 = ___cache1;
		float L_110 = L_109.get_encoderC_17();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_111 = ___cache1;
		uint32_t L_112 = L_111.get_halfC_8();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_113 = ___cache1;
		int32_t L_114 = L_113.get_shiftC_4();
		int32_t L_115 = V_7;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_116 = ___cache1;
		int32_t L_117 = L_116.get_shiftExtra_5();
		return ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)(il2cpp_codegen_cast_floating_point<uint64_t, int64_t, float>(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((-L_96)), (float)L_98)), (float)(((float)((float)(((double)((uint32_t)L_100))))))))))|(int64_t)((int64_t)((int64_t)(il2cpp_codegen_cast_floating_point<uint64_t, int64_t, float>(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((-L_101)), (float)L_103)), (float)(((float)((float)(((double)((uint32_t)L_105))))))))))<<(int32_t)((int32_t)((int32_t)L_107&(int32_t)((int32_t)63)))))))|(int64_t)((int64_t)((int64_t)(il2cpp_codegen_cast_floating_point<uint64_t, int64_t, float>(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((-L_108)), (float)L_110)), (float)(((float)((float)(((double)((uint32_t)L_112))))))))))<<(int32_t)((int32_t)((int32_t)L_114&(int32_t)((int32_t)63)))))))|(int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)L_115)))<<(int32_t)((int32_t)((int32_t)L_117&(int32_t)((int32_t)63)))))));
	}
}
// UnityEngine.Quaternion emotitron.Compression.QuatCompress::Decompress(System.UInt64,emotitron.Compression.QuatCompress_Cache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  QuatCompress_Decompress_mE1093AA9D5019E0EF4B20F5A5EE96FF54D92DE29 (uint64_t ___buffer0, Cache_tE319587E8719208BE410088084A7E717B432983D  ___cache1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QuatCompress_Decompress_mE1093AA9D5019E0EF4B20F5A5EE96FF54D92DE29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_0 = ___cache1;
		uint32_t L_1 = L_0.get_maxA_9();
		uint64_t L_2 = ___buffer0;
		V_0 = ((int32_t)((int32_t)L_1&(int32_t)(((int32_t)((int32_t)L_2)))));
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_3 = ___cache1;
		uint32_t L_4 = L_3.get_maxB_10();
		uint64_t L_5 = ___buffer0;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_6 = ___cache1;
		int32_t L_7 = L_6.get_shiftB_3();
		V_1 = ((int32_t)((int32_t)L_4&(int32_t)(((int32_t)((int32_t)((int64_t)((uint64_t)L_5>>((int32_t)((int32_t)L_7&(int32_t)((int32_t)63))))))))));
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_8 = ___cache1;
		uint32_t L_9 = L_8.get_maxC_11();
		uint64_t L_10 = ___buffer0;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_11 = ___cache1;
		int32_t L_12 = L_11.get_shiftC_4();
		uint64_t L_13 = ___buffer0;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_14 = ___cache1;
		int32_t L_15 = L_14.get_bitsA_0();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_16 = ___cache1;
		int32_t L_17 = L_16.get_bitsB_1();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_18 = ___cache1;
		int32_t L_19 = L_18.get_bitsC_2();
		V_2 = (((int32_t)((int32_t)((int64_t)((uint64_t)L_13>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_17)), (int32_t)L_19))&(int32_t)((int32_t)63))))))));
		int32_t L_20 = V_0;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_21 = ___cache1;
		uint32_t L_22 = L_21.get_halfA_6();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_23 = ___cache1;
		float L_24 = L_23.get_decoderA_12();
		V_3 = ((float)il2cpp_codegen_multiply((float)(((float)((float)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)L_20))), (int64_t)(((int64_t)((uint64_t)L_22)))))))), (float)L_24));
		int32_t L_25 = V_1;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_26 = ___cache1;
		uint32_t L_27 = L_26.get_halfB_7();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_28 = ___cache1;
		float L_29 = L_28.get_decoderB_13();
		V_4 = ((float)il2cpp_codegen_multiply((float)(((float)((float)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)L_25))), (int64_t)(((int64_t)((uint64_t)L_27)))))))), (float)L_29));
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_30 = ___cache1;
		uint32_t L_31 = L_30.get_halfC_8();
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_32 = ___cache1;
		float L_33 = L_32.get_decoderC_14();
		V_5 = ((float)il2cpp_codegen_multiply((float)(((float)((float)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)L_9&(int32_t)(((int32_t)((int32_t)((int64_t)((uint64_t)L_10>>((int32_t)((int32_t)L_12&(int32_t)((int32_t)63))))))))))))), (int64_t)(((int64_t)((uint64_t)L_31)))))))), (float)L_33));
		float L_34 = V_3;
		float L_35 = V_3;
		float L_36 = V_4;
		float L_37 = V_4;
		float L_38 = V_5;
		float L_39 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_40 = sqrt(((double)il2cpp_codegen_subtract((double)(1.0), (double)(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_34, (float)L_35)), (float)((float)il2cpp_codegen_multiply((float)L_36, (float)L_37)))), (float)((float)il2cpp_codegen_multiply((float)L_38, (float)L_39))))))))));
		V_6 = (((float)((float)L_40)));
		int32_t L_41 = V_2;
		switch (L_41)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_00d6;
			}
		}
	}
	{
		goto IL_00e3;
	}

IL_00bc:
	{
		float L_42 = V_6;
		float L_43 = V_3;
		float L_44 = V_4;
		float L_45 = V_5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_46), L_42, L_43, L_44, L_45, /*hidden argument*/NULL);
		return L_46;
	}

IL_00c9:
	{
		float L_47 = V_3;
		float L_48 = V_6;
		float L_49 = V_4;
		float L_50 = V_5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_51), L_47, L_48, L_49, L_50, /*hidden argument*/NULL);
		return L_51;
	}

IL_00d6:
	{
		float L_52 = V_3;
		float L_53 = V_4;
		float L_54 = V_6;
		float L_55 = V_5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_56), L_52, L_53, L_54, L_55, /*hidden argument*/NULL);
		return L_56;
	}

IL_00e3:
	{
		float L_57 = V_3;
		float L_58 = V_4;
		float L_59 = V_5;
		float L_60 = V_6;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_61), L_57, L_58, L_59, L_60, /*hidden argument*/NULL);
		return L_61;
	}
}
// emotitron.Compression.QuatCompress_Cache emotitron.Compression.QuatCompress::DivideBitsAmongChannels(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cache_tE319587E8719208BE410088084A7E717B432983D  QuatCompress_DivideBitsAmongChannels_mA746A7963BA2F0DCE5D2D350FB7BFFA313EA8930 (int32_t ___totalbits0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B6_2 = 0;
	{
		int32_t L_0 = ___totalbits0;
		___totalbits0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)2));
		int32_t L_1 = ___totalbits0;
		V_0 = ((int32_t)((int32_t)L_1/(int32_t)3));
		int32_t L_2 = ___totalbits0;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)3))));
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		G_B1_0 = L_4;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			G_B2_0 = L_4;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		G_B4_0 = L_6;
		G_B4_1 = ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			G_B5_0 = L_6;
			G_B5_1 = ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
			goto IL_0021;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0022;
	}

IL_0021:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0022:
	{
		int32_t L_8 = V_0;
		Cache_tE319587E8719208BE410088084A7E717B432983D  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Cache__ctor_mE6F475726336D6C540C5BC2524A346317CE5F701((&L_9), G_B6_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)), L_8, /*hidden argument*/NULL);
		return L_9;
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
// System.Void emotitron.Compression.QuatCompress_Cache::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cache__ctor_mE6F475726336D6C540C5BC2524A346317CE5F701 (Cache_tE319587E8719208BE410088084A7E717B432983D * __this, int32_t ____bitsA0, int32_t ____bitsB1, int32_t ____bitsC2, const RuntimeMethod* method)
{
	Cache_tE319587E8719208BE410088084A7E717B432983D * G_B2_0 = NULL;
	Cache_tE319587E8719208BE410088084A7E717B432983D * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Cache_tE319587E8719208BE410088084A7E717B432983D * G_B3_1 = NULL;
	Cache_tE319587E8719208BE410088084A7E717B432983D * G_B5_0 = NULL;
	Cache_tE319587E8719208BE410088084A7E717B432983D * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Cache_tE319587E8719208BE410088084A7E717B432983D * G_B6_1 = NULL;
	Cache_tE319587E8719208BE410088084A7E717B432983D * G_B8_0 = NULL;
	Cache_tE319587E8719208BE410088084A7E717B432983D * G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	Cache_tE319587E8719208BE410088084A7E717B432983D * G_B9_1 = NULL;
	{
		int32_t L_0 = ____bitsA0;
		__this->set_bitsA_0(L_0);
		int32_t L_1 = ____bitsB1;
		__this->set_bitsB_1(L_1);
		int32_t L_2 = ____bitsC2;
		__this->set_bitsC_2(L_2);
		int32_t L_3 = __this->get_bitsA_0();
		__this->set_maxA_9(((int32_t)((uint32_t)(-1)>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_3))&(int32_t)((int32_t)31))))));
		int32_t L_4 = __this->get_bitsB_1();
		__this->set_maxB_10(((int32_t)((uint32_t)(-1)>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_4))&(int32_t)((int32_t)31))))));
		int32_t L_5 = __this->get_bitsC_2();
		__this->set_maxC_11(((int32_t)((uint32_t)(-1)>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_5))&(int32_t)((int32_t)31))))));
		int32_t L_6 = __this->get_bitsA_0();
		__this->set_halfA_6(((int32_t)((uint32_t)(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))))/(uint32_t)(int32_t)2)));
		int32_t L_7 = __this->get_bitsB_1();
		__this->set_halfB_7(((int32_t)((uint32_t)(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))))/(uint32_t)(int32_t)2)));
		int32_t L_8 = __this->get_bitsC_2();
		__this->set_halfC_8(((int32_t)((uint32_t)(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))))/(uint32_t)(int32_t)2)));
		int32_t L_9 = ____bitsA0;
		__this->set_shiftB_3(L_9);
		int32_t L_10 = ____bitsA0;
		int32_t L_11 = ____bitsB1;
		__this->set_shiftC_4(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)));
		int32_t L_12 = ____bitsA0;
		int32_t L_13 = ____bitsB1;
		int32_t L_14 = ____bitsC2;
		__this->set_shiftExtra_5(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)), (int32_t)L_14)));
		uint32_t L_15 = __this->get_halfA_6();
		__this->set_encoderA_15(((float)il2cpp_codegen_multiply((float)(1.4142133f), (float)(((float)((float)(((double)((uint32_t)L_15)))))))));
		uint32_t L_16 = __this->get_halfB_7();
		__this->set_encoderB_16(((float)il2cpp_codegen_multiply((float)(1.4142133f), (float)(((float)((float)(((double)((uint32_t)L_16)))))))));
		uint32_t L_17 = __this->get_halfC_8();
		__this->set_encoderC_17(((float)il2cpp_codegen_multiply((float)(1.4142133f), (float)(((float)((float)(((double)((uint32_t)L_17)))))))));
		int32_t L_18 = __this->get_bitsA_0();
		G_B1_0 = __this;
		if (!L_18)
		{
			G_B2_0 = __this;
			goto IL_0100;
		}
	}
	{
		uint32_t L_19 = __this->get_halfA_6();
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(1.0f)/(float)(((float)((float)(((double)((uint32_t)L_19)))))))), (float)(0.707106888f)));
		G_B3_1 = G_B1_0;
		goto IL_0105;
	}

IL_0100:
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B2_0;
	}

IL_0105:
	{
		G_B3_1->set_decoderA_12(G_B3_0);
		int32_t L_20 = __this->get_bitsB_1();
		G_B4_0 = __this;
		if (!L_20)
		{
			G_B5_0 = __this;
			goto IL_0129;
		}
	}
	{
		uint32_t L_21 = __this->get_halfB_7();
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(1.0f)/(float)(((float)((float)(((double)((uint32_t)L_21)))))))), (float)(0.707106888f)));
		G_B6_1 = G_B4_0;
		goto IL_012e;
	}

IL_0129:
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B5_0;
	}

IL_012e:
	{
		G_B6_1->set_decoderB_13(G_B6_0);
		int32_t L_22 = __this->get_bitsC_2();
		G_B7_0 = __this;
		if (!L_22)
		{
			G_B8_0 = __this;
			goto IL_0152;
		}
	}
	{
		uint32_t L_23 = __this->get_halfC_8();
		G_B9_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(1.0f)/(float)(((float)((float)(((double)((uint32_t)L_23)))))))), (float)(0.707106888f)));
		G_B9_1 = G_B7_0;
		goto IL_0157;
	}

IL_0152:
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B8_0;
	}

IL_0157:
	{
		G_B9_1->set_decoderC_14(G_B9_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cache__ctor_mE6F475726336D6C540C5BC2524A346317CE5F701_AdjustorThunk (RuntimeObject * __this, int32_t ____bitsA0, int32_t ____bitsB1, int32_t ____bitsC2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cache_tE319587E8719208BE410088084A7E717B432983D * _thisAdjusted = reinterpret_cast<Cache_tE319587E8719208BE410088084A7E717B432983D *>(__this + _offset);
	Cache__ctor_mE6F475726336D6C540C5BC2524A346317CE5F701(_thisAdjusted, ____bitsA0, ____bitsB1, ____bitsC2, method);
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
