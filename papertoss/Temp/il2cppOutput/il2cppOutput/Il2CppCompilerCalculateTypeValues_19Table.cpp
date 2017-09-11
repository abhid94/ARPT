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

// UnityEngine.MeshCollider
struct MeshCollider_t3325160110;
// UnityEngine.MeshFilter
struct MeshFilter_t2563073414;
// UnityEngine.GameObject
struct GameObject_t2496653651;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct Dictionary_2_t3141663645;
// System.Void
struct Void_t3558847277;
// System.Char[]
struct CharU5BU5D_t1138245576;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t362880909;
// System.IAsyncResult
struct IAsyncResult_t1311661205;
// System.AsyncCallback
struct AsyncCallback_t195232807;
// UnityEngine.XR.iOS.UnityARAnchorManager
struct UnityARAnchorManager_t4157631778;
// UnityEngine.Camera
struct Camera_t602380994;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t1160209521;
// UnityEngine.Material
struct Material_t2677728138;
// UnityEngine.Light
struct Light_t2388334448;
// UnityEngine.Transform
struct Transform_t2199371472;
// UnityEngine.XR.iOS.UnityARSessionRunOption[]
struct UnityARSessionRunOptionU5BU5D_t2591423338;
// UnityEngine.XR.iOS.UnityARAlignment[]
struct UnityARAlignmentU5BU5D_t2621570280;
// UnityEngine.XR.iOS.UnityARPlaneDetection[]
struct UnityARPlaneDetectionU5BU5D_t1059612081;
// System.String
struct String_t;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1595079187;
// UnityEngine.Texture2D
struct Texture2D_t2287213007;
// UnityEngine.ParticleSystem
struct ParticleSystem_t617239607;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1955455935;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t2369860487;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t959892342;




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
#ifndef UNITYARUTILITY_T905158606_H
#define UNITYARUTILITY_T905158606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUtility
struct  UnityARUtility_t905158606  : public RuntimeObject
{
public:
	// UnityEngine.MeshCollider UnityEngine.XR.iOS.UnityARUtility::meshCollider
	MeshCollider_t3325160110 * ___meshCollider_0;
	// UnityEngine.MeshFilter UnityEngine.XR.iOS.UnityARUtility::meshFilter
	MeshFilter_t2563073414 * ___meshFilter_1;

public:
	inline static int32_t get_offset_of_meshCollider_0() { return static_cast<int32_t>(offsetof(UnityARUtility_t905158606, ___meshCollider_0)); }
	inline MeshCollider_t3325160110 * get_meshCollider_0() const { return ___meshCollider_0; }
	inline MeshCollider_t3325160110 ** get_address_of_meshCollider_0() { return &___meshCollider_0; }
	inline void set_meshCollider_0(MeshCollider_t3325160110 * value)
	{
		___meshCollider_0 = value;
		Il2CppCodeGenWriteBarrier((&___meshCollider_0), value);
	}

	inline static int32_t get_offset_of_meshFilter_1() { return static_cast<int32_t>(offsetof(UnityARUtility_t905158606, ___meshFilter_1)); }
	inline MeshFilter_t2563073414 * get_meshFilter_1() const { return ___meshFilter_1; }
	inline MeshFilter_t2563073414 ** get_address_of_meshFilter_1() { return &___meshFilter_1; }
	inline void set_meshFilter_1(MeshFilter_t2563073414 * value)
	{
		___meshFilter_1 = value;
		Il2CppCodeGenWriteBarrier((&___meshFilter_1), value);
	}
};

struct UnityARUtility_t905158606_StaticFields
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::planePrefab
	GameObject_t2496653651 * ___planePrefab_2;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARUtility_t905158606_StaticFields, ___planePrefab_2)); }
	inline GameObject_t2496653651 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t2496653651 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t2496653651 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___planePrefab_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUTILITY_T905158606_H
#ifndef UNITYARANCHORMANAGER_T4157631778_H
#define UNITYARANCHORMANAGER_T4157631778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorManager
struct  UnityARAnchorManager_t4157631778  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject> UnityEngine.XR.iOS.UnityARAnchorManager::planeAnchorMap
	Dictionary_2_t3141663645 * ___planeAnchorMap_0;

public:
	inline static int32_t get_offset_of_planeAnchorMap_0() { return static_cast<int32_t>(offsetof(UnityARAnchorManager_t4157631778, ___planeAnchorMap_0)); }
	inline Dictionary_2_t3141663645 * get_planeAnchorMap_0() const { return ___planeAnchorMap_0; }
	inline Dictionary_2_t3141663645 ** get_address_of_planeAnchorMap_0() { return &___planeAnchorMap_0; }
	inline void set_planeAnchorMap_0(Dictionary_2_t3141663645 * value)
	{
		___planeAnchorMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___planeAnchorMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORMANAGER_T4157631778_H
#ifndef VALUETYPE_T2046852776_H
#define VALUETYPE_T2046852776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2046852776  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2046852776_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2046852776_marshaled_com
{
};
#endif // VALUETYPE_T2046852776_H
#ifndef UNITYARMATRIXOPS_T3091397103_H
#define UNITYARMATRIXOPS_T3091397103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrixOps
struct  UnityARMatrixOps_t3091397103  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIXOPS_T3091397103_H
#ifndef U24ARRAYTYPEU3D32_T481860956_H
#define U24ARRAYTYPEU3D32_T481860956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=32
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D32_t481860956 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D32_t481860956__padding[32];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D32_T481860956_H
#ifndef VOID_T3558847277_H
#define VOID_T3558847277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3558847277 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3558847277_H
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
#ifndef U24ARRAYTYPEU3D24_T3121479403_H
#define U24ARRAYTYPEU3D24_T3121479403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t3121479403 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t3121479403__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T3121479403_H
#ifndef VECTOR4_T1187154023_H
#define VECTOR4_T1187154023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t1187154023 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t1187154023, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t1187154023, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t1187154023, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t1187154023, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t1187154023_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t1187154023  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t1187154023  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t1187154023  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t1187154023  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t1187154023_StaticFields, ___zeroVector_5)); }
	inline Vector4_t1187154023  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t1187154023 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t1187154023  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t1187154023_StaticFields, ___oneVector_6)); }
	inline Vector4_t1187154023  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t1187154023 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t1187154023  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t1187154023_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t1187154023  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t1187154023 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t1187154023  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t1187154023_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t1187154023  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t1187154023 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t1187154023  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T1187154023_H
#ifndef ENUM_T1956480291_H
#define ENUM_T1956480291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1956480291  : public ValueType_t2046852776
{
public:

public:
};

struct Enum_t1956480291_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1138245576* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1956480291_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1138245576* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1138245576** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1138245576* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1956480291_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1956480291_marshaled_com
{
};
#endif // ENUM_T1956480291_H
#ifndef ARPLANEANCHORALIGNMENT_T3611535595_H
#define ARPLANEANCHORALIGNMENT_T3611535595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t3611535595 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t3611535595, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T3611535595_H
#ifndef ARTRACKINGSTATE_T1612488337_H
#define ARTRACKINGSTATE_T1612488337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t1612488337 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t1612488337, ___value___1)); }
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
#endif // ARTRACKINGSTATE_T1612488337_H
#ifndef SCREENORIENTATION_T3426930579_H
#define SCREENORIENTATION_T3426930579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t3426930579 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenOrientation_t3426930579, ___value___1)); }
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
#endif // SCREENORIENTATION_T3426930579_H
#ifndef ARTRACKINGSTATEREASON_T592577216_H
#define ARTRACKINGSTATEREASON_T592577216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t592577216 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t592577216, ___value___1)); }
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
#endif // ARTRACKINGSTATEREASON_T592577216_H
#ifndef UNITYVIDEOPARAMS_T1256760202_H
#define UNITYVIDEOPARAMS_T1256760202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t1256760202 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	IntPtr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1256760202, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1256760202, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1256760202, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1256760202, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1256760202, ___cvPixelBufferPtr_4)); }
	inline IntPtr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline IntPtr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(IntPtr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T1256760202_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1394525510_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1394525510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1394525510  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1394525510_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8E7629AD5AF686202B8CB7C014505C432FFE31E6
	U24ArrayTypeU3D24_t3121479403  ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-6B273DEB9A2A2FF1A442D4905B4E37586A35F34D
	U24ArrayTypeU3D32_t481860956  ___U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_1;

public:
	inline static int32_t get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1394525510_StaticFields, ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0)); }
	inline U24ArrayTypeU3D24_t3121479403  get_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() const { return ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0; }
	inline U24ArrayTypeU3D24_t3121479403 * get_address_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() { return &___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0; }
	inline void set_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0(U24ArrayTypeU3D24_t3121479403  value)
	{
		___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1394525510_StaticFields, ___U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_1)); }
	inline U24ArrayTypeU3D32_t481860956  get_U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_1() const { return ___U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_1; }
	inline U24ArrayTypeU3D32_t481860956 * get_address_of_U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_1() { return &___U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_1; }
	inline void set_U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_1(U24ArrayTypeU3D32_t481860956  value)
	{
		___U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1394525510_H
#ifndef UNITYARMATRIX4X4_T355095407_H
#define UNITYARMATRIX4X4_T355095407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t355095407 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t1187154023  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t1187154023  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t1187154023  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t1187154023  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t355095407, ___column0_0)); }
	inline Vector4_t1187154023  get_column0_0() const { return ___column0_0; }
	inline Vector4_t1187154023 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t1187154023  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t355095407, ___column1_1)); }
	inline Vector4_t1187154023  get_column1_1() const { return ___column1_1; }
	inline Vector4_t1187154023 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t1187154023  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t355095407, ___column2_2)); }
	inline Vector4_t1187154023  get_column2_2() const { return ___column2_2; }
	inline Vector4_t1187154023 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t1187154023  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t355095407, ___column3_3)); }
	inline Vector4_t1187154023  get_column3_3() const { return ___column3_3; }
	inline Vector4_t1187154023 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t1187154023  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T355095407_H
#ifndef DELEGATE_T60779375_H
#define DELEGATE_T60779375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t60779375  : public RuntimeObject
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
	DelegateData_t362880909 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t60779375, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t60779375, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t60779375, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t60779375, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t60779375, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t60779375, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t60779375, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t60779375, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t60779375, ___data_8)); }
	inline DelegateData_t362880909 * get_data_8() const { return ___data_8; }
	inline DelegateData_t362880909 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t362880909 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T60779375_H
#ifndef OBJECT_T2063866659_H
#define OBJECT_T2063866659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2063866659  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2063866659, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2063866659_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2063866659_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t2063866659_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2063866659_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2063866659_H
#ifndef COMPONENT_T1250674375_H
#define COMPONENT_T1250674375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1250674375  : public Object_t2063866659
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1250674375_H
#ifndef MULTICASTDELEGATE_T4015830114_H
#define MULTICASTDELEGATE_T4015830114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t4015830114  : public Delegate_t60779375
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t4015830114 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t4015830114 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t4015830114, ___prev_9)); }
	inline MulticastDelegate_t4015830114 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t4015830114 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t4015830114 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t4015830114, ___kpm_next_10)); }
	inline MulticastDelegate_t4015830114 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t4015830114 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t4015830114 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T4015830114_H
#ifndef UNITYARANCHORDATA_T1981801636_H
#define UNITYARANCHORDATA_T1981801636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t1981801636 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	IntPtr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_t355095407  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_t1187154023  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_t1187154023  ___extent_4;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1981801636, ___ptrIdentifier_0)); }
	inline IntPtr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline IntPtr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(IntPtr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1981801636, ___transform_1)); }
	inline UnityARMatrix4x4_t355095407  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t355095407 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t355095407  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1981801636, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1981801636, ___center_3)); }
	inline Vector4_t1187154023  get_center_3() const { return ___center_3; }
	inline Vector4_t1187154023 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_t1187154023  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1981801636, ___extent_4)); }
	inline Vector4_t1187154023  get_extent_4() const { return ___extent_4; }
	inline Vector4_t1187154023 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_t1187154023  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORDATA_T1981801636_H
#ifndef UNITYARUSERANCHORDATA_T4190912988_H
#define UNITYARUSERANCHORDATA_T4190912988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t4190912988 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	IntPtr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_t355095407  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t4190912988, ___ptrIdentifier_0)); }
	inline IntPtr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline IntPtr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(IntPtr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t4190912988, ___transform_1)); }
	inline UnityARMatrix4x4_t355095407  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t355095407 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t355095407  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORDATA_T4190912988_H
#ifndef INTERNAL_UNITYARCAMERA_T324163982_H
#define INTERNAL_UNITYARCAMERA_T324163982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t324163982 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t355095407  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t355095407  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t1256760202  ___videoParams_4;
	// System.Single UnityEngine.XR.iOS.internal_UnityARCamera::ambientIntensity
	float ___ambientIntensity_5;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_6;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t324163982, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t355095407  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t355095407 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t355095407  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t324163982, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t355095407  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t355095407 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t355095407  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t324163982, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t324163982, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t324163982, ___videoParams_4)); }
	inline UnityVideoParams_t1256760202  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t1256760202 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t1256760202  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_ambientIntensity_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t324163982, ___ambientIntensity_5)); }
	inline float get_ambientIntensity_5() const { return ___ambientIntensity_5; }
	inline float* get_address_of_ambientIntensity_5() { return &___ambientIntensity_5; }
	inline void set_ambientIntensity_5(float value)
	{
		___ambientIntensity_5 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t324163982, ___getPointCloudData_6)); }
	inline uint32_t get_getPointCloudData_6() const { return ___getPointCloudData_6; }
	inline uint32_t* get_address_of_getPointCloudData_6() { return &___getPointCloudData_6; }
	inline void set_getPointCloudData_6(uint32_t value)
	{
		___getPointCloudData_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_UNITYARCAMERA_T324163982_H
#ifndef INTERNAL_ARANCHORADDED_T385670344_H
#define INTERNAL_ARANCHORADDED_T385670344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct  internal_ARAnchorAdded_t385670344  : public MulticastDelegate_t4015830114
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORADDED_T385670344_H
#ifndef INTERNAL_ARANCHORUPDATED_T1710916189_H
#define INTERNAL_ARANCHORUPDATED_T1710916189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct  internal_ARAnchorUpdated_t1710916189  : public MulticastDelegate_t4015830114
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORUPDATED_T1710916189_H
#ifndef BEHAVIOUR_T504469473_H
#define BEHAVIOUR_T504469473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t504469473  : public Component_t1250674375
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T504469473_H
#ifndef INTERNAL_ARANCHORREMOVED_T718015887_H
#define INTERNAL_ARANCHORREMOVED_T718015887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct  internal_ARAnchorRemoved_t718015887  : public MulticastDelegate_t4015830114
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORREMOVED_T718015887_H
#ifndef INTERNAL_ARUSERANCHORADDED_T1505469091_H
#define INTERNAL_ARUSERANCHORADDED_T1505469091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct  internal_ARUserAnchorAdded_t1505469091  : public MulticastDelegate_t4015830114
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORADDED_T1505469091_H
#ifndef INTERNAL_ARUSERANCHORUPDATED_T846076250_H
#define INTERNAL_ARUSERANCHORUPDATED_T846076250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct  internal_ARUserAnchorUpdated_t846076250  : public MulticastDelegate_t4015830114
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORUPDATED_T846076250_H
#ifndef INTERNAL_ARUSERANCHORREMOVED_T4128398264_H
#define INTERNAL_ARUSERANCHORREMOVED_T4128398264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct  internal_ARUserAnchorRemoved_t4128398264  : public MulticastDelegate_t4015830114
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORREMOVED_T4128398264_H
#ifndef INTERNAL_ARSESSIONTRACKINGCHANGED_T2068347399_H
#define INTERNAL_ARSESSIONTRACKINGCHANGED_T2068347399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct  internal_ARSessionTrackingChanged_t2068347399  : public MulticastDelegate_t4015830114
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARSESSIONTRACKINGCHANGED_T2068347399_H
#ifndef MONOBEHAVIOUR_T1483062609_H
#define MONOBEHAVIOUR_T1483062609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1483062609  : public Behaviour_t504469473
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1483062609_H
#ifndef UNITYARGENERATEPLANE_T2855629276_H
#define UNITYARGENERATEPLANE_T2855629276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARGeneratePlane
struct  UnityARGeneratePlane_t2855629276  : public MonoBehaviour_t1483062609
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARGeneratePlane::planePrefab
	GameObject_t2496653651 * ___planePrefab_2;
	// UnityEngine.XR.iOS.UnityARAnchorManager UnityEngine.XR.iOS.UnityARGeneratePlane::unityARAnchorManager
	UnityARAnchorManager_t4157631778 * ___unityARAnchorManager_3;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARGeneratePlane_t2855629276, ___planePrefab_2)); }
	inline GameObject_t2496653651 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t2496653651 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t2496653651 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___planePrefab_2), value);
	}

	inline static int32_t get_offset_of_unityARAnchorManager_3() { return static_cast<int32_t>(offsetof(UnityARGeneratePlane_t2855629276, ___unityARAnchorManager_3)); }
	inline UnityARAnchorManager_t4157631778 * get_unityARAnchorManager_3() const { return ___unityARAnchorManager_3; }
	inline UnityARAnchorManager_t4157631778 ** get_address_of_unityARAnchorManager_3() { return &___unityARAnchorManager_3; }
	inline void set_unityARAnchorManager_3(UnityARAnchorManager_t4157631778 * value)
	{
		___unityARAnchorManager_3 = value;
		Il2CppCodeGenWriteBarrier((&___unityARAnchorManager_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARGENERATEPLANE_T2855629276_H
#ifndef UNITYARCAMERAMANAGER_T761185944_H
#define UNITYARCAMERAMANAGER_T761185944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraManager
struct  UnityARCameraManager_t761185944  : public MonoBehaviour_t1483062609
{
public:
	// UnityEngine.Camera UnityARCameraManager::m_camera
	Camera_t602380994 * ___m_camera_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityARCameraManager::m_session
	UnityARSessionNativeInterface_t1160209521 * ___m_session_3;
	// UnityEngine.Material UnityARCameraManager::savedClearMaterial
	Material_t2677728138 * ___savedClearMaterial_4;

public:
	inline static int32_t get_offset_of_m_camera_2() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t761185944, ___m_camera_2)); }
	inline Camera_t602380994 * get_m_camera_2() const { return ___m_camera_2; }
	inline Camera_t602380994 ** get_address_of_m_camera_2() { return &___m_camera_2; }
	inline void set_m_camera_2(Camera_t602380994 * value)
	{
		___m_camera_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_camera_2), value);
	}

	inline static int32_t get_offset_of_m_session_3() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t761185944, ___m_session_3)); }
	inline UnityARSessionNativeInterface_t1160209521 * get_m_session_3() const { return ___m_session_3; }
	inline UnityARSessionNativeInterface_t1160209521 ** get_address_of_m_session_3() { return &___m_session_3; }
	inline void set_m_session_3(UnityARSessionNativeInterface_t1160209521 * value)
	{
		___m_session_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_3), value);
	}

	inline static int32_t get_offset_of_savedClearMaterial_4() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t761185944, ___savedClearMaterial_4)); }
	inline Material_t2677728138 * get_savedClearMaterial_4() const { return ___savedClearMaterial_4; }
	inline Material_t2677728138 ** get_address_of_savedClearMaterial_4() { return &___savedClearMaterial_4; }
	inline void set_savedClearMaterial_4(Material_t2677728138 * value)
	{
		___savedClearMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___savedClearMaterial_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARCAMERAMANAGER_T761185944_H
#ifndef UNITYARCAMERANEARFAR_T3527908708_H
#define UNITYARCAMERANEARFAR_T3527908708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraNearFar
struct  UnityARCameraNearFar_t3527908708  : public MonoBehaviour_t1483062609
{
public:
	// UnityEngine.Camera UnityARCameraNearFar::attachedCamera
	Camera_t602380994 * ___attachedCamera_2;
	// System.Single UnityARCameraNearFar::currentNearZ
	float ___currentNearZ_3;
	// System.Single UnityARCameraNearFar::currentFarZ
	float ___currentFarZ_4;

public:
	inline static int32_t get_offset_of_attachedCamera_2() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t3527908708, ___attachedCamera_2)); }
	inline Camera_t602380994 * get_attachedCamera_2() const { return ___attachedCamera_2; }
	inline Camera_t602380994 ** get_address_of_attachedCamera_2() { return &___attachedCamera_2; }
	inline void set_attachedCamera_2(Camera_t602380994 * value)
	{
		___attachedCamera_2 = value;
		Il2CppCodeGenWriteBarrier((&___attachedCamera_2), value);
	}

	inline static int32_t get_offset_of_currentNearZ_3() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t3527908708, ___currentNearZ_3)); }
	inline float get_currentNearZ_3() const { return ___currentNearZ_3; }
	inline float* get_address_of_currentNearZ_3() { return &___currentNearZ_3; }
	inline void set_currentNearZ_3(float value)
	{
		___currentNearZ_3 = value;
	}

	inline static int32_t get_offset_of_currentFarZ_4() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t3527908708, ___currentFarZ_4)); }
	inline float get_currentFarZ_4() const { return ___currentFarZ_4; }
	inline float* get_address_of_currentFarZ_4() { return &___currentFarZ_4; }
	inline void set_currentFarZ_4(float value)
	{
		___currentFarZ_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARCAMERANEARFAR_T3527908708_H
#ifndef UNITYARAMBIENT_T1858330646_H
#define UNITYARAMBIENT_T1858330646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAmbient
struct  UnityARAmbient_t1858330646  : public MonoBehaviour_t1483062609
{
public:
	// UnityEngine.Light UnityEngine.XR.iOS.UnityARAmbient::l
	Light_t2388334448 * ___l_2;

public:
	inline static int32_t get_offset_of_l_2() { return static_cast<int32_t>(offsetof(UnityARAmbient_t1858330646, ___l_2)); }
	inline Light_t2388334448 * get_l_2() const { return ___l_2; }
	inline Light_t2388334448 ** get_address_of_l_2() { return &___l_2; }
	inline void set_l_2(Light_t2388334448 * value)
	{
		___l_2 = value;
		Il2CppCodeGenWriteBarrier((&___l_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARAMBIENT_T1858330646_H
#ifndef UNITYARHITTESTEXAMPLE_T1766310026_H
#define UNITYARHITTESTEXAMPLE_T1766310026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestExample
struct  UnityARHitTestExample_t1766310026  : public MonoBehaviour_t1483062609
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.UnityARHitTestExample::m_HitTransform
	Transform_t2199371472 * ___m_HitTransform_2;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t1766310026, ___m_HitTransform_2)); }
	inline Transform_t2199371472 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t2199371472 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t2199371472 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARHITTESTEXAMPLE_T1766310026_H
#ifndef UNITYARKITCONTROL_T128618106_H
#define UNITYARKITCONTROL_T128618106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARKitControl
struct  UnityARKitControl_t128618106  : public MonoBehaviour_t1483062609
{
public:
	// UnityEngine.XR.iOS.UnityARSessionRunOption[] UnityEngine.XR.iOS.UnityARKitControl::runOptions
	UnityARSessionRunOptionU5BU5D_t2591423338* ___runOptions_2;
	// UnityEngine.XR.iOS.UnityARAlignment[] UnityEngine.XR.iOS.UnityARKitControl::alignmentOptions
	UnityARAlignmentU5BU5D_t2621570280* ___alignmentOptions_3;
	// UnityEngine.XR.iOS.UnityARPlaneDetection[] UnityEngine.XR.iOS.UnityARKitControl::planeOptions
	UnityARPlaneDetectionU5BU5D_t1059612081* ___planeOptions_4;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentOptionIndex
	int32_t ___currentOptionIndex_5;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentAlignmentIndex
	int32_t ___currentAlignmentIndex_6;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentPlaneIndex
	int32_t ___currentPlaneIndex_7;

public:
	inline static int32_t get_offset_of_runOptions_2() { return static_cast<int32_t>(offsetof(UnityARKitControl_t128618106, ___runOptions_2)); }
	inline UnityARSessionRunOptionU5BU5D_t2591423338* get_runOptions_2() const { return ___runOptions_2; }
	inline UnityARSessionRunOptionU5BU5D_t2591423338** get_address_of_runOptions_2() { return &___runOptions_2; }
	inline void set_runOptions_2(UnityARSessionRunOptionU5BU5D_t2591423338* value)
	{
		___runOptions_2 = value;
		Il2CppCodeGenWriteBarrier((&___runOptions_2), value);
	}

	inline static int32_t get_offset_of_alignmentOptions_3() { return static_cast<int32_t>(offsetof(UnityARKitControl_t128618106, ___alignmentOptions_3)); }
	inline UnityARAlignmentU5BU5D_t2621570280* get_alignmentOptions_3() const { return ___alignmentOptions_3; }
	inline UnityARAlignmentU5BU5D_t2621570280** get_address_of_alignmentOptions_3() { return &___alignmentOptions_3; }
	inline void set_alignmentOptions_3(UnityARAlignmentU5BU5D_t2621570280* value)
	{
		___alignmentOptions_3 = value;
		Il2CppCodeGenWriteBarrier((&___alignmentOptions_3), value);
	}

	inline static int32_t get_offset_of_planeOptions_4() { return static_cast<int32_t>(offsetof(UnityARKitControl_t128618106, ___planeOptions_4)); }
	inline UnityARPlaneDetectionU5BU5D_t1059612081* get_planeOptions_4() const { return ___planeOptions_4; }
	inline UnityARPlaneDetectionU5BU5D_t1059612081** get_address_of_planeOptions_4() { return &___planeOptions_4; }
	inline void set_planeOptions_4(UnityARPlaneDetectionU5BU5D_t1059612081* value)
	{
		___planeOptions_4 = value;
		Il2CppCodeGenWriteBarrier((&___planeOptions_4), value);
	}

	inline static int32_t get_offset_of_currentOptionIndex_5() { return static_cast<int32_t>(offsetof(UnityARKitControl_t128618106, ___currentOptionIndex_5)); }
	inline int32_t get_currentOptionIndex_5() const { return ___currentOptionIndex_5; }
	inline int32_t* get_address_of_currentOptionIndex_5() { return &___currentOptionIndex_5; }
	inline void set_currentOptionIndex_5(int32_t value)
	{
		___currentOptionIndex_5 = value;
	}

	inline static int32_t get_offset_of_currentAlignmentIndex_6() { return static_cast<int32_t>(offsetof(UnityARKitControl_t128618106, ___currentAlignmentIndex_6)); }
	inline int32_t get_currentAlignmentIndex_6() const { return ___currentAlignmentIndex_6; }
	inline int32_t* get_address_of_currentAlignmentIndex_6() { return &___currentAlignmentIndex_6; }
	inline void set_currentAlignmentIndex_6(int32_t value)
	{
		___currentAlignmentIndex_6 = value;
	}

	inline static int32_t get_offset_of_currentPlaneIndex_7() { return static_cast<int32_t>(offsetof(UnityARKitControl_t128618106, ___currentPlaneIndex_7)); }
	inline int32_t get_currentPlaneIndex_7() const { return ___currentPlaneIndex_7; }
	inline int32_t* get_address_of_currentPlaneIndex_7() { return &___currentPlaneIndex_7; }
	inline void set_currentPlaneIndex_7(int32_t value)
	{
		___currentPlaneIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARKITCONTROL_T128618106_H
#ifndef UNITYARUSERANCHORCOMPONENT_T2359552977_H
#define UNITYARUSERANCHORCOMPONENT_T2359552977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorComponent
struct  UnityARUserAnchorComponent_t2359552977  : public MonoBehaviour_t1483062609
{
public:
	// System.String UnityEngine.XR.iOS.UnityARUserAnchorComponent::m_AnchorId
	String_t* ___m_AnchorId_2;

public:
	inline static int32_t get_offset_of_m_AnchorId_2() { return static_cast<int32_t>(offsetof(UnityARUserAnchorComponent_t2359552977, ___m_AnchorId_2)); }
	inline String_t* get_m_AnchorId_2() const { return ___m_AnchorId_2; }
	inline String_t** get_address_of_m_AnchorId_2() { return &___m_AnchorId_2; }
	inline void set_m_AnchorId_2(String_t* value)
	{
		___m_AnchorId_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnchorId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORCOMPONENT_T2359552977_H
#ifndef UNITYARVIDEO_T536100554_H
#define UNITYARVIDEO_T536100554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideo
struct  UnityARVideo_t536100554  : public MonoBehaviour_t1483062609
{
public:
	// UnityEngine.Material UnityEngine.XR.iOS.UnityARVideo::m_ClearMaterial
	Material_t2677728138 * ___m_ClearMaterial_2;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.iOS.UnityARVideo::m_VideoCommandBuffer
	CommandBuffer_t1595079187 * ___m_VideoCommandBuffer_3;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureY
	Texture2D_t2287213007 * ____videoTextureY_4;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureCbCr
	Texture2D_t2287213007 * ____videoTextureCbCr_5;
	// System.Boolean UnityEngine.XR.iOS.UnityARVideo::bCommandBufferInitialized
	bool ___bCommandBufferInitialized_6;
	// System.Single UnityEngine.XR.iOS.UnityARVideo::fTexCoordScale
	float ___fTexCoordScale_7;
	// UnityEngine.ScreenOrientation UnityEngine.XR.iOS.UnityARVideo::screenOrientation
	int32_t ___screenOrientation_8;

public:
	inline static int32_t get_offset_of_m_ClearMaterial_2() { return static_cast<int32_t>(offsetof(UnityARVideo_t536100554, ___m_ClearMaterial_2)); }
	inline Material_t2677728138 * get_m_ClearMaterial_2() const { return ___m_ClearMaterial_2; }
	inline Material_t2677728138 ** get_address_of_m_ClearMaterial_2() { return &___m_ClearMaterial_2; }
	inline void set_m_ClearMaterial_2(Material_t2677728138 * value)
	{
		___m_ClearMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClearMaterial_2), value);
	}

	inline static int32_t get_offset_of_m_VideoCommandBuffer_3() { return static_cast<int32_t>(offsetof(UnityARVideo_t536100554, ___m_VideoCommandBuffer_3)); }
	inline CommandBuffer_t1595079187 * get_m_VideoCommandBuffer_3() const { return ___m_VideoCommandBuffer_3; }
	inline CommandBuffer_t1595079187 ** get_address_of_m_VideoCommandBuffer_3() { return &___m_VideoCommandBuffer_3; }
	inline void set_m_VideoCommandBuffer_3(CommandBuffer_t1595079187 * value)
	{
		___m_VideoCommandBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoCommandBuffer_3), value);
	}

	inline static int32_t get_offset_of__videoTextureY_4() { return static_cast<int32_t>(offsetof(UnityARVideo_t536100554, ____videoTextureY_4)); }
	inline Texture2D_t2287213007 * get__videoTextureY_4() const { return ____videoTextureY_4; }
	inline Texture2D_t2287213007 ** get_address_of__videoTextureY_4() { return &____videoTextureY_4; }
	inline void set__videoTextureY_4(Texture2D_t2287213007 * value)
	{
		____videoTextureY_4 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureY_4), value);
	}

	inline static int32_t get_offset_of__videoTextureCbCr_5() { return static_cast<int32_t>(offsetof(UnityARVideo_t536100554, ____videoTextureCbCr_5)); }
	inline Texture2D_t2287213007 * get__videoTextureCbCr_5() const { return ____videoTextureCbCr_5; }
	inline Texture2D_t2287213007 ** get_address_of__videoTextureCbCr_5() { return &____videoTextureCbCr_5; }
	inline void set__videoTextureCbCr_5(Texture2D_t2287213007 * value)
	{
		____videoTextureCbCr_5 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureCbCr_5), value);
	}

	inline static int32_t get_offset_of_bCommandBufferInitialized_6() { return static_cast<int32_t>(offsetof(UnityARVideo_t536100554, ___bCommandBufferInitialized_6)); }
	inline bool get_bCommandBufferInitialized_6() const { return ___bCommandBufferInitialized_6; }
	inline bool* get_address_of_bCommandBufferInitialized_6() { return &___bCommandBufferInitialized_6; }
	inline void set_bCommandBufferInitialized_6(bool value)
	{
		___bCommandBufferInitialized_6 = value;
	}

	inline static int32_t get_offset_of_fTexCoordScale_7() { return static_cast<int32_t>(offsetof(UnityARVideo_t536100554, ___fTexCoordScale_7)); }
	inline float get_fTexCoordScale_7() const { return ___fTexCoordScale_7; }
	inline float* get_address_of_fTexCoordScale_7() { return &___fTexCoordScale_7; }
	inline void set_fTexCoordScale_7(float value)
	{
		___fTexCoordScale_7 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_8() { return static_cast<int32_t>(offsetof(UnityARVideo_t536100554, ___screenOrientation_8)); }
	inline int32_t get_screenOrientation_8() const { return ___screenOrientation_8; }
	inline int32_t* get_address_of_screenOrientation_8() { return &___screenOrientation_8; }
	inline void set_screenOrientation_8(int32_t value)
	{
		___screenOrientation_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARVIDEO_T536100554_H
#ifndef POINTCLOUDPARTICLEEXAMPLE_T53458970_H
#define POINTCLOUDPARTICLEEXAMPLE_T53458970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointCloudParticleExample
struct  PointCloudParticleExample_t53458970  : public MonoBehaviour_t1483062609
{
public:
	// UnityEngine.ParticleSystem PointCloudParticleExample::pointCloudParticlePrefab
	ParticleSystem_t617239607 * ___pointCloudParticlePrefab_2;
	// System.Int32 PointCloudParticleExample::maxPointsToShow
	int32_t ___maxPointsToShow_3;
	// System.Single PointCloudParticleExample::particleSize
	float ___particleSize_4;
	// UnityEngine.Vector3[] PointCloudParticleExample::m_PointCloudData
	Vector3U5BU5D_t1955455935* ___m_PointCloudData_5;
	// System.Boolean PointCloudParticleExample::frameUpdated
	bool ___frameUpdated_6;
	// UnityEngine.ParticleSystem PointCloudParticleExample::currentPS
	ParticleSystem_t617239607 * ___currentPS_7;
	// UnityEngine.ParticleSystem/Particle[] PointCloudParticleExample::particles
	ParticleU5BU5D_t2369860487* ___particles_8;

public:
	inline static int32_t get_offset_of_pointCloudParticlePrefab_2() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t53458970, ___pointCloudParticlePrefab_2)); }
	inline ParticleSystem_t617239607 * get_pointCloudParticlePrefab_2() const { return ___pointCloudParticlePrefab_2; }
	inline ParticleSystem_t617239607 ** get_address_of_pointCloudParticlePrefab_2() { return &___pointCloudParticlePrefab_2; }
	inline void set_pointCloudParticlePrefab_2(ParticleSystem_t617239607 * value)
	{
		___pointCloudParticlePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudParticlePrefab_2), value);
	}

	inline static int32_t get_offset_of_maxPointsToShow_3() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t53458970, ___maxPointsToShow_3)); }
	inline int32_t get_maxPointsToShow_3() const { return ___maxPointsToShow_3; }
	inline int32_t* get_address_of_maxPointsToShow_3() { return &___maxPointsToShow_3; }
	inline void set_maxPointsToShow_3(int32_t value)
	{
		___maxPointsToShow_3 = value;
	}

	inline static int32_t get_offset_of_particleSize_4() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t53458970, ___particleSize_4)); }
	inline float get_particleSize_4() const { return ___particleSize_4; }
	inline float* get_address_of_particleSize_4() { return &___particleSize_4; }
	inline void set_particleSize_4(float value)
	{
		___particleSize_4 = value;
	}

	inline static int32_t get_offset_of_m_PointCloudData_5() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t53458970, ___m_PointCloudData_5)); }
	inline Vector3U5BU5D_t1955455935* get_m_PointCloudData_5() const { return ___m_PointCloudData_5; }
	inline Vector3U5BU5D_t1955455935** get_address_of_m_PointCloudData_5() { return &___m_PointCloudData_5; }
	inline void set_m_PointCloudData_5(Vector3U5BU5D_t1955455935* value)
	{
		___m_PointCloudData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_5), value);
	}

	inline static int32_t get_offset_of_frameUpdated_6() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t53458970, ___frameUpdated_6)); }
	inline bool get_frameUpdated_6() const { return ___frameUpdated_6; }
	inline bool* get_address_of_frameUpdated_6() { return &___frameUpdated_6; }
	inline void set_frameUpdated_6(bool value)
	{
		___frameUpdated_6 = value;
	}

	inline static int32_t get_offset_of_currentPS_7() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t53458970, ___currentPS_7)); }
	inline ParticleSystem_t617239607 * get_currentPS_7() const { return ___currentPS_7; }
	inline ParticleSystem_t617239607 ** get_address_of_currentPS_7() { return &___currentPS_7; }
	inline void set_currentPS_7(ParticleSystem_t617239607 * value)
	{
		___currentPS_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentPS_7), value);
	}

	inline static int32_t get_offset_of_particles_8() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t53458970, ___particles_8)); }
	inline ParticleU5BU5D_t2369860487* get_particles_8() const { return ___particles_8; }
	inline ParticleU5BU5D_t2369860487** get_address_of_particles_8() { return &___particles_8; }
	inline void set_particles_8(ParticleU5BU5D_t2369860487* value)
	{
		___particles_8 = value;
		Il2CppCodeGenWriteBarrier((&___particles_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTCLOUDPARTICLEEXAMPLE_T53458970_H
#ifndef UNITYPOINTCLOUDEXAMPLE_T272574421_H
#define UNITYPOINTCLOUDEXAMPLE_T272574421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityPointCloudExample
struct  UnityPointCloudExample_t272574421  : public MonoBehaviour_t1483062609
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_2;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_t2496653651 * ___PointCloudPrefab_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_t959892342 * ___pointCloudObjects_4;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_t1955455935* ___m_PointCloudData_5;

public:
	inline static int32_t get_offset_of_numPointsToShow_2() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t272574421, ___numPointsToShow_2)); }
	inline uint32_t get_numPointsToShow_2() const { return ___numPointsToShow_2; }
	inline uint32_t* get_address_of_numPointsToShow_2() { return &___numPointsToShow_2; }
	inline void set_numPointsToShow_2(uint32_t value)
	{
		___numPointsToShow_2 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_3() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t272574421, ___PointCloudPrefab_3)); }
	inline GameObject_t2496653651 * get_PointCloudPrefab_3() const { return ___PointCloudPrefab_3; }
	inline GameObject_t2496653651 ** get_address_of_PointCloudPrefab_3() { return &___PointCloudPrefab_3; }
	inline void set_PointCloudPrefab_3(GameObject_t2496653651 * value)
	{
		___PointCloudPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudPrefab_3), value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t272574421, ___pointCloudObjects_4)); }
	inline List_1_t959892342 * get_pointCloudObjects_4() const { return ___pointCloudObjects_4; }
	inline List_1_t959892342 ** get_address_of_pointCloudObjects_4() { return &___pointCloudObjects_4; }
	inline void set_pointCloudObjects_4(List_1_t959892342 * value)
	{
		___pointCloudObjects_4 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudObjects_4), value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t272574421, ___m_PointCloudData_5)); }
	inline Vector3U5BU5D_t1955455935* get_m_PointCloudData_5() const { return ___m_PointCloudData_5; }
	inline Vector3U5BU5D_t1955455935** get_address_of_m_PointCloudData_5() { return &___m_PointCloudData_5; }
	inline void set_m_PointCloudData_5(Vector3U5BU5D_t1955455935* value)
	{
		___m_PointCloudData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPOINTCLOUDEXAMPLE_T272574421_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (internal_ARAnchorAdded_t385670344), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (internal_ARAnchorUpdated_t1710916189), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (internal_ARAnchorRemoved_t718015887), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (internal_ARUserAnchorAdded_t1505469091), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (internal_ARUserAnchorUpdated_t846076250), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (internal_ARUserAnchorRemoved_t4128398264), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (internal_ARSessionTrackingChanged_t2068347399), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (PointCloudParticleExample_t53458970), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1907[7] = 
{
	PointCloudParticleExample_t53458970::get_offset_of_pointCloudParticlePrefab_2(),
	PointCloudParticleExample_t53458970::get_offset_of_maxPointsToShow_3(),
	PointCloudParticleExample_t53458970::get_offset_of_particleSize_4(),
	PointCloudParticleExample_t53458970::get_offset_of_m_PointCloudData_5(),
	PointCloudParticleExample_t53458970::get_offset_of_frameUpdated_6(),
	PointCloudParticleExample_t53458970::get_offset_of_currentPS_7(),
	PointCloudParticleExample_t53458970::get_offset_of_particles_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (UnityARCameraManager_t761185944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1908[3] = 
{
	UnityARCameraManager_t761185944::get_offset_of_m_camera_2(),
	UnityARCameraManager_t761185944::get_offset_of_m_session_3(),
	UnityARCameraManager_t761185944::get_offset_of_savedClearMaterial_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (UnityARCameraNearFar_t3527908708), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1909[3] = 
{
	UnityARCameraNearFar_t3527908708::get_offset_of_attachedCamera_2(),
	UnityARCameraNearFar_t3527908708::get_offset_of_currentNearZ_3(),
	UnityARCameraNearFar_t3527908708::get_offset_of_currentFarZ_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (UnityARGeneratePlane_t2855629276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1910[2] = 
{
	UnityARGeneratePlane_t2855629276::get_offset_of_planePrefab_2(),
	UnityARGeneratePlane_t2855629276::get_offset_of_unityARAnchorManager_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (UnityARHitTestExample_t1766310026), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[1] = 
{
	UnityARHitTestExample_t1766310026::get_offset_of_m_HitTransform_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (UnityARKitControl_t128618106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1912[6] = 
{
	UnityARKitControl_t128618106::get_offset_of_runOptions_2(),
	UnityARKitControl_t128618106::get_offset_of_alignmentOptions_3(),
	UnityARKitControl_t128618106::get_offset_of_planeOptions_4(),
	UnityARKitControl_t128618106::get_offset_of_currentOptionIndex_5(),
	UnityARKitControl_t128618106::get_offset_of_currentAlignmentIndex_6(),
	UnityARKitControl_t128618106::get_offset_of_currentPlaneIndex_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (UnityARUserAnchorComponent_t2359552977), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1913[1] = 
{
	UnityARUserAnchorComponent_t2359552977::get_offset_of_m_AnchorId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (UnityARVideo_t536100554), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1914[7] = 
{
	UnityARVideo_t536100554::get_offset_of_m_ClearMaterial_2(),
	UnityARVideo_t536100554::get_offset_of_m_VideoCommandBuffer_3(),
	UnityARVideo_t536100554::get_offset_of__videoTextureY_4(),
	UnityARVideo_t536100554::get_offset_of__videoTextureCbCr_5(),
	UnityARVideo_t536100554::get_offset_of_bCommandBufferInitialized_6(),
	UnityARVideo_t536100554::get_offset_of_fTexCoordScale_7(),
	UnityARVideo_t536100554::get_offset_of_screenOrientation_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (UnityPointCloudExample_t272574421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1915[4] = 
{
	UnityPointCloudExample_t272574421::get_offset_of_numPointsToShow_2(),
	UnityPointCloudExample_t272574421::get_offset_of_PointCloudPrefab_3(),
	UnityPointCloudExample_t272574421::get_offset_of_pointCloudObjects_4(),
	UnityPointCloudExample_t272574421::get_offset_of_m_PointCloudData_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (UnityARAnchorManager_t4157631778), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1916[1] = 
{
	UnityARAnchorManager_t4157631778::get_offset_of_planeAnchorMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (UnityARMatrixOps_t3091397103), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (UnityARUtility_t905158606), -1, sizeof(UnityARUtility_t905158606_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1918[3] = 
{
	UnityARUtility_t905158606::get_offset_of_meshCollider_0(),
	UnityARUtility_t905158606::get_offset_of_meshFilter_1(),
	UnityARUtility_t905158606_StaticFields::get_offset_of_planePrefab_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { sizeof (UnityARAmbient_t1858330646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1919[1] = 
{
	UnityARAmbient_t1858330646::get_offset_of_l_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (U3CPrivateImplementationDetailsU3E_t1394525510), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1394525510_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1920[2] = 
{
	U3CPrivateImplementationDetailsU3E_t1394525510_StaticFields::get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0(),
	U3CPrivateImplementationDetailsU3E_t1394525510_StaticFields::get_offset_of_U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1921 = { sizeof (U24ArrayTypeU3D24_t3121479403)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D24_t3121479403 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1922 = { sizeof (U24ArrayTypeU3D32_t481860956)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D32_t481860956 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
