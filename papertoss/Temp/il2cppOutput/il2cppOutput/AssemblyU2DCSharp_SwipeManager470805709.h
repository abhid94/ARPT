#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_SwipeDirection570801927.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// SwipeManager
struct SwipeManager_t470805709;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwipeManager
struct  SwipeManager_t470805709  : public MonoBehaviour_t1158329972
{
public:
	// SwipeDirection SwipeManager::<Direction>k__BackingField
	int32_t ___U3CDirectionU3Ek__BackingField_3;
	// UnityEngine.Vector3 SwipeManager::touchPosition
	Vector3_t2243707580  ___touchPosition_4;
	// System.Single SwipeManager::swipeResistenceX
	float ___swipeResistenceX_5;
	// System.Single SwipeManager::swipeResistenceY
	float ___swipeResistenceY_6;
	// UnityEngine.Vector2 SwipeManager::deltaSwipe
	Vector2_t2243707579  ___deltaSwipe_7;

public:
	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___U3CDirectionU3Ek__BackingField_3)); }
	inline int32_t get_U3CDirectionU3Ek__BackingField_3() const { return ___U3CDirectionU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDirectionU3Ek__BackingField_3() { return &___U3CDirectionU3Ek__BackingField_3; }
	inline void set_U3CDirectionU3Ek__BackingField_3(int32_t value)
	{
		___U3CDirectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_touchPosition_4() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___touchPosition_4)); }
	inline Vector3_t2243707580  get_touchPosition_4() const { return ___touchPosition_4; }
	inline Vector3_t2243707580 * get_address_of_touchPosition_4() { return &___touchPosition_4; }
	inline void set_touchPosition_4(Vector3_t2243707580  value)
	{
		___touchPosition_4 = value;
	}

	inline static int32_t get_offset_of_swipeResistenceX_5() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___swipeResistenceX_5)); }
	inline float get_swipeResistenceX_5() const { return ___swipeResistenceX_5; }
	inline float* get_address_of_swipeResistenceX_5() { return &___swipeResistenceX_5; }
	inline void set_swipeResistenceX_5(float value)
	{
		___swipeResistenceX_5 = value;
	}

	inline static int32_t get_offset_of_swipeResistenceY_6() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___swipeResistenceY_6)); }
	inline float get_swipeResistenceY_6() const { return ___swipeResistenceY_6; }
	inline float* get_address_of_swipeResistenceY_6() { return &___swipeResistenceY_6; }
	inline void set_swipeResistenceY_6(float value)
	{
		___swipeResistenceY_6 = value;
	}

	inline static int32_t get_offset_of_deltaSwipe_7() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709, ___deltaSwipe_7)); }
	inline Vector2_t2243707579  get_deltaSwipe_7() const { return ___deltaSwipe_7; }
	inline Vector2_t2243707579 * get_address_of_deltaSwipe_7() { return &___deltaSwipe_7; }
	inline void set_deltaSwipe_7(Vector2_t2243707579  value)
	{
		___deltaSwipe_7 = value;
	}
};

struct SwipeManager_t470805709_StaticFields
{
public:
	// SwipeManager SwipeManager::instance
	SwipeManager_t470805709 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(SwipeManager_t470805709_StaticFields, ___instance_2)); }
	inline SwipeManager_t470805709 * get_instance_2() const { return ___instance_2; }
	inline SwipeManager_t470805709 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(SwipeManager_t470805709 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
