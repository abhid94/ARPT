#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Threading.Thread
struct Thread_t1305622052;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1013915038;
// System.Char[]
struct CharU5BU5D_t3089517579;
// System.UInt64
struct UInt64_t3157860097;
// System.Int32
struct Int32_t3963443971;
// System.Char
struct Char_t997196094;
// System.Int64
struct Int64_t3328598687;
// System.OperatingSystem
struct OperatingSystem_t393750323;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1749909935;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1410615209;
// System.Type
struct Type_t;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1790359474;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2571148258;
// System.Boolean[]
struct BooleanU5BU5D_t518224650;
// System.IntPtr[]
struct IntPtrU5BU5D_t3721684730;
// System.Collections.IDictionary
struct IDictionary_t1693578366;
// System.Type[]
struct TypeU5BU5D_t832085871;
// System.Delegate
struct Delegate_t2814419507;
// System.IO.TextWriter
struct TextWriter_t2857569735;
// System.IO.TextReader
struct TextReader_t4941417;
// System.Text.Encoding
struct Encoding_t507963598;
// System.Globalization.CompareInfo
struct CompareInfo_t151250261;
// System.String[]
struct StringU5BU5D_t4227604106;
// System.Collections.Hashtable
struct Hashtable_t572987216;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t164098152;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t659497161;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t3513712369;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t2428573251;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3161400696;
// System.Void
struct Void_t770884652;
// System.Globalization.DaylightTime
struct DaylightTime_t966604715;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t867455359;
// System.Reflection.MemberFilter
struct MemberFilter_t1190606337;
// System.Int32[]
struct Int32U5BU5D_t553828754;
// System.Version
struct Version_t2168111658;
// System.Byte[]
struct ByteU5BU5D_t3902976898;
// System.MonoTypeInfo
struct MonoTypeInfo_t944603732;
// System.IAsyncResult
struct IAsyncResult_t2907163148;
// System.AsyncCallback
struct AsyncCallback_t975035439;
// Mono.Math.BigInteger
struct BigInteger_t2786546107;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3760877221;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef NUMBERFORMATTER_T3110351470_H
#define NUMBERFORMATTER_T3110351470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter
struct  NumberFormatter_t3110351470  : public RuntimeObject
{
public:
	// System.Threading.Thread System.NumberFormatter::_thread
	Thread_t1305622052 * ____thread_6;
	// System.Globalization.NumberFormatInfo System.NumberFormatter::_nfi
	NumberFormatInfo_t1013915038 * ____nfi_7;
	// System.Boolean System.NumberFormatter::_NaN
	bool ____NaN_8;
	// System.Boolean System.NumberFormatter::_infinity
	bool ____infinity_9;
	// System.Boolean System.NumberFormatter::_isCustomFormat
	bool ____isCustomFormat_10;
	// System.Boolean System.NumberFormatter::_specifierIsUpper
	bool ____specifierIsUpper_11;
	// System.Boolean System.NumberFormatter::_positive
	bool ____positive_12;
	// System.Char System.NumberFormatter::_specifier
	Il2CppChar ____specifier_13;
	// System.Int32 System.NumberFormatter::_precision
	int32_t ____precision_14;
	// System.Int32 System.NumberFormatter::_defPrecision
	int32_t ____defPrecision_15;
	// System.Int32 System.NumberFormatter::_digitsLen
	int32_t ____digitsLen_16;
	// System.Int32 System.NumberFormatter::_offset
	int32_t ____offset_17;
	// System.Int32 System.NumberFormatter::_decPointPos
	int32_t ____decPointPos_18;
	// System.UInt32 System.NumberFormatter::_val1
	uint32_t ____val1_19;
	// System.UInt32 System.NumberFormatter::_val2
	uint32_t ____val2_20;
	// System.UInt32 System.NumberFormatter::_val3
	uint32_t ____val3_21;
	// System.UInt32 System.NumberFormatter::_val4
	uint32_t ____val4_22;
	// System.Char[] System.NumberFormatter::_cbuf
	CharU5BU5D_t3089517579* ____cbuf_23;
	// System.Int32 System.NumberFormatter::_ind
	int32_t ____ind_24;

public:
	inline static int32_t get_offset_of__thread_6() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____thread_6)); }
	inline Thread_t1305622052 * get__thread_6() const { return ____thread_6; }
	inline Thread_t1305622052 ** get_address_of__thread_6() { return &____thread_6; }
	inline void set__thread_6(Thread_t1305622052 * value)
	{
		____thread_6 = value;
		Il2CppCodeGenWriteBarrier((&____thread_6), value);
	}

	inline static int32_t get_offset_of__nfi_7() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____nfi_7)); }
	inline NumberFormatInfo_t1013915038 * get__nfi_7() const { return ____nfi_7; }
	inline NumberFormatInfo_t1013915038 ** get_address_of__nfi_7() { return &____nfi_7; }
	inline void set__nfi_7(NumberFormatInfo_t1013915038 * value)
	{
		____nfi_7 = value;
		Il2CppCodeGenWriteBarrier((&____nfi_7), value);
	}

	inline static int32_t get_offset_of__NaN_8() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____NaN_8)); }
	inline bool get__NaN_8() const { return ____NaN_8; }
	inline bool* get_address_of__NaN_8() { return &____NaN_8; }
	inline void set__NaN_8(bool value)
	{
		____NaN_8 = value;
	}

	inline static int32_t get_offset_of__infinity_9() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____infinity_9)); }
	inline bool get__infinity_9() const { return ____infinity_9; }
	inline bool* get_address_of__infinity_9() { return &____infinity_9; }
	inline void set__infinity_9(bool value)
	{
		____infinity_9 = value;
	}

	inline static int32_t get_offset_of__isCustomFormat_10() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____isCustomFormat_10)); }
	inline bool get__isCustomFormat_10() const { return ____isCustomFormat_10; }
	inline bool* get_address_of__isCustomFormat_10() { return &____isCustomFormat_10; }
	inline void set__isCustomFormat_10(bool value)
	{
		____isCustomFormat_10 = value;
	}

	inline static int32_t get_offset_of__specifierIsUpper_11() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____specifierIsUpper_11)); }
	inline bool get__specifierIsUpper_11() const { return ____specifierIsUpper_11; }
	inline bool* get_address_of__specifierIsUpper_11() { return &____specifierIsUpper_11; }
	inline void set__specifierIsUpper_11(bool value)
	{
		____specifierIsUpper_11 = value;
	}

	inline static int32_t get_offset_of__positive_12() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____positive_12)); }
	inline bool get__positive_12() const { return ____positive_12; }
	inline bool* get_address_of__positive_12() { return &____positive_12; }
	inline void set__positive_12(bool value)
	{
		____positive_12 = value;
	}

	inline static int32_t get_offset_of__specifier_13() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____specifier_13)); }
	inline Il2CppChar get__specifier_13() const { return ____specifier_13; }
	inline Il2CppChar* get_address_of__specifier_13() { return &____specifier_13; }
	inline void set__specifier_13(Il2CppChar value)
	{
		____specifier_13 = value;
	}

	inline static int32_t get_offset_of__precision_14() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____precision_14)); }
	inline int32_t get__precision_14() const { return ____precision_14; }
	inline int32_t* get_address_of__precision_14() { return &____precision_14; }
	inline void set__precision_14(int32_t value)
	{
		____precision_14 = value;
	}

	inline static int32_t get_offset_of__defPrecision_15() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____defPrecision_15)); }
	inline int32_t get__defPrecision_15() const { return ____defPrecision_15; }
	inline int32_t* get_address_of__defPrecision_15() { return &____defPrecision_15; }
	inline void set__defPrecision_15(int32_t value)
	{
		____defPrecision_15 = value;
	}

	inline static int32_t get_offset_of__digitsLen_16() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____digitsLen_16)); }
	inline int32_t get__digitsLen_16() const { return ____digitsLen_16; }
	inline int32_t* get_address_of__digitsLen_16() { return &____digitsLen_16; }
	inline void set__digitsLen_16(int32_t value)
	{
		____digitsLen_16 = value;
	}

	inline static int32_t get_offset_of__offset_17() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____offset_17)); }
	inline int32_t get__offset_17() const { return ____offset_17; }
	inline int32_t* get_address_of__offset_17() { return &____offset_17; }
	inline void set__offset_17(int32_t value)
	{
		____offset_17 = value;
	}

	inline static int32_t get_offset_of__decPointPos_18() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____decPointPos_18)); }
	inline int32_t get__decPointPos_18() const { return ____decPointPos_18; }
	inline int32_t* get_address_of__decPointPos_18() { return &____decPointPos_18; }
	inline void set__decPointPos_18(int32_t value)
	{
		____decPointPos_18 = value;
	}

	inline static int32_t get_offset_of__val1_19() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____val1_19)); }
	inline uint32_t get__val1_19() const { return ____val1_19; }
	inline uint32_t* get_address_of__val1_19() { return &____val1_19; }
	inline void set__val1_19(uint32_t value)
	{
		____val1_19 = value;
	}

	inline static int32_t get_offset_of__val2_20() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____val2_20)); }
	inline uint32_t get__val2_20() const { return ____val2_20; }
	inline uint32_t* get_address_of__val2_20() { return &____val2_20; }
	inline void set__val2_20(uint32_t value)
	{
		____val2_20 = value;
	}

	inline static int32_t get_offset_of__val3_21() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____val3_21)); }
	inline uint32_t get__val3_21() const { return ____val3_21; }
	inline uint32_t* get_address_of__val3_21() { return &____val3_21; }
	inline void set__val3_21(uint32_t value)
	{
		____val3_21 = value;
	}

	inline static int32_t get_offset_of__val4_22() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____val4_22)); }
	inline uint32_t get__val4_22() const { return ____val4_22; }
	inline uint32_t* get_address_of__val4_22() { return &____val4_22; }
	inline void set__val4_22(uint32_t value)
	{
		____val4_22 = value;
	}

	inline static int32_t get_offset_of__cbuf_23() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____cbuf_23)); }
	inline CharU5BU5D_t3089517579* get__cbuf_23() const { return ____cbuf_23; }
	inline CharU5BU5D_t3089517579** get_address_of__cbuf_23() { return &____cbuf_23; }
	inline void set__cbuf_23(CharU5BU5D_t3089517579* value)
	{
		____cbuf_23 = value;
		Il2CppCodeGenWriteBarrier((&____cbuf_23), value);
	}

	inline static int32_t get_offset_of__ind_24() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470, ____ind_24)); }
	inline int32_t get__ind_24() const { return ____ind_24; }
	inline int32_t* get_address_of__ind_24() { return &____ind_24; }
	inline void set__ind_24(int32_t value)
	{
		____ind_24 = value;
	}
};

struct NumberFormatter_t3110351470_StaticFields
{
public:
	// System.UInt64* System.NumberFormatter::MantissaBitsTable
	uint64_t* ___MantissaBitsTable_0;
	// System.Int32* System.NumberFormatter::TensExponentTable
	int32_t* ___TensExponentTable_1;
	// System.Char* System.NumberFormatter::DigitLowerTable
	Il2CppChar* ___DigitLowerTable_2;
	// System.Char* System.NumberFormatter::DigitUpperTable
	Il2CppChar* ___DigitUpperTable_3;
	// System.Int64* System.NumberFormatter::TenPowersList
	int64_t* ___TenPowersList_4;
	// System.Int32* System.NumberFormatter::DecHexDigits
	int32_t* ___DecHexDigits_5;

public:
	inline static int32_t get_offset_of_MantissaBitsTable_0() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470_StaticFields, ___MantissaBitsTable_0)); }
	inline uint64_t* get_MantissaBitsTable_0() const { return ___MantissaBitsTable_0; }
	inline uint64_t** get_address_of_MantissaBitsTable_0() { return &___MantissaBitsTable_0; }
	inline void set_MantissaBitsTable_0(uint64_t* value)
	{
		___MantissaBitsTable_0 = value;
	}

	inline static int32_t get_offset_of_TensExponentTable_1() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470_StaticFields, ___TensExponentTable_1)); }
	inline int32_t* get_TensExponentTable_1() const { return ___TensExponentTable_1; }
	inline int32_t** get_address_of_TensExponentTable_1() { return &___TensExponentTable_1; }
	inline void set_TensExponentTable_1(int32_t* value)
	{
		___TensExponentTable_1 = value;
	}

	inline static int32_t get_offset_of_DigitLowerTable_2() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470_StaticFields, ___DigitLowerTable_2)); }
	inline Il2CppChar* get_DigitLowerTable_2() const { return ___DigitLowerTable_2; }
	inline Il2CppChar** get_address_of_DigitLowerTable_2() { return &___DigitLowerTable_2; }
	inline void set_DigitLowerTable_2(Il2CppChar* value)
	{
		___DigitLowerTable_2 = value;
	}

	inline static int32_t get_offset_of_DigitUpperTable_3() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470_StaticFields, ___DigitUpperTable_3)); }
	inline Il2CppChar* get_DigitUpperTable_3() const { return ___DigitUpperTable_3; }
	inline Il2CppChar** get_address_of_DigitUpperTable_3() { return &___DigitUpperTable_3; }
	inline void set_DigitUpperTable_3(Il2CppChar* value)
	{
		___DigitUpperTable_3 = value;
	}

	inline static int32_t get_offset_of_TenPowersList_4() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470_StaticFields, ___TenPowersList_4)); }
	inline int64_t* get_TenPowersList_4() const { return ___TenPowersList_4; }
	inline int64_t** get_address_of_TenPowersList_4() { return &___TenPowersList_4; }
	inline void set_TenPowersList_4(int64_t* value)
	{
		___TenPowersList_4 = value;
	}

	inline static int32_t get_offset_of_DecHexDigits_5() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470_StaticFields, ___DecHexDigits_5)); }
	inline int32_t* get_DecHexDigits_5() const { return ___DecHexDigits_5; }
	inline int32_t** get_address_of_DecHexDigits_5() { return &___DecHexDigits_5; }
	inline void set_DecHexDigits_5(int32_t* value)
	{
		___DecHexDigits_5 = value;
	}
};

struct NumberFormatter_t3110351470_ThreadStaticFields
{
public:
	// System.NumberFormatter System.NumberFormatter::threadNumberFormatter
	NumberFormatter_t3110351470 * ___threadNumberFormatter_25;

public:
	inline static int32_t get_offset_of_threadNumberFormatter_25() { return static_cast<int32_t>(offsetof(NumberFormatter_t3110351470_ThreadStaticFields, ___threadNumberFormatter_25)); }
	inline NumberFormatter_t3110351470 * get_threadNumberFormatter_25() const { return ___threadNumberFormatter_25; }
	inline NumberFormatter_t3110351470 ** get_address_of_threadNumberFormatter_25() { return &___threadNumberFormatter_25; }
	inline void set_threadNumberFormatter_25(NumberFormatter_t3110351470 * value)
	{
		___threadNumberFormatter_25 = value;
		Il2CppCodeGenWriteBarrier((&___threadNumberFormatter_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATTER_T3110351470_H
#ifndef LONGCOMPARER_T2428573251_H
#define LONGCOMPARER_T2428573251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/LongComparer
struct  LongComparer_t2428573251  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LONGCOMPARER_T2428573251_H
#ifndef ENVIRONMENT_T3369785075_H
#define ENVIRONMENT_T3369785075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment
struct  Environment_t3369785075  : public RuntimeObject
{
public:

public:
};

struct Environment_t3369785075_StaticFields
{
public:
	// System.OperatingSystem System.Environment::os
	OperatingSystem_t393750323 * ___os_1;

public:
	inline static int32_t get_offset_of_os_1() { return static_cast<int32_t>(offsetof(Environment_t3369785075_StaticFields, ___os_1)); }
	inline OperatingSystem_t393750323 * get_os_1() const { return ___os_1; }
	inline OperatingSystem_t393750323 ** get_address_of_os_1() { return &___os_1; }
	inline void set_os_1(OperatingSystem_t393750323 * value)
	{
		___os_1 = value;
		Il2CppCodeGenWriteBarrier((&___os_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENT_T3369785075_H
#ifndef ATTRIBUTE_T2299111116_H
#define ATTRIBUTE_T2299111116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2299111116  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2299111116_H
#ifndef EVENTARGS_T3802636617_H
#define EVENTARGS_T3802636617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3802636617  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3802636617_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3802636617 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3802636617_StaticFields, ___Empty_0)); }
	inline EventArgs_t3802636617 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3802636617 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3802636617 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3802636617_H
#ifndef VALUETYPE_T2487595238_H
#define VALUETYPE_T2487595238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2487595238  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2487595238_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2487595238_marshaled_com
{
};
#endif // VALUETYPE_T2487595238_H
#ifndef MARSHALBYREFOBJECT_T2262895216_H
#define MARSHALBYREFOBJECT_T2262895216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2262895216  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1749909935 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2262895216, ____identity_0)); }
	inline ServerIdentity_t1749909935 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1749909935 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1749909935 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2262895216_H
#ifndef GUIDPARSER_T82888181_H
#define GUIDPARSER_T82888181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid/GuidParser
struct  GuidParser_t82888181  : public RuntimeObject
{
public:
	// System.String System.Guid/GuidParser::_src
	String_t* ____src_0;
	// System.Int32 System.Guid/GuidParser::_length
	int32_t ____length_1;
	// System.Int32 System.Guid/GuidParser::_cur
	int32_t ____cur_2;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(GuidParser_t82888181, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(GuidParser_t82888181, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__cur_2() { return static_cast<int32_t>(offsetof(GuidParser_t82888181, ____cur_2)); }
	inline int32_t get__cur_2() const { return ____cur_2; }
	inline int32_t* get_address_of__cur_2() { return &____cur_2; }
	inline void set__cur_2(int32_t value)
	{
		____cur_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDPARSER_T82888181_H
#ifndef INTCOMPARER_T3513712369_H
#define INTCOMPARER_T3513712369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/IntComparer
struct  IntComparer_t3513712369  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTCOMPARER_T3513712369_H
#ifndef VERSION_T2168111658_H
#define VERSION_T2168111658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t2168111658  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t2168111658, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t2168111658, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t2168111658, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t2168111658, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T2168111658_H
#ifndef MATH_T404924044_H
#define MATH_T404924044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Math
struct  Math_t404924044  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATH_T404924044_H
#ifndef MONOCUSTOMATTRS_T1597718207_H
#define MONOCUSTOMATTRS_T1597718207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs
struct  MonoCustomAttrs_t1597718207  : public RuntimeObject
{
public:

public:
};

struct MonoCustomAttrs_t1597718207_StaticFields
{
public:
	// System.Reflection.Assembly System.MonoCustomAttrs::corlib
	Assembly_t1410615209 * ___corlib_0;
	// System.Type System.MonoCustomAttrs::AttributeUsageType
	Type_t * ___AttributeUsageType_1;
	// System.AttributeUsageAttribute System.MonoCustomAttrs::DefaultAttributeUsage
	AttributeUsageAttribute_t1790359474 * ___DefaultAttributeUsage_2;

public:
	inline static int32_t get_offset_of_corlib_0() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t1597718207_StaticFields, ___corlib_0)); }
	inline Assembly_t1410615209 * get_corlib_0() const { return ___corlib_0; }
	inline Assembly_t1410615209 ** get_address_of_corlib_0() { return &___corlib_0; }
	inline void set_corlib_0(Assembly_t1410615209 * value)
	{
		___corlib_0 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_0), value);
	}

	inline static int32_t get_offset_of_AttributeUsageType_1() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t1597718207_StaticFields, ___AttributeUsageType_1)); }
	inline Type_t * get_AttributeUsageType_1() const { return ___AttributeUsageType_1; }
	inline Type_t ** get_address_of_AttributeUsageType_1() { return &___AttributeUsageType_1; }
	inline void set_AttributeUsageType_1(Type_t * value)
	{
		___AttributeUsageType_1 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeUsageType_1), value);
	}

	inline static int32_t get_offset_of_DefaultAttributeUsage_2() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t1597718207_StaticFields, ___DefaultAttributeUsage_2)); }
	inline AttributeUsageAttribute_t1790359474 * get_DefaultAttributeUsage_2() const { return ___DefaultAttributeUsage_2; }
	inline AttributeUsageAttribute_t1790359474 ** get_address_of_DefaultAttributeUsage_2() { return &___DefaultAttributeUsage_2; }
	inline void set_DefaultAttributeUsage_2(AttributeUsageAttribute_t1790359474 * value)
	{
		___DefaultAttributeUsage_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultAttributeUsage_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCUSTOMATTRS_T1597718207_H
#ifndef ATTRIBUTEINFO_T2407746900_H
#define ATTRIBUTEINFO_T2407746900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs/AttributeInfo
struct  AttributeInfo_t2407746900  : public RuntimeObject
{
public:
	// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::_usage
	AttributeUsageAttribute_t1790359474 * ____usage_0;
	// System.Int32 System.MonoCustomAttrs/AttributeInfo::_inheritanceLevel
	int32_t ____inheritanceLevel_1;

public:
	inline static int32_t get_offset_of__usage_0() { return static_cast<int32_t>(offsetof(AttributeInfo_t2407746900, ____usage_0)); }
	inline AttributeUsageAttribute_t1790359474 * get__usage_0() const { return ____usage_0; }
	inline AttributeUsageAttribute_t1790359474 ** get_address_of__usage_0() { return &____usage_0; }
	inline void set__usage_0(AttributeUsageAttribute_t1790359474 * value)
	{
		____usage_0 = value;
		Il2CppCodeGenWriteBarrier((&____usage_0), value);
	}

	inline static int32_t get_offset_of__inheritanceLevel_1() { return static_cast<int32_t>(offsetof(AttributeInfo_t2407746900, ____inheritanceLevel_1)); }
	inline int32_t get__inheritanceLevel_1() const { return ____inheritanceLevel_1; }
	inline int32_t* get_address_of__inheritanceLevel_1() { return &____inheritanceLevel_1; }
	inline void set__inheritanceLevel_1(int32_t value)
	{
		____inheritanceLevel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEINFO_T2407746900_H
#ifndef MONOTOUCHAOTHELPER_T2811325576_H
#define MONOTOUCHAOTHELPER_T2811325576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTouchAOTHelper
struct  MonoTouchAOTHelper_t2811325576  : public RuntimeObject
{
public:

public:
};

struct MonoTouchAOTHelper_t2811325576_StaticFields
{
public:
	// System.Boolean System.MonoTouchAOTHelper::FalseFlag
	bool ___FalseFlag_0;

public:
	inline static int32_t get_offset_of_FalseFlag_0() { return static_cast<int32_t>(offsetof(MonoTouchAOTHelper_t2811325576_StaticFields, ___FalseFlag_0)); }
	inline bool get_FalseFlag_0() const { return ___FalseFlag_0; }
	inline bool* get_address_of_FalseFlag_0() { return &___FalseFlag_0; }
	inline void set_FalseFlag_0(bool value)
	{
		___FalseFlag_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTOUCHAOTHELPER_T2811325576_H
#ifndef MONOTYPEINFO_T944603732_H
#define MONOTYPEINFO_T944603732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTypeInfo
struct  MonoTypeInfo_t944603732  : public RuntimeObject
{
public:
	// System.String System.MonoTypeInfo::full_name
	String_t* ___full_name_0;
	// System.Reflection.ConstructorInfo System.MonoTypeInfo::default_ctor
	ConstructorInfo_t2571148258 * ___default_ctor_1;

public:
	inline static int32_t get_offset_of_full_name_0() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t944603732, ___full_name_0)); }
	inline String_t* get_full_name_0() const { return ___full_name_0; }
	inline String_t** get_address_of_full_name_0() { return &___full_name_0; }
	inline void set_full_name_0(String_t* value)
	{
		___full_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___full_name_0), value);
	}

	inline static int32_t get_offset_of_default_ctor_1() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t944603732, ___default_ctor_1)); }
	inline ConstructorInfo_t2571148258 * get_default_ctor_1() const { return ___default_ctor_1; }
	inline ConstructorInfo_t2571148258 ** get_address_of_default_ctor_1() { return &___default_ctor_1; }
	inline void set_default_ctor_1(ConstructorInfo_t2571148258 * value)
	{
		___default_ctor_1 = value;
		Il2CppCodeGenWriteBarrier((&___default_ctor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPEINFO_T944603732_H
#ifndef TIMEZONE_T877817952_H
#define TIMEZONE_T877817952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t877817952  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t877817952_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t877817952 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t877817952_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t877817952 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t877817952 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t877817952 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t877817952_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t877817952_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T877817952_H
#ifndef CUSTOMINFO_T63790626_H
#define CUSTOMINFO_T63790626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter/CustomInfo
struct  CustomInfo_t63790626  : public RuntimeObject
{
public:
	// System.Boolean System.NumberFormatter/CustomInfo::UseGroup
	bool ___UseGroup_0;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalDigits
	int32_t ___DecimalDigits_1;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalPointPos
	int32_t ___DecimalPointPos_2;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalTailSharpDigits
	int32_t ___DecimalTailSharpDigits_3;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerDigits
	int32_t ___IntegerDigits_4;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadSharpDigits
	int32_t ___IntegerHeadSharpDigits_5;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadPos
	int32_t ___IntegerHeadPos_6;
	// System.Boolean System.NumberFormatter/CustomInfo::UseExponent
	bool ___UseExponent_7;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentDigits
	int32_t ___ExponentDigits_8;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentTailSharpDigits
	int32_t ___ExponentTailSharpDigits_9;
	// System.Boolean System.NumberFormatter/CustomInfo::ExponentNegativeSignOnly
	bool ___ExponentNegativeSignOnly_10;
	// System.Int32 System.NumberFormatter/CustomInfo::DividePlaces
	int32_t ___DividePlaces_11;
	// System.Int32 System.NumberFormatter/CustomInfo::Percents
	int32_t ___Percents_12;
	// System.Int32 System.NumberFormatter/CustomInfo::Permilles
	int32_t ___Permilles_13;

public:
	inline static int32_t get_offset_of_UseGroup_0() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___UseGroup_0)); }
	inline bool get_UseGroup_0() const { return ___UseGroup_0; }
	inline bool* get_address_of_UseGroup_0() { return &___UseGroup_0; }
	inline void set_UseGroup_0(bool value)
	{
		___UseGroup_0 = value;
	}

	inline static int32_t get_offset_of_DecimalDigits_1() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___DecimalDigits_1)); }
	inline int32_t get_DecimalDigits_1() const { return ___DecimalDigits_1; }
	inline int32_t* get_address_of_DecimalDigits_1() { return &___DecimalDigits_1; }
	inline void set_DecimalDigits_1(int32_t value)
	{
		___DecimalDigits_1 = value;
	}

	inline static int32_t get_offset_of_DecimalPointPos_2() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___DecimalPointPos_2)); }
	inline int32_t get_DecimalPointPos_2() const { return ___DecimalPointPos_2; }
	inline int32_t* get_address_of_DecimalPointPos_2() { return &___DecimalPointPos_2; }
	inline void set_DecimalPointPos_2(int32_t value)
	{
		___DecimalPointPos_2 = value;
	}

	inline static int32_t get_offset_of_DecimalTailSharpDigits_3() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___DecimalTailSharpDigits_3)); }
	inline int32_t get_DecimalTailSharpDigits_3() const { return ___DecimalTailSharpDigits_3; }
	inline int32_t* get_address_of_DecimalTailSharpDigits_3() { return &___DecimalTailSharpDigits_3; }
	inline void set_DecimalTailSharpDigits_3(int32_t value)
	{
		___DecimalTailSharpDigits_3 = value;
	}

	inline static int32_t get_offset_of_IntegerDigits_4() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___IntegerDigits_4)); }
	inline int32_t get_IntegerDigits_4() const { return ___IntegerDigits_4; }
	inline int32_t* get_address_of_IntegerDigits_4() { return &___IntegerDigits_4; }
	inline void set_IntegerDigits_4(int32_t value)
	{
		___IntegerDigits_4 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadSharpDigits_5() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___IntegerHeadSharpDigits_5)); }
	inline int32_t get_IntegerHeadSharpDigits_5() const { return ___IntegerHeadSharpDigits_5; }
	inline int32_t* get_address_of_IntegerHeadSharpDigits_5() { return &___IntegerHeadSharpDigits_5; }
	inline void set_IntegerHeadSharpDigits_5(int32_t value)
	{
		___IntegerHeadSharpDigits_5 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadPos_6() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___IntegerHeadPos_6)); }
	inline int32_t get_IntegerHeadPos_6() const { return ___IntegerHeadPos_6; }
	inline int32_t* get_address_of_IntegerHeadPos_6() { return &___IntegerHeadPos_6; }
	inline void set_IntegerHeadPos_6(int32_t value)
	{
		___IntegerHeadPos_6 = value;
	}

	inline static int32_t get_offset_of_UseExponent_7() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___UseExponent_7)); }
	inline bool get_UseExponent_7() const { return ___UseExponent_7; }
	inline bool* get_address_of_UseExponent_7() { return &___UseExponent_7; }
	inline void set_UseExponent_7(bool value)
	{
		___UseExponent_7 = value;
	}

	inline static int32_t get_offset_of_ExponentDigits_8() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___ExponentDigits_8)); }
	inline int32_t get_ExponentDigits_8() const { return ___ExponentDigits_8; }
	inline int32_t* get_address_of_ExponentDigits_8() { return &___ExponentDigits_8; }
	inline void set_ExponentDigits_8(int32_t value)
	{
		___ExponentDigits_8 = value;
	}

	inline static int32_t get_offset_of_ExponentTailSharpDigits_9() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___ExponentTailSharpDigits_9)); }
	inline int32_t get_ExponentTailSharpDigits_9() const { return ___ExponentTailSharpDigits_9; }
	inline int32_t* get_address_of_ExponentTailSharpDigits_9() { return &___ExponentTailSharpDigits_9; }
	inline void set_ExponentTailSharpDigits_9(int32_t value)
	{
		___ExponentTailSharpDigits_9 = value;
	}

	inline static int32_t get_offset_of_ExponentNegativeSignOnly_10() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___ExponentNegativeSignOnly_10)); }
	inline bool get_ExponentNegativeSignOnly_10() const { return ___ExponentNegativeSignOnly_10; }
	inline bool* get_address_of_ExponentNegativeSignOnly_10() { return &___ExponentNegativeSignOnly_10; }
	inline void set_ExponentNegativeSignOnly_10(bool value)
	{
		___ExponentNegativeSignOnly_10 = value;
	}

	inline static int32_t get_offset_of_DividePlaces_11() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___DividePlaces_11)); }
	inline int32_t get_DividePlaces_11() const { return ___DividePlaces_11; }
	inline int32_t* get_address_of_DividePlaces_11() { return &___DividePlaces_11; }
	inline void set_DividePlaces_11(int32_t value)
	{
		___DividePlaces_11 = value;
	}

	inline static int32_t get_offset_of_Percents_12() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___Percents_12)); }
	inline int32_t get_Percents_12() const { return ___Percents_12; }
	inline int32_t* get_address_of_Percents_12() { return &___Percents_12; }
	inline void set_Percents_12(int32_t value)
	{
		___Percents_12 = value;
	}

	inline static int32_t get_offset_of_Permilles_13() { return static_cast<int32_t>(offsetof(CustomInfo_t63790626, ___Permilles_13)); }
	inline int32_t get_Permilles_13() const { return ___Permilles_13; }
	inline int32_t* get_address_of_Permilles_13() { return &___Permilles_13; }
	inline void set_Permilles_13(int32_t value)
	{
		___Permilles_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMINFO_T63790626_H
#ifndef STRINGCOMPARER_T3908519329_H
#define STRINGCOMPARER_T3908519329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3908519329  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3908519329_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t3908519329 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t3908519329 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t3908519329 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t3908519329 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t3908519329_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t3908519329 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t3908519329 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t3908519329 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t3908519329_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t3908519329 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t3908519329 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t3908519329 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t3908519329_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t3908519329 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t3908519329 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t3908519329 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t3908519329_StaticFields, ___ordinal_3)); }
	inline StringComparer_t3908519329 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t3908519329 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t3908519329 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3908519329_H
#ifndef LOCALDATASTORESLOT_T542211629_H
#define LOCALDATASTORESLOT_T542211629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreSlot
struct  LocalDataStoreSlot_t542211629  : public RuntimeObject
{
public:
	// System.Int32 System.LocalDataStoreSlot::slot
	int32_t ___slot_0;
	// System.Boolean System.LocalDataStoreSlot::thread_local
	bool ___thread_local_1;

public:
	inline static int32_t get_offset_of_slot_0() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t542211629, ___slot_0)); }
	inline int32_t get_slot_0() const { return ___slot_0; }
	inline int32_t* get_address_of_slot_0() { return &___slot_0; }
	inline void set_slot_0(int32_t value)
	{
		___slot_0 = value;
	}

	inline static int32_t get_offset_of_thread_local_1() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t542211629, ___thread_local_1)); }
	inline bool get_thread_local_1() const { return ___thread_local_1; }
	inline bool* get_address_of_thread_local_1() { return &___thread_local_1; }
	inline void set_thread_local_1(bool value)
	{
		___thread_local_1 = value;
	}
};

struct LocalDataStoreSlot_t542211629_StaticFields
{
public:
	// System.Object System.LocalDataStoreSlot::lock_obj
	RuntimeObject * ___lock_obj_2;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_thread
	BooleanU5BU5D_t518224650* ___slot_bitmap_thread_3;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_context
	BooleanU5BU5D_t518224650* ___slot_bitmap_context_4;

public:
	inline static int32_t get_offset_of_lock_obj_2() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t542211629_StaticFields, ___lock_obj_2)); }
	inline RuntimeObject * get_lock_obj_2() const { return ___lock_obj_2; }
	inline RuntimeObject ** get_address_of_lock_obj_2() { return &___lock_obj_2; }
	inline void set_lock_obj_2(RuntimeObject * value)
	{
		___lock_obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___lock_obj_2), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_thread_3() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t542211629_StaticFields, ___slot_bitmap_thread_3)); }
	inline BooleanU5BU5D_t518224650* get_slot_bitmap_thread_3() const { return ___slot_bitmap_thread_3; }
	inline BooleanU5BU5D_t518224650** get_address_of_slot_bitmap_thread_3() { return &___slot_bitmap_thread_3; }
	inline void set_slot_bitmap_thread_3(BooleanU5BU5D_t518224650* value)
	{
		___slot_bitmap_thread_3 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_thread_3), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_context_4() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t542211629_StaticFields, ___slot_bitmap_context_4)); }
	inline BooleanU5BU5D_t518224650* get_slot_bitmap_context_4() const { return ___slot_bitmap_context_4; }
	inline BooleanU5BU5D_t518224650** get_address_of_slot_bitmap_context_4() { return &___slot_bitmap_context_4; }
	inline void set_slot_bitmap_context_4(BooleanU5BU5D_t518224650* value)
	{
		___slot_bitmap_context_4 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_context_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTORESLOT_T542211629_H
#ifndef SHORTCOMPARER_T659497161_H
#define SHORTCOMPARER_T659497161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/ShortComparer
struct  ShortComparer_t659497161  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHORTCOMPARER_T659497161_H
#ifndef GC_T975534412_H
#define GC_T975534412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GC
struct  GC_t975534412  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GC_T975534412_H
#ifndef SBYTECOMPARER_T164098152_H
#define SBYTECOMPARER_T164098152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/SByteComparer
struct  SByteComparer_t164098152  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECOMPARER_T164098152_H
#ifndef BITCONVERTER_T2901229956_H
#define BITCONVERTER_T2901229956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t2901229956  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t2901229956_StaticFields
{
public:
	// System.Boolean System.BitConverter::SwappedWordsInDouble
	bool ___SwappedWordsInDouble_0;
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_1;

public:
	inline static int32_t get_offset_of_SwappedWordsInDouble_0() { return static_cast<int32_t>(offsetof(BitConverter_t2901229956_StaticFields, ___SwappedWordsInDouble_0)); }
	inline bool get_SwappedWordsInDouble_0() const { return ___SwappedWordsInDouble_0; }
	inline bool* get_address_of_SwappedWordsInDouble_0() { return &___SwappedWordsInDouble_0; }
	inline void set_SwappedWordsInDouble_0(bool value)
	{
		___SwappedWordsInDouble_0 = value;
	}

	inline static int32_t get_offset_of_IsLittleEndian_1() { return static_cast<int32_t>(offsetof(BitConverter_t2901229956_StaticFields, ___IsLittleEndian_1)); }
	inline bool get_IsLittleEndian_1() const { return ___IsLittleEndian_1; }
	inline bool* get_address_of_IsLittleEndian_1() { return &___IsLittleEndian_1; }
	inline void set_IsLittleEndian_1(bool value)
	{
		___IsLittleEndian_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T2901229956_H
#ifndef EXCEPTION_T3189475913_H
#define EXCEPTION_T3189475913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3189475913  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3721684730* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3189475913 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3189475913, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3721684730* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3721684730** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3721684730* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3189475913, ___inner_exception_1)); }
	inline Exception_t3189475913 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3189475913 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3189475913 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3189475913, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3189475913, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3189475913, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3189475913, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3189475913, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3189475913, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3189475913, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3189475913, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3189475913, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3189475913_H
#ifndef CONVERT_T2423444155_H
#define CONVERT_T2423444155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Convert
struct  Convert_t2423444155  : public RuntimeObject
{
public:

public:
};

struct Convert_t2423444155_StaticFields
{
public:
	// System.Object System.Convert::DBNull
	RuntimeObject * ___DBNull_0;
	// System.Type[] System.Convert::conversionTable
	TypeU5BU5D_t832085871* ___conversionTable_1;

public:
	inline static int32_t get_offset_of_DBNull_0() { return static_cast<int32_t>(offsetof(Convert_t2423444155_StaticFields, ___DBNull_0)); }
	inline RuntimeObject * get_DBNull_0() const { return ___DBNull_0; }
	inline RuntimeObject ** get_address_of_DBNull_0() { return &___DBNull_0; }
	inline void set_DBNull_0(RuntimeObject * value)
	{
		___DBNull_0 = value;
		Il2CppCodeGenWriteBarrier((&___DBNull_0), value);
	}

	inline static int32_t get_offset_of_conversionTable_1() { return static_cast<int32_t>(offsetof(Convert_t2423444155_StaticFields, ___conversionTable_1)); }
	inline TypeU5BU5D_t832085871* get_conversionTable_1() const { return ___conversionTable_1; }
	inline TypeU5BU5D_t832085871** get_address_of_conversionTable_1() { return &___conversionTable_1; }
	inline void set_conversionTable_1(TypeU5BU5D_t832085871* value)
	{
		___conversionTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___conversionTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERT_T2423444155_H
#ifndef DELEGATEENTRY_T4115493790_H
#define DELEGATEENTRY_T4115493790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder/DelegateEntry
struct  DelegateEntry_t4115493790  : public RuntimeObject
{
public:
	// System.String System.DelegateSerializationHolder/DelegateEntry::type
	String_t* ___type_0;
	// System.String System.DelegateSerializationHolder/DelegateEntry::assembly
	String_t* ___assembly_1;
	// System.Object System.DelegateSerializationHolder/DelegateEntry::target
	RuntimeObject * ___target_2;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeAssembly
	String_t* ___targetTypeAssembly_3;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeName
	String_t* ___targetTypeName_4;
	// System.String System.DelegateSerializationHolder/DelegateEntry::methodName
	String_t* ___methodName_5;
	// System.DelegateSerializationHolder/DelegateEntry System.DelegateSerializationHolder/DelegateEntry::delegateEntry
	DelegateEntry_t4115493790 * ___delegateEntry_6;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(DelegateEntry_t4115493790, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_assembly_1() { return static_cast<int32_t>(offsetof(DelegateEntry_t4115493790, ___assembly_1)); }
	inline String_t* get_assembly_1() const { return ___assembly_1; }
	inline String_t** get_address_of_assembly_1() { return &___assembly_1; }
	inline void set_assembly_1(String_t* value)
	{
		___assembly_1 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_1), value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(DelegateEntry_t4115493790, ___target_2)); }
	inline RuntimeObject * get_target_2() const { return ___target_2; }
	inline RuntimeObject ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(RuntimeObject * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_targetTypeAssembly_3() { return static_cast<int32_t>(offsetof(DelegateEntry_t4115493790, ___targetTypeAssembly_3)); }
	inline String_t* get_targetTypeAssembly_3() const { return ___targetTypeAssembly_3; }
	inline String_t** get_address_of_targetTypeAssembly_3() { return &___targetTypeAssembly_3; }
	inline void set_targetTypeAssembly_3(String_t* value)
	{
		___targetTypeAssembly_3 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeAssembly_3), value);
	}

	inline static int32_t get_offset_of_targetTypeName_4() { return static_cast<int32_t>(offsetof(DelegateEntry_t4115493790, ___targetTypeName_4)); }
	inline String_t* get_targetTypeName_4() const { return ___targetTypeName_4; }
	inline String_t** get_address_of_targetTypeName_4() { return &___targetTypeName_4; }
	inline void set_targetTypeName_4(String_t* value)
	{
		___targetTypeName_4 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeName_4), value);
	}

	inline static int32_t get_offset_of_methodName_5() { return static_cast<int32_t>(offsetof(DelegateEntry_t4115493790, ___methodName_5)); }
	inline String_t* get_methodName_5() const { return ___methodName_5; }
	inline String_t** get_address_of_methodName_5() { return &___methodName_5; }
	inline void set_methodName_5(String_t* value)
	{
		___methodName_5 = value;
		Il2CppCodeGenWriteBarrier((&___methodName_5), value);
	}

	inline static int32_t get_offset_of_delegateEntry_6() { return static_cast<int32_t>(offsetof(DelegateEntry_t4115493790, ___delegateEntry_6)); }
	inline DelegateEntry_t4115493790 * get_delegateEntry_6() const { return ___delegateEntry_6; }
	inline DelegateEntry_t4115493790 ** get_address_of_delegateEntry_6() { return &___delegateEntry_6; }
	inline void set_delegateEntry_6(DelegateEntry_t4115493790 * value)
	{
		___delegateEntry_6 = value;
		Il2CppCodeGenWriteBarrier((&___delegateEntry_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEENTRY_T4115493790_H
#ifndef DELEGATESERIALIZATIONHOLDER_T3952591287_H
#define DELEGATESERIALIZATIONHOLDER_T3952591287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder
struct  DelegateSerializationHolder_t3952591287  : public RuntimeObject
{
public:
	// System.Delegate System.DelegateSerializationHolder::_delegate
	Delegate_t2814419507 * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(DelegateSerializationHolder_t3952591287, ____delegate_0)); }
	inline Delegate_t2814419507 * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t2814419507 ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t2814419507 * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&____delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATESERIALIZATIONHOLDER_T3952591287_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef DELEGATEDATA_T867455359_H
#define DELEGATEDATA_T867455359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateData
struct  DelegateData_t867455359  : public RuntimeObject
{
public:
	// System.Type System.DelegateData::target_type
	Type_t * ___target_type_0;
	// System.String System.DelegateData::method_name
	String_t* ___method_name_1;

public:
	inline static int32_t get_offset_of_target_type_0() { return static_cast<int32_t>(offsetof(DelegateData_t867455359, ___target_type_0)); }
	inline Type_t * get_target_type_0() const { return ___target_type_0; }
	inline Type_t ** get_address_of_target_type_0() { return &___target_type_0; }
	inline void set_target_type_0(Type_t * value)
	{
		___target_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_type_0), value);
	}

	inline static int32_t get_offset_of_method_name_1() { return static_cast<int32_t>(offsetof(DelegateData_t867455359, ___method_name_1)); }
	inline String_t* get_method_name_1() const { return ___method_name_1; }
	inline String_t** get_address_of_method_name_1() { return &___method_name_1; }
	inline void set_method_name_1(String_t* value)
	{
		___method_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEDATA_T867455359_H
#ifndef BUFFER_T2800306041_H
#define BUFFER_T2800306041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Buffer
struct  Buffer_t2800306041  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFER_T2800306041_H
#ifndef DBNULL_T3820236684_H
#define DBNULL_T3820236684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t3820236684  : public RuntimeObject
{
public:

public:
};

struct DBNull_t3820236684_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t3820236684 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t3820236684_StaticFields, ___Value_0)); }
	inline DBNull_t3820236684 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t3820236684 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t3820236684 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T3820236684_H
#ifndef CONSOLE_T2358673960_H
#define CONSOLE_T2358673960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Console
struct  Console_t2358673960  : public RuntimeObject
{
public:

public:
};

struct Console_t2358673960_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t2857569735 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t2857569735 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t4941417 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t507963598 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t507963598 * ___outputEncoding_4;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t2358673960_StaticFields, ___stdout_0)); }
	inline TextWriter_t2857569735 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t2857569735 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t2857569735 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((&___stdout_0), value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t2358673960_StaticFields, ___stderr_1)); }
	inline TextWriter_t2857569735 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t2857569735 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t2857569735 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((&___stderr_1), value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t2358673960_StaticFields, ___stdin_2)); }
	inline TextReader_t4941417 * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t4941417 ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t4941417 * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((&___stdin_2), value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t2358673960_StaticFields, ___inputEncoding_3)); }
	inline Encoding_t507963598 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_t507963598 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_t507963598 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___inputEncoding_3), value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t2358673960_StaticFields, ___outputEncoding_4)); }
	inline Encoding_t507963598 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_t507963598 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_t507963598 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___outputEncoding_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLE_T2358673960_H
#ifndef DATETIMEUTILS_T651634209_H
#define DATETIMEUTILS_T651634209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeUtils
struct  DateTimeUtils_t651634209  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEUTILS_T651634209_H
#ifndef CHARENUMERATOR_T43718061_H
#define CHARENUMERATOR_T43718061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CharEnumerator
struct  CharEnumerator_t43718061  : public RuntimeObject
{
public:
	// System.String System.CharEnumerator::str
	String_t* ___str_0;
	// System.Int32 System.CharEnumerator::index
	int32_t ___index_1;
	// System.Int32 System.CharEnumerator::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(CharEnumerator_t43718061, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(CharEnumerator_t43718061, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(CharEnumerator_t43718061, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARENUMERATOR_T43718061_H
#ifndef CONTEXTBOUNDOBJECT_T1230085809_H
#define CONTEXTBOUNDOBJECT_T1230085809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t1230085809  : public MarshalByRefObject_t2262895216
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T1230085809_H
#ifndef THREADSTATICATTRIBUTE_T934173689_H
#define THREADSTATICATTRIBUTE_T934173689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t934173689  : public Attribute_t2299111116
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T934173689_H
#ifndef TIMESPAN_T3005579915_H
#define TIMESPAN_T3005579915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3005579915 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3005579915, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3005579915_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3005579915  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3005579915  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3005579915  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3005579915_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3005579915  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3005579915 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3005579915  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3005579915_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3005579915  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3005579915 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3005579915  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3005579915_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3005579915  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3005579915 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3005579915  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3005579915_H
#ifndef SYSTEMEXCEPTION_T3942641876_H
#define SYSTEMEXCEPTION_T3942641876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3942641876  : public Exception_t3189475913
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3942641876_H
#ifndef ORDINALCOMPARER_T1116493976_H
#define ORDINALCOMPARER_T1116493976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t1116493976  : public StringComparer_t3908519329
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t1116493976, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T1116493976_H
#ifndef CULTUREAWARECOMPARER_T1286422974_H
#define CULTUREAWARECOMPARER_T1286422974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t1286422974  : public StringComparer_t3908519329
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t151250261 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1286422974, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1286422974, ____compareInfo_5)); }
	inline CompareInfo_t151250261 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t151250261 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t151250261 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T1286422974_H
#ifndef NONSERIALIZEDATTRIBUTE_T2920433454_H
#define NONSERIALIZEDATTRIBUTE_T2920433454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NonSerializedAttribute
struct  NonSerializedAttribute_t2920433454  : public Attribute_t2299111116
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONSERIALIZEDATTRIBUTE_T2920433454_H
#ifndef MONOENUMINFO_T1266629851_H
#define MONOENUMINFO_T1266629851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo
struct  MonoEnumInfo_t1266629851 
{
public:
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype_0;
	// System.Array System.MonoEnumInfo::values
	RuntimeArray * ___values_1;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t4227604106* ___names_2;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t572987216 * ___name_hash_3;

public:
	inline static int32_t get_offset_of_utype_0() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1266629851, ___utype_0)); }
	inline Type_t * get_utype_0() const { return ___utype_0; }
	inline Type_t ** get_address_of_utype_0() { return &___utype_0; }
	inline void set_utype_0(Type_t * value)
	{
		___utype_0 = value;
		Il2CppCodeGenWriteBarrier((&___utype_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1266629851, ___values_1)); }
	inline RuntimeArray * get_values_1() const { return ___values_1; }
	inline RuntimeArray ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(RuntimeArray * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1266629851, ___names_2)); }
	inline StringU5BU5D_t4227604106* get_names_2() const { return ___names_2; }
	inline StringU5BU5D_t4227604106** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(StringU5BU5D_t4227604106* value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_name_hash_3() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1266629851, ___name_hash_3)); }
	inline Hashtable_t572987216 * get_name_hash_3() const { return ___name_hash_3; }
	inline Hashtable_t572987216 ** get_address_of_name_hash_3() { return &___name_hash_3; }
	inline void set_name_hash_3(Hashtable_t572987216 * value)
	{
		___name_hash_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_hash_3), value);
	}
};

struct MonoEnumInfo_t1266629851_StaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t572987216 * ___global_cache_5;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	RuntimeObject * ___global_cache_monitor_6;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t164098152 * ___sbyte_comparer_7;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t659497161 * ___short_comparer_8;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t3513712369 * ___int_comparer_9;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t2428573251 * ___long_comparer_10;

public:
	inline static int32_t get_offset_of_global_cache_5() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1266629851_StaticFields, ___global_cache_5)); }
	inline Hashtable_t572987216 * get_global_cache_5() const { return ___global_cache_5; }
	inline Hashtable_t572987216 ** get_address_of_global_cache_5() { return &___global_cache_5; }
	inline void set_global_cache_5(Hashtable_t572987216 * value)
	{
		___global_cache_5 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_5), value);
	}

	inline static int32_t get_offset_of_global_cache_monitor_6() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1266629851_StaticFields, ___global_cache_monitor_6)); }
	inline RuntimeObject * get_global_cache_monitor_6() const { return ___global_cache_monitor_6; }
	inline RuntimeObject ** get_address_of_global_cache_monitor_6() { return &___global_cache_monitor_6; }
	inline void set_global_cache_monitor_6(RuntimeObject * value)
	{
		___global_cache_monitor_6 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_monitor_6), value);
	}

	inline static int32_t get_offset_of_sbyte_comparer_7() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1266629851_StaticFields, ___sbyte_comparer_7)); }
	inline SByteComparer_t164098152 * get_sbyte_comparer_7() const { return ___sbyte_comparer_7; }
	inline SByteComparer_t164098152 ** get_address_of_sbyte_comparer_7() { return &___sbyte_comparer_7; }
	inline void set_sbyte_comparer_7(SByteComparer_t164098152 * value)
	{
		___sbyte_comparer_7 = value;
		Il2CppCodeGenWriteBarrier((&___sbyte_comparer_7), value);
	}

	inline static int32_t get_offset_of_short_comparer_8() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1266629851_StaticFields, ___short_comparer_8)); }
	inline ShortComparer_t659497161 * get_short_comparer_8() const { return ___short_comparer_8; }
	inline ShortComparer_t659497161 ** get_address_of_short_comparer_8() { return &___short_comparer_8; }
	inline void set_short_comparer_8(ShortComparer_t659497161 * value)
	{
		___short_comparer_8 = value;
		Il2CppCodeGenWriteBarrier((&___short_comparer_8), value);
	}

	inline static int32_t get_offset_of_int_comparer_9() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1266629851_StaticFields, ___int_comparer_9)); }
	inline IntComparer_t3513712369 * get_int_comparer_9() const { return ___int_comparer_9; }
	inline IntComparer_t3513712369 ** get_address_of_int_comparer_9() { return &___int_comparer_9; }
	inline void set_int_comparer_9(IntComparer_t3513712369 * value)
	{
		___int_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___int_comparer_9), value);
	}

	inline static int32_t get_offset_of_long_comparer_10() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1266629851_StaticFields, ___long_comparer_10)); }
	inline LongComparer_t2428573251 * get_long_comparer_10() const { return ___long_comparer_10; }
	inline LongComparer_t2428573251 ** get_address_of_long_comparer_10() { return &___long_comparer_10; }
	inline void set_long_comparer_10(LongComparer_t2428573251 * value)
	{
		___long_comparer_10 = value;
		Il2CppCodeGenWriteBarrier((&___long_comparer_10), value);
	}
};

struct MonoEnumInfo_t1266629851_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t572987216 * ___cache_4;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t1266629851_ThreadStaticFields, ___cache_4)); }
	inline Hashtable_t572987216 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t572987216 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t572987216 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t1266629851_marshaled_pinvoke
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	char** ___names_2;
	Hashtable_t572987216 * ___name_hash_3;
};
// Native definition for COM marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t1266629851_marshaled_com
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	Il2CppChar** ___names_2;
	Hashtable_t572987216 * ___name_hash_3;
};
#endif // MONOENUMINFO_T1266629851_H
#ifndef RESOLVEEVENTARGS_T1287280988_H
#define RESOLVEEVENTARGS_T1287280988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventArgs
struct  ResolveEventArgs_t1287280988  : public EventArgs_t3802636617
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_t1287280988, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTARGS_T1287280988_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t3161400696 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t3161400696 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t3161400696 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t3161400696 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t3161400696 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t3161400696 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t3161400696 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t3161400696 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef GCHANDLE_T3569379197_H
#define GCHANDLE_T3569379197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3569379197 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3569379197, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3569379197_H
#ifndef BOOLEAN_T3578442987_H
#define BOOLEAN_T3578442987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3578442987 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3578442987, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3578442987_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3578442987_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3578442987_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3578442987_H
#ifndef FLAGSATTRIBUTE_T1202403699_H
#define FLAGSATTRIBUTE_T1202403699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FlagsAttribute
struct  FlagsAttribute_t1202403699  : public Attribute_t2299111116
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGSATTRIBUTE_T1202403699_H
#ifndef ENUM_T2468718875_H
#define ENUM_T2468718875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2468718875  : public ValueType_t2487595238
{
public:

public:
};

struct Enum_t2468718875_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3089517579* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2468718875_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3089517579* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3089517579** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3089517579* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2468718875_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2468718875_marshaled_com
{
};
#endif // ENUM_T2468718875_H
#ifndef VOID_T770884652_H
#define VOID_T770884652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t770884652 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T770884652_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T367881698_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T367881698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t367881698  : public EventArgs_t3802636617
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t367881698, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t367881698, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T367881698_H
#ifndef STACKOVERFLOWEXCEPTION_T4262713561_H
#define STACKOVERFLOWEXCEPTION_T4262713561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t4262713561  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T4262713561_H
#ifndef ARITHMETICEXCEPTION_T401890181_H
#define ARITHMETICEXCEPTION_T401890181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t401890181  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T401890181_H
#ifndef STRINGCOMPARISON_T1041971909_H
#define STRINGCOMPARISON_T1041971909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t1041971909 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t1041971909, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARISON_T1041971909_H
#ifndef STRINGSPLITOPTIONS_T405871164_H
#define STRINGSPLITOPTIONS_T405871164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t405871164 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t405871164, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGSPLITOPTIONS_T405871164_H
#ifndef TYPELOADEXCEPTION_T899073099_H
#define TYPELOADEXCEPTION_T899073099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t899073099  : public SystemException_t3942641876
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t899073099, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t899073099, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T899073099_H
#ifndef RUNTIMEMETHODHANDLE_T1749347383_H
#define RUNTIMEMETHODHANDLE_T1749347383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t1749347383 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t1749347383, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODHANDLE_T1749347383_H
#ifndef CURRENTSYSTEMTIMEZONE_T3005110854_H
#define CURRENTSYSTEMTIMEZONE_T3005110854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t3005110854  : public TimeZone_t877817952
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t572987216 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t3005579915  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t3005579915  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3005110854, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3005110854, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3005110854, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t572987216 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t572987216 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t572987216 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3005110854, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3005110854, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t3005579915  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t3005579915 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t3005579915  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3005110854, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t3005579915  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t3005579915 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t3005579915  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t3005110854_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t966604715 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3005110854_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3005110854_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t966604715 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t966604715 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t966604715 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T3005110854_H
#ifndef WEAKREFERENCE_T816325093_H
#define WEAKREFERENCE_T816325093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t816325093  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3569379197  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t816325093, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t816325093, ___gcHandle_1)); }
	inline GCHandle_t3569379197  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3569379197 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3569379197  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T816325093_H
#ifndef BINDINGFLAGS_T4250827111_H
#define BINDINGFLAGS_T4250827111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t4250827111 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t4250827111, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T4250827111_H
#ifndef UNITYTYPE_T2261725371_H
#define UNITYTYPE_T2261725371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t2261725371 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t2261725371, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTYPE_T2261725371_H
#ifndef TYPECODE_T4276926493_H
#define TYPECODE_T4276926493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t4276926493 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t4276926493, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECODE_T4276926493_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T3777093282_H
#define TYPEINITIALIZATIONEXCEPTION_T3777093282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t3777093282  : public SystemException_t3942641876
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t3777093282, ___type_name_11)); }
	inline String_t* get_type_name_11() const { return ___type_name_11; }
	inline String_t** get_address_of_type_name_11() { return &___type_name_11; }
	inline void set_type_name_11(String_t* value)
	{
		___type_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T3777093282_H
#ifndef CONFIDENCEFACTOR_T861267287_H
#define CONFIDENCEFACTOR_T861267287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t861267287 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t861267287, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIDENCEFACTOR_T861267287_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T3853328103_H
#define UNAUTHORIZEDACCESSEXCEPTION_T3853328103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t3853328103  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T3853328103_H
#ifndef ATTRIBUTETARGETS_T3149918202_H
#define ATTRIBUTETARGETS_T3149918202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t3149918202 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AttributeTargets_t3149918202, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETARGETS_T3149918202_H
#ifndef DELEGATE_T2814419507_H
#define DELEGATE_T2814419507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2814419507  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t867455359 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2814419507, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2814419507, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2814419507, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2814419507, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2814419507, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t2814419507, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t2814419507, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2814419507, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t2814419507, ___data_8)); }
	inline DelegateData_t867455359 * get_data_8() const { return ___data_8; }
	inline DelegateData_t867455359 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t867455359 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T2814419507_H
#ifndef FORMATEXCEPTION_T2446836410_H
#define FORMATEXCEPTION_T2446836410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t2446836410  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T2446836410_H
#ifndef RANKEXCEPTION_T1442323301_H
#define RANKEXCEPTION_T1442323301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t1442323301  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T1442323301_H
#ifndef EXECUTIONENGINEEXCEPTION_T367382569_H
#define EXECUTIONENGINEEXCEPTION_T367382569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExecutionEngineException
struct  ExecutionEngineException_t367382569  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONENGINEEXCEPTION_T367382569_H
#ifndef SPECIALFOLDER_T500056336_H
#define SPECIALFOLDER_T500056336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment/SpecialFolder
struct  SpecialFolder_t500056336 
{
public:
	// System.Int32 System.Environment/SpecialFolder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SpecialFolder_t500056336, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPECIALFOLDER_T500056336_H
#ifndef INVALIDOPERATIONEXCEPTION_T928380369_H
#define INVALIDOPERATIONEXCEPTION_T928380369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t928380369  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T928380369_H
#ifndef LOADEROPTIMIZATION_T3409577546_H
#define LOADEROPTIMIZATION_T3409577546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LoaderOptimization
struct  LoaderOptimization_t3409577546 
{
public:
	// System.Int32 System.LoaderOptimization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoaderOptimization_t3409577546, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADEROPTIMIZATION_T3409577546_H
#ifndef MEMBERACCESSEXCEPTION_T1875070072_H
#define MEMBERACCESSEXCEPTION_T1875070072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t1875070072  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T1875070072_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T3482535250_H
#define INDEXOUTOFRANGEEXCEPTION_T3482535250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t3482535250  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T3482535250_H
#ifndef MONOASYNCCALL_T3061870109_H
#define MONOASYNCCALL_T3061870109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoAsyncCall
struct  MonoAsyncCall_t3061870109  : public RuntimeObject
{
public:
	// System.Object System.MonoAsyncCall::msg
	RuntimeObject * ___msg_0;
	// System.IntPtr System.MonoAsyncCall::cb_method
	IntPtr_t ___cb_method_1;
	// System.Object System.MonoAsyncCall::cb_target
	RuntimeObject * ___cb_target_2;
	// System.Object System.MonoAsyncCall::state
	RuntimeObject * ___state_3;
	// System.Object System.MonoAsyncCall::res
	RuntimeObject * ___res_4;
	// System.Object System.MonoAsyncCall::out_args
	RuntimeObject * ___out_args_5;
	// System.Int64 System.MonoAsyncCall::wait_event
	int64_t ___wait_event_6;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3061870109, ___msg_0)); }
	inline RuntimeObject * get_msg_0() const { return ___msg_0; }
	inline RuntimeObject ** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(RuntimeObject * value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((&___msg_0), value);
	}

	inline static int32_t get_offset_of_cb_method_1() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3061870109, ___cb_method_1)); }
	inline IntPtr_t get_cb_method_1() const { return ___cb_method_1; }
	inline IntPtr_t* get_address_of_cb_method_1() { return &___cb_method_1; }
	inline void set_cb_method_1(IntPtr_t value)
	{
		___cb_method_1 = value;
	}

	inline static int32_t get_offset_of_cb_target_2() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3061870109, ___cb_target_2)); }
	inline RuntimeObject * get_cb_target_2() const { return ___cb_target_2; }
	inline RuntimeObject ** get_address_of_cb_target_2() { return &___cb_target_2; }
	inline void set_cb_target_2(RuntimeObject * value)
	{
		___cb_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___cb_target_2), value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3061870109, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((&___state_3), value);
	}

	inline static int32_t get_offset_of_res_4() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3061870109, ___res_4)); }
	inline RuntimeObject * get_res_4() const { return ___res_4; }
	inline RuntimeObject ** get_address_of_res_4() { return &___res_4; }
	inline void set_res_4(RuntimeObject * value)
	{
		___res_4 = value;
		Il2CppCodeGenWriteBarrier((&___res_4), value);
	}

	inline static int32_t get_offset_of_out_args_5() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3061870109, ___out_args_5)); }
	inline RuntimeObject * get_out_args_5() const { return ___out_args_5; }
	inline RuntimeObject ** get_address_of_out_args_5() { return &___out_args_5; }
	inline void set_out_args_5(RuntimeObject * value)
	{
		___out_args_5 = value;
		Il2CppCodeGenWriteBarrier((&___out_args_5), value);
	}

	inline static int32_t get_offset_of_wait_event_6() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3061870109, ___wait_event_6)); }
	inline int64_t get_wait_event_6() const { return ___wait_event_6; }
	inline int64_t* get_address_of_wait_event_6() { return &___wait_event_6; }
	inline void set_wait_event_6(int64_t value)
	{
		___wait_event_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOASYNCCALL_T3061870109_H
#ifndef DAYOFWEEK_T2478137291_H
#define DAYOFWEEK_T2478137291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t2478137291 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DayOfWeek_t2478137291, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAYOFWEEK_T2478137291_H
#ifndef INVALIDCASTEXCEPTION_T3039909510_H
#define INVALIDCASTEXCEPTION_T3039909510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t3039909510  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T3039909510_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T2795216053_H
#define NOTIMPLEMENTEDEXCEPTION_T2795216053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t2795216053  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T2795216053_H
#ifndef NOTSUPPORTEDEXCEPTION_T1294258912_H
#define NOTSUPPORTEDEXCEPTION_T1294258912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1294258912  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1294258912_H
#ifndef NULLREFERENCEEXCEPTION_T264970685_H
#define NULLREFERENCEEXCEPTION_T264970685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t264970685  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T264970685_H
#ifndef RUNTIMETYPEHANDLE_T2229197132_H
#define RUNTIMETYPEHANDLE_T2229197132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t2229197132 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2229197132, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T2229197132_H
#ifndef DATETIMEKIND_T4044119063_H
#define DATETIMEKIND_T4044119063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t4044119063 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t4044119063, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T4044119063_H
#ifndef WHICH_T675707960_H
#define WHICH_T675707960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime/Which
struct  Which_t675707960 
{
public:
	// System.Int32 System.DateTime/Which::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Which_t675707960, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHICH_T675707960_H
#ifndef OUTOFMEMORYEXCEPTION_T1665574921_H
#define OUTOFMEMORYEXCEPTION_T1665574921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t1665574921  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T1665574921_H
#ifndef PLATFORMID_T183626411_H
#define PLATFORMID_T183626411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformID
struct  PlatformID_t183626411 
{
public:
	// System.Int32 System.PlatformID::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlatformID_t183626411, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMID_T183626411_H
#ifndef MULTICASTNOTSUPPORTEDEXCEPTION_T848182690_H
#define MULTICASTNOTSUPPORTEDEXCEPTION_T848182690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastNotSupportedException
struct  MulticastNotSupportedException_t848182690  : public SystemException_t3942641876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTNOTSUPPORTEDEXCEPTION_T848182690_H
#ifndef DIVIDEBYZEROEXCEPTION_T4096993518_H
#define DIVIDEBYZEROEXCEPTION_T4096993518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DivideByZeroException
struct  DivideByZeroException_t4096993518  : public ArithmeticException_t401890181
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIVIDEBYZEROEXCEPTION_T4096993518_H
#ifndef DLLNOTFOUNDEXCEPTION_T2920213446_H
#define DLLNOTFOUNDEXCEPTION_T2920213446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_t2920213446  : public TypeLoadException_t899073099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_T2920213446_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t2229197132  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t2229197132  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t2229197132 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t2229197132  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t832085871* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1190606337 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1190606337 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1190606337 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t832085871* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t832085871** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t832085871* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t1190606337 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t1190606337 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t1190606337 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t1190606337 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t1190606337 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t1190606337 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t1190606337 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t1190606337 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t1190606337 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ENTRYPOINTNOTFOUNDEXCEPTION_T4047075278_H
#define ENTRYPOINTNOTFOUNDEXCEPTION_T4047075278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EntryPointNotFoundException
struct  EntryPointNotFoundException_t4047075278  : public TypeLoadException_t899073099
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRYPOINTNOTFOUNDEXCEPTION_T4047075278_H
#ifndef FIELDACCESSEXCEPTION_T1721255337_H
#define FIELDACCESSEXCEPTION_T1721255337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FieldAccessException
struct  FieldAccessException_t1721255337  : public MemberAccessException_t1875070072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDACCESSEXCEPTION_T1721255337_H
#ifndef DATETIME_T324775616_H
#define DATETIME_T324775616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t324775616 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t3005579915  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t324775616, ___ticks_0)); }
	inline TimeSpan_t3005579915  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t3005579915 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t3005579915  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t324775616, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t324775616_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t324775616  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t324775616  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t4227604106* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t4227604106* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t4227604106* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t4227604106* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t4227604106* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t4227604106* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t4227604106* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t553828754* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t553828754* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___MaxValue_2)); }
	inline DateTime_t324775616  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t324775616 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t324775616  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___MinValue_3)); }
	inline DateTime_t324775616  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t324775616 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t324775616  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t4227604106* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t4227604106** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t4227604106* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t4227604106* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t4227604106** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t4227604106* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t4227604106* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t4227604106** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t4227604106* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t4227604106* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t4227604106** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t4227604106* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t4227604106* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t4227604106** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t4227604106* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t4227604106* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t4227604106** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t4227604106* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t4227604106* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t4227604106** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t4227604106* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t553828754* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t553828754** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t553828754* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t553828754* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t553828754** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t553828754* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t324775616_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T324775616_H
#ifndef MULTICASTDELEGATE_T1839332054_H
#define MULTICASTDELEGATE_T1839332054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1839332054  : public Delegate_t2814419507
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1839332054 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1839332054 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1839332054, ___prev_9)); }
	inline MulticastDelegate_t1839332054 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1839332054 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1839332054 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1839332054, ___kpm_next_10)); }
	inline MulticastDelegate_t1839332054 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1839332054 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1839332054 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1839332054_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T2874803200_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T2874803200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t2874803200  : public NotSupportedException_t1294258912
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T2874803200_H
#ifndef METHODACCESSEXCEPTION_T1567901822_H
#define METHODACCESSEXCEPTION_T1567901822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MethodAccessException
struct  MethodAccessException_t1567901822  : public MemberAccessException_t1875070072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODACCESSEXCEPTION_T1567901822_H
#ifndef OVERFLOWEXCEPTION_T550769818_H
#define OVERFLOWEXCEPTION_T550769818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t550769818  : public ArithmeticException_t401890181
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T550769818_H
#ifndef OPERATINGSYSTEM_T393750323_H
#define OPERATINGSYSTEM_T393750323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperatingSystem
struct  OperatingSystem_t393750323  : public RuntimeObject
{
public:
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t2168111658 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(OperatingSystem_t393750323, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OperatingSystem_t393750323, ____version_1)); }
	inline Version_t2168111658 * get__version_1() const { return ____version_1; }
	inline Version_t2168111658 ** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(Version_t2168111658 * value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier((&____version_1), value);
	}

	inline static int32_t get_offset_of__servicePack_2() { return static_cast<int32_t>(offsetof(OperatingSystem_t393750323, ____servicePack_2)); }
	inline String_t* get__servicePack_2() const { return ____servicePack_2; }
	inline String_t** get_address_of__servicePack_2() { return &____servicePack_2; }
	inline void set__servicePack_2(String_t* value)
	{
		____servicePack_2 = value;
		Il2CppCodeGenWriteBarrier((&____servicePack_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEM_T393750323_H
#ifndef OBJECTDISPOSEDEXCEPTION_T2789010455_H
#define OBJECTDISPOSEDEXCEPTION_T2789010455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t2789010455  : public InvalidOperationException_t928380369
{
public:
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;

public:
	inline static int32_t get_offset_of_obj_name_12() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t2789010455, ___obj_name_12)); }
	inline String_t* get_obj_name_12() const { return ___obj_name_12; }
	inline String_t** get_address_of_obj_name_12() { return &___obj_name_12; }
	inline void set_obj_name_12(String_t* value)
	{
		___obj_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___obj_name_12), value);
	}

	inline static int32_t get_offset_of_msg_13() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t2789010455, ___msg_13)); }
	inline String_t* get_msg_13() const { return ___msg_13; }
	inline String_t** get_address_of_msg_13() { return &___msg_13; }
	inline void set_msg_13(String_t* value)
	{
		___msg_13 = value;
		Il2CppCodeGenWriteBarrier((&___msg_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T2789010455_H
#ifndef MISSINGMEMBEREXCEPTION_T1305823179_H
#define MISSINGMEMBEREXCEPTION_T1305823179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t1305823179  : public MemberAccessException_t1875070072
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_11;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_12;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t3902976898* ___Signature_13;

public:
	inline static int32_t get_offset_of_ClassName_11() { return static_cast<int32_t>(offsetof(MissingMemberException_t1305823179, ___ClassName_11)); }
	inline String_t* get_ClassName_11() const { return ___ClassName_11; }
	inline String_t** get_address_of_ClassName_11() { return &___ClassName_11; }
	inline void set_ClassName_11(String_t* value)
	{
		___ClassName_11 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_11), value);
	}

	inline static int32_t get_offset_of_MemberName_12() { return static_cast<int32_t>(offsetof(MissingMemberException_t1305823179, ___MemberName_12)); }
	inline String_t* get_MemberName_12() const { return ___MemberName_12; }
	inline String_t** get_address_of_MemberName_12() { return &___MemberName_12; }
	inline void set_MemberName_12(String_t* value)
	{
		___MemberName_12 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_12), value);
	}

	inline static int32_t get_offset_of_Signature_13() { return static_cast<int32_t>(offsetof(MissingMemberException_t1305823179, ___Signature_13)); }
	inline ByteU5BU5D_t3902976898* get_Signature_13() const { return ___Signature_13; }
	inline ByteU5BU5D_t3902976898** get_address_of_Signature_13() { return &___Signature_13; }
	inline void set_Signature_13(ByteU5BU5D_t3902976898* value)
	{
		___Signature_13 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T1305823179_H
#ifndef UNITYSERIALIZATIONHOLDER_T1299271442_H
#define UNITYSERIALIZATIONHOLDER_T1299271442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t1299271442  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1299271442, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1299271442, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1299271442, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T1299271442_H
#ifndef DATETIMEOFFSET_T3323514184_H
#define DATETIMEOFFSET_T3323514184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3323514184 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t324775616  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t3005579915  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3323514184, ___dt_2)); }
	inline DateTime_t324775616  get_dt_2() const { return ___dt_2; }
	inline DateTime_t324775616 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t324775616  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3323514184, ___utc_offset_3)); }
	inline TimeSpan_t3005579915  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t3005579915 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t3005579915  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t3323514184_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3323514184  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3323514184  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3323514184_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t3323514184  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t3323514184 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t3323514184  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3323514184_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t3323514184  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t3323514184 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t3323514184  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3323514184_H
#ifndef MONOTYPE_T_H
#define MONOTYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoType
struct  MonoType_t  : public Type_t
{
public:
	// System.MonoTypeInfo System.MonoType::type_info
	MonoTypeInfo_t944603732 * ___type_info_8;

public:
	inline static int32_t get_offset_of_type_info_8() { return static_cast<int32_t>(offsetof(MonoType_t, ___type_info_8)); }
	inline MonoTypeInfo_t944603732 * get_type_info_8() const { return ___type_info_8; }
	inline MonoTypeInfo_t944603732 ** get_address_of_type_info_8() { return &___type_info_8; }
	inline void set_type_info_8(MonoTypeInfo_t944603732 * value)
	{
		___type_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPE_T_H
#ifndef MISSINGMETHODEXCEPTION_T3849643483_H
#define MISSINGMETHODEXCEPTION_T3849643483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMethodException
struct  MissingMethodException_t3849643483  : public MissingMemberException_t1305823179
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMETHODEXCEPTION_T3849643483_H
#ifndef MISSINGFIELDEXCEPTION_T2980874295_H
#define MISSINGFIELDEXCEPTION_T2980874295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingFieldException
struct  MissingFieldException_t2980874295  : public MissingMemberException_t1305823179
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGFIELDEXCEPTION_T2980874295_H
#ifndef WAITCALLBACK_T3004477335_H
#define WAITCALLBACK_T3004477335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t3004477335  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T3004477335_H
#ifndef PRIMALITYTEST_T882933902_H
#define PRIMALITYTEST_T882933902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t882933902  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T882933902_H
#ifndef MEMBERFILTER_T1190606337_H
#define MEMBERFILTER_T1190606337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t1190606337  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T1190606337_H
#ifndef TYPEFILTER_T2612985927_H
#define TYPEFILTER_T2612985927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t2612985927  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T2612985927_H
#ifndef HEADERHANDLER_T2108324364_H
#define HEADERHANDLER_T2108324364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t2108324364  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T2108324364_H
#ifndef SENDORPOSTCALLBACK_T2382582517_H
#define SENDORPOSTCALLBACK_T2382582517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t2382582517  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T2382582517_H
#ifndef THREADSTART_T2252581784_H
#define THREADSTART_T2252581784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t2252581784  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T2252581784_H
#ifndef WAITORTIMERCALLBACK_T4254847752_H
#define WAITORTIMERCALLBACK_T4254847752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitOrTimerCallback
struct  WaitOrTimerCallback_t4254847752  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITORTIMERCALLBACK_T4254847752_H
#ifndef TIMERCALLBACK_T3418325088_H
#define TIMERCALLBACK_T3418325088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t3418325088  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T3418325088_H
#ifndef CROSSCONTEXTDELEGATE_T3543462289_H
#define CROSSCONTEXTDELEGATE_T3543462289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t3543462289  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T3543462289_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize800 = { sizeof (AttributeTargets_t3149918202)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable800[17] = 
{
	AttributeTargets_t3149918202::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize801 = { sizeof (BitConverter_t2901229956), -1, sizeof(BitConverter_t2901229956_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable801[2] = 
{
	BitConverter_t2901229956_StaticFields::get_offset_of_SwappedWordsInDouble_0(),
	BitConverter_t2901229956_StaticFields::get_offset_of_IsLittleEndian_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize802 = { sizeof (Buffer_t2800306041), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize803 = { sizeof (CharEnumerator_t43718061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable803[3] = 
{
	CharEnumerator_t43718061::get_offset_of_str_0(),
	CharEnumerator_t43718061::get_offset_of_index_1(),
	CharEnumerator_t43718061::get_offset_of_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize804 = { sizeof (Console_t2358673960), -1, sizeof(Console_t2358673960_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable804[5] = 
{
	Console_t2358673960_StaticFields::get_offset_of_stdout_0(),
	Console_t2358673960_StaticFields::get_offset_of_stderr_1(),
	Console_t2358673960_StaticFields::get_offset_of_stdin_2(),
	Console_t2358673960_StaticFields::get_offset_of_inputEncoding_3(),
	Console_t2358673960_StaticFields::get_offset_of_outputEncoding_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize805 = { sizeof (ContextBoundObject_t1230085809), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize806 = { sizeof (Convert_t2423444155), -1, sizeof(Convert_t2423444155_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable806[2] = 
{
	Convert_t2423444155_StaticFields::get_offset_of_DBNull_0(),
	Convert_t2423444155_StaticFields::get_offset_of_conversionTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize807 = { sizeof (DBNull_t3820236684), -1, sizeof(DBNull_t3820236684_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable807[1] = 
{
	DBNull_t3820236684_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize808 = { sizeof (DateTime_t324775616)+ sizeof (RuntimeObject), -1, sizeof(DateTime_t324775616_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable808[15] = 
{
	DateTime_t324775616::get_offset_of_ticks_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTime_t324775616::get_offset_of_kind_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTime_t324775616_StaticFields::get_offset_of_MaxValue_2(),
	DateTime_t324775616_StaticFields::get_offset_of_MinValue_3(),
	DateTime_t324775616_StaticFields::get_offset_of_ParseTimeFormats_4(),
	DateTime_t324775616_StaticFields::get_offset_of_ParseYearDayMonthFormats_5(),
	DateTime_t324775616_StaticFields::get_offset_of_ParseYearMonthDayFormats_6(),
	DateTime_t324775616_StaticFields::get_offset_of_ParseDayMonthYearFormats_7(),
	DateTime_t324775616_StaticFields::get_offset_of_ParseMonthDayYearFormats_8(),
	DateTime_t324775616_StaticFields::get_offset_of_MonthDayShortFormats_9(),
	DateTime_t324775616_StaticFields::get_offset_of_DayMonthShortFormats_10(),
	DateTime_t324775616_StaticFields::get_offset_of_daysmonth_11(),
	DateTime_t324775616_StaticFields::get_offset_of_daysmonthleap_12(),
	DateTime_t324775616_StaticFields::get_offset_of_to_local_time_span_object_13(),
	DateTime_t324775616_StaticFields::get_offset_of_last_now_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize809 = { sizeof (Which_t675707960)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable809[5] = 
{
	Which_t675707960::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize810 = { sizeof (DateTimeKind_t4044119063)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable810[4] = 
{
	DateTimeKind_t4044119063::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize811 = { sizeof (DateTimeOffset_t3323514184)+ sizeof (RuntimeObject), -1, sizeof(DateTimeOffset_t3323514184_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable811[4] = 
{
	DateTimeOffset_t3323514184_StaticFields::get_offset_of_MaxValue_0(),
	DateTimeOffset_t3323514184_StaticFields::get_offset_of_MinValue_1(),
	DateTimeOffset_t3323514184::get_offset_of_dt_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeOffset_t3323514184::get_offset_of_utc_offset_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize812 = { sizeof (DateTimeUtils_t651634209), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize813 = { sizeof (DayOfWeek_t2478137291)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable813[8] = 
{
	DayOfWeek_t2478137291::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize814 = { sizeof (DelegateData_t867455359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable814[2] = 
{
	DelegateData_t867455359::get_offset_of_target_type_0(),
	DelegateData_t867455359::get_offset_of_method_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize815 = { sizeof (DelegateSerializationHolder_t3952591287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable815[1] = 
{
	DelegateSerializationHolder_t3952591287::get_offset_of__delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize816 = { sizeof (DelegateEntry_t4115493790), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable816[7] = 
{
	DelegateEntry_t4115493790::get_offset_of_type_0(),
	DelegateEntry_t4115493790::get_offset_of_assembly_1(),
	DelegateEntry_t4115493790::get_offset_of_target_2(),
	DelegateEntry_t4115493790::get_offset_of_targetTypeAssembly_3(),
	DelegateEntry_t4115493790::get_offset_of_targetTypeName_4(),
	DelegateEntry_t4115493790::get_offset_of_methodName_5(),
	DelegateEntry_t4115493790::get_offset_of_delegateEntry_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize817 = { sizeof (DivideByZeroException_t4096993518), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable817[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize818 = { sizeof (DllNotFoundException_t2920213446), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable818[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize819 = { sizeof (EntryPointNotFoundException_t4047075278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable819[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize820 = { sizeof (MonoEnumInfo_t1266629851)+ sizeof (RuntimeObject), -1, sizeof(MonoEnumInfo_t1266629851_StaticFields), sizeof(MonoEnumInfo_t1266629851_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable820[11] = 
{
	MonoEnumInfo_t1266629851::get_offset_of_utype_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t1266629851::get_offset_of_values_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t1266629851::get_offset_of_names_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t1266629851::get_offset_of_name_hash_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	THREAD_STATIC_FIELD_OFFSET,
	MonoEnumInfo_t1266629851_StaticFields::get_offset_of_global_cache_5(),
	MonoEnumInfo_t1266629851_StaticFields::get_offset_of_global_cache_monitor_6(),
	MonoEnumInfo_t1266629851_StaticFields::get_offset_of_sbyte_comparer_7(),
	MonoEnumInfo_t1266629851_StaticFields::get_offset_of_short_comparer_8(),
	MonoEnumInfo_t1266629851_StaticFields::get_offset_of_int_comparer_9(),
	MonoEnumInfo_t1266629851_StaticFields::get_offset_of_long_comparer_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize821 = { sizeof (SByteComparer_t164098152), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize822 = { sizeof (ShortComparer_t659497161), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize823 = { sizeof (IntComparer_t3513712369), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize824 = { sizeof (LongComparer_t2428573251), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize825 = { sizeof (Environment_t3369785075), -1, sizeof(Environment_t3369785075_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable825[2] = 
{
	0,
	Environment_t3369785075_StaticFields::get_offset_of_os_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize826 = { sizeof (SpecialFolder_t500056336)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable826[24] = 
{
	SpecialFolder_t500056336::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize827 = { sizeof (EventArgs_t3802636617), -1, sizeof(EventArgs_t3802636617_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable827[1] = 
{
	EventArgs_t3802636617_StaticFields::get_offset_of_Empty_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize828 = { sizeof (ExecutionEngineException_t367382569), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize829 = { sizeof (FieldAccessException_t1721255337), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize830 = { sizeof (FlagsAttribute_t1202403699), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize831 = { sizeof (FormatException_t2446836410), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable831[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize832 = { sizeof (GC_t975534412), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize833 = { sizeof (Guid_t)+ sizeof (RuntimeObject), sizeof(Guid_t ), sizeof(Guid_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable833[15] = 
{
	Guid_t::get_offset_of__a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__d_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__e_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__f_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__g_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__h_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__i_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__j_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__k_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t_StaticFields::get_offset_of_Empty_11(),
	Guid_t_StaticFields::get_offset_of__rngAccess_12(),
	Guid_t_StaticFields::get_offset_of__rng_13(),
	Guid_t_StaticFields::get_offset_of__fastRng_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize834 = { sizeof (GuidParser_t82888181), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable834[3] = 
{
	GuidParser_t82888181::get_offset_of__src_0(),
	GuidParser_t82888181::get_offset_of__length_1(),
	GuidParser_t82888181::get_offset_of__cur_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize835 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize836 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize837 = { sizeof (IndexOutOfRangeException_t3482535250), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize838 = { sizeof (InvalidCastException_t3039909510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable838[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize839 = { sizeof (InvalidOperationException_t928380369), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable839[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize840 = { sizeof (LoaderOptimization_t3409577546)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable840[7] = 
{
	LoaderOptimization_t3409577546::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize841 = { sizeof (LocalDataStoreSlot_t542211629), -1, sizeof(LocalDataStoreSlot_t542211629_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable841[5] = 
{
	LocalDataStoreSlot_t542211629::get_offset_of_slot_0(),
	LocalDataStoreSlot_t542211629::get_offset_of_thread_local_1(),
	LocalDataStoreSlot_t542211629_StaticFields::get_offset_of_lock_obj_2(),
	LocalDataStoreSlot_t542211629_StaticFields::get_offset_of_slot_bitmap_thread_3(),
	LocalDataStoreSlot_t542211629_StaticFields::get_offset_of_slot_bitmap_context_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize842 = { sizeof (Math_t404924044), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize843 = { sizeof (MemberAccessException_t1875070072), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize844 = { sizeof (MethodAccessException_t1567901822), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable844[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize845 = { sizeof (MissingFieldException_t2980874295), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize846 = { sizeof (MissingMemberException_t1305823179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable846[3] = 
{
	MissingMemberException_t1305823179::get_offset_of_ClassName_11(),
	MissingMemberException_t1305823179::get_offset_of_MemberName_12(),
	MissingMemberException_t1305823179::get_offset_of_Signature_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize847 = { sizeof (MissingMethodException_t3849643483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable847[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize848 = { sizeof (MonoAsyncCall_t3061870109), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable848[7] = 
{
	MonoAsyncCall_t3061870109::get_offset_of_msg_0(),
	MonoAsyncCall_t3061870109::get_offset_of_cb_method_1(),
	MonoAsyncCall_t3061870109::get_offset_of_cb_target_2(),
	MonoAsyncCall_t3061870109::get_offset_of_state_3(),
	MonoAsyncCall_t3061870109::get_offset_of_res_4(),
	MonoAsyncCall_t3061870109::get_offset_of_out_args_5(),
	MonoAsyncCall_t3061870109::get_offset_of_wait_event_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize849 = { sizeof (MonoCustomAttrs_t1597718207), -1, sizeof(MonoCustomAttrs_t1597718207_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable849[3] = 
{
	MonoCustomAttrs_t1597718207_StaticFields::get_offset_of_corlib_0(),
	MonoCustomAttrs_t1597718207_StaticFields::get_offset_of_AttributeUsageType_1(),
	MonoCustomAttrs_t1597718207_StaticFields::get_offset_of_DefaultAttributeUsage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize850 = { sizeof (AttributeInfo_t2407746900), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable850[2] = 
{
	AttributeInfo_t2407746900::get_offset_of__usage_0(),
	AttributeInfo_t2407746900::get_offset_of__inheritanceLevel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize851 = { sizeof (MonoTouchAOTHelper_t2811325576), -1, sizeof(MonoTouchAOTHelper_t2811325576_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable851[1] = 
{
	MonoTouchAOTHelper_t2811325576_StaticFields::get_offset_of_FalseFlag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize852 = { sizeof (MonoTypeInfo_t944603732), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable852[2] = 
{
	MonoTypeInfo_t944603732::get_offset_of_full_name_0(),
	MonoTypeInfo_t944603732::get_offset_of_default_ctor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize853 = { sizeof (MonoType_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable853[1] = 
{
	MonoType_t::get_offset_of_type_info_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize854 = { sizeof (MulticastNotSupportedException_t848182690), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize855 = { sizeof (NonSerializedAttribute_t2920433454), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize856 = { sizeof (NotImplementedException_t2795216053), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize857 = { sizeof (NotSupportedException_t1294258912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable857[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize858 = { sizeof (NullReferenceException_t264970685), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable858[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize859 = { sizeof (NumberFormatter_t3110351470), -1, sizeof(NumberFormatter_t3110351470_StaticFields), sizeof(NumberFormatter_t3110351470_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable859[26] = 
{
	NumberFormatter_t3110351470_StaticFields::get_offset_of_MantissaBitsTable_0(),
	NumberFormatter_t3110351470_StaticFields::get_offset_of_TensExponentTable_1(),
	NumberFormatter_t3110351470_StaticFields::get_offset_of_DigitLowerTable_2(),
	NumberFormatter_t3110351470_StaticFields::get_offset_of_DigitUpperTable_3(),
	NumberFormatter_t3110351470_StaticFields::get_offset_of_TenPowersList_4(),
	NumberFormatter_t3110351470_StaticFields::get_offset_of_DecHexDigits_5(),
	NumberFormatter_t3110351470::get_offset_of__thread_6(),
	NumberFormatter_t3110351470::get_offset_of__nfi_7(),
	NumberFormatter_t3110351470::get_offset_of__NaN_8(),
	NumberFormatter_t3110351470::get_offset_of__infinity_9(),
	NumberFormatter_t3110351470::get_offset_of__isCustomFormat_10(),
	NumberFormatter_t3110351470::get_offset_of__specifierIsUpper_11(),
	NumberFormatter_t3110351470::get_offset_of__positive_12(),
	NumberFormatter_t3110351470::get_offset_of__specifier_13(),
	NumberFormatter_t3110351470::get_offset_of__precision_14(),
	NumberFormatter_t3110351470::get_offset_of__defPrecision_15(),
	NumberFormatter_t3110351470::get_offset_of__digitsLen_16(),
	NumberFormatter_t3110351470::get_offset_of__offset_17(),
	NumberFormatter_t3110351470::get_offset_of__decPointPos_18(),
	NumberFormatter_t3110351470::get_offset_of__val1_19(),
	NumberFormatter_t3110351470::get_offset_of__val2_20(),
	NumberFormatter_t3110351470::get_offset_of__val3_21(),
	NumberFormatter_t3110351470::get_offset_of__val4_22(),
	NumberFormatter_t3110351470::get_offset_of__cbuf_23(),
	NumberFormatter_t3110351470::get_offset_of__ind_24(),
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize860 = { sizeof (CustomInfo_t63790626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable860[14] = 
{
	CustomInfo_t63790626::get_offset_of_UseGroup_0(),
	CustomInfo_t63790626::get_offset_of_DecimalDigits_1(),
	CustomInfo_t63790626::get_offset_of_DecimalPointPos_2(),
	CustomInfo_t63790626::get_offset_of_DecimalTailSharpDigits_3(),
	CustomInfo_t63790626::get_offset_of_IntegerDigits_4(),
	CustomInfo_t63790626::get_offset_of_IntegerHeadSharpDigits_5(),
	CustomInfo_t63790626::get_offset_of_IntegerHeadPos_6(),
	CustomInfo_t63790626::get_offset_of_UseExponent_7(),
	CustomInfo_t63790626::get_offset_of_ExponentDigits_8(),
	CustomInfo_t63790626::get_offset_of_ExponentTailSharpDigits_9(),
	CustomInfo_t63790626::get_offset_of_ExponentNegativeSignOnly_10(),
	CustomInfo_t63790626::get_offset_of_DividePlaces_11(),
	CustomInfo_t63790626::get_offset_of_Percents_12(),
	CustomInfo_t63790626::get_offset_of_Permilles_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize861 = { sizeof (ObjectDisposedException_t2789010455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable861[2] = 
{
	ObjectDisposedException_t2789010455::get_offset_of_obj_name_12(),
	ObjectDisposedException_t2789010455::get_offset_of_msg_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize862 = { sizeof (OperatingSystem_t393750323), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable862[3] = 
{
	OperatingSystem_t393750323::get_offset_of__platform_0(),
	OperatingSystem_t393750323::get_offset_of__version_1(),
	OperatingSystem_t393750323::get_offset_of__servicePack_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize863 = { sizeof (OutOfMemoryException_t1665574921), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable863[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize864 = { sizeof (OverflowException_t550769818), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable864[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize865 = { sizeof (PlatformID_t183626411)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable865[8] = 
{
	PlatformID_t183626411::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize866 = { sizeof (PlatformNotSupportedException_t2874803200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable866[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize867 = { sizeof (RankException_t1442323301), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize868 = { sizeof (ResolveEventArgs_t1287280988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable868[1] = 
{
	ResolveEventArgs_t1287280988::get_offset_of_m_Name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize869 = { sizeof (RuntimeMethodHandle_t1749347383)+ sizeof (RuntimeObject), sizeof(RuntimeMethodHandle_t1749347383 ), 0, 0 };
extern const int32_t g_FieldOffsetTable869[1] = 
{
	RuntimeMethodHandle_t1749347383::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize870 = { sizeof (StackOverflowException_t4262713561), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize871 = { sizeof (StringComparer_t3908519329), -1, sizeof(StringComparer_t3908519329_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable871[4] = 
{
	StringComparer_t3908519329_StaticFields::get_offset_of_invariantCultureIgnoreCase_0(),
	StringComparer_t3908519329_StaticFields::get_offset_of_invariantCulture_1(),
	StringComparer_t3908519329_StaticFields::get_offset_of_ordinalIgnoreCase_2(),
	StringComparer_t3908519329_StaticFields::get_offset_of_ordinal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize872 = { sizeof (CultureAwareComparer_t1286422974), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable872[2] = 
{
	CultureAwareComparer_t1286422974::get_offset_of__ignoreCase_4(),
	CultureAwareComparer_t1286422974::get_offset_of__compareInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize873 = { sizeof (OrdinalComparer_t1116493976), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable873[1] = 
{
	OrdinalComparer_t1116493976::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize874 = { sizeof (StringComparison_t1041971909)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable874[7] = 
{
	StringComparison_t1041971909::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize875 = { sizeof (StringSplitOptions_t405871164)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable875[3] = 
{
	StringSplitOptions_t405871164::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize876 = { sizeof (SystemException_t3942641876), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize877 = { sizeof (ThreadStaticAttribute_t934173689), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize878 = { sizeof (TimeSpan_t3005579915)+ sizeof (RuntimeObject), sizeof(TimeSpan_t3005579915 ), sizeof(TimeSpan_t3005579915_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable878[4] = 
{
	TimeSpan_t3005579915_StaticFields::get_offset_of_MaxValue_0(),
	TimeSpan_t3005579915_StaticFields::get_offset_of_MinValue_1(),
	TimeSpan_t3005579915_StaticFields::get_offset_of_Zero_2(),
	TimeSpan_t3005579915::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize879 = { sizeof (TimeZone_t877817952), -1, sizeof(TimeZone_t877817952_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable879[3] = 
{
	TimeZone_t877817952_StaticFields::get_offset_of_currentTimeZone_0(),
	TimeZone_t877817952_StaticFields::get_offset_of_tz_lock_1(),
	TimeZone_t877817952_StaticFields::get_offset_of_timezone_check_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize880 = { sizeof (CurrentSystemTimeZone_t3005110854), -1, sizeof(CurrentSystemTimeZone_t3005110854_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable880[8] = 
{
	CurrentSystemTimeZone_t3005110854::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t3005110854::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t3005110854::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t3005110854::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t3005110854::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t3005110854::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t3005110854_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t3005110854_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize881 = { sizeof (TypeCode_t4276926493)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable881[19] = 
{
	TypeCode_t4276926493::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize882 = { sizeof (TypeInitializationException_t3777093282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable882[1] = 
{
	TypeInitializationException_t3777093282::get_offset_of_type_name_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize883 = { sizeof (TypeLoadException_t899073099), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable883[3] = 
{
	0,
	TypeLoadException_t899073099::get_offset_of_className_12(),
	TypeLoadException_t899073099::get_offset_of_assemblyName_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize884 = { sizeof (UnauthorizedAccessException_t3853328103), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize885 = { sizeof (UnhandledExceptionEventArgs_t367881698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable885[2] = 
{
	UnhandledExceptionEventArgs_t367881698::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t367881698::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize886 = { sizeof (UnitySerializationHolder_t1299271442), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable886[3] = 
{
	UnitySerializationHolder_t1299271442::get_offset_of__data_0(),
	UnitySerializationHolder_t1299271442::get_offset_of__unityType_1(),
	UnitySerializationHolder_t1299271442::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize887 = { sizeof (UnityType_t2261725371)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable887[5] = 
{
	UnityType_t2261725371::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize888 = { sizeof (Version_t2168111658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable888[5] = 
{
	0,
	Version_t2168111658::get_offset_of__Major_1(),
	Version_t2168111658::get_offset_of__Minor_2(),
	Version_t2168111658::get_offset_of__Build_3(),
	Version_t2168111658::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize889 = { sizeof (WeakReference_t816325093), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable889[2] = 
{
	WeakReference_t816325093::get_offset_of_isLongReference_0(),
	WeakReference_t816325093::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize890 = { sizeof (PrimalityTest_t882933902), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize891 = { sizeof (MemberFilter_t1190606337), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize892 = { sizeof (TypeFilter_t2612985927), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize893 = { sizeof (CrossContextDelegate_t3543462289), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize894 = { sizeof (HeaderHandler_t2108324364), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize895 = { sizeof (SendOrPostCallback_t2382582517), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize896 = { sizeof (ThreadStart_t2252581784), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize897 = { sizeof (TimerCallback_t3418325088), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize898 = { sizeof (WaitCallback_t3004477335), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize899 = { sizeof (WaitOrTimerCallback_t4254847752), sizeof(Il2CppMethodPointer), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
