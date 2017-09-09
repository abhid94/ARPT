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
struct MeshCollider_t434012687;
// UnityEngine.MeshFilter
struct MeshFilter_t2584694755;
// UnityEngine.GameObject
struct GameObject_t1013426713;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct Dictionary_2_t759796033;
// System.Void
struct Void_t581647375;
// System.Char[]
struct CharU5BU5D_t2417068350;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3163495960;
// System.IAsyncResult
struct IAsyncResult_t3533804805;
// System.AsyncCallback
struct AsyncCallback_t3162852517;
// UnityEngine.Light
struct Light_t2433071390;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t4186836956;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t364062807;
// UnityEngine.Material
struct Material_t4192090433;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t481042941;
// UnityEngine.Texture2D
struct Texture2D_t3800874171;
// System.String
struct String_t;
// UnityEngine.XR.iOS.UnityARSessionRunOption[]
struct UnityARSessionRunOptionU5BU5D_t4193623186;
// UnityEngine.XR.iOS.UnityARAlignment[]
struct UnityARAlignmentU5BU5D_t825830385;
// UnityEngine.XR.iOS.UnityARPlaneDetection[]
struct UnityARPlaneDetectionU5BU5D_t1389945705;
// UnityEngine.Transform
struct Transform_t4061884384;
// UnityEngine.XR.iOS.UnityARAnchorManager
struct UnityARAnchorManager_t2276360280;
// UnityEngine.Camera
struct Camera_t2649750401;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t2770398628;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1919029474;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t2302528863;




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
#ifndef UNITYARUTILITY_T580738665_H
#define UNITYARUTILITY_T580738665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUtility
struct  UnityARUtility_t580738665  : public RuntimeObject
{
public:
	// UnityEngine.MeshCollider UnityEngine.XR.iOS.UnityARUtility::meshCollider
	MeshCollider_t434012687 * ___meshCollider_0;
	// UnityEngine.MeshFilter UnityEngine.XR.iOS.UnityARUtility::meshFilter
	MeshFilter_t2584694755 * ___meshFilter_1;

public:
	inline static int32_t get_offset_of_meshCollider_0() { return static_cast<int32_t>(offsetof(UnityARUtility_t580738665, ___meshCollider_0)); }
	inline MeshCollider_t434012687 * get_meshCollider_0() const { return ___meshCollider_0; }
	inline MeshCollider_t434012687 ** get_address_of_meshCollider_0() { return &___meshCollider_0; }
	inline void set_meshCollider_0(MeshCollider_t434012687 * value)
	{
		___meshCollider_0 = value;
		Il2CppCodeGenWriteBarrier((&___meshCollider_0), value);
	}

	inline static int32_t get_offset_of_meshFilter_1() { return static_cast<int32_t>(offsetof(UnityARUtility_t580738665, ___meshFilter_1)); }
	inline MeshFilter_t2584694755 * get_meshFilter_1() const { return ___meshFilter_1; }
	inline MeshFilter_t2584694755 ** get_address_of_meshFilter_1() { return &___meshFilter_1; }
	inline void set_meshFilter_1(MeshFilter_t2584694755 * value)
	{
		___meshFilter_1 = value;
		Il2CppCodeGenWriteBarrier((&___meshFilter_1), value);
	}
};

struct UnityARUtility_t580738665_StaticFields
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::planePrefab
	GameObject_t1013426713 * ___planePrefab_2;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARUtility_t580738665_StaticFields, ___planePrefab_2)); }
	inline GameObject_t1013426713 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t1013426713 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t1013426713 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___planePrefab_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUTILITY_T580738665_H
#ifndef UNITYARMATRIXOPS_T2309196985_H
#define UNITYARMATRIXOPS_T2309196985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrixOps
struct  UnityARMatrixOps_t2309196985  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIXOPS_T2309196985_H
#ifndef UNITYARANCHORMANAGER_T2276360280_H
#define UNITYARANCHORMANAGER_T2276360280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorManager
struct  UnityARAnchorManager_t2276360280  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject> UnityEngine.XR.iOS.UnityARAnchorManager::planeAnchorMap
	Dictionary_2_t759796033 * ___planeAnchorMap_0;

public:
	inline static int32_t get_offset_of_planeAnchorMap_0() { return static_cast<int32_t>(offsetof(UnityARAnchorManager_t2276360280, ___planeAnchorMap_0)); }
	inline Dictionary_2_t759796033 * get_planeAnchorMap_0() const { return ___planeAnchorMap_0; }
	inline Dictionary_2_t759796033 ** get_address_of_planeAnchorMap_0() { return &___planeAnchorMap_0; }
	inline void set_planeAnchorMap_0(Dictionary_2_t759796033 * value)
	{
		___planeAnchorMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___planeAnchorMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORMANAGER_T2276360280_H
#ifndef U24ARRAYTYPEU3D32_T1088984116_H
#define U24ARRAYTYPEU3D32_T1088984116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=32
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D32_t1088984116 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D32_t1088984116__padding[32];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D32_T1088984116_H
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
#ifndef VECTOR4_T4045350518_H
#define VECTOR4_T4045350518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t4045350518 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t4045350518, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t4045350518, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t4045350518, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t4045350518, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t4045350518_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t4045350518  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t4045350518  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t4045350518  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t4045350518  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t4045350518_StaticFields, ___zeroVector_5)); }
	inline Vector4_t4045350518  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t4045350518 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t4045350518  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t4045350518_StaticFields, ___oneVector_6)); }
	inline Vector4_t4045350518  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t4045350518 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t4045350518  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t4045350518_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t4045350518  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t4045350518 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t4045350518  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t4045350518_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t4045350518  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t4045350518 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t4045350518  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T4045350518_H
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
#ifndef ARTRACKINGSTATE_T3364266583_H
#define ARTRACKINGSTATE_T3364266583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t3364266583 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t3364266583, ___value___1)); }
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
#endif // ARTRACKINGSTATE_T3364266583_H
#ifndef SCREENORIENTATION_T1582207739_H
#define SCREENORIENTATION_T1582207739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t1582207739 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenOrientation_t1582207739, ___value___1)); }
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
#endif // SCREENORIENTATION_T1582207739_H
#ifndef ARTRACKINGSTATEREASON_T1219585391_H
#define ARTRACKINGSTATEREASON_T1219585391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t1219585391 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t1219585391, ___value___1)); }
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
#endif // ARTRACKINGSTATEREASON_T1219585391_H
#ifndef UNITYVIDEOPARAMS_T1420281211_H
#define UNITYVIDEOPARAMS_T1420281211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t1420281211 
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
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1420281211, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1420281211, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1420281211, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1420281211, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1420281211, ___cvPixelBufferPtr_4)); }
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
#endif // UNITYVIDEOPARAMS_T1420281211_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2663141219_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2663141219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2663141219  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2663141219_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-6B273DEB9A2A2FF1A442D4905B4E37586A35F34D
	U24ArrayTypeU3D32_t1088984116  ___U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2663141219_StaticFields, ___U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_0)); }
	inline U24ArrayTypeU3D32_t1088984116  get_U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_0() const { return ___U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_0; }
	inline U24ArrayTypeU3D32_t1088984116 * get_address_of_U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_0() { return &___U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_0; }
	inline void set_U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_0(U24ArrayTypeU3D32_t1088984116  value)
	{
		___U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2663141219_H
#ifndef UNITYARMATRIX4X4_T4180191042_H
#define UNITYARMATRIX4X4_T4180191042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t4180191042 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t4045350518  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t4045350518  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t4045350518  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t4045350518  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4180191042, ___column0_0)); }
	inline Vector4_t4045350518  get_column0_0() const { return ___column0_0; }
	inline Vector4_t4045350518 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t4045350518  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4180191042, ___column1_1)); }
	inline Vector4_t4045350518  get_column1_1() const { return ___column1_1; }
	inline Vector4_t4045350518 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t4045350518  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4180191042, ___column2_2)); }
	inline Vector4_t4045350518  get_column2_2() const { return ___column2_2; }
	inline Vector4_t4045350518 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t4045350518  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4180191042, ___column3_3)); }
	inline Vector4_t4045350518  get_column3_3() const { return ___column3_3; }
	inline Vector4_t4045350518 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t4045350518  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T4180191042_H
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
#ifndef UNITYARUSERANCHORDATA_T987510718_H
#define UNITYARUSERANCHORDATA_T987510718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t987510718 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	IntPtr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_t4180191042  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t987510718, ___ptrIdentifier_0)); }
	inline IntPtr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline IntPtr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(IntPtr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t987510718, ___transform_1)); }
	inline UnityARMatrix4x4_t4180191042  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4180191042 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4180191042  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORDATA_T987510718_H
#ifndef INTERNAL_UNITYARCAMERA_T3627853417_H
#define INTERNAL_UNITYARCAMERA_T3627853417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t3627853417 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t4180191042  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t4180191042  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t1420281211  ___videoParams_4;
	// System.Single UnityEngine.XR.iOS.internal_UnityARCamera::ambientIntensity
	float ___ambientIntensity_5;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_6;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3627853417, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t4180191042  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t4180191042 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t4180191042  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3627853417, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t4180191042  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t4180191042 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t4180191042  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3627853417, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3627853417, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3627853417, ___videoParams_4)); }
	inline UnityVideoParams_t1420281211  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t1420281211 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t1420281211  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_ambientIntensity_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3627853417, ___ambientIntensity_5)); }
	inline float get_ambientIntensity_5() const { return ___ambientIntensity_5; }
	inline float* get_address_of_ambientIntensity_5() { return &___ambientIntensity_5; }
	inline void set_ambientIntensity_5(float value)
	{
		___ambientIntensity_5 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t3627853417, ___getPointCloudData_6)); }
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
#endif // INTERNAL_UNITYARCAMERA_T3627853417_H
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
#ifndef INTERNAL_ARSESSIONTRACKINGCHANGED_T4163035963_H
#define INTERNAL_ARSESSIONTRACKINGCHANGED_T4163035963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct  internal_ARSessionTrackingChanged_t4163035963  : public MulticastDelegate_t368298302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARSESSIONTRACKINGCHANGED_T4163035963_H
#ifndef INTERNAL_ARUSERANCHORREMOVED_T1952671492_H
#define INTERNAL_ARUSERANCHORREMOVED_T1952671492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct  internal_ARUserAnchorRemoved_t1952671492  : public MulticastDelegate_t368298302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORREMOVED_T1952671492_H
#ifndef INTERNAL_ARUSERANCHORUPDATED_T4276808043_H
#define INTERNAL_ARUSERANCHORUPDATED_T4276808043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct  internal_ARUserAnchorUpdated_t4276808043  : public MulticastDelegate_t368298302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORUPDATED_T4276808043_H
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
#ifndef UNITYARAMBIENT_T1342258671_H
#define UNITYARAMBIENT_T1342258671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAmbient
struct  UnityARAmbient_t1342258671  : public MonoBehaviour_t1608826144
{
public:
	// UnityEngine.Light UnityEngine.XR.iOS.UnityARAmbient::l
	Light_t2433071390 * ___l_2;

public:
	inline static int32_t get_offset_of_l_2() { return static_cast<int32_t>(offsetof(UnityARAmbient_t1342258671, ___l_2)); }
	inline Light_t2433071390 * get_l_2() const { return ___l_2; }
	inline Light_t2433071390 ** get_address_of_l_2() { return &___l_2; }
	inline void set_l_2(Light_t2433071390 * value)
	{
		___l_2 = value;
		Il2CppCodeGenWriteBarrier((&___l_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARAMBIENT_T1342258671_H
#ifndef UNITYPOINTCLOUDEXAMPLE_T341375886_H
#define UNITYPOINTCLOUDEXAMPLE_T341375886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityPointCloudExample
struct  UnityPointCloudExample_t341375886  : public MonoBehaviour_t1608826144
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_2;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_t1013426713 * ___PointCloudPrefab_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_t4186836956 * ___pointCloudObjects_4;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_t364062807* ___m_PointCloudData_5;

public:
	inline static int32_t get_offset_of_numPointsToShow_2() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t341375886, ___numPointsToShow_2)); }
	inline uint32_t get_numPointsToShow_2() const { return ___numPointsToShow_2; }
	inline uint32_t* get_address_of_numPointsToShow_2() { return &___numPointsToShow_2; }
	inline void set_numPointsToShow_2(uint32_t value)
	{
		___numPointsToShow_2 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_3() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t341375886, ___PointCloudPrefab_3)); }
	inline GameObject_t1013426713 * get_PointCloudPrefab_3() const { return ___PointCloudPrefab_3; }
	inline GameObject_t1013426713 ** get_address_of_PointCloudPrefab_3() { return &___PointCloudPrefab_3; }
	inline void set_PointCloudPrefab_3(GameObject_t1013426713 * value)
	{
		___PointCloudPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudPrefab_3), value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t341375886, ___pointCloudObjects_4)); }
	inline List_1_t4186836956 * get_pointCloudObjects_4() const { return ___pointCloudObjects_4; }
	inline List_1_t4186836956 ** get_address_of_pointCloudObjects_4() { return &___pointCloudObjects_4; }
	inline void set_pointCloudObjects_4(List_1_t4186836956 * value)
	{
		___pointCloudObjects_4 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudObjects_4), value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t341375886, ___m_PointCloudData_5)); }
	inline Vector3U5BU5D_t364062807* get_m_PointCloudData_5() const { return ___m_PointCloudData_5; }
	inline Vector3U5BU5D_t364062807** get_address_of_m_PointCloudData_5() { return &___m_PointCloudData_5; }
	inline void set_m_PointCloudData_5(Vector3U5BU5D_t364062807* value)
	{
		___m_PointCloudData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPOINTCLOUDEXAMPLE_T341375886_H
#ifndef UNITYARVIDEO_T3355859043_H
#define UNITYARVIDEO_T3355859043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideo
struct  UnityARVideo_t3355859043  : public MonoBehaviour_t1608826144
{
public:
	// UnityEngine.Material UnityEngine.XR.iOS.UnityARVideo::m_ClearMaterial
	Material_t4192090433 * ___m_ClearMaterial_2;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.iOS.UnityARVideo::m_VideoCommandBuffer
	CommandBuffer_t481042941 * ___m_VideoCommandBuffer_3;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureY
	Texture2D_t3800874171 * ____videoTextureY_4;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureCbCr
	Texture2D_t3800874171 * ____videoTextureCbCr_5;
	// System.Boolean UnityEngine.XR.iOS.UnityARVideo::bCommandBufferInitialized
	bool ___bCommandBufferInitialized_6;
	// System.Single UnityEngine.XR.iOS.UnityARVideo::fTexCoordScale
	float ___fTexCoordScale_7;
	// UnityEngine.ScreenOrientation UnityEngine.XR.iOS.UnityARVideo::screenOrientation
	int32_t ___screenOrientation_8;

public:
	inline static int32_t get_offset_of_m_ClearMaterial_2() { return static_cast<int32_t>(offsetof(UnityARVideo_t3355859043, ___m_ClearMaterial_2)); }
	inline Material_t4192090433 * get_m_ClearMaterial_2() const { return ___m_ClearMaterial_2; }
	inline Material_t4192090433 ** get_address_of_m_ClearMaterial_2() { return &___m_ClearMaterial_2; }
	inline void set_m_ClearMaterial_2(Material_t4192090433 * value)
	{
		___m_ClearMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClearMaterial_2), value);
	}

	inline static int32_t get_offset_of_m_VideoCommandBuffer_3() { return static_cast<int32_t>(offsetof(UnityARVideo_t3355859043, ___m_VideoCommandBuffer_3)); }
	inline CommandBuffer_t481042941 * get_m_VideoCommandBuffer_3() const { return ___m_VideoCommandBuffer_3; }
	inline CommandBuffer_t481042941 ** get_address_of_m_VideoCommandBuffer_3() { return &___m_VideoCommandBuffer_3; }
	inline void set_m_VideoCommandBuffer_3(CommandBuffer_t481042941 * value)
	{
		___m_VideoCommandBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoCommandBuffer_3), value);
	}

	inline static int32_t get_offset_of__videoTextureY_4() { return static_cast<int32_t>(offsetof(UnityARVideo_t3355859043, ____videoTextureY_4)); }
	inline Texture2D_t3800874171 * get__videoTextureY_4() const { return ____videoTextureY_4; }
	inline Texture2D_t3800874171 ** get_address_of__videoTextureY_4() { return &____videoTextureY_4; }
	inline void set__videoTextureY_4(Texture2D_t3800874171 * value)
	{
		____videoTextureY_4 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureY_4), value);
	}

	inline static int32_t get_offset_of__videoTextureCbCr_5() { return static_cast<int32_t>(offsetof(UnityARVideo_t3355859043, ____videoTextureCbCr_5)); }
	inline Texture2D_t3800874171 * get__videoTextureCbCr_5() const { return ____videoTextureCbCr_5; }
	inline Texture2D_t3800874171 ** get_address_of__videoTextureCbCr_5() { return &____videoTextureCbCr_5; }
	inline void set__videoTextureCbCr_5(Texture2D_t3800874171 * value)
	{
		____videoTextureCbCr_5 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureCbCr_5), value);
	}

	inline static int32_t get_offset_of_bCommandBufferInitialized_6() { return static_cast<int32_t>(offsetof(UnityARVideo_t3355859043, ___bCommandBufferInitialized_6)); }
	inline bool get_bCommandBufferInitialized_6() const { return ___bCommandBufferInitialized_6; }
	inline bool* get_address_of_bCommandBufferInitialized_6() { return &___bCommandBufferInitialized_6; }
	inline void set_bCommandBufferInitialized_6(bool value)
	{
		___bCommandBufferInitialized_6 = value;
	}

	inline static int32_t get_offset_of_fTexCoordScale_7() { return static_cast<int32_t>(offsetof(UnityARVideo_t3355859043, ___fTexCoordScale_7)); }
	inline float get_fTexCoordScale_7() const { return ___fTexCoordScale_7; }
	inline float* get_address_of_fTexCoordScale_7() { return &___fTexCoordScale_7; }
	inline void set_fTexCoordScale_7(float value)
	{
		___fTexCoordScale_7 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_8() { return static_cast<int32_t>(offsetof(UnityARVideo_t3355859043, ___screenOrientation_8)); }
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
#endif // UNITYARVIDEO_T3355859043_H
#ifndef UNITYARUSERANCHORCOMPONENT_T1480341627_H
#define UNITYARUSERANCHORCOMPONENT_T1480341627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorComponent
struct  UnityARUserAnchorComponent_t1480341627  : public MonoBehaviour_t1608826144
{
public:
	// System.String UnityEngine.XR.iOS.UnityARUserAnchorComponent::m_AnchorId
	String_t* ___m_AnchorId_2;

public:
	inline static int32_t get_offset_of_m_AnchorId_2() { return static_cast<int32_t>(offsetof(UnityARUserAnchorComponent_t1480341627, ___m_AnchorId_2)); }
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
#endif // UNITYARUSERANCHORCOMPONENT_T1480341627_H
#ifndef UNITYARKITCONTROL_T1588576948_H
#define UNITYARKITCONTROL_T1588576948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARKitControl
struct  UnityARKitControl_t1588576948  : public MonoBehaviour_t1608826144
{
public:
	// UnityEngine.XR.iOS.UnityARSessionRunOption[] UnityEngine.XR.iOS.UnityARKitControl::runOptions
	UnityARSessionRunOptionU5BU5D_t4193623186* ___runOptions_2;
	// UnityEngine.XR.iOS.UnityARAlignment[] UnityEngine.XR.iOS.UnityARKitControl::alignmentOptions
	UnityARAlignmentU5BU5D_t825830385* ___alignmentOptions_3;
	// UnityEngine.XR.iOS.UnityARPlaneDetection[] UnityEngine.XR.iOS.UnityARKitControl::planeOptions
	UnityARPlaneDetectionU5BU5D_t1389945705* ___planeOptions_4;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentOptionIndex
	int32_t ___currentOptionIndex_5;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentAlignmentIndex
	int32_t ___currentAlignmentIndex_6;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentPlaneIndex
	int32_t ___currentPlaneIndex_7;

public:
	inline static int32_t get_offset_of_runOptions_2() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1588576948, ___runOptions_2)); }
	inline UnityARSessionRunOptionU5BU5D_t4193623186* get_runOptions_2() const { return ___runOptions_2; }
	inline UnityARSessionRunOptionU5BU5D_t4193623186** get_address_of_runOptions_2() { return &___runOptions_2; }
	inline void set_runOptions_2(UnityARSessionRunOptionU5BU5D_t4193623186* value)
	{
		___runOptions_2 = value;
		Il2CppCodeGenWriteBarrier((&___runOptions_2), value);
	}

	inline static int32_t get_offset_of_alignmentOptions_3() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1588576948, ___alignmentOptions_3)); }
	inline UnityARAlignmentU5BU5D_t825830385* get_alignmentOptions_3() const { return ___alignmentOptions_3; }
	inline UnityARAlignmentU5BU5D_t825830385** get_address_of_alignmentOptions_3() { return &___alignmentOptions_3; }
	inline void set_alignmentOptions_3(UnityARAlignmentU5BU5D_t825830385* value)
	{
		___alignmentOptions_3 = value;
		Il2CppCodeGenWriteBarrier((&___alignmentOptions_3), value);
	}

	inline static int32_t get_offset_of_planeOptions_4() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1588576948, ___planeOptions_4)); }
	inline UnityARPlaneDetectionU5BU5D_t1389945705* get_planeOptions_4() const { return ___planeOptions_4; }
	inline UnityARPlaneDetectionU5BU5D_t1389945705** get_address_of_planeOptions_4() { return &___planeOptions_4; }
	inline void set_planeOptions_4(UnityARPlaneDetectionU5BU5D_t1389945705* value)
	{
		___planeOptions_4 = value;
		Il2CppCodeGenWriteBarrier((&___planeOptions_4), value);
	}

	inline static int32_t get_offset_of_currentOptionIndex_5() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1588576948, ___currentOptionIndex_5)); }
	inline int32_t get_currentOptionIndex_5() const { return ___currentOptionIndex_5; }
	inline int32_t* get_address_of_currentOptionIndex_5() { return &___currentOptionIndex_5; }
	inline void set_currentOptionIndex_5(int32_t value)
	{
		___currentOptionIndex_5 = value;
	}

	inline static int32_t get_offset_of_currentAlignmentIndex_6() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1588576948, ___currentAlignmentIndex_6)); }
	inline int32_t get_currentAlignmentIndex_6() const { return ___currentAlignmentIndex_6; }
	inline int32_t* get_address_of_currentAlignmentIndex_6() { return &___currentAlignmentIndex_6; }
	inline void set_currentAlignmentIndex_6(int32_t value)
	{
		___currentAlignmentIndex_6 = value;
	}

	inline static int32_t get_offset_of_currentPlaneIndex_7() { return static_cast<int32_t>(offsetof(UnityARKitControl_t1588576948, ___currentPlaneIndex_7)); }
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
#endif // UNITYARKITCONTROL_T1588576948_H
#ifndef UNITYARHITTESTEXAMPLE_T2399046341_H
#define UNITYARHITTESTEXAMPLE_T2399046341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestExample
struct  UnityARHitTestExample_t2399046341  : public MonoBehaviour_t1608826144
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.UnityARHitTestExample::m_HitTransform
	Transform_t4061884384 * ___m_HitTransform_2;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t2399046341, ___m_HitTransform_2)); }
	inline Transform_t4061884384 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t4061884384 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t4061884384 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARHITTESTEXAMPLE_T2399046341_H
#ifndef UNITYARGENERATEPLANE_T130718376_H
#define UNITYARGENERATEPLANE_T130718376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARGeneratePlane
struct  UnityARGeneratePlane_t130718376  : public MonoBehaviour_t1608826144
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARGeneratePlane::planePrefab
	GameObject_t1013426713 * ___planePrefab_2;
	// UnityEngine.XR.iOS.UnityARAnchorManager UnityEngine.XR.iOS.UnityARGeneratePlane::unityARAnchorManager
	UnityARAnchorManager_t2276360280 * ___unityARAnchorManager_3;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARGeneratePlane_t130718376, ___planePrefab_2)); }
	inline GameObject_t1013426713 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t1013426713 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t1013426713 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___planePrefab_2), value);
	}

	inline static int32_t get_offset_of_unityARAnchorManager_3() { return static_cast<int32_t>(offsetof(UnityARGeneratePlane_t130718376, ___unityARAnchorManager_3)); }
	inline UnityARAnchorManager_t2276360280 * get_unityARAnchorManager_3() const { return ___unityARAnchorManager_3; }
	inline UnityARAnchorManager_t2276360280 ** get_address_of_unityARAnchorManager_3() { return &___unityARAnchorManager_3; }
	inline void set_unityARAnchorManager_3(UnityARAnchorManager_t2276360280 * value)
	{
		___unityARAnchorManager_3 = value;
		Il2CppCodeGenWriteBarrier((&___unityARAnchorManager_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARGENERATEPLANE_T130718376_H
#ifndef UNITYARCAMERANEARFAR_T2367861135_H
#define UNITYARCAMERANEARFAR_T2367861135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraNearFar
struct  UnityARCameraNearFar_t2367861135  : public MonoBehaviour_t1608826144
{
public:
	// UnityEngine.Camera UnityARCameraNearFar::attachedCamera
	Camera_t2649750401 * ___attachedCamera_2;
	// System.Single UnityARCameraNearFar::currentNearZ
	float ___currentNearZ_3;
	// System.Single UnityARCameraNearFar::currentFarZ
	float ___currentFarZ_4;

public:
	inline static int32_t get_offset_of_attachedCamera_2() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t2367861135, ___attachedCamera_2)); }
	inline Camera_t2649750401 * get_attachedCamera_2() const { return ___attachedCamera_2; }
	inline Camera_t2649750401 ** get_address_of_attachedCamera_2() { return &___attachedCamera_2; }
	inline void set_attachedCamera_2(Camera_t2649750401 * value)
	{
		___attachedCamera_2 = value;
		Il2CppCodeGenWriteBarrier((&___attachedCamera_2), value);
	}

	inline static int32_t get_offset_of_currentNearZ_3() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t2367861135, ___currentNearZ_3)); }
	inline float get_currentNearZ_3() const { return ___currentNearZ_3; }
	inline float* get_address_of_currentNearZ_3() { return &___currentNearZ_3; }
	inline void set_currentNearZ_3(float value)
	{
		___currentNearZ_3 = value;
	}

	inline static int32_t get_offset_of_currentFarZ_4() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t2367861135, ___currentFarZ_4)); }
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
#endif // UNITYARCAMERANEARFAR_T2367861135_H
#ifndef UNITYARCAMERAMANAGER_T3186031051_H
#define UNITYARCAMERAMANAGER_T3186031051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraManager
struct  UnityARCameraManager_t3186031051  : public MonoBehaviour_t1608826144
{
public:
	// UnityEngine.Camera UnityARCameraManager::m_camera
	Camera_t2649750401 * ___m_camera_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityARCameraManager::m_session
	UnityARSessionNativeInterface_t2770398628 * ___m_session_3;
	// UnityEngine.Material UnityARCameraManager::savedClearMaterial
	Material_t4192090433 * ___savedClearMaterial_4;

public:
	inline static int32_t get_offset_of_m_camera_2() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t3186031051, ___m_camera_2)); }
	inline Camera_t2649750401 * get_m_camera_2() const { return ___m_camera_2; }
	inline Camera_t2649750401 ** get_address_of_m_camera_2() { return &___m_camera_2; }
	inline void set_m_camera_2(Camera_t2649750401 * value)
	{
		___m_camera_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_camera_2), value);
	}

	inline static int32_t get_offset_of_m_session_3() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t3186031051, ___m_session_3)); }
	inline UnityARSessionNativeInterface_t2770398628 * get_m_session_3() const { return ___m_session_3; }
	inline UnityARSessionNativeInterface_t2770398628 ** get_address_of_m_session_3() { return &___m_session_3; }
	inline void set_m_session_3(UnityARSessionNativeInterface_t2770398628 * value)
	{
		___m_session_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_3), value);
	}

	inline static int32_t get_offset_of_savedClearMaterial_4() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t3186031051, ___savedClearMaterial_4)); }
	inline Material_t4192090433 * get_savedClearMaterial_4() const { return ___savedClearMaterial_4; }
	inline Material_t4192090433 ** get_address_of_savedClearMaterial_4() { return &___savedClearMaterial_4; }
	inline void set_savedClearMaterial_4(Material_t4192090433 * value)
	{
		___savedClearMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___savedClearMaterial_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARCAMERAMANAGER_T3186031051_H
#ifndef POINTCLOUDPARTICLEEXAMPLE_T1599476081_H
#define POINTCLOUDPARTICLEEXAMPLE_T1599476081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointCloudParticleExample
struct  PointCloudParticleExample_t1599476081  : public MonoBehaviour_t1608826144
{
public:
	// UnityEngine.ParticleSystem PointCloudParticleExample::pointCloudParticlePrefab
	ParticleSystem_t1919029474 * ___pointCloudParticlePrefab_2;
	// System.Int32 PointCloudParticleExample::maxPointsToShow
	int32_t ___maxPointsToShow_3;
	// System.Single PointCloudParticleExample::particleSize
	float ___particleSize_4;
	// UnityEngine.Vector3[] PointCloudParticleExample::m_PointCloudData
	Vector3U5BU5D_t364062807* ___m_PointCloudData_5;
	// System.Boolean PointCloudParticleExample::frameUpdated
	bool ___frameUpdated_6;
	// UnityEngine.ParticleSystem PointCloudParticleExample::currentPS
	ParticleSystem_t1919029474 * ___currentPS_7;
	// UnityEngine.ParticleSystem/Particle[] PointCloudParticleExample::particles
	ParticleU5BU5D_t2302528863* ___particles_8;

public:
	inline static int32_t get_offset_of_pointCloudParticlePrefab_2() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t1599476081, ___pointCloudParticlePrefab_2)); }
	inline ParticleSystem_t1919029474 * get_pointCloudParticlePrefab_2() const { return ___pointCloudParticlePrefab_2; }
	inline ParticleSystem_t1919029474 ** get_address_of_pointCloudParticlePrefab_2() { return &___pointCloudParticlePrefab_2; }
	inline void set_pointCloudParticlePrefab_2(ParticleSystem_t1919029474 * value)
	{
		___pointCloudParticlePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudParticlePrefab_2), value);
	}

	inline static int32_t get_offset_of_maxPointsToShow_3() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t1599476081, ___maxPointsToShow_3)); }
	inline int32_t get_maxPointsToShow_3() const { return ___maxPointsToShow_3; }
	inline int32_t* get_address_of_maxPointsToShow_3() { return &___maxPointsToShow_3; }
	inline void set_maxPointsToShow_3(int32_t value)
	{
		___maxPointsToShow_3 = value;
	}

	inline static int32_t get_offset_of_particleSize_4() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t1599476081, ___particleSize_4)); }
	inline float get_particleSize_4() const { return ___particleSize_4; }
	inline float* get_address_of_particleSize_4() { return &___particleSize_4; }
	inline void set_particleSize_4(float value)
	{
		___particleSize_4 = value;
	}

	inline static int32_t get_offset_of_m_PointCloudData_5() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t1599476081, ___m_PointCloudData_5)); }
	inline Vector3U5BU5D_t364062807* get_m_PointCloudData_5() const { return ___m_PointCloudData_5; }
	inline Vector3U5BU5D_t364062807** get_address_of_m_PointCloudData_5() { return &___m_PointCloudData_5; }
	inline void set_m_PointCloudData_5(Vector3U5BU5D_t364062807* value)
	{
		___m_PointCloudData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_5), value);
	}

	inline static int32_t get_offset_of_frameUpdated_6() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t1599476081, ___frameUpdated_6)); }
	inline bool get_frameUpdated_6() const { return ___frameUpdated_6; }
	inline bool* get_address_of_frameUpdated_6() { return &___frameUpdated_6; }
	inline void set_frameUpdated_6(bool value)
	{
		___frameUpdated_6 = value;
	}

	inline static int32_t get_offset_of_currentPS_7() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t1599476081, ___currentPS_7)); }
	inline ParticleSystem_t1919029474 * get_currentPS_7() const { return ___currentPS_7; }
	inline ParticleSystem_t1919029474 ** get_address_of_currentPS_7() { return &___currentPS_7; }
	inline void set_currentPS_7(ParticleSystem_t1919029474 * value)
	{
		___currentPS_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentPS_7), value);
	}

	inline static int32_t get_offset_of_particles_8() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t1599476081, ___particles_8)); }
	inline ParticleU5BU5D_t2302528863* get_particles_8() const { return ___particles_8; }
	inline ParticleU5BU5D_t2302528863** get_address_of_particles_8() { return &___particles_8; }
	inline void set_particles_8(ParticleU5BU5D_t2302528863* value)
	{
		___particles_8 = value;
		Il2CppCodeGenWriteBarrier((&___particles_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTCLOUDPARTICLEEXAMPLE_T1599476081_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (internal_ARUserAnchorUpdated_t4276808043), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (internal_ARUserAnchorRemoved_t1952671492), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (internal_ARSessionTrackingChanged_t4163035963), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (PointCloudParticleExample_t1599476081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1903[7] = 
{
	PointCloudParticleExample_t1599476081::get_offset_of_pointCloudParticlePrefab_2(),
	PointCloudParticleExample_t1599476081::get_offset_of_maxPointsToShow_3(),
	PointCloudParticleExample_t1599476081::get_offset_of_particleSize_4(),
	PointCloudParticleExample_t1599476081::get_offset_of_m_PointCloudData_5(),
	PointCloudParticleExample_t1599476081::get_offset_of_frameUpdated_6(),
	PointCloudParticleExample_t1599476081::get_offset_of_currentPS_7(),
	PointCloudParticleExample_t1599476081::get_offset_of_particles_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (UnityARCameraManager_t3186031051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1904[3] = 
{
	UnityARCameraManager_t3186031051::get_offset_of_m_camera_2(),
	UnityARCameraManager_t3186031051::get_offset_of_m_session_3(),
	UnityARCameraManager_t3186031051::get_offset_of_savedClearMaterial_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (UnityARCameraNearFar_t2367861135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1905[3] = 
{
	UnityARCameraNearFar_t2367861135::get_offset_of_attachedCamera_2(),
	UnityARCameraNearFar_t2367861135::get_offset_of_currentNearZ_3(),
	UnityARCameraNearFar_t2367861135::get_offset_of_currentFarZ_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (UnityARGeneratePlane_t130718376), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1906[2] = 
{
	UnityARGeneratePlane_t130718376::get_offset_of_planePrefab_2(),
	UnityARGeneratePlane_t130718376::get_offset_of_unityARAnchorManager_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (UnityARHitTestExample_t2399046341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1907[1] = 
{
	UnityARHitTestExample_t2399046341::get_offset_of_m_HitTransform_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (UnityARKitControl_t1588576948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1908[6] = 
{
	UnityARKitControl_t1588576948::get_offset_of_runOptions_2(),
	UnityARKitControl_t1588576948::get_offset_of_alignmentOptions_3(),
	UnityARKitControl_t1588576948::get_offset_of_planeOptions_4(),
	UnityARKitControl_t1588576948::get_offset_of_currentOptionIndex_5(),
	UnityARKitControl_t1588576948::get_offset_of_currentAlignmentIndex_6(),
	UnityARKitControl_t1588576948::get_offset_of_currentPlaneIndex_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (UnityARUserAnchorComponent_t1480341627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1909[1] = 
{
	UnityARUserAnchorComponent_t1480341627::get_offset_of_m_AnchorId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (UnityARVideo_t3355859043), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1910[7] = 
{
	UnityARVideo_t3355859043::get_offset_of_m_ClearMaterial_2(),
	UnityARVideo_t3355859043::get_offset_of_m_VideoCommandBuffer_3(),
	UnityARVideo_t3355859043::get_offset_of__videoTextureY_4(),
	UnityARVideo_t3355859043::get_offset_of__videoTextureCbCr_5(),
	UnityARVideo_t3355859043::get_offset_of_bCommandBufferInitialized_6(),
	UnityARVideo_t3355859043::get_offset_of_fTexCoordScale_7(),
	UnityARVideo_t3355859043::get_offset_of_screenOrientation_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (UnityPointCloudExample_t341375886), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[4] = 
{
	UnityPointCloudExample_t341375886::get_offset_of_numPointsToShow_2(),
	UnityPointCloudExample_t341375886::get_offset_of_PointCloudPrefab_3(),
	UnityPointCloudExample_t341375886::get_offset_of_pointCloudObjects_4(),
	UnityPointCloudExample_t341375886::get_offset_of_m_PointCloudData_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (UnityARAnchorManager_t2276360280), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1912[1] = 
{
	UnityARAnchorManager_t2276360280::get_offset_of_planeAnchorMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (UnityARMatrixOps_t2309196985), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (UnityARUtility_t580738665), -1, sizeof(UnityARUtility_t580738665_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1914[3] = 
{
	UnityARUtility_t580738665::get_offset_of_meshCollider_0(),
	UnityARUtility_t580738665::get_offset_of_meshFilter_1(),
	UnityARUtility_t580738665_StaticFields::get_offset_of_planePrefab_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (UnityARAmbient_t1342258671), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1915[1] = 
{
	UnityARAmbient_t1342258671::get_offset_of_l_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (U3CPrivateImplementationDetailsU3E_t2663141219), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2663141219_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1916[1] = 
{
	U3CPrivateImplementationDetailsU3E_t2663141219_StaticFields::get_offset_of_U24fieldU2D6B273DEB9A2A2FF1A442D4905B4E37586A35F34D_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (U24ArrayTypeU3D32_t1088984116)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D32_t1088984116 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
