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

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t22266612;
// System.Byte[]
struct ByteU5BU5D_t3902976898;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3161400696;
// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_t611308195;
// UnityEngine.Application/LogCallback
struct LogCallback_t3221519898;
// UnityEngine.Events.UnityAction
struct UnityAction_t2037715255;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t2982006304;
// UnityEngine.Gyroscope
struct Gyroscope_t2166277605;
// UnityEngine.ILogger
struct ILogger_t1921004298;
// System.Char[]
struct CharU5BU5D_t3089517579;
// System.Void
struct Void_t770884652;
// System.UInt32[]
struct UInt32U5BU5D_t2990475929;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t867455359;
// UnityEngine.Display[]
struct DisplayU5BU5D_t2581314686;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t1285758006;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t2387155216;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t3709718049;
// System.IAsyncResult
struct IAsyncResult_t2907163148;
// System.AsyncCallback
struct AsyncCallback_t975035439;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t881337139;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t4019155566;
// UnityEngine.Camera
struct Camera_t2822987570;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t37219637;




#ifndef U3CMODULEU3E_T1954697218_H
#define U3CMODULEU3E_T1954697218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1954697218 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1954697218_H
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
#ifndef U3CMODULEU3E_T1954697217_H
#define U3CMODULEU3E_T1954697217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1954697217 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1954697217_H
#ifndef SYMMETRICTRANSFORM_T3853681485_H
#define SYMMETRICTRANSFORM_T3853681485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3853681485  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t22266612 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t3902976898* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t3902976898* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t3902976898* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t3902976898* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t3161400696 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3853681485, ___algo_0)); }
	inline SymmetricAlgorithm_t22266612 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t22266612 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t22266612 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3853681485, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3853681485, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3853681485, ___temp_3)); }
	inline ByteU5BU5D_t3902976898* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t3902976898** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t3902976898* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3853681485, ___temp2_4)); }
	inline ByteU5BU5D_t3902976898* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t3902976898** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t3902976898* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3853681485, ___workBuff_5)); }
	inline ByteU5BU5D_t3902976898* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t3902976898** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t3902976898* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3853681485, ___workout_6)); }
	inline ByteU5BU5D_t3902976898* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t3902976898** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t3902976898* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3853681485, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3853681485, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3853681485, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3853681485, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3853681485, ____rng_11)); }
	inline RandomNumberGenerator_t3161400696 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t3161400696 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t3161400696 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3853681485_H
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
#ifndef APPLICATION_T2239889734_H
#define APPLICATION_T2239889734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application
struct  Application_t2239889734  : public RuntimeObject
{
public:

public:
};

struct Application_t2239889734_StaticFields
{
public:
	// UnityEngine.Application/LowMemoryCallback UnityEngine.Application::lowMemory
	LowMemoryCallback_t611308195 * ___lowMemory_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t3221519898 * ___s_LogCallbackHandler_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t3221519898 * ___s_LogCallbackHandlerThreaded_2;
	// UnityEngine.Events.UnityAction UnityEngine.Application::onBeforeRender
	UnityAction_t2037715255 * ___onBeforeRender_3;

public:
	inline static int32_t get_offset_of_lowMemory_0() { return static_cast<int32_t>(offsetof(Application_t2239889734_StaticFields, ___lowMemory_0)); }
	inline LowMemoryCallback_t611308195 * get_lowMemory_0() const { return ___lowMemory_0; }
	inline LowMemoryCallback_t611308195 ** get_address_of_lowMemory_0() { return &___lowMemory_0; }
	inline void set_lowMemory_0(LowMemoryCallback_t611308195 * value)
	{
		___lowMemory_0 = value;
		Il2CppCodeGenWriteBarrier((&___lowMemory_0), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandler_1() { return static_cast<int32_t>(offsetof(Application_t2239889734_StaticFields, ___s_LogCallbackHandler_1)); }
	inline LogCallback_t3221519898 * get_s_LogCallbackHandler_1() const { return ___s_LogCallbackHandler_1; }
	inline LogCallback_t3221519898 ** get_address_of_s_LogCallbackHandler_1() { return &___s_LogCallbackHandler_1; }
	inline void set_s_LogCallbackHandler_1(LogCallback_t3221519898 * value)
	{
		___s_LogCallbackHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandler_1), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandlerThreaded_2() { return static_cast<int32_t>(offsetof(Application_t2239889734_StaticFields, ___s_LogCallbackHandlerThreaded_2)); }
	inline LogCallback_t3221519898 * get_s_LogCallbackHandlerThreaded_2() const { return ___s_LogCallbackHandlerThreaded_2; }
	inline LogCallback_t3221519898 ** get_address_of_s_LogCallbackHandlerThreaded_2() { return &___s_LogCallbackHandlerThreaded_2; }
	inline void set_s_LogCallbackHandlerThreaded_2(LogCallback_t3221519898 * value)
	{
		___s_LogCallbackHandlerThreaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandlerThreaded_2), value);
	}

	inline static int32_t get_offset_of_onBeforeRender_3() { return static_cast<int32_t>(offsetof(Application_t2239889734_StaticFields, ___onBeforeRender_3)); }
	inline UnityAction_t2037715255 * get_onBeforeRender_3() const { return ___onBeforeRender_3; }
	inline UnityAction_t2037715255 ** get_address_of_onBeforeRender_3() { return &___onBeforeRender_3; }
	inline void set_onBeforeRender_3(UnityAction_t2037715255 * value)
	{
		___onBeforeRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onBeforeRender_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATION_T2239889734_H
#ifndef SYSTEMINFO_T2902033484_H
#define SYSTEMINFO_T2902033484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SystemInfo
struct  SystemInfo_t2902033484  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMINFO_T2902033484_H
#ifndef CUSTOMYIELDINSTRUCTION_T2683772520_H
#define CUSTOMYIELDINSTRUCTION_T2683772520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t2683772520  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T2683772520_H
#ifndef YIELDINSTRUCTION_T3501961190_H
#define YIELDINSTRUCTION_T3501961190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t3501961190  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t3501961190_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t3501961190_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T3501961190_H
#ifndef ENUMERABLE_T1328862512_H
#define ENUMERABLE_T1328862512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t1328862512  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T1328862512_H
#ifndef CHECK_T2178240214_H
#define CHECK_T2178240214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Check
struct  Check_t2178240214  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHECK_T2178240214_H
#ifndef SCREEN_T3473645388_H
#define SCREEN_T3473645388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Screen
struct  Screen_t3473645388  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN_T3473645388_H
#ifndef KEYBUILDER_T3622735002_H
#define KEYBUILDER_T3622735002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t3622735002  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t3622735002_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t3161400696 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t3622735002_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t3161400696 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t3161400696 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t3161400696 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T3622735002_H
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
#ifndef UNHANDLEDEXCEPTIONHANDLER_T941833061_H
#define UNHANDLEDEXCEPTIONHANDLER_T941833061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_t941833061  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_t941833061_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mg$cache0
	UnhandledExceptionEventHandler_t2982006304 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_t941833061_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_t2982006304 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_t2982006304 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_t2982006304 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_T941833061_H
#ifndef GYROSCOPE_T2166277605_H
#define GYROSCOPE_T2166277605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t2166277605  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T2166277605_H
#ifndef INPUT_T3618880408_H
#define INPUT_T3618880408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t3618880408  : public RuntimeObject
{
public:

public:
};

struct Input_t3618880408_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t2166277605 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t3618880408_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t2166277605 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t2166277605 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t2166277605 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T3618880408_H
#ifndef DEBUG_T3186230276_H
#define DEBUG_T3186230276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t3186230276  : public RuntimeObject
{
public:

public:
};

struct Debug_t3186230276_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t3186230276_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Logger_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T3186230276_H
#ifndef DEBUGLOGHANDLER_T4268735759_H
#define DEBUGLOGHANDLER_T4268735759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DebugLogHandler
struct  DebugLogHandler_t4268735759  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGHANDLER_T4268735759_H
#ifndef CURSOR_T562146094_H
#define CURSOR_T562146094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cursor
struct  Cursor_t562146094  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSOR_T562146094_H
#ifndef LOCALE_T3655603272_H
#define LOCALE_T3655603272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t3655603272  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T3655603272_H
#ifndef MATHF_T481890114_H
#define MATHF_T481890114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t481890114 
{
public:

public:
};

struct Mathf_t481890114_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t481890114_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T481890114_H
#ifndef LAYERMASK_T1739375503_H
#define LAYERMASK_T1739375503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t1739375503 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t1739375503, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T1739375503_H
#ifndef NETWORKVIEWID_T3110657285_H
#define NETWORKVIEWID_T3110657285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkViewID
struct  NetworkViewID_t3110657285 
{
public:
	// System.Int32 UnityEngine.NetworkViewID::a
	int32_t ___a_0;
	// System.Int32 UnityEngine.NetworkViewID::b
	int32_t ___b_1;
	// System.Int32 UnityEngine.NetworkViewID::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(NetworkViewID_t3110657285, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(NetworkViewID_t3110657285, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(NetworkViewID_t3110657285, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKVIEWID_T3110657285_H
#ifndef WAITFORSECONDS_T4034387341_H
#define WAITFORSECONDS_T4034387341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t4034387341  : public YieldInstruction_t3501961190
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t4034387341, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t4034387341_marshaled_pinvoke : public YieldInstruction_t3501961190_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t4034387341_marshaled_com : public YieldInstruction_t3501961190_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T4034387341_H
#ifndef WAITFORENDOFFRAME_T3311424978_H
#define WAITFORENDOFFRAME_T3311424978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t3311424978  : public YieldInstruction_t3501961190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T3311424978_H
#ifndef VECTOR3_T582938947_H
#define VECTOR3_T582938947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t582938947 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t582938947, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t582938947, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t582938947, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t582938947_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t582938947  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t582938947  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t582938947  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t582938947  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t582938947  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t582938947  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t582938947  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t582938947  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t582938947  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t582938947  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t582938947_StaticFields, ___zeroVector_4)); }
	inline Vector3_t582938947  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t582938947 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t582938947  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t582938947_StaticFields, ___oneVector_5)); }
	inline Vector3_t582938947  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t582938947 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t582938947  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t582938947_StaticFields, ___upVector_6)); }
	inline Vector3_t582938947  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t582938947 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t582938947  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t582938947_StaticFields, ___downVector_7)); }
	inline Vector3_t582938947  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t582938947 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t582938947  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t582938947_StaticFields, ___leftVector_8)); }
	inline Vector3_t582938947  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t582938947 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t582938947  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t582938947_StaticFields, ___rightVector_9)); }
	inline Vector3_t582938947  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t582938947 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t582938947  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t582938947_StaticFields, ___forwardVector_10)); }
	inline Vector3_t582938947  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t582938947 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t582938947  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t582938947_StaticFields, ___backVector_11)); }
	inline Vector3_t582938947  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t582938947 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t582938947  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t582938947_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t582938947  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t582938947 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t582938947  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t582938947_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t582938947  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t582938947 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t582938947  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T582938947_H
#ifndef NETWORKPLAYER_T2890398257_H
#define NETWORKPLAYER_T2890398257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkPlayer
struct  NetworkPlayer_t2890398257 
{
public:
	// System.Int32 UnityEngine.NetworkPlayer::index
	int32_t ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(NetworkPlayer_t2890398257, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKPLAYER_T2890398257_H
#ifndef KEYFRAME_T526708485_H
#define KEYFRAME_T526708485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t526708485 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t526708485, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t526708485, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t526708485, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t526708485, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T526708485_H
#ifndef QUATERNION_T1516221546_H
#define QUATERNION_T1516221546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t1516221546 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t1516221546, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t1516221546, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t1516221546, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t1516221546, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t1516221546_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t1516221546  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t1516221546_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t1516221546  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t1516221546 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t1516221546  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T1516221546_H
#ifndef MATRIX4X4_T2244090027_H
#define MATRIX4X4_T2244090027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t2244090027 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t2244090027_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t2244090027  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t2244090027  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t2244090027  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t2244090027 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t2244090027  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t2244090027_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t2244090027  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t2244090027 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t2244090027  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T2244090027_H
#ifndef CULLINGGROUPEVENT_T515278187_H
#define CULLINGGROUPEVENT_T515278187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t515278187 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t515278187, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t515278187, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t515278187, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULLINGGROUPEVENT_T515278187_H
#ifndef WAITFORFIXEDUPDATE_T3789248136_H
#define WAITFORFIXEDUPDATE_T3789248136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t3789248136  : public YieldInstruction_t3501961190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T3789248136_H
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
#ifndef TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T4187571058_H
#define TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T4187571058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
struct  TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058 
{
public:
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::keyboardType
	uint32_t ___keyboardType_0;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::autocorrection
	uint32_t ___autocorrection_1;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::multiline
	uint32_t ___multiline_2;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::secure
	uint32_t ___secure_3;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::alert
	uint32_t ___alert_4;

public:
	inline static int32_t get_offset_of_keyboardType_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058, ___keyboardType_0)); }
	inline uint32_t get_keyboardType_0() const { return ___keyboardType_0; }
	inline uint32_t* get_address_of_keyboardType_0() { return &___keyboardType_0; }
	inline void set_keyboardType_0(uint32_t value)
	{
		___keyboardType_0 = value;
	}

	inline static int32_t get_offset_of_autocorrection_1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058, ___autocorrection_1)); }
	inline uint32_t get_autocorrection_1() const { return ___autocorrection_1; }
	inline uint32_t* get_address_of_autocorrection_1() { return &___autocorrection_1; }
	inline void set_autocorrection_1(uint32_t value)
	{
		___autocorrection_1 = value;
	}

	inline static int32_t get_offset_of_multiline_2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058, ___multiline_2)); }
	inline uint32_t get_multiline_2() const { return ___multiline_2; }
	inline uint32_t* get_address_of_multiline_2() { return &___multiline_2; }
	inline void set_multiline_2(uint32_t value)
	{
		___multiline_2 = value;
	}

	inline static int32_t get_offset_of_secure_3() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058, ___secure_3)); }
	inline uint32_t get_secure_3() const { return ___secure_3; }
	inline uint32_t* get_address_of_secure_3() { return &___secure_3; }
	inline void set_secure_3(uint32_t value)
	{
		___secure_3 = value;
	}

	inline static int32_t get_offset_of_alert_4() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058, ___alert_4)); }
	inline uint32_t get_alert_4() const { return ___alert_4; }
	inline uint32_t* get_address_of_alert_4() { return &___alert_4; }
	inline void set_alert_4(uint32_t value)
	{
		___alert_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T4187571058_H
#ifndef U24ARRAYTYPEU241024_T3253142774_H
#define U24ARRAYTYPEU241024_T3253142774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3253142774 
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
		uint8_t U24ArrayTypeU241024_t3253142774__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3253142774_H
#ifndef U24ARRAYTYPEU243132_T842126648_H
#define U24ARRAYTYPEU243132_T842126648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t842126648 
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
		uint8_t U24ArrayTypeU243132_t842126648__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T842126648_H
#ifndef U24ARRAYTYPEU24256_T1633252139_H
#define U24ARRAYTYPEU24256_T1633252139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t1633252139 
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
		uint8_t U24ArrayTypeU24256_t1633252139__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T1633252139_H
#ifndef U24ARRAYTYPEU2420_T3266594206_H
#define U24ARRAYTYPEU2420_T3266594206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t3266594206 
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
		uint8_t U24ArrayTypeU2420_t3266594206__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T3266594206_H
#ifndef U24ARRAYTYPEU2432_T3020289229_H
#define U24ARRAYTYPEU2432_T3020289229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t3020289229 
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
		uint8_t U24ArrayTypeU2432_t3020289229__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T3020289229_H
#ifndef U24ARRAYTYPEU2448_T81947898_H
#define U24ARRAYTYPEU2448_T81947898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t81947898 
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
		uint8_t U24ArrayTypeU2448_t81947898__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T81947898_H
#ifndef U24ARRAYTYPEU2464_T1427107593_H
#define U24ARRAYTYPEU2464_T1427107593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t1427107593 
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
		uint8_t U24ArrayTypeU2464_t1427107593__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T1427107593_H
#ifndef U24ARRAYTYPEU2412_T2829883866_H
#define U24ARRAYTYPEU2412_T2829883866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2829883866 
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
		uint8_t U24ArrayTypeU2412_t2829883866__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2829883866_H
#ifndef U24ARRAYTYPEU2416_T1621768713_H
#define U24ARRAYTYPEU2416_T1621768713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t1621768713 
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
		uint8_t U24ArrayTypeU2416_t1621768713__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T1621768713_H
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
#ifndef EXTENSIONATTRIBUTE_T844217166_H
#define EXTENSIONATTRIBUTE_T844217166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ExtensionAttribute
struct  ExtensionAttribute_t844217166  : public Attribute_t2299111116
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONATTRIBUTE_T844217166_H
#ifndef MONOTODOATTRIBUTE_T1572540880_H
#define MONOTODOATTRIBUTE_T1572540880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t1572540880  : public Attribute_t2299111116
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T1572540880_H
#ifndef U24ARRAYTYPEU244_T416436889_H
#define U24ARRAYTYPEU244_T416436889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$4
struct  U24ArrayTypeU244_t416436889 
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
		uint8_t U24ArrayTypeU244_t416436889__padding[4];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU244_T416436889_H
#ifndef U24ARRAYTYPEU24136_T1505091972_H
#define U24ARRAYTYPEU24136_T1505091972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t1505091972 
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
		uint8_t U24ArrayTypeU24136_t1505091972__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T1505091972_H
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
#ifndef AESTRANSFORM_T3599897135_H
#define AESTRANSFORM_T3599897135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t3599897135  : public SymmetricTransform_t3853681485
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t2990475929* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135, ___expandedKey_12)); }
	inline UInt32U5BU5D_t2990475929* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t2990475929** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t2990475929* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_t3599897135_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t2990475929* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t3902976898* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t3902976898* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t2990475929* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t2990475929* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t2990475929* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t2990475929* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t2990475929* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t2990475929* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t2990475929* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t2990475929* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_t2990475929* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_t2990475929** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_t2990475929* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_15), value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_t3902976898* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_t3902976898** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_t3902976898* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_16), value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_t3902976898* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_t3902976898** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_t3902976898* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_17), value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_t2990475929* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_t2990475929** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_t2990475929* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier((&___T0_18), value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_t2990475929* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_t2990475929** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_t2990475929* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier((&___T1_19), value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_t2990475929* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_t2990475929** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_t2990475929* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier((&___T2_20), value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_t2990475929* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_t2990475929** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_t2990475929* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier((&___T3_21), value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_t2990475929* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_t2990475929** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_t2990475929* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_22), value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_t2990475929* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_t2990475929** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_t2990475929* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_23), value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_t2990475929* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_t2990475929** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_t2990475929* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_24), value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_t3599897135_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_t2990475929* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_t2990475929** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_t2990475929* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESTRANSFORM_T3599897135_H
#ifndef VECTOR2_T2959670331_H
#define VECTOR2_T2959670331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2959670331 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2959670331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2959670331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2959670331_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2959670331  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2959670331  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2959670331  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2959670331  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2959670331  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2959670331  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2959670331  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2959670331  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2959670331_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2959670331  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2959670331 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2959670331  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2959670331_StaticFields, ___oneVector_3)); }
	inline Vector2_t2959670331  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2959670331 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2959670331  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2959670331_StaticFields, ___upVector_4)); }
	inline Vector2_t2959670331  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2959670331 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2959670331  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2959670331_StaticFields, ___downVector_5)); }
	inline Vector2_t2959670331  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2959670331 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2959670331  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2959670331_StaticFields, ___leftVector_6)); }
	inline Vector2_t2959670331  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2959670331 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2959670331  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2959670331_StaticFields, ___rightVector_7)); }
	inline Vector2_t2959670331  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2959670331 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2959670331  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2959670331_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2959670331  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2959670331 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2959670331  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2959670331_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2959670331  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2959670331 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2959670331  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2959670331_H
#ifndef U24ARRAYTYPEU24120_T2735746362_H
#define U24ARRAYTYPEU24120_T2735746362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t2735746362 
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
		uint8_t U24ArrayTypeU24120_t2735746362__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T2735746362_H
#ifndef U24ARRAYTYPEU24256_T1633252140_H
#define U24ARRAYTYPEU24256_T1633252140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t1633252140 
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
		uint8_t U24ArrayTypeU24256_t1633252140__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T1633252140_H
#ifndef TOUCHSCREENKEYBOARD_T1491430298_H
#define TOUCHSCREENKEYBOARD_T1491430298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t1491430298  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t1491430298, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_T1491430298_H
#ifndef TOUCHPHASE_T2444242978_H
#define TOUCHPHASE_T2444242978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t2444242978 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t2444242978, ___value___1)); }
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
#endif // TOUCHPHASE_T2444242978_H
#ifndef IMECOMPOSITIONMODE_T2423501759_H
#define IMECOMPOSITIONMODE_T2423501759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IMECompositionMode
struct  IMECompositionMode_t2423501759 
{
public:
	// System.Int32 UnityEngine.IMECompositionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IMECompositionMode_t2423501759, ___value___1)); }
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
#endif // IMECOMPOSITIONMODE_T2423501759_H
#ifndef TOUCHTYPE_T237980240_H
#define TOUCHTYPE_T237980240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t237980240 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t237980240, ___value___1)); }
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
#endif // TOUCHTYPE_T237980240_H
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
#ifndef BOUNDS_T3221554168_H
#define BOUNDS_T3221554168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t3221554168 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t582938947  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t582938947  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t3221554168, ___m_Center_0)); }
	inline Vector3_t582938947  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t582938947 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t582938947  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t3221554168, ___m_Extents_1)); }
	inline Vector3_t582938947  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t582938947 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t582938947  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T3221554168_H
#ifndef OBJECT_T671160916_H
#define OBJECT_T671160916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t671160916  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t671160916, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t671160916_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t671160916_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t671160916_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t671160916_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T671160916_H
#ifndef INTERNALVERTEXCHANNELTYPE_T147747341_H
#define INTERNALVERTEXCHANNELTYPE_T147747341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalVertexChannelType
struct  InternalVertexChannelType_t147747341 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalVertexChannelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t147747341, ___value___1)); }
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
#endif // INTERNALVERTEXCHANNELTYPE_T147747341_H
#ifndef INTERNALSHADERCHANNEL_T2591798656_H
#define INTERNALSHADERCHANNEL_T2591798656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalShaderChannel
struct  InternalShaderChannel_t2591798656 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalShaderChannel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalShaderChannel_t2591798656, ___value___1)); }
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
#endif // INTERNALSHADERCHANNEL_T2591798656_H
#ifndef ANIMATIONCURVE_T2712316471_H
#define ANIMATIONCURVE_T2712316471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t2712316471  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2712316471, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2712316471_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2712316471_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T2712316471_H
#ifndef LOGTYPE_T3498185662_H
#define LOGTYPE_T3498185662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t3498185662 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t3498185662, ___value___1)); }
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
#endif // LOGTYPE_T3498185662_H
#ifndef CURSORLOCKMODE_T1021305506_H
#define CURSORLOCKMODE_T1021305506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CursorLockMode
struct  CursorLockMode_t1021305506 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CursorLockMode_t1021305506, ___value___1)); }
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
#endif // CURSORLOCKMODE_T1021305506_H
#ifndef PADDINGMODE_T1817464456_H
#define PADDINGMODE_T1817464456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t1817464456 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t1817464456, ___value___1)); }
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
#endif // PADDINGMODE_T1817464456_H
#ifndef CIPHERMODE_T2881896310_H
#define CIPHERMODE_T2881896310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t2881896310 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t2881896310, ___value___1)); }
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
#endif // CIPHERMODE_T2881896310_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2529890621_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2529890621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2529890621  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU243132_t842126648  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU24256_t1633252139  ___U24U24fieldU2D5_1;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2420_t3266594206  ___U24U24fieldU2D6_2;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU2432_t3020289229  ___U24U24fieldU2D7_3;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU2448_t81947898  ___U24U24fieldU2D8_4;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU2464_t1427107593  ___U24U24fieldU2D9_5;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU2464_t1427107593  ___U24U24fieldU2D11_6;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-12
	U24ArrayTypeU2464_t1427107593  ___U24U24fieldU2D12_7;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-13
	U24ArrayTypeU2464_t1427107593  ___U24U24fieldU2D13_8;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-14
	U24ArrayTypeU2412_t2829883866  ___U24U24fieldU2D14_9;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU2412_t2829883866  ___U24U24fieldU2D15_10;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2412_t2829883866  ___U24U24fieldU2D16_11;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2416_t1621768713  ___U24U24fieldU2D17_12;
	// <PrivateImplementationDetails>/$ArrayType$4 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU244_t416436889  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$4 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU244_t416436889  ___U24U24fieldU2D22_14;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU243132_t842126648  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU243132_t842126648 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU243132_t842126648  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D5_1)); }
	inline U24ArrayTypeU24256_t1633252139  get_U24U24fieldU2D5_1() const { return ___U24U24fieldU2D5_1; }
	inline U24ArrayTypeU24256_t1633252139 * get_address_of_U24U24fieldU2D5_1() { return &___U24U24fieldU2D5_1; }
	inline void set_U24U24fieldU2D5_1(U24ArrayTypeU24256_t1633252139  value)
	{
		___U24U24fieldU2D5_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D6_2)); }
	inline U24ArrayTypeU2420_t3266594206  get_U24U24fieldU2D6_2() const { return ___U24U24fieldU2D6_2; }
	inline U24ArrayTypeU2420_t3266594206 * get_address_of_U24U24fieldU2D6_2() { return &___U24U24fieldU2D6_2; }
	inline void set_U24U24fieldU2D6_2(U24ArrayTypeU2420_t3266594206  value)
	{
		___U24U24fieldU2D6_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D7_3)); }
	inline U24ArrayTypeU2432_t3020289229  get_U24U24fieldU2D7_3() const { return ___U24U24fieldU2D7_3; }
	inline U24ArrayTypeU2432_t3020289229 * get_address_of_U24U24fieldU2D7_3() { return &___U24U24fieldU2D7_3; }
	inline void set_U24U24fieldU2D7_3(U24ArrayTypeU2432_t3020289229  value)
	{
		___U24U24fieldU2D7_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D8_4)); }
	inline U24ArrayTypeU2448_t81947898  get_U24U24fieldU2D8_4() const { return ___U24U24fieldU2D8_4; }
	inline U24ArrayTypeU2448_t81947898 * get_address_of_U24U24fieldU2D8_4() { return &___U24U24fieldU2D8_4; }
	inline void set_U24U24fieldU2D8_4(U24ArrayTypeU2448_t81947898  value)
	{
		___U24U24fieldU2D8_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D9_5)); }
	inline U24ArrayTypeU2464_t1427107593  get_U24U24fieldU2D9_5() const { return ___U24U24fieldU2D9_5; }
	inline U24ArrayTypeU2464_t1427107593 * get_address_of_U24U24fieldU2D9_5() { return &___U24U24fieldU2D9_5; }
	inline void set_U24U24fieldU2D9_5(U24ArrayTypeU2464_t1427107593  value)
	{
		___U24U24fieldU2D9_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D11_6)); }
	inline U24ArrayTypeU2464_t1427107593  get_U24U24fieldU2D11_6() const { return ___U24U24fieldU2D11_6; }
	inline U24ArrayTypeU2464_t1427107593 * get_address_of_U24U24fieldU2D11_6() { return &___U24U24fieldU2D11_6; }
	inline void set_U24U24fieldU2D11_6(U24ArrayTypeU2464_t1427107593  value)
	{
		___U24U24fieldU2D11_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D12_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D12_7)); }
	inline U24ArrayTypeU2464_t1427107593  get_U24U24fieldU2D12_7() const { return ___U24U24fieldU2D12_7; }
	inline U24ArrayTypeU2464_t1427107593 * get_address_of_U24U24fieldU2D12_7() { return &___U24U24fieldU2D12_7; }
	inline void set_U24U24fieldU2D12_7(U24ArrayTypeU2464_t1427107593  value)
	{
		___U24U24fieldU2D12_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D13_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D13_8)); }
	inline U24ArrayTypeU2464_t1427107593  get_U24U24fieldU2D13_8() const { return ___U24U24fieldU2D13_8; }
	inline U24ArrayTypeU2464_t1427107593 * get_address_of_U24U24fieldU2D13_8() { return &___U24U24fieldU2D13_8; }
	inline void set_U24U24fieldU2D13_8(U24ArrayTypeU2464_t1427107593  value)
	{
		___U24U24fieldU2D13_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D14_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D14_9)); }
	inline U24ArrayTypeU2412_t2829883866  get_U24U24fieldU2D14_9() const { return ___U24U24fieldU2D14_9; }
	inline U24ArrayTypeU2412_t2829883866 * get_address_of_U24U24fieldU2D14_9() { return &___U24U24fieldU2D14_9; }
	inline void set_U24U24fieldU2D14_9(U24ArrayTypeU2412_t2829883866  value)
	{
		___U24U24fieldU2D14_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D15_10)); }
	inline U24ArrayTypeU2412_t2829883866  get_U24U24fieldU2D15_10() const { return ___U24U24fieldU2D15_10; }
	inline U24ArrayTypeU2412_t2829883866 * get_address_of_U24U24fieldU2D15_10() { return &___U24U24fieldU2D15_10; }
	inline void set_U24U24fieldU2D15_10(U24ArrayTypeU2412_t2829883866  value)
	{
		___U24U24fieldU2D15_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D16_11)); }
	inline U24ArrayTypeU2412_t2829883866  get_U24U24fieldU2D16_11() const { return ___U24U24fieldU2D16_11; }
	inline U24ArrayTypeU2412_t2829883866 * get_address_of_U24U24fieldU2D16_11() { return &___U24U24fieldU2D16_11; }
	inline void set_U24U24fieldU2D16_11(U24ArrayTypeU2412_t2829883866  value)
	{
		___U24U24fieldU2D16_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D17_12)); }
	inline U24ArrayTypeU2416_t1621768713  get_U24U24fieldU2D17_12() const { return ___U24U24fieldU2D17_12; }
	inline U24ArrayTypeU2416_t1621768713 * get_address_of_U24U24fieldU2D17_12() { return &___U24U24fieldU2D17_12; }
	inline void set_U24U24fieldU2D17_12(U24ArrayTypeU2416_t1621768713  value)
	{
		___U24U24fieldU2D17_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU244_t416436889  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU244_t416436889 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU244_t416436889  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU244_t416436889  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU244_t416436889 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU244_t416436889  value)
	{
		___U24U24fieldU2D22_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2529890621_H
#ifndef FALLBACK_T3562284074_H
#define FALLBACK_T3562284074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Fallback
struct  Fallback_t3562284074 
{
public:
	// System.Int32 System.Linq.Enumerable/Fallback::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Fallback_t3562284074, ___value___1)); }
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
#endif // FALLBACK_T3562284074_H
#ifndef MATERIALPROPERTYBLOCK_T954578484_H
#define MATERIALPROPERTYBLOCK_T954578484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t954578484  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t954578484, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALPROPERTYBLOCK_T954578484_H
#ifndef COROUTINE_T1926177177_H
#define COROUTINE_T1926177177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t1926177177  : public YieldInstruction_t3501961190
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t1926177177, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t1926177177_marshaled_pinvoke : public YieldInstruction_t3501961190_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t1926177177_marshaled_com : public YieldInstruction_t3501961190_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T1926177177_H
#ifndef GRADIENT_T3903905811_H
#define GRADIENT_T3903905811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t3903905811  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t3903905811, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t3903905811_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t3903905811_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T3903905811_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2529890622_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2529890622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2529890622  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24136_t1505091972  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU24120_t2735746362  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24256_t1633252140  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU24256_t1633252140  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU241024_t3253142774  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU241024_t3253142774  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU241024_t3253142774  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU241024_t3253142774  ___U24U24fieldU2D7_7;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU241024_t3253142774  ___U24U24fieldU2D8_8;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU241024_t3253142774  ___U24U24fieldU2D9_9;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-10
	U24ArrayTypeU241024_t3253142774  ___U24U24fieldU2D10_10;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU241024_t3253142774  ___U24U24fieldU2D11_11;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU24136_t1505091972  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU24136_t1505091972 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU24136_t1505091972  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU24120_t2735746362  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU24120_t2735746362 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU24120_t2735746362  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU24256_t1633252140  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU24256_t1633252140 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU24256_t1633252140  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU24256_t1633252140  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU24256_t1633252140 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU24256_t1633252140  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU241024_t3253142774  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU241024_t3253142774 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU241024_t3253142774  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU241024_t3253142774  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU241024_t3253142774 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU241024_t3253142774  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU241024_t3253142774  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU241024_t3253142774 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU241024_t3253142774  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields, ___U24U24fieldU2D7_7)); }
	inline U24ArrayTypeU241024_t3253142774  get_U24U24fieldU2D7_7() const { return ___U24U24fieldU2D7_7; }
	inline U24ArrayTypeU241024_t3253142774 * get_address_of_U24U24fieldU2D7_7() { return &___U24U24fieldU2D7_7; }
	inline void set_U24U24fieldU2D7_7(U24ArrayTypeU241024_t3253142774  value)
	{
		___U24U24fieldU2D7_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields, ___U24U24fieldU2D8_8)); }
	inline U24ArrayTypeU241024_t3253142774  get_U24U24fieldU2D8_8() const { return ___U24U24fieldU2D8_8; }
	inline U24ArrayTypeU241024_t3253142774 * get_address_of_U24U24fieldU2D8_8() { return &___U24U24fieldU2D8_8; }
	inline void set_U24U24fieldU2D8_8(U24ArrayTypeU241024_t3253142774  value)
	{
		___U24U24fieldU2D8_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields, ___U24U24fieldU2D9_9)); }
	inline U24ArrayTypeU241024_t3253142774  get_U24U24fieldU2D9_9() const { return ___U24U24fieldU2D9_9; }
	inline U24ArrayTypeU241024_t3253142774 * get_address_of_U24U24fieldU2D9_9() { return &___U24U24fieldU2D9_9; }
	inline void set_U24U24fieldU2D9_9(U24ArrayTypeU241024_t3253142774  value)
	{
		___U24U24fieldU2D9_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D10_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields, ___U24U24fieldU2D10_10)); }
	inline U24ArrayTypeU241024_t3253142774  get_U24U24fieldU2D10_10() const { return ___U24U24fieldU2D10_10; }
	inline U24ArrayTypeU241024_t3253142774 * get_address_of_U24U24fieldU2D10_10() { return &___U24U24fieldU2D10_10; }
	inline void set_U24U24fieldU2D10_10(U24ArrayTypeU241024_t3253142774  value)
	{
		___U24U24fieldU2D10_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields, ___U24U24fieldU2D11_11)); }
	inline U24ArrayTypeU241024_t3253142774  get_U24U24fieldU2D11_11() const { return ___U24U24fieldU2D11_11; }
	inline U24ArrayTypeU241024_t3253142774 * get_address_of_U24U24fieldU2D11_11() { return &___U24U24fieldU2D11_11; }
	inline void set_U24U24fieldU2D11_11(U24ArrayTypeU241024_t3253142774  value)
	{
		___U24U24fieldU2D11_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2529890622_H
#ifndef DISPLAY_T775356807_H
#define DISPLAY_T775356807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t775356807  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t775356807, ___nativeDisplay_0)); }
	inline IntPtr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline IntPtr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(IntPtr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t775356807_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t2581314686* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t775356807 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t1285758006 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t775356807_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t2581314686* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t2581314686** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t2581314686* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t775356807_StaticFields, ____mainDisplay_2)); }
	inline Display_t775356807 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t775356807 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t775356807 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t775356807_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t1285758006 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t1285758006 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t1285758006 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T775356807_H
#ifndef RECTOFFSET_T4071468909_H
#define RECTOFFSET_T4071468909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t4071468909  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t4071468909, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t4071468909, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t4071468909_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t4071468909_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T4071468909_H
#ifndef ASYNCOPERATION_T2536356720_H
#define ASYNCOPERATION_T2536356720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t2536356720  : public YieldInstruction_t3501961190
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t2536356720, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t2536356720_marshaled_pinvoke : public YieldInstruction_t3501961190_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t2536356720_marshaled_com : public YieldInstruction_t3501961190_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ASYNCOPERATION_T2536356720_H
#ifndef CULLINGGROUP_T2409812353_H
#define CULLINGGROUP_T2409812353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t2409812353  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t2387155216 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t2409812353, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t2409812353, ___m_OnStateChanged_1)); }
	inline StateChanged_t2387155216 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t2387155216 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t2387155216 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2409812353_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2409812353_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T2409812353_H
#ifndef ASSETBUNDLE_T3232349190_H
#define ASSETBUNDLE_T3232349190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundle
struct  AssetBundle_t3232349190  : public Object_t671160916
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLE_T3232349190_H
#ifndef SCRIPTABLEOBJECT_T1511239253_H
#define SCRIPTABLEOBJECT_T1511239253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t1511239253  : public Object_t671160916
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1511239253_marshaled_pinvoke : public Object_t671160916_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1511239253_marshaled_com : public Object_t671160916_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T1511239253_H
#ifndef FAILEDTOLOADSCRIPTOBJECT_T3249823915_H
#define FAILEDTOLOADSCRIPTOBJECT_T3249823915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FailedToLoadScriptObject
struct  FailedToLoadScriptObject_t3249823915  : public Object_t671160916
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t3249823915_marshaled_pinvoke : public Object_t671160916_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t3249823915_marshaled_com : public Object_t671160916_marshaled_com
{
};
#endif // FAILEDTOLOADSCRIPTOBJECT_T3249823915_H
#ifndef ASSETBUNDLEREQUEST_T2343957687_H
#define ASSETBUNDLEREQUEST_T2343957687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_t2343957687  : public AsyncOperation_t2536356720
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t2343957687_marshaled_pinvoke : public AsyncOperation_t2536356720_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t2343957687_marshaled_com : public AsyncOperation_t2536356720_marshaled_com
{
};
#endif // ASSETBUNDLEREQUEST_T2343957687_H
#ifndef ASSETBUNDLECREATEREQUEST_T3027543221_H
#define ASSETBUNDLECREATEREQUEST_T3027543221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleCreateRequest
struct  AssetBundleCreateRequest_t3027543221  : public AsyncOperation_t2536356720
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLECREATEREQUEST_T3027543221_H
#ifndef MESH_T1506619879_H
#define MESH_T1506619879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t1506619879  : public Object_t671160916
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T1506619879_H
#ifndef COMPONENT_T682908157_H
#define COMPONENT_T682908157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t682908157  : public Object_t671160916
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T682908157_H
#ifndef SYMMETRICALGORITHM_T22266612_H
#define SYMMETRICALGORITHM_T22266612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t22266612  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t3902976898* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t3902976898* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t3709718049* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t3709718049* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t22266612, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t22266612, ___IVValue_1)); }
	inline ByteU5BU5D_t3902976898* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t3902976898** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t3902976898* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t22266612, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t22266612, ___KeyValue_3)); }
	inline ByteU5BU5D_t3902976898* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t3902976898** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t3902976898* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t22266612, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t3709718049* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t3709718049** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t3709718049* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t22266612, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t3709718049* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t3709718049** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t3709718049* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t22266612, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t22266612, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t22266612, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t22266612, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T22266612_H
#ifndef GAMEOBJECT_T4034183393_H
#define GAMEOBJECT_T4034183393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t4034183393  : public Object_t671160916
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T4034183393_H
#ifndef TOUCH_T1370210858_H
#define TOUCH_T1370210858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1370210858 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2959670331  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2959670331  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2959670331  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_Position_1)); }
	inline Vector2_t2959670331  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2959670331 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2959670331  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_RawPosition_2)); }
	inline Vector2_t2959670331  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2959670331 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2959670331  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_PositionDelta_3)); }
	inline Vector2_t2959670331  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2959670331 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2959670331  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1370210858, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1370210858_H
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
#ifndef LOWMEMORYCALLBACK_T611308195_H
#define LOWMEMORYCALLBACK_T611308195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LowMemoryCallback
struct  LowMemoryCallback_t611308195  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWMEMORYCALLBACK_T611308195_H
#ifndef ACTION_T2914101641_H
#define ACTION_T2914101641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t2914101641  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T2914101641_H
#ifndef AES_T1185356252_H
#define AES_T1185356252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t1185356252  : public SymmetricAlgorithm_t22266612
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T1185356252_H
#ifndef LOGCALLBACK_T3221519898_H
#define LOGCALLBACK_T3221519898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t3221519898  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T3221519898_H
#ifndef PRIVATEKEYSELECTIONCALLBACK_T2466108976_H
#define PRIVATEKEYSELECTIONCALLBACK_T2466108976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct  PrivateKeySelectionCallback_t2466108976  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYSELECTIONCALLBACK_T2466108976_H
#ifndef BEHAVIOUR_T4134154458_H
#define BEHAVIOUR_T4134154458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t4134154458  : public Component_t682908157
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T4134154458_H
#ifndef CAMERACALLBACK_T37219637_H
#define CAMERACALLBACK_T37219637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/CameraCallback
struct  CameraCallback_t37219637  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALLBACK_T37219637_H
#ifndef STATECHANGED_T2387155216_H
#define STATECHANGED_T2387155216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t2387155216  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T2387155216_H
#ifndef DISPLAYSUPDATEDDELEGATE_T1285758006_H
#define DISPLAYSUPDATEDDELEGATE_T1285758006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t1285758006  : public MulticastDelegate_t1839332054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T1285758006_H
#ifndef MESHFILTER_T1814992031_H
#define MESHFILTER_T1814992031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t1814992031  : public Component_t682908157
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T1814992031_H
#ifndef RENDERER_T1771541682_H
#define RENDERER_T1771541682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t1771541682  : public Component_t682908157
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T1771541682_H
#ifndef CAMERA_T2822987570_H
#define CAMERA_T2822987570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t2822987570  : public Behaviour_t4134154458
{
public:

public:
};

struct Camera_t2822987570_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t37219637 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t37219637 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t37219637 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t2822987570_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t37219637 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t37219637 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t37219637 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t2822987570_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t37219637 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t37219637 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t37219637 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t2822987570_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t37219637 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t37219637 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t37219637 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T2822987570_H
#ifndef LIGHT_T4254816675_H
#define LIGHT_T4254816675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Light
struct  Light_t4254816675  : public Behaviour_t4134154458
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_2;

public:
	inline static int32_t get_offset_of_m_BakedIndex_2() { return static_cast<int32_t>(offsetof(Light_t4254816675, ___m_BakedIndex_2)); }
	inline int32_t get_m_BakedIndex_2() const { return ___m_BakedIndex_2; }
	inline int32_t* get_address_of_m_BakedIndex_2() { return &___m_BakedIndex_2; }
	inline void set_m_BakedIndex_2(int32_t value)
	{
		___m_BakedIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHT_T4254816675_H
#ifndef AESMANAGED_T476505379_H
#define AESMANAGED_T476505379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesManaged
struct  AesManaged_t476505379  : public Aes_t1185356252
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESMANAGED_T476505379_H
#ifndef MESHRENDERER_T3467404691_H
#define MESHRENDERER_T3467404691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t3467404691  : public Renderer_t1771541682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T3467404691_H
#ifndef GUILAYER_T1606362649_H
#define GUILAYER_T1606362649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t1606362649  : public Behaviour_t4134154458
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T1606362649_H
#ifndef MONOBEHAVIOUR_T3262979370_H
#define MONOBEHAVIOUR_T3262979370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3262979370  : public Behaviour_t4134154458
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3262979370_H
#ifndef GUIELEMENT_T2374617352_H
#define GUIELEMENT_T2374617352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t2374617352  : public Behaviour_t4134154458
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T2374617352_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { sizeof (PrivateKeySelectionCallback_t2466108976), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (U3CPrivateImplementationDetailsU3E_t2529890621), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1201[15] = 
{
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D5_1(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D6_2(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D7_3(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D8_4(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D9_5(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D11_6(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D12_7(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D13_8(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D14_9(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D15_10(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D16_11(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D17_12(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t2529890621_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (U24ArrayTypeU243132_t842126648)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t842126648 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (U24ArrayTypeU24256_t1633252139)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t1633252139 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (U24ArrayTypeU2420_t3266594206)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t3266594206 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { sizeof (U24ArrayTypeU2432_t3020289229)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t3020289229 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { sizeof (U24ArrayTypeU2448_t81947898)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t81947898 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { sizeof (U24ArrayTypeU2464_t1427107593)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t1427107593 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (U24ArrayTypeU2412_t2829883866)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t2829883866 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (U24ArrayTypeU2416_t1621768713)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t1621768713 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (U24ArrayTypeU244_t416436889)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU244_t416436889 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (U3CModuleU3E_t1954697217), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (ExtensionAttribute_t844217166), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (Locale_t3655603272), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (MonoTODOAttribute_t1572540880), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (KeyBuilder_t3622735002), -1, sizeof(KeyBuilder_t3622735002_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1215[1] = 
{
	KeyBuilder_t3622735002_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (SymmetricTransform_t3853681485), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1216[12] = 
{
	SymmetricTransform_t3853681485::get_offset_of_algo_0(),
	SymmetricTransform_t3853681485::get_offset_of_encrypt_1(),
	SymmetricTransform_t3853681485::get_offset_of_BlockSizeByte_2(),
	SymmetricTransform_t3853681485::get_offset_of_temp_3(),
	SymmetricTransform_t3853681485::get_offset_of_temp2_4(),
	SymmetricTransform_t3853681485::get_offset_of_workBuff_5(),
	SymmetricTransform_t3853681485::get_offset_of_workout_6(),
	SymmetricTransform_t3853681485::get_offset_of_FeedBackByte_7(),
	SymmetricTransform_t3853681485::get_offset_of_FeedBackIter_8(),
	SymmetricTransform_t3853681485::get_offset_of_m_disposed_9(),
	SymmetricTransform_t3853681485::get_offset_of_lastBlock_10(),
	SymmetricTransform_t3853681485::get_offset_of__rng_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1217[14] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1218[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1219[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1220[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (Check_t2178240214), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (Enumerable_t1328862512), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (Fallback_t3562284074)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1223[3] = 
{
	Fallback_t3562284074::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1224[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (Aes_t1185356252), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (AesManaged_t476505379), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (AesTransform_t3599897135), -1, sizeof(AesTransform_t3599897135_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1227[14] = 
{
	AesTransform_t3599897135::get_offset_of_expandedKey_12(),
	AesTransform_t3599897135::get_offset_of_Nk_13(),
	AesTransform_t3599897135::get_offset_of_Nr_14(),
	AesTransform_t3599897135_StaticFields::get_offset_of_Rcon_15(),
	AesTransform_t3599897135_StaticFields::get_offset_of_SBox_16(),
	AesTransform_t3599897135_StaticFields::get_offset_of_iSBox_17(),
	AesTransform_t3599897135_StaticFields::get_offset_of_T0_18(),
	AesTransform_t3599897135_StaticFields::get_offset_of_T1_19(),
	AesTransform_t3599897135_StaticFields::get_offset_of_T2_20(),
	AesTransform_t3599897135_StaticFields::get_offset_of_T3_21(),
	AesTransform_t3599897135_StaticFields::get_offset_of_iT0_22(),
	AesTransform_t3599897135_StaticFields::get_offset_of_iT1_23(),
	AesTransform_t3599897135_StaticFields::get_offset_of_iT2_24(),
	AesTransform_t3599897135_StaticFields::get_offset_of_iT3_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (Action_t2914101641), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (U3CPrivateImplementationDetailsU3E_t2529890622), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1232[12] = 
{
	U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields::get_offset_of_U24U24fieldU2D7_7(),
	U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields::get_offset_of_U24U24fieldU2D8_8(),
	U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields::get_offset_of_U24U24fieldU2D9_9(),
	U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields::get_offset_of_U24U24fieldU2D10_10(),
	U3CPrivateImplementationDetailsU3E_t2529890622_StaticFields::get_offset_of_U24U24fieldU2D11_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (U24ArrayTypeU24136_t1505091972)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t1505091972 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (U24ArrayTypeU24120_t2735746362)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t2735746362 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (U24ArrayTypeU24256_t1633252140)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t1633252140 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (U24ArrayTypeU241024_t3253142774)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t3253142774 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (U3CModuleU3E_t1954697218), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (Application_t2239889734), -1, sizeof(Application_t2239889734_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1238[4] = 
{
	Application_t2239889734_StaticFields::get_offset_of_lowMemory_0(),
	Application_t2239889734_StaticFields::get_offset_of_s_LogCallbackHandler_1(),
	Application_t2239889734_StaticFields::get_offset_of_s_LogCallbackHandlerThreaded_2(),
	Application_t2239889734_StaticFields::get_offset_of_onBeforeRender_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (LowMemoryCallback_t611308195), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (LogCallback_t3221519898), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (AssetBundleCreateRequest_t3027543221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (AssetBundleRequest_t2343957687), sizeof(AssetBundleRequest_t2343957687_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { sizeof (AssetBundle_t3232349190), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (AsyncOperation_t2536356720), sizeof(AsyncOperation_t2536356720_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1244[1] = 
{
	AsyncOperation_t2536356720::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (SystemInfo_t2902033484), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (WaitForSeconds_t4034387341), sizeof(WaitForSeconds_t4034387341_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1246[1] = 
{
	WaitForSeconds_t4034387341::get_offset_of_m_Seconds_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (WaitForFixedUpdate_t3789248136), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (WaitForEndOfFrame_t3311424978), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (CustomYieldInstruction_t2683772520), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (Coroutine_t1926177177), sizeof(Coroutine_t1926177177_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1250[1] = 
{
	Coroutine_t1926177177::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (ScriptableObject_t1511239253), sizeof(ScriptableObject_t1511239253_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (FailedToLoadScriptObject_t3249823915), sizeof(FailedToLoadScriptObject_t3249823915_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (Behaviour_t4134154458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (Camera_t2822987570), -1, sizeof(Camera_t2822987570_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1254[3] = 
{
	Camera_t2822987570_StaticFields::get_offset_of_onPreCull_2(),
	Camera_t2822987570_StaticFields::get_offset_of_onPreRender_3(),
	Camera_t2822987570_StaticFields::get_offset_of_onPostRender_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (CameraCallback_t37219637), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (Component_t682908157), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (UnhandledExceptionHandler_t941833061), -1, sizeof(UnhandledExceptionHandler_t941833061_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1257[1] = 
{
	UnhandledExceptionHandler_t941833061_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (CullingGroupEvent_t515278187)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t515278187 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1258[3] = 
{
	CullingGroupEvent_t515278187::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t515278187::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t515278187::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (CullingGroup_t2409812353), sizeof(CullingGroup_t2409812353_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1259[2] = 
{
	CullingGroup_t2409812353::get_offset_of_m_Ptr_0(),
	CullingGroup_t2409812353::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (StateChanged_t2387155216), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (CursorLockMode_t1021305506)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1261[4] = 
{
	CursorLockMode_t1021305506::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (Cursor_t562146094), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (DebugLogHandler_t4268735759), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (Debug_t3186230276), -1, sizeof(Debug_t3186230276_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1264[1] = 
{
	Debug_t3186230276_StaticFields::get_offset_of_s_Logger_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (Display_t775356807), -1, sizeof(Display_t775356807_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1265[4] = 
{
	Display_t775356807::get_offset_of_nativeDisplay_0(),
	Display_t775356807_StaticFields::get_offset_of_displays_1(),
	Display_t775356807_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t775356807_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (DisplaysUpdatedDelegate_t1285758006), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (GameObject_t4034183393), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (Gradient_t3903905811), sizeof(Gradient_t3903905811_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1268[1] = 
{
	Gradient_t3903905811::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (MeshFilter_t1814992031), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (Renderer_t1771541682), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (MaterialPropertyBlock_t954578484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1271[1] = 
{
	MaterialPropertyBlock_t954578484::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (Screen_t3473645388), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (MeshRenderer_t3467404691), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (RectOffset_t4071468909), sizeof(RectOffset_t4071468909_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1274[2] = 
{
	RectOffset_t4071468909::get_offset_of_m_Ptr_0(),
	RectOffset_t4071468909::get_offset_of_m_SourceStyle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (GUIElement_t2374617352), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (GUILayer_t1606362649), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058)+ sizeof (RuntimeObject), sizeof(TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1277[5] = 
{
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058::get_offset_of_keyboardType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058::get_offset_of_autocorrection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058::get_offset_of_multiline_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058::get_offset_of_secure_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t4187571058::get_offset_of_alert_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (TouchScreenKeyboard_t1491430298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1278[1] = 
{
	TouchScreenKeyboard_t1491430298::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (TouchPhase_t2444242978)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1279[6] = 
{
	TouchPhase_t2444242978::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (IMECompositionMode_t2423501759)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1280[4] = 
{
	IMECompositionMode_t2423501759::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (TouchType_t237980240)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1281[4] = 
{
	TouchType_t237980240::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (Touch_t1370210858)+ sizeof (RuntimeObject), sizeof(Touch_t1370210858 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1282[14] = 
{
	Touch_t1370210858::get_offset_of_m_FingerId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_RawPosition_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_PositionDelta_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_TimeDelta_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_TapCount_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_Phase_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_Type_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_Pressure_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_maximumPossiblePressure_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_Radius_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_RadiusVariance_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_AltitudeAngle_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1370210858::get_offset_of_m_AzimuthAngle_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (Gyroscope_t2166277605), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (Input_t3618880408), -1, sizeof(Input_t3618880408_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1284[1] = 
{
	Input_t3618880408_StaticFields::get_offset_of_m_MainGyro_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (LayerMask_t1739375503)+ sizeof (RuntimeObject), sizeof(LayerMask_t1739375503 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1285[1] = 
{
	LayerMask_t1739375503::get_offset_of_m_Mask_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (Light_t4254816675), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1286[1] = 
{
	Light_t4254816675::get_offset_of_m_BakedIndex_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (Vector3_t582938947)+ sizeof (RuntimeObject), sizeof(Vector3_t582938947 ), sizeof(Vector3_t582938947_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1287[14] = 
{
	0,
	Vector3_t582938947::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t582938947::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t582938947::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t582938947_StaticFields::get_offset_of_zeroVector_4(),
	Vector3_t582938947_StaticFields::get_offset_of_oneVector_5(),
	Vector3_t582938947_StaticFields::get_offset_of_upVector_6(),
	Vector3_t582938947_StaticFields::get_offset_of_downVector_7(),
	Vector3_t582938947_StaticFields::get_offset_of_leftVector_8(),
	Vector3_t582938947_StaticFields::get_offset_of_rightVector_9(),
	Vector3_t582938947_StaticFields::get_offset_of_forwardVector_10(),
	Vector3_t582938947_StaticFields::get_offset_of_backVector_11(),
	Vector3_t582938947_StaticFields::get_offset_of_positiveInfinityVector_12(),
	Vector3_t582938947_StaticFields::get_offset_of_negativeInfinityVector_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (Quaternion_t1516221546)+ sizeof (RuntimeObject), sizeof(Quaternion_t1516221546 ), sizeof(Quaternion_t1516221546_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1288[6] = 
{
	Quaternion_t1516221546::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t1516221546::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t1516221546::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t1516221546::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t1516221546_StaticFields::get_offset_of_identityQuaternion_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (Matrix4x4_t2244090027)+ sizeof (RuntimeObject), sizeof(Matrix4x4_t2244090027 ), sizeof(Matrix4x4_t2244090027_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1289[18] = 
{
	Matrix4x4_t2244090027::get_offset_of_m00_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m10_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m20_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m30_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m01_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m11_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m21_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m31_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m02_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m12_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m22_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m32_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m03_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m13_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m23_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027::get_offset_of_m33_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t2244090027_StaticFields::get_offset_of_zeroMatrix_16(),
	Matrix4x4_t2244090027_StaticFields::get_offset_of_identityMatrix_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (Bounds_t3221554168)+ sizeof (RuntimeObject), sizeof(Bounds_t3221554168 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1290[2] = 
{
	Bounds_t3221554168::get_offset_of_m_Center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Bounds_t3221554168::get_offset_of_m_Extents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (Mathf_t481890114)+ sizeof (RuntimeObject), sizeof(Mathf_t481890114 ), sizeof(Mathf_t481890114_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1291[1] = 
{
	Mathf_t481890114_StaticFields::get_offset_of_Epsilon_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (Keyframe_t526708485)+ sizeof (RuntimeObject), sizeof(Keyframe_t526708485 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1292[4] = 
{
	Keyframe_t526708485::get_offset_of_m_Time_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t526708485::get_offset_of_m_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t526708485::get_offset_of_m_InTangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t526708485::get_offset_of_m_OutTangent_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (AnimationCurve_t2712316471), sizeof(AnimationCurve_t2712316471_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1293[1] = 
{
	AnimationCurve_t2712316471::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (Mesh_t1506619879), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (InternalShaderChannel_t2591798656)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1295[9] = 
{
	InternalShaderChannel_t2591798656::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (InternalVertexChannelType_t147747341)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1296[3] = 
{
	InternalVertexChannelType_t147747341::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (MonoBehaviour_t3262979370), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (NetworkPlayer_t2890398257)+ sizeof (RuntimeObject), sizeof(NetworkPlayer_t2890398257 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1298[1] = 
{
	NetworkPlayer_t2890398257::get_offset_of_index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (NetworkViewID_t3110657285)+ sizeof (RuntimeObject), sizeof(NetworkViewID_t3110657285 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1299[3] = 
{
	NetworkViewID_t3110657285::get_offset_of_a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t3110657285::get_offset_of_b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t3110657285::get_offset_of_c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
