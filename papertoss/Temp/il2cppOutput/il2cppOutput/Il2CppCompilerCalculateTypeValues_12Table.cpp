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
struct SymmetricAlgorithm_t3040885993;
// System.Byte[]
struct ByteU5BU5D_t2871126392;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t725425730;
// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_t684016551;
// UnityEngine.Application/LogCallback
struct LogCallback_t2003081627;
// UnityEngine.Events.UnityAction
struct UnityAction_t291961629;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t2552191028;
// UnityEngine.Gyroscope
struct Gyroscope_t815258173;
// UnityEngine.ILogger
struct ILogger_t1476663319;
// System.Char[]
struct CharU5BU5D_t2417068350;
// System.Void
struct Void_t581647375;
// System.UInt32[]
struct UInt32U5BU5D_t3666611861;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3163495960;
// UnityEngine.Display[]
struct DisplayU5BU5D_t784997349;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t342742713;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t742693336;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t2371619169;
// System.IAsyncResult
struct IAsyncResult_t3533804805;
// System.AsyncCallback
struct AsyncCallback_t3162852517;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t650277034;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t617041151;
// UnityEngine.Camera
struct Camera_t2649750401;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t1318689021;




#ifndef U3CMODULEU3E_T384268696_H
#define U3CMODULEU3E_T384268696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t384268696 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T384268696_H
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
#ifndef U3CMODULEU3E_T384268695_H
#define U3CMODULEU3E_T384268695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t384268695 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T384268695_H
#ifndef SYMMETRICTRANSFORM_T1156258110_H
#define SYMMETRICTRANSFORM_T1156258110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t1156258110  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t3040885993 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t2871126392* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t2871126392* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t2871126392* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t2871126392* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t725425730 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1156258110, ___algo_0)); }
	inline SymmetricAlgorithm_t3040885993 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t3040885993 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t3040885993 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1156258110, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1156258110, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1156258110, ___temp_3)); }
	inline ByteU5BU5D_t2871126392* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t2871126392** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t2871126392* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1156258110, ___temp2_4)); }
	inline ByteU5BU5D_t2871126392* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t2871126392** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t2871126392* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1156258110, ___workBuff_5)); }
	inline ByteU5BU5D_t2871126392* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t2871126392** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t2871126392* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1156258110, ___workout_6)); }
	inline ByteU5BU5D_t2871126392* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t2871126392** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t2871126392* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1156258110, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1156258110, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1156258110, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1156258110, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1156258110, ____rng_11)); }
	inline RandomNumberGenerator_t725425730 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t725425730 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t725425730 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T1156258110_H
#ifndef VALUETYPE_T210789237_H
#define VALUETYPE_T210789237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t210789237  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t210789237_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t210789237_marshaled_com
{
};
#endif // VALUETYPE_T210789237_H
#ifndef APPLICATION_T2459210557_H
#define APPLICATION_T2459210557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application
struct  Application_t2459210557  : public RuntimeObject
{
public:

public:
};

struct Application_t2459210557_StaticFields
{
public:
	// UnityEngine.Application/LowMemoryCallback UnityEngine.Application::lowMemory
	LowMemoryCallback_t684016551 * ___lowMemory_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t2003081627 * ___s_LogCallbackHandler_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t2003081627 * ___s_LogCallbackHandlerThreaded_2;
	// UnityEngine.Events.UnityAction UnityEngine.Application::onBeforeRender
	UnityAction_t291961629 * ___onBeforeRender_3;

public:
	inline static int32_t get_offset_of_lowMemory_0() { return static_cast<int32_t>(offsetof(Application_t2459210557_StaticFields, ___lowMemory_0)); }
	inline LowMemoryCallback_t684016551 * get_lowMemory_0() const { return ___lowMemory_0; }
	inline LowMemoryCallback_t684016551 ** get_address_of_lowMemory_0() { return &___lowMemory_0; }
	inline void set_lowMemory_0(LowMemoryCallback_t684016551 * value)
	{
		___lowMemory_0 = value;
		Il2CppCodeGenWriteBarrier((&___lowMemory_0), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandler_1() { return static_cast<int32_t>(offsetof(Application_t2459210557_StaticFields, ___s_LogCallbackHandler_1)); }
	inline LogCallback_t2003081627 * get_s_LogCallbackHandler_1() const { return ___s_LogCallbackHandler_1; }
	inline LogCallback_t2003081627 ** get_address_of_s_LogCallbackHandler_1() { return &___s_LogCallbackHandler_1; }
	inline void set_s_LogCallbackHandler_1(LogCallback_t2003081627 * value)
	{
		___s_LogCallbackHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandler_1), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandlerThreaded_2() { return static_cast<int32_t>(offsetof(Application_t2459210557_StaticFields, ___s_LogCallbackHandlerThreaded_2)); }
	inline LogCallback_t2003081627 * get_s_LogCallbackHandlerThreaded_2() const { return ___s_LogCallbackHandlerThreaded_2; }
	inline LogCallback_t2003081627 ** get_address_of_s_LogCallbackHandlerThreaded_2() { return &___s_LogCallbackHandlerThreaded_2; }
	inline void set_s_LogCallbackHandlerThreaded_2(LogCallback_t2003081627 * value)
	{
		___s_LogCallbackHandlerThreaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandlerThreaded_2), value);
	}

	inline static int32_t get_offset_of_onBeforeRender_3() { return static_cast<int32_t>(offsetof(Application_t2459210557_StaticFields, ___onBeforeRender_3)); }
	inline UnityAction_t291961629 * get_onBeforeRender_3() const { return ___onBeforeRender_3; }
	inline UnityAction_t291961629 ** get_address_of_onBeforeRender_3() { return &___onBeforeRender_3; }
	inline void set_onBeforeRender_3(UnityAction_t291961629 * value)
	{
		___onBeforeRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onBeforeRender_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATION_T2459210557_H
#ifndef SYSTEMINFO_T1742180065_H
#define SYSTEMINFO_T1742180065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SystemInfo
struct  SystemInfo_t1742180065  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMINFO_T1742180065_H
#ifndef CUSTOMYIELDINSTRUCTION_T1067073651_H
#define CUSTOMYIELDINSTRUCTION_T1067073651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1067073651  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1067073651_H
#ifndef YIELDINSTRUCTION_T344978917_H
#define YIELDINSTRUCTION_T344978917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t344978917  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t344978917_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t344978917_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T344978917_H
#ifndef ENUMERABLE_T1187548174_H
#define ENUMERABLE_T1187548174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t1187548174  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T1187548174_H
#ifndef CHECK_T1390106652_H
#define CHECK_T1390106652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Check
struct  Check_t1390106652  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHECK_T1390106652_H
#ifndef SCREEN_T953577781_H
#define SCREEN_T953577781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Screen
struct  Screen_t953577781  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN_T953577781_H
#ifndef KEYBUILDER_T2065362040_H
#define KEYBUILDER_T2065362040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t2065362040  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t2065362040_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t725425730 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t2065362040_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t725425730 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t725425730 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t725425730 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T2065362040_H
#ifndef ATTRIBUTE_T3693381205_H
#define ATTRIBUTE_T3693381205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3693381205  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3693381205_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_T961884559_H
#define UNHANDLEDEXCEPTIONHANDLER_T961884559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_t961884559  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_t961884559_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mg$cache0
	UnhandledExceptionEventHandler_t2552191028 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_t961884559_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_t2552191028 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_t2552191028 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_t2552191028 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_T961884559_H
#ifndef GYROSCOPE_T815258173_H
#define GYROSCOPE_T815258173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t815258173  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T815258173_H
#ifndef INPUT_T985087132_H
#define INPUT_T985087132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t985087132  : public RuntimeObject
{
public:

public:
};

struct Input_t985087132_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t815258173 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t985087132_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t815258173 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t815258173 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t815258173 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T985087132_H
#ifndef DEBUG_T1981337928_H
#define DEBUG_T1981337928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t1981337928  : public RuntimeObject
{
public:

public:
};

struct Debug_t1981337928_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t1981337928_StaticFields, ___s_Logger_0)); }
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
#endif // DEBUG_T1981337928_H
#ifndef DEBUGLOGHANDLER_T2587145342_H
#define DEBUGLOGHANDLER_T2587145342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DebugLogHandler
struct  DebugLogHandler_t2587145342  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGHANDLER_T2587145342_H
#ifndef CURSOR_T608911802_H
#define CURSOR_T608911802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cursor
struct  Cursor_t608911802  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSOR_T608911802_H
#ifndef LOCALE_T4075942268_H
#define LOCALE_T4075942268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t4075942268  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T4075942268_H
#ifndef MATHF_T4110484911_H
#define MATHF_T4110484911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t4110484911 
{
public:

public:
};

struct Mathf_t4110484911_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4110484911_StaticFields, ___Epsilon_0)); }
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
#endif // MATHF_T4110484911_H
#ifndef LAYERMASK_T3673799211_H
#define LAYERMASK_T3673799211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3673799211 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3673799211, ___m_Mask_0)); }
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
#endif // LAYERMASK_T3673799211_H
#ifndef NETWORKVIEWID_T3074603631_H
#define NETWORKVIEWID_T3074603631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkViewID
struct  NetworkViewID_t3074603631 
{
public:
	// System.Int32 UnityEngine.NetworkViewID::a
	int32_t ___a_0;
	// System.Int32 UnityEngine.NetworkViewID::b
	int32_t ___b_1;
	// System.Int32 UnityEngine.NetworkViewID::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(NetworkViewID_t3074603631, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(NetworkViewID_t3074603631, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(NetworkViewID_t3074603631, ___c_2)); }
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
#endif // NETWORKVIEWID_T3074603631_H
#ifndef WAITFORSECONDS_T2702771181_H
#define WAITFORSECONDS_T2702771181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t2702771181  : public YieldInstruction_t344978917
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t2702771181, ___m_Seconds_0)); }
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
struct WaitForSeconds_t2702771181_marshaled_pinvoke : public YieldInstruction_t344978917_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t2702771181_marshaled_com : public YieldInstruction_t344978917_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T2702771181_H
#ifndef WAITFORENDOFFRAME_T305644248_H
#define WAITFORENDOFFRAME_T305644248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t305644248  : public YieldInstruction_t344978917
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T305644248_H
#ifndef VECTOR3_T3860339170_H
#define VECTOR3_T3860339170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3860339170 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3860339170, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3860339170, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3860339170, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3860339170_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3860339170  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3860339170  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3860339170  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3860339170  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3860339170  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3860339170  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3860339170  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3860339170  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3860339170  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3860339170  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3860339170_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3860339170  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3860339170 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3860339170  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3860339170_StaticFields, ___oneVector_5)); }
	inline Vector3_t3860339170  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3860339170 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3860339170  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3860339170_StaticFields, ___upVector_6)); }
	inline Vector3_t3860339170  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3860339170 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3860339170  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3860339170_StaticFields, ___downVector_7)); }
	inline Vector3_t3860339170  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3860339170 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3860339170  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3860339170_StaticFields, ___leftVector_8)); }
	inline Vector3_t3860339170  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3860339170 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3860339170  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3860339170_StaticFields, ___rightVector_9)); }
	inline Vector3_t3860339170  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3860339170 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3860339170  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3860339170_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3860339170  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3860339170 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3860339170  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3860339170_StaticFields, ___backVector_11)); }
	inline Vector3_t3860339170  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3860339170 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3860339170  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3860339170_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3860339170  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3860339170 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3860339170  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3860339170_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3860339170  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3860339170 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3860339170  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3860339170_H
#ifndef NETWORKPLAYER_T421495180_H
#define NETWORKPLAYER_T421495180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkPlayer
struct  NetworkPlayer_t421495180 
{
public:
	// System.Int32 UnityEngine.NetworkPlayer::index
	int32_t ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(NetworkPlayer_t421495180, ___index_0)); }
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
#endif // NETWORKPLAYER_T421495180_H
#ifndef KEYFRAME_T3709638969_H
#define KEYFRAME_T3709638969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t3709638969 
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
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t3709638969, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t3709638969, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t3709638969, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t3709638969, ___m_OutTangent_3)); }
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
#endif // KEYFRAME_T3709638969_H
#ifndef QUATERNION_T574257729_H
#define QUATERNION_T574257729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t574257729 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t574257729, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t574257729, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t574257729, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t574257729, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t574257729_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t574257729  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t574257729_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t574257729  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t574257729 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t574257729  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T574257729_H
#ifndef MATRIX4X4_T3952841686_H
#define MATRIX4X4_T3952841686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t3952841686 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t3952841686_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t3952841686  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t3952841686  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t3952841686  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t3952841686 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t3952841686  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t3952841686_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t3952841686  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t3952841686 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t3952841686  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T3952841686_H
#ifndef CULLINGGROUPEVENT_T395897393_H
#define CULLINGGROUPEVENT_T395897393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t395897393 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t395897393, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t395897393, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t395897393, ___m_ThisState_2)); }
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
#endif // CULLINGGROUPEVENT_T395897393_H
#ifndef WAITFORFIXEDUPDATE_T1641390459_H
#define WAITFORFIXEDUPDATE_T1641390459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t1641390459  : public YieldInstruction_t344978917
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T1641390459_H
#ifndef ENUM_T1073832112_H
#define ENUM_T1073832112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1073832112  : public ValueType_t210789237
{
public:

public:
};

struct Enum_t1073832112_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2417068350* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1073832112_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2417068350* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2417068350** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2417068350* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1073832112_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1073832112_marshaled_com
{
};
#endif // ENUM_T1073832112_H
#ifndef TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T3511613722_H
#define TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T3511613722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
struct  TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722 
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
	inline static int32_t get_offset_of_keyboardType_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722, ___keyboardType_0)); }
	inline uint32_t get_keyboardType_0() const { return ___keyboardType_0; }
	inline uint32_t* get_address_of_keyboardType_0() { return &___keyboardType_0; }
	inline void set_keyboardType_0(uint32_t value)
	{
		___keyboardType_0 = value;
	}

	inline static int32_t get_offset_of_autocorrection_1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722, ___autocorrection_1)); }
	inline uint32_t get_autocorrection_1() const { return ___autocorrection_1; }
	inline uint32_t* get_address_of_autocorrection_1() { return &___autocorrection_1; }
	inline void set_autocorrection_1(uint32_t value)
	{
		___autocorrection_1 = value;
	}

	inline static int32_t get_offset_of_multiline_2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722, ___multiline_2)); }
	inline uint32_t get_multiline_2() const { return ___multiline_2; }
	inline uint32_t* get_address_of_multiline_2() { return &___multiline_2; }
	inline void set_multiline_2(uint32_t value)
	{
		___multiline_2 = value;
	}

	inline static int32_t get_offset_of_secure_3() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722, ___secure_3)); }
	inline uint32_t get_secure_3() const { return ___secure_3; }
	inline uint32_t* get_address_of_secure_3() { return &___secure_3; }
	inline void set_secure_3(uint32_t value)
	{
		___secure_3 = value;
	}

	inline static int32_t get_offset_of_alert_4() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722, ___alert_4)); }
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
#endif // TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T3511613722_H
#ifndef U24ARRAYTYPEU241024_T1442067954_H
#define U24ARRAYTYPEU241024_T1442067954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t1442067954 
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
		uint8_t U24ArrayTypeU241024_t1442067954__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T1442067954_H
#ifndef U24ARRAYTYPEU243132_T2815594864_H
#define U24ARRAYTYPEU243132_T2815594864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t2815594864 
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
		uint8_t U24ArrayTypeU243132_t2815594864__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T2815594864_H
#ifndef U24ARRAYTYPEU24256_T2379278991_H
#define U24ARRAYTYPEU24256_T2379278991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t2379278991 
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
		uint8_t U24ArrayTypeU24256_t2379278991__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T2379278991_H
#ifndef U24ARRAYTYPEU2420_T1834806258_H
#define U24ARRAYTYPEU2420_T1834806258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t1834806258 
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
		uint8_t U24ArrayTypeU2420_t1834806258__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T1834806258_H
#ifndef U24ARRAYTYPEU2432_T2106330233_H
#define U24ARRAYTYPEU2432_T2106330233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t2106330233 
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
		uint8_t U24ArrayTypeU2432_t2106330233__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T2106330233_H
#ifndef U24ARRAYTYPEU2448_T4113670917_H
#define U24ARRAYTYPEU2448_T4113670917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t4113670917 
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
		uint8_t U24ArrayTypeU2448_t4113670917__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T4113670917_H
#ifndef U24ARRAYTYPEU2464_T631622981_H
#define U24ARRAYTYPEU2464_T631622981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t631622981 
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
		uint8_t U24ArrayTypeU2464_t631622981__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T631622981_H
#ifndef U24ARRAYTYPEU2412_T4287920446_H
#define U24ARRAYTYPEU2412_T4287920446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t4287920446 
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
		uint8_t U24ArrayTypeU2412_t4287920446__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T4287920446_H
#ifndef U24ARRAYTYPEU2416_T2564432087_H
#define U24ARRAYTYPEU2416_T2564432087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t2564432087 
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
		uint8_t U24ArrayTypeU2416_t2564432087__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T2564432087_H
#ifndef VOID_T581647375_H
#define VOID_T581647375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t581647375 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T581647375_H
#ifndef EXTENSIONATTRIBUTE_T2731560764_H
#define EXTENSIONATTRIBUTE_T2731560764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ExtensionAttribute
struct  ExtensionAttribute_t2731560764  : public Attribute_t3693381205
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONATTRIBUTE_T2731560764_H
#ifndef MONOTODOATTRIBUTE_T6180509_H
#define MONOTODOATTRIBUTE_T6180509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t6180509  : public Attribute_t3693381205
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T6180509_H
#ifndef U24ARRAYTYPEU244_T2693593747_H
#define U24ARRAYTYPEU244_T2693593747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$4
struct  U24ArrayTypeU244_t2693593747 
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
		uint8_t U24ArrayTypeU244_t2693593747__padding[4];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU244_T2693593747_H
#ifndef U24ARRAYTYPEU24136_T24077241_H
#define U24ARRAYTYPEU24136_T24077241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t24077241 
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
		uint8_t U24ArrayTypeU24136_t24077241__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T24077241_H
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
#ifndef AESTRANSFORM_T52603476_H
#define AESTRANSFORM_T52603476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t52603476  : public SymmetricTransform_t1156258110
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t3666611861* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_t52603476, ___expandedKey_12)); }
	inline UInt32U5BU5D_t3666611861* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t3666611861** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t3666611861* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_t52603476, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_t52603476, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_t52603476_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t3666611861* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t2871126392* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t2871126392* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t3666611861* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t3666611861* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t3666611861* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t3666611861* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t3666611861* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t3666611861* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t3666611861* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t3666611861* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_t52603476_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_t3666611861* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_t3666611861** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_t3666611861* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_15), value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_t52603476_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_t2871126392* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_t2871126392** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_t2871126392* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_16), value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t52603476_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_t2871126392* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_t2871126392** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_t2871126392* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_17), value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_t52603476_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_t3666611861* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_t3666611861** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_t3666611861* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier((&___T0_18), value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_t52603476_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_t3666611861* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_t3666611861** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_t3666611861* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier((&___T1_19), value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_t52603476_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_t3666611861* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_t3666611861** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_t3666611861* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier((&___T2_20), value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_t52603476_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_t3666611861* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_t3666611861** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_t3666611861* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier((&___T3_21), value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_t52603476_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_t3666611861* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_t3666611861** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_t3666611861* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_22), value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_t52603476_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_t3666611861* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_t3666611861** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_t3666611861* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_23), value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_t52603476_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_t3666611861* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_t3666611861** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_t3666611861* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_24), value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_t52603476_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_t3666611861* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_t3666611861** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_t3666611861* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESTRANSFORM_T52603476_H
#ifndef VECTOR2_T4191268048_H
#define VECTOR2_T4191268048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t4191268048 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t4191268048, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t4191268048, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t4191268048_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t4191268048  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t4191268048  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t4191268048  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t4191268048  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t4191268048  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t4191268048  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t4191268048  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t4191268048  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t4191268048_StaticFields, ___zeroVector_2)); }
	inline Vector2_t4191268048  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t4191268048 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t4191268048  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t4191268048_StaticFields, ___oneVector_3)); }
	inline Vector2_t4191268048  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t4191268048 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t4191268048  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t4191268048_StaticFields, ___upVector_4)); }
	inline Vector2_t4191268048  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t4191268048 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t4191268048  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t4191268048_StaticFields, ___downVector_5)); }
	inline Vector2_t4191268048  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t4191268048 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t4191268048  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t4191268048_StaticFields, ___leftVector_6)); }
	inline Vector2_t4191268048  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t4191268048 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t4191268048  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t4191268048_StaticFields, ___rightVector_7)); }
	inline Vector2_t4191268048  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t4191268048 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t4191268048  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t4191268048_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t4191268048  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t4191268048 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t4191268048  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t4191268048_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t4191268048  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t4191268048 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t4191268048  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T4191268048_H
#ifndef U24ARRAYTYPEU24120_T2927445639_H
#define U24ARRAYTYPEU24120_T2927445639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t2927445639 
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
		uint8_t U24ArrayTypeU24120_t2927445639__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T2927445639_H
#ifndef U24ARRAYTYPEU24256_T2379278992_H
#define U24ARRAYTYPEU24256_T2379278992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t2379278992 
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
		uint8_t U24ArrayTypeU24256_t2379278992__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T2379278992_H
#ifndef TOUCHSCREENKEYBOARD_T183578583_H
#define TOUCHSCREENKEYBOARD_T183578583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t183578583  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t183578583, ___m_Ptr_0)); }
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
#endif // TOUCHSCREENKEYBOARD_T183578583_H
#ifndef TOUCHPHASE_T2834080312_H
#define TOUCHPHASE_T2834080312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t2834080312 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t2834080312, ___value___1)); }
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
#endif // TOUCHPHASE_T2834080312_H
#ifndef IMECOMPOSITIONMODE_T3100708766_H
#define IMECOMPOSITIONMODE_T3100708766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IMECompositionMode
struct  IMECompositionMode_t3100708766 
{
public:
	// System.Int32 UnityEngine.IMECompositionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IMECompositionMode_t3100708766, ___value___1)); }
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
#endif // IMECOMPOSITIONMODE_T3100708766_H
#ifndef TOUCHTYPE_T139786445_H
#define TOUCHTYPE_T139786445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t139786445 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t139786445, ___value___1)); }
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
#endif // TOUCHTYPE_T139786445_H
#ifndef DELEGATE_T3707974363_H
#define DELEGATE_T3707974363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3707974363  : public RuntimeObject
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
	DelegateData_t3163495960 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3707974363, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3707974363, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3707974363, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3707974363, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3707974363, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3707974363, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3707974363, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3707974363, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3707974363, ___data_8)); }
	inline DelegateData_t3163495960 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3163495960 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3163495960 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3707974363_H
#ifndef BOUNDS_T1097806103_H
#define BOUNDS_T1097806103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t1097806103 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3860339170  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3860339170  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t1097806103, ___m_Center_0)); }
	inline Vector3_t3860339170  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3860339170 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3860339170  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t1097806103, ___m_Extents_1)); }
	inline Vector3_t3860339170  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3860339170 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3860339170  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T1097806103_H
#ifndef OBJECT_T2095253907_H
#define OBJECT_T2095253907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2095253907  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2095253907, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2095253907_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2095253907_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t2095253907_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2095253907_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2095253907_H
#ifndef INTERNALVERTEXCHANNELTYPE_T868426571_H
#define INTERNALVERTEXCHANNELTYPE_T868426571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalVertexChannelType
struct  InternalVertexChannelType_t868426571 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalVertexChannelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t868426571, ___value___1)); }
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
#endif // INTERNALVERTEXCHANNELTYPE_T868426571_H
#ifndef INTERNALSHADERCHANNEL_T3770609543_H
#define INTERNALSHADERCHANNEL_T3770609543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalShaderChannel
struct  InternalShaderChannel_t3770609543 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalShaderChannel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalShaderChannel_t3770609543, ___value___1)); }
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
#endif // INTERNALSHADERCHANNEL_T3770609543_H
#ifndef ANIMATIONCURVE_T987490472_H
#define ANIMATIONCURVE_T987490472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t987490472  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t987490472, ___m_Ptr_0)); }
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
struct AnimationCurve_t987490472_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t987490472_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T987490472_H
#ifndef LOGTYPE_T4210502053_H
#define LOGTYPE_T4210502053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t4210502053 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t4210502053, ___value___1)); }
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
#endif // LOGTYPE_T4210502053_H
#ifndef CURSORLOCKMODE_T4032624997_H
#define CURSORLOCKMODE_T4032624997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CursorLockMode
struct  CursorLockMode_t4032624997 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CursorLockMode_t4032624997, ___value___1)); }
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
#endif // CURSORLOCKMODE_T4032624997_H
#ifndef PADDINGMODE_T3256534937_H
#define PADDINGMODE_T3256534937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t3256534937 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t3256534937, ___value___1)); }
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
#endif // PADDINGMODE_T3256534937_H
#ifndef CIPHERMODE_T3325249471_H
#define CIPHERMODE_T3325249471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t3325249471 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t3325249471, ___value___1)); }
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
#endif // CIPHERMODE_T3325249471_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2663141216_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2663141216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2663141216  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU243132_t2815594864  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU24256_t2379278991  ___U24U24fieldU2D5_1;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2420_t1834806258  ___U24U24fieldU2D6_2;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU2432_t2106330233  ___U24U24fieldU2D7_3;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU2448_t4113670917  ___U24U24fieldU2D8_4;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU2464_t631622981  ___U24U24fieldU2D9_5;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU2464_t631622981  ___U24U24fieldU2D11_6;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-12
	U24ArrayTypeU2464_t631622981  ___U24U24fieldU2D12_7;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-13
	U24ArrayTypeU2464_t631622981  ___U24U24fieldU2D13_8;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-14
	U24ArrayTypeU2412_t4287920446  ___U24U24fieldU2D14_9;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU2412_t4287920446  ___U24U24fieldU2D15_10;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2412_t4287920446  ___U24U24fieldU2D16_11;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2416_t2564432087  ___U24U24fieldU2D17_12;
	// <PrivateImplementationDetails>/$ArrayType$4 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU244_t2693593747  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$4 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU244_t2693593747  ___U24U24fieldU2D22_14;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU243132_t2815594864  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU243132_t2815594864 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU243132_t2815594864  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D5_1)); }
	inline U24ArrayTypeU24256_t2379278991  get_U24U24fieldU2D5_1() const { return ___U24U24fieldU2D5_1; }
	inline U24ArrayTypeU24256_t2379278991 * get_address_of_U24U24fieldU2D5_1() { return &___U24U24fieldU2D5_1; }
	inline void set_U24U24fieldU2D5_1(U24ArrayTypeU24256_t2379278991  value)
	{
		___U24U24fieldU2D5_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D6_2)); }
	inline U24ArrayTypeU2420_t1834806258  get_U24U24fieldU2D6_2() const { return ___U24U24fieldU2D6_2; }
	inline U24ArrayTypeU2420_t1834806258 * get_address_of_U24U24fieldU2D6_2() { return &___U24U24fieldU2D6_2; }
	inline void set_U24U24fieldU2D6_2(U24ArrayTypeU2420_t1834806258  value)
	{
		___U24U24fieldU2D6_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D7_3)); }
	inline U24ArrayTypeU2432_t2106330233  get_U24U24fieldU2D7_3() const { return ___U24U24fieldU2D7_3; }
	inline U24ArrayTypeU2432_t2106330233 * get_address_of_U24U24fieldU2D7_3() { return &___U24U24fieldU2D7_3; }
	inline void set_U24U24fieldU2D7_3(U24ArrayTypeU2432_t2106330233  value)
	{
		___U24U24fieldU2D7_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D8_4)); }
	inline U24ArrayTypeU2448_t4113670917  get_U24U24fieldU2D8_4() const { return ___U24U24fieldU2D8_4; }
	inline U24ArrayTypeU2448_t4113670917 * get_address_of_U24U24fieldU2D8_4() { return &___U24U24fieldU2D8_4; }
	inline void set_U24U24fieldU2D8_4(U24ArrayTypeU2448_t4113670917  value)
	{
		___U24U24fieldU2D8_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D9_5)); }
	inline U24ArrayTypeU2464_t631622981  get_U24U24fieldU2D9_5() const { return ___U24U24fieldU2D9_5; }
	inline U24ArrayTypeU2464_t631622981 * get_address_of_U24U24fieldU2D9_5() { return &___U24U24fieldU2D9_5; }
	inline void set_U24U24fieldU2D9_5(U24ArrayTypeU2464_t631622981  value)
	{
		___U24U24fieldU2D9_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D11_6)); }
	inline U24ArrayTypeU2464_t631622981  get_U24U24fieldU2D11_6() const { return ___U24U24fieldU2D11_6; }
	inline U24ArrayTypeU2464_t631622981 * get_address_of_U24U24fieldU2D11_6() { return &___U24U24fieldU2D11_6; }
	inline void set_U24U24fieldU2D11_6(U24ArrayTypeU2464_t631622981  value)
	{
		___U24U24fieldU2D11_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D12_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D12_7)); }
	inline U24ArrayTypeU2464_t631622981  get_U24U24fieldU2D12_7() const { return ___U24U24fieldU2D12_7; }
	inline U24ArrayTypeU2464_t631622981 * get_address_of_U24U24fieldU2D12_7() { return &___U24U24fieldU2D12_7; }
	inline void set_U24U24fieldU2D12_7(U24ArrayTypeU2464_t631622981  value)
	{
		___U24U24fieldU2D12_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D13_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D13_8)); }
	inline U24ArrayTypeU2464_t631622981  get_U24U24fieldU2D13_8() const { return ___U24U24fieldU2D13_8; }
	inline U24ArrayTypeU2464_t631622981 * get_address_of_U24U24fieldU2D13_8() { return &___U24U24fieldU2D13_8; }
	inline void set_U24U24fieldU2D13_8(U24ArrayTypeU2464_t631622981  value)
	{
		___U24U24fieldU2D13_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D14_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D14_9)); }
	inline U24ArrayTypeU2412_t4287920446  get_U24U24fieldU2D14_9() const { return ___U24U24fieldU2D14_9; }
	inline U24ArrayTypeU2412_t4287920446 * get_address_of_U24U24fieldU2D14_9() { return &___U24U24fieldU2D14_9; }
	inline void set_U24U24fieldU2D14_9(U24ArrayTypeU2412_t4287920446  value)
	{
		___U24U24fieldU2D14_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D15_10)); }
	inline U24ArrayTypeU2412_t4287920446  get_U24U24fieldU2D15_10() const { return ___U24U24fieldU2D15_10; }
	inline U24ArrayTypeU2412_t4287920446 * get_address_of_U24U24fieldU2D15_10() { return &___U24U24fieldU2D15_10; }
	inline void set_U24U24fieldU2D15_10(U24ArrayTypeU2412_t4287920446  value)
	{
		___U24U24fieldU2D15_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D16_11)); }
	inline U24ArrayTypeU2412_t4287920446  get_U24U24fieldU2D16_11() const { return ___U24U24fieldU2D16_11; }
	inline U24ArrayTypeU2412_t4287920446 * get_address_of_U24U24fieldU2D16_11() { return &___U24U24fieldU2D16_11; }
	inline void set_U24U24fieldU2D16_11(U24ArrayTypeU2412_t4287920446  value)
	{
		___U24U24fieldU2D16_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D17_12)); }
	inline U24ArrayTypeU2416_t2564432087  get_U24U24fieldU2D17_12() const { return ___U24U24fieldU2D17_12; }
	inline U24ArrayTypeU2416_t2564432087 * get_address_of_U24U24fieldU2D17_12() { return &___U24U24fieldU2D17_12; }
	inline void set_U24U24fieldU2D17_12(U24ArrayTypeU2416_t2564432087  value)
	{
		___U24U24fieldU2D17_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU244_t2693593747  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU244_t2693593747 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU244_t2693593747  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU244_t2693593747  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU244_t2693593747 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU244_t2693593747  value)
	{
		___U24U24fieldU2D22_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2663141216_H
#ifndef FALLBACK_T4044157736_H
#define FALLBACK_T4044157736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Fallback
struct  Fallback_t4044157736 
{
public:
	// System.Int32 System.Linq.Enumerable/Fallback::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Fallback_t4044157736, ___value___1)); }
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
#endif // FALLBACK_T4044157736_H
#ifndef MATERIALPROPERTYBLOCK_T1924541810_H
#define MATERIALPROPERTYBLOCK_T1924541810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t1924541810  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t1924541810, ___m_Ptr_0)); }
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
#endif // MATERIALPROPERTYBLOCK_T1924541810_H
#ifndef COROUTINE_T1726000111_H
#define COROUTINE_T1726000111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t1726000111  : public YieldInstruction_t344978917
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t1726000111, ___m_Ptr_0)); }
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
struct Coroutine_t1726000111_marshaled_pinvoke : public YieldInstruction_t344978917_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t1726000111_marshaled_com : public YieldInstruction_t344978917_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T1726000111_H
#ifndef GRADIENT_T728877365_H
#define GRADIENT_T728877365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t728877365  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t728877365, ___m_Ptr_0)); }
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
struct Gradient_t728877365_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t728877365_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T728877365_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2663141217_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2663141217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2663141217  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24136_t24077241  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU24120_t2927445639  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24256_t2379278992  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU24256_t2379278992  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU241024_t1442067954  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU241024_t1442067954  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU241024_t1442067954  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU241024_t1442067954  ___U24U24fieldU2D7_7;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU241024_t1442067954  ___U24U24fieldU2D8_8;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU241024_t1442067954  ___U24U24fieldU2D9_9;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-10
	U24ArrayTypeU241024_t1442067954  ___U24U24fieldU2D10_10;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU241024_t1442067954  ___U24U24fieldU2D11_11;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU24136_t24077241  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU24136_t24077241 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU24136_t24077241  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU24120_t2927445639  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU24120_t2927445639 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU24120_t2927445639  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU24256_t2379278992  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU24256_t2379278992 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU24256_t2379278992  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU24256_t2379278992  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU24256_t2379278992 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU24256_t2379278992  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU241024_t1442067954  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU241024_t1442067954 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU241024_t1442067954  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU241024_t1442067954  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU241024_t1442067954 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU241024_t1442067954  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU241024_t1442067954  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU241024_t1442067954 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU241024_t1442067954  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields, ___U24U24fieldU2D7_7)); }
	inline U24ArrayTypeU241024_t1442067954  get_U24U24fieldU2D7_7() const { return ___U24U24fieldU2D7_7; }
	inline U24ArrayTypeU241024_t1442067954 * get_address_of_U24U24fieldU2D7_7() { return &___U24U24fieldU2D7_7; }
	inline void set_U24U24fieldU2D7_7(U24ArrayTypeU241024_t1442067954  value)
	{
		___U24U24fieldU2D7_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields, ___U24U24fieldU2D8_8)); }
	inline U24ArrayTypeU241024_t1442067954  get_U24U24fieldU2D8_8() const { return ___U24U24fieldU2D8_8; }
	inline U24ArrayTypeU241024_t1442067954 * get_address_of_U24U24fieldU2D8_8() { return &___U24U24fieldU2D8_8; }
	inline void set_U24U24fieldU2D8_8(U24ArrayTypeU241024_t1442067954  value)
	{
		___U24U24fieldU2D8_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields, ___U24U24fieldU2D9_9)); }
	inline U24ArrayTypeU241024_t1442067954  get_U24U24fieldU2D9_9() const { return ___U24U24fieldU2D9_9; }
	inline U24ArrayTypeU241024_t1442067954 * get_address_of_U24U24fieldU2D9_9() { return &___U24U24fieldU2D9_9; }
	inline void set_U24U24fieldU2D9_9(U24ArrayTypeU241024_t1442067954  value)
	{
		___U24U24fieldU2D9_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D10_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields, ___U24U24fieldU2D10_10)); }
	inline U24ArrayTypeU241024_t1442067954  get_U24U24fieldU2D10_10() const { return ___U24U24fieldU2D10_10; }
	inline U24ArrayTypeU241024_t1442067954 * get_address_of_U24U24fieldU2D10_10() { return &___U24U24fieldU2D10_10; }
	inline void set_U24U24fieldU2D10_10(U24ArrayTypeU241024_t1442067954  value)
	{
		___U24U24fieldU2D10_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields, ___U24U24fieldU2D11_11)); }
	inline U24ArrayTypeU241024_t1442067954  get_U24U24fieldU2D11_11() const { return ___U24U24fieldU2D11_11; }
	inline U24ArrayTypeU241024_t1442067954 * get_address_of_U24U24fieldU2D11_11() { return &___U24U24fieldU2D11_11; }
	inline void set_U24U24fieldU2D11_11(U24ArrayTypeU241024_t1442067954  value)
	{
		___U24U24fieldU2D11_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2663141217_H
#ifndef DISPLAY_T2663124716_H
#define DISPLAY_T2663124716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t2663124716  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t2663124716, ___nativeDisplay_0)); }
	inline IntPtr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline IntPtr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(IntPtr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t2663124716_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t784997349* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t2663124716 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t342742713 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t2663124716_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t784997349* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t784997349** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t784997349* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t2663124716_StaticFields, ____mainDisplay_2)); }
	inline Display_t2663124716 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t2663124716 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t2663124716 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t2663124716_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t342742713 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t342742713 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t342742713 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T2663124716_H
#ifndef RECTOFFSET_T381610910_H
#define RECTOFFSET_T381610910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t381610910  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t381610910, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t381610910, ___m_SourceStyle_1)); }
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
struct RectOffset_t381610910_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t381610910_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T381610910_H
#ifndef ASYNCOPERATION_T2856492251_H
#define ASYNCOPERATION_T2856492251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t2856492251  : public YieldInstruction_t344978917
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t2856492251, ___m_Ptr_0)); }
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
struct AsyncOperation_t2856492251_marshaled_pinvoke : public YieldInstruction_t344978917_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t2856492251_marshaled_com : public YieldInstruction_t344978917_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ASYNCOPERATION_T2856492251_H
#ifndef CULLINGGROUP_T1043316952_H
#define CULLINGGROUP_T1043316952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t1043316952  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t742693336 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t1043316952, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t1043316952, ___m_OnStateChanged_1)); }
	inline StateChanged_t742693336 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t742693336 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t742693336 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t1043316952_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t1043316952_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T1043316952_H
#ifndef ASSETBUNDLE_T3232145929_H
#define ASSETBUNDLE_T3232145929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundle
struct  AssetBundle_t3232145929  : public Object_t2095253907
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLE_T3232145929_H
#ifndef SCRIPTABLEOBJECT_T4074471332_H
#define SCRIPTABLEOBJECT_T4074471332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4074471332  : public Object_t2095253907
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4074471332_marshaled_pinvoke : public Object_t2095253907_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4074471332_marshaled_com : public Object_t2095253907_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T4074471332_H
#ifndef FAILEDTOLOADSCRIPTOBJECT_T3952392379_H
#define FAILEDTOLOADSCRIPTOBJECT_T3952392379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FailedToLoadScriptObject
struct  FailedToLoadScriptObject_t3952392379  : public Object_t2095253907
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t3952392379_marshaled_pinvoke : public Object_t2095253907_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.FailedToLoadScriptObject
struct FailedToLoadScriptObject_t3952392379_marshaled_com : public Object_t2095253907_marshaled_com
{
};
#endif // FAILEDTOLOADSCRIPTOBJECT_T3952392379_H
#ifndef ASSETBUNDLEREQUEST_T1433247939_H
#define ASSETBUNDLEREQUEST_T1433247939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_t1433247939  : public AsyncOperation_t2856492251
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t1433247939_marshaled_pinvoke : public AsyncOperation_t2856492251_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t1433247939_marshaled_com : public AsyncOperation_t2856492251_marshaled_com
{
};
#endif // ASSETBUNDLEREQUEST_T1433247939_H
#ifndef ASSETBUNDLECREATEREQUEST_T2845795775_H
#define ASSETBUNDLECREATEREQUEST_T2845795775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleCreateRequest
struct  AssetBundleCreateRequest_t2845795775  : public AsyncOperation_t2856492251
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETBUNDLECREATEREQUEST_T2845795775_H
#ifndef MESH_T3591735409_H
#define MESH_T3591735409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3591735409  : public Object_t2095253907
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3591735409_H
#ifndef COMPONENT_T4071573185_H
#define COMPONENT_T4071573185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t4071573185  : public Object_t2095253907
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T4071573185_H
#ifndef SYMMETRICALGORITHM_T3040885993_H
#define SYMMETRICALGORITHM_T3040885993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t3040885993  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t2871126392* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t2871126392* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t2371619169* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2371619169* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3040885993, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3040885993, ___IVValue_1)); }
	inline ByteU5BU5D_t2871126392* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t2871126392** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t2871126392* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3040885993, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3040885993, ___KeyValue_3)); }
	inline ByteU5BU5D_t2871126392* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t2871126392** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t2871126392* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3040885993, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t2371619169* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t2371619169** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t2371619169* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3040885993, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t2371619169* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t2371619169** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t2371619169* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3040885993, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3040885993, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3040885993, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3040885993, ___m_disposed_9)); }
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
#endif // SYMMETRICALGORITHM_T3040885993_H
#ifndef GAMEOBJECT_T1013426713_H
#define GAMEOBJECT_T1013426713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1013426713  : public Object_t2095253907
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1013426713_H
#ifndef TOUCH_T2606429895_H
#define TOUCH_T2606429895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t2606429895 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t4191268048  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t4191268048  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t4191268048  ___m_PositionDelta_3;
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
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_Position_1)); }
	inline Vector2_t4191268048  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t4191268048 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t4191268048  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_RawPosition_2)); }
	inline Vector2_t4191268048  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t4191268048 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t4191268048  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_PositionDelta_3)); }
	inline Vector2_t4191268048  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t4191268048 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t4191268048  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t2606429895, ___m_AzimuthAngle_13)); }
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
#endif // TOUCH_T2606429895_H
#ifndef MULTICASTDELEGATE_T368298302_H
#define MULTICASTDELEGATE_T368298302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t368298302  : public Delegate_t3707974363
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t368298302 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t368298302 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t368298302, ___prev_9)); }
	inline MulticastDelegate_t368298302 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t368298302 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t368298302 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t368298302, ___kpm_next_10)); }
	inline MulticastDelegate_t368298302 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t368298302 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t368298302 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T368298302_H
#ifndef LOWMEMORYCALLBACK_T684016551_H
#define LOWMEMORYCALLBACK_T684016551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LowMemoryCallback
struct  LowMemoryCallback_t684016551  : public MulticastDelegate_t368298302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWMEMORYCALLBACK_T684016551_H
#ifndef ACTION_T1645153005_H
#define ACTION_T1645153005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1645153005  : public MulticastDelegate_t368298302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1645153005_H
#ifndef AES_T3330042261_H
#define AES_T3330042261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t3330042261  : public SymmetricAlgorithm_t3040885993
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T3330042261_H
#ifndef LOGCALLBACK_T2003081627_H
#define LOGCALLBACK_T2003081627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t2003081627  : public MulticastDelegate_t368298302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T2003081627_H
#ifndef PRIVATEKEYSELECTIONCALLBACK_T3078455344_H
#define PRIVATEKEYSELECTIONCALLBACK_T3078455344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct  PrivateKeySelectionCallback_t3078455344  : public MulticastDelegate_t368298302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYSELECTIONCALLBACK_T3078455344_H
#ifndef BEHAVIOUR_T4244135871_H
#define BEHAVIOUR_T4244135871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t4244135871  : public Component_t4071573185
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T4244135871_H
#ifndef CAMERACALLBACK_T1318689021_H
#define CAMERACALLBACK_T1318689021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/CameraCallback
struct  CameraCallback_t1318689021  : public MulticastDelegate_t368298302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALLBACK_T1318689021_H
#ifndef STATECHANGED_T742693336_H
#define STATECHANGED_T742693336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t742693336  : public MulticastDelegate_t368298302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T742693336_H
#ifndef DISPLAYSUPDATEDDELEGATE_T342742713_H
#define DISPLAYSUPDATEDDELEGATE_T342742713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t342742713  : public MulticastDelegate_t368298302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T342742713_H
#ifndef MESHFILTER_T2584694755_H
#define MESHFILTER_T2584694755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t2584694755  : public Component_t4071573185
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T2584694755_H
#ifndef RENDERER_T1283798381_H
#define RENDERER_T1283798381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t1283798381  : public Component_t4071573185
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T1283798381_H
#ifndef CAMERA_T2649750401_H
#define CAMERA_T2649750401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t2649750401  : public Behaviour_t4244135871
{
public:

public:
};

struct Camera_t2649750401_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t1318689021 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t1318689021 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t1318689021 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t2649750401_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t1318689021 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t1318689021 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t1318689021 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t2649750401_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t1318689021 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t1318689021 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t1318689021 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t2649750401_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t1318689021 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t1318689021 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t1318689021 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T2649750401_H
#ifndef LIGHT_T2433071390_H
#define LIGHT_T2433071390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Light
struct  Light_t2433071390  : public Behaviour_t4244135871
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_2;

public:
	inline static int32_t get_offset_of_m_BakedIndex_2() { return static_cast<int32_t>(offsetof(Light_t2433071390, ___m_BakedIndex_2)); }
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
#endif // LIGHT_T2433071390_H
#ifndef AESMANAGED_T3534620588_H
#define AESMANAGED_T3534620588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesManaged
struct  AesManaged_t3534620588  : public Aes_t3330042261
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESMANAGED_T3534620588_H
#ifndef MESHRENDERER_T2519042291_H
#define MESHRENDERER_T2519042291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t2519042291  : public Renderer_t1283798381
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T2519042291_H
#ifndef GUILAYER_T1675393267_H
#define GUILAYER_T1675393267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t1675393267  : public Behaviour_t4244135871
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T1675393267_H
#ifndef MONOBEHAVIOUR_T1608826144_H
#define MONOBEHAVIOUR_T1608826144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1608826144  : public Behaviour_t4244135871
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1608826144_H
#ifndef GUIELEMENT_T3911631261_H
#define GUIELEMENT_T3911631261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t3911631261  : public Behaviour_t4244135871
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T3911631261_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { sizeof (PrivateKeySelectionCallback_t3078455344), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (U3CPrivateImplementationDetailsU3E_t2663141216), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1201[15] = 
{
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D5_1(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D6_2(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D7_3(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D8_4(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D9_5(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D11_6(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D12_7(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D13_8(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D14_9(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D15_10(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D16_11(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D17_12(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t2663141216_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (U24ArrayTypeU243132_t2815594864)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t2815594864 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (U24ArrayTypeU24256_t2379278991)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t2379278991 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (U24ArrayTypeU2420_t1834806258)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t1834806258 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { sizeof (U24ArrayTypeU2432_t2106330233)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t2106330233 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { sizeof (U24ArrayTypeU2448_t4113670917)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t4113670917 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { sizeof (U24ArrayTypeU2464_t631622981)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t631622981 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (U24ArrayTypeU2412_t4287920446)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t4287920446 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (U24ArrayTypeU2416_t2564432087)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t2564432087 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (U24ArrayTypeU244_t2693593747)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU244_t2693593747 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (U3CModuleU3E_t384268695), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (ExtensionAttribute_t2731560764), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (Locale_t4075942268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (MonoTODOAttribute_t6180509), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (KeyBuilder_t2065362040), -1, sizeof(KeyBuilder_t2065362040_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1215[1] = 
{
	KeyBuilder_t2065362040_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (SymmetricTransform_t1156258110), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1216[12] = 
{
	SymmetricTransform_t1156258110::get_offset_of_algo_0(),
	SymmetricTransform_t1156258110::get_offset_of_encrypt_1(),
	SymmetricTransform_t1156258110::get_offset_of_BlockSizeByte_2(),
	SymmetricTransform_t1156258110::get_offset_of_temp_3(),
	SymmetricTransform_t1156258110::get_offset_of_temp2_4(),
	SymmetricTransform_t1156258110::get_offset_of_workBuff_5(),
	SymmetricTransform_t1156258110::get_offset_of_workout_6(),
	SymmetricTransform_t1156258110::get_offset_of_FeedBackByte_7(),
	SymmetricTransform_t1156258110::get_offset_of_FeedBackIter_8(),
	SymmetricTransform_t1156258110::get_offset_of_m_disposed_9(),
	SymmetricTransform_t1156258110::get_offset_of_lastBlock_10(),
	SymmetricTransform_t1156258110::get_offset_of__rng_11(),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (Check_t1390106652), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (Enumerable_t1187548174), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (Fallback_t4044157736)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1223[3] = 
{
	Fallback_t4044157736::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (Aes_t3330042261), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (AesManaged_t3534620588), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (AesTransform_t52603476), -1, sizeof(AesTransform_t52603476_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1227[14] = 
{
	AesTransform_t52603476::get_offset_of_expandedKey_12(),
	AesTransform_t52603476::get_offset_of_Nk_13(),
	AesTransform_t52603476::get_offset_of_Nr_14(),
	AesTransform_t52603476_StaticFields::get_offset_of_Rcon_15(),
	AesTransform_t52603476_StaticFields::get_offset_of_SBox_16(),
	AesTransform_t52603476_StaticFields::get_offset_of_iSBox_17(),
	AesTransform_t52603476_StaticFields::get_offset_of_T0_18(),
	AesTransform_t52603476_StaticFields::get_offset_of_T1_19(),
	AesTransform_t52603476_StaticFields::get_offset_of_T2_20(),
	AesTransform_t52603476_StaticFields::get_offset_of_T3_21(),
	AesTransform_t52603476_StaticFields::get_offset_of_iT0_22(),
	AesTransform_t52603476_StaticFields::get_offset_of_iT1_23(),
	AesTransform_t52603476_StaticFields::get_offset_of_iT2_24(),
	AesTransform_t52603476_StaticFields::get_offset_of_iT3_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (Action_t1645153005), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (U3CPrivateImplementationDetailsU3E_t2663141217), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1232[12] = 
{
	U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields::get_offset_of_U24U24fieldU2D7_7(),
	U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields::get_offset_of_U24U24fieldU2D8_8(),
	U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields::get_offset_of_U24U24fieldU2D9_9(),
	U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields::get_offset_of_U24U24fieldU2D10_10(),
	U3CPrivateImplementationDetailsU3E_t2663141217_StaticFields::get_offset_of_U24U24fieldU2D11_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (U24ArrayTypeU24136_t24077241)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t24077241 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (U24ArrayTypeU24120_t2927445639)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t2927445639 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (U24ArrayTypeU24256_t2379278992)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t2379278992 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (U24ArrayTypeU241024_t1442067954)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t1442067954 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (U3CModuleU3E_t384268696), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (Application_t2459210557), -1, sizeof(Application_t2459210557_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1238[4] = 
{
	Application_t2459210557_StaticFields::get_offset_of_lowMemory_0(),
	Application_t2459210557_StaticFields::get_offset_of_s_LogCallbackHandler_1(),
	Application_t2459210557_StaticFields::get_offset_of_s_LogCallbackHandlerThreaded_2(),
	Application_t2459210557_StaticFields::get_offset_of_onBeforeRender_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (LowMemoryCallback_t684016551), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (LogCallback_t2003081627), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (AssetBundleCreateRequest_t2845795775), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (AssetBundleRequest_t1433247939), sizeof(AssetBundleRequest_t1433247939_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { sizeof (AssetBundle_t3232145929), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (AsyncOperation_t2856492251), sizeof(AsyncOperation_t2856492251_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1244[1] = 
{
	AsyncOperation_t2856492251::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (SystemInfo_t1742180065), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (WaitForSeconds_t2702771181), sizeof(WaitForSeconds_t2702771181_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1246[1] = 
{
	WaitForSeconds_t2702771181::get_offset_of_m_Seconds_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (WaitForFixedUpdate_t1641390459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (WaitForEndOfFrame_t305644248), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (CustomYieldInstruction_t1067073651), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (Coroutine_t1726000111), sizeof(Coroutine_t1726000111_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1250[1] = 
{
	Coroutine_t1726000111::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (ScriptableObject_t4074471332), sizeof(ScriptableObject_t4074471332_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (FailedToLoadScriptObject_t3952392379), sizeof(FailedToLoadScriptObject_t3952392379_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (Behaviour_t4244135871), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (Camera_t2649750401), -1, sizeof(Camera_t2649750401_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1254[3] = 
{
	Camera_t2649750401_StaticFields::get_offset_of_onPreCull_2(),
	Camera_t2649750401_StaticFields::get_offset_of_onPreRender_3(),
	Camera_t2649750401_StaticFields::get_offset_of_onPostRender_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (CameraCallback_t1318689021), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (Component_t4071573185), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (UnhandledExceptionHandler_t961884559), -1, sizeof(UnhandledExceptionHandler_t961884559_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1257[1] = 
{
	UnhandledExceptionHandler_t961884559_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (CullingGroupEvent_t395897393)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t395897393 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1258[3] = 
{
	CullingGroupEvent_t395897393::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t395897393::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t395897393::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (CullingGroup_t1043316952), sizeof(CullingGroup_t1043316952_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1259[2] = 
{
	CullingGroup_t1043316952::get_offset_of_m_Ptr_0(),
	CullingGroup_t1043316952::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (StateChanged_t742693336), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (CursorLockMode_t4032624997)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1261[4] = 
{
	CursorLockMode_t4032624997::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (Cursor_t608911802), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (DebugLogHandler_t2587145342), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (Debug_t1981337928), -1, sizeof(Debug_t1981337928_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1264[1] = 
{
	Debug_t1981337928_StaticFields::get_offset_of_s_Logger_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (Display_t2663124716), -1, sizeof(Display_t2663124716_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1265[4] = 
{
	Display_t2663124716::get_offset_of_nativeDisplay_0(),
	Display_t2663124716_StaticFields::get_offset_of_displays_1(),
	Display_t2663124716_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t2663124716_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (DisplaysUpdatedDelegate_t342742713), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (GameObject_t1013426713), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (Gradient_t728877365), sizeof(Gradient_t728877365_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1268[1] = 
{
	Gradient_t728877365::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (MeshFilter_t2584694755), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (Renderer_t1283798381), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (MaterialPropertyBlock_t1924541810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1271[1] = 
{
	MaterialPropertyBlock_t1924541810::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (Screen_t953577781), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (MeshRenderer_t2519042291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (RectOffset_t381610910), sizeof(RectOffset_t381610910_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1274[2] = 
{
	RectOffset_t381610910::get_offset_of_m_Ptr_0(),
	RectOffset_t381610910::get_offset_of_m_SourceStyle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (GUIElement_t3911631261), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (GUILayer_t1675393267), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722)+ sizeof (RuntimeObject), sizeof(TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1277[5] = 
{
	TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722::get_offset_of_keyboardType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722::get_offset_of_autocorrection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722::get_offset_of_multiline_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722::get_offset_of_secure_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t3511613722::get_offset_of_alert_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (TouchScreenKeyboard_t183578583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1278[1] = 
{
	TouchScreenKeyboard_t183578583::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (TouchPhase_t2834080312)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1279[6] = 
{
	TouchPhase_t2834080312::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (IMECompositionMode_t3100708766)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1280[4] = 
{
	IMECompositionMode_t3100708766::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (TouchType_t139786445)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1281[4] = 
{
	TouchType_t139786445::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (Touch_t2606429895)+ sizeof (RuntimeObject), sizeof(Touch_t2606429895 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1282[14] = 
{
	Touch_t2606429895::get_offset_of_m_FingerId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_RawPosition_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_PositionDelta_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_TimeDelta_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_TapCount_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_Phase_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_Type_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_Pressure_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_maximumPossiblePressure_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_Radius_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_RadiusVariance_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_AltitudeAngle_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t2606429895::get_offset_of_m_AzimuthAngle_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (Gyroscope_t815258173), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (Input_t985087132), -1, sizeof(Input_t985087132_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1284[1] = 
{
	Input_t985087132_StaticFields::get_offset_of_m_MainGyro_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (LayerMask_t3673799211)+ sizeof (RuntimeObject), sizeof(LayerMask_t3673799211 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1285[1] = 
{
	LayerMask_t3673799211::get_offset_of_m_Mask_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (Light_t2433071390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1286[1] = 
{
	Light_t2433071390::get_offset_of_m_BakedIndex_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (Vector3_t3860339170)+ sizeof (RuntimeObject), sizeof(Vector3_t3860339170 ), sizeof(Vector3_t3860339170_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1287[14] = 
{
	0,
	Vector3_t3860339170::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t3860339170::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t3860339170::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t3860339170_StaticFields::get_offset_of_zeroVector_4(),
	Vector3_t3860339170_StaticFields::get_offset_of_oneVector_5(),
	Vector3_t3860339170_StaticFields::get_offset_of_upVector_6(),
	Vector3_t3860339170_StaticFields::get_offset_of_downVector_7(),
	Vector3_t3860339170_StaticFields::get_offset_of_leftVector_8(),
	Vector3_t3860339170_StaticFields::get_offset_of_rightVector_9(),
	Vector3_t3860339170_StaticFields::get_offset_of_forwardVector_10(),
	Vector3_t3860339170_StaticFields::get_offset_of_backVector_11(),
	Vector3_t3860339170_StaticFields::get_offset_of_positiveInfinityVector_12(),
	Vector3_t3860339170_StaticFields::get_offset_of_negativeInfinityVector_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (Quaternion_t574257729)+ sizeof (RuntimeObject), sizeof(Quaternion_t574257729 ), sizeof(Quaternion_t574257729_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1288[6] = 
{
	Quaternion_t574257729::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t574257729::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t574257729::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t574257729::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t574257729_StaticFields::get_offset_of_identityQuaternion_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (Matrix4x4_t3952841686)+ sizeof (RuntimeObject), sizeof(Matrix4x4_t3952841686 ), sizeof(Matrix4x4_t3952841686_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1289[18] = 
{
	Matrix4x4_t3952841686::get_offset_of_m00_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m10_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m20_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m30_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m01_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m11_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m21_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m31_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m02_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m12_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m22_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m32_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m03_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m13_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m23_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686::get_offset_of_m33_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix4x4_t3952841686_StaticFields::get_offset_of_zeroMatrix_16(),
	Matrix4x4_t3952841686_StaticFields::get_offset_of_identityMatrix_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (Bounds_t1097806103)+ sizeof (RuntimeObject), sizeof(Bounds_t1097806103 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1290[2] = 
{
	Bounds_t1097806103::get_offset_of_m_Center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Bounds_t1097806103::get_offset_of_m_Extents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (Mathf_t4110484911)+ sizeof (RuntimeObject), sizeof(Mathf_t4110484911 ), sizeof(Mathf_t4110484911_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1291[1] = 
{
	Mathf_t4110484911_StaticFields::get_offset_of_Epsilon_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (Keyframe_t3709638969)+ sizeof (RuntimeObject), sizeof(Keyframe_t3709638969 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1292[4] = 
{
	Keyframe_t3709638969::get_offset_of_m_Time_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t3709638969::get_offset_of_m_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t3709638969::get_offset_of_m_InTangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t3709638969::get_offset_of_m_OutTangent_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (AnimationCurve_t987490472), sizeof(AnimationCurve_t987490472_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1293[1] = 
{
	AnimationCurve_t987490472::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (Mesh_t3591735409), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (InternalShaderChannel_t3770609543)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1295[9] = 
{
	InternalShaderChannel_t3770609543::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (InternalVertexChannelType_t868426571)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1296[3] = 
{
	InternalVertexChannelType_t868426571::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (MonoBehaviour_t1608826144), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (NetworkPlayer_t421495180)+ sizeof (RuntimeObject), sizeof(NetworkPlayer_t421495180 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1298[1] = 
{
	NetworkPlayer_t421495180::get_offset_of_index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (NetworkViewID_t3074603631)+ sizeof (RuntimeObject), sizeof(NetworkViewID_t3074603631 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1299[3] = 
{
	NetworkViewID_t3074603631::get_offset_of_a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t3074603631::get_offset_of_b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t3074603631::get_offset_of_c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
