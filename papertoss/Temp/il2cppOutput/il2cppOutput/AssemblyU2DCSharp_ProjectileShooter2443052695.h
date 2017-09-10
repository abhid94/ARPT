#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProjectileShooter
struct  ProjectileShooter_t2443052695  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ProjectileShooter::prefab
	GameObject_t1756533147 * ___prefab_2;
	// UnityEngine.GameObject ProjectileShooter::prefabBin
	GameObject_t1756533147 * ___prefabBin_3;
	// UnityEngine.GameObject ProjectileShooter::bin
	GameObject_t1756533147 * ___bin_4;
	// UnityEngine.Transform ProjectileShooter::Target
	Transform_t3275118058 * ___Target_5;
	// System.Single ProjectileShooter::firingAngle
	float ___firingAngle_6;
	// System.Int32 ProjectileShooter::firingVelocity
	int32_t ___firingVelocity_7;
	// System.Single ProjectileShooter::gravity
	float ___gravity_8;
	// System.Boolean ProjectileShooter::forTouch
	bool ___forTouch_9;

public:
	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___prefab_2)); }
	inline GameObject_t1756533147 * get_prefab_2() const { return ___prefab_2; }
	inline GameObject_t1756533147 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(GameObject_t1756533147 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_2, value);
	}

	inline static int32_t get_offset_of_prefabBin_3() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___prefabBin_3)); }
	inline GameObject_t1756533147 * get_prefabBin_3() const { return ___prefabBin_3; }
	inline GameObject_t1756533147 ** get_address_of_prefabBin_3() { return &___prefabBin_3; }
	inline void set_prefabBin_3(GameObject_t1756533147 * value)
	{
		___prefabBin_3 = value;
		Il2CppCodeGenWriteBarrier(&___prefabBin_3, value);
	}

	inline static int32_t get_offset_of_bin_4() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___bin_4)); }
	inline GameObject_t1756533147 * get_bin_4() const { return ___bin_4; }
	inline GameObject_t1756533147 ** get_address_of_bin_4() { return &___bin_4; }
	inline void set_bin_4(GameObject_t1756533147 * value)
	{
		___bin_4 = value;
		Il2CppCodeGenWriteBarrier(&___bin_4, value);
	}

	inline static int32_t get_offset_of_Target_5() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___Target_5)); }
	inline Transform_t3275118058 * get_Target_5() const { return ___Target_5; }
	inline Transform_t3275118058 ** get_address_of_Target_5() { return &___Target_5; }
	inline void set_Target_5(Transform_t3275118058 * value)
	{
		___Target_5 = value;
		Il2CppCodeGenWriteBarrier(&___Target_5, value);
	}

	inline static int32_t get_offset_of_firingAngle_6() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___firingAngle_6)); }
	inline float get_firingAngle_6() const { return ___firingAngle_6; }
	inline float* get_address_of_firingAngle_6() { return &___firingAngle_6; }
	inline void set_firingAngle_6(float value)
	{
		___firingAngle_6 = value;
	}

	inline static int32_t get_offset_of_firingVelocity_7() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___firingVelocity_7)); }
	inline int32_t get_firingVelocity_7() const { return ___firingVelocity_7; }
	inline int32_t* get_address_of_firingVelocity_7() { return &___firingVelocity_7; }
	inline void set_firingVelocity_7(int32_t value)
	{
		___firingVelocity_7 = value;
	}

	inline static int32_t get_offset_of_gravity_8() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___gravity_8)); }
	inline float get_gravity_8() const { return ___gravity_8; }
	inline float* get_address_of_gravity_8() { return &___gravity_8; }
	inline void set_gravity_8(float value)
	{
		___gravity_8 = value;
	}

	inline static int32_t get_offset_of_forTouch_9() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___forTouch_9)); }
	inline bool get_forTouch_9() const { return ___forTouch_9; }
	inline bool* get_address_of_forTouch_9() { return &___forTouch_9; }
	inline void set_forTouch_9(bool value)
	{
		___forTouch_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
