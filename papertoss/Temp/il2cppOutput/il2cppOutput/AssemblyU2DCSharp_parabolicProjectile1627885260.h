#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// parabolicProjectile
struct  parabolicProjectile_t1627885260  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform parabolicProjectile::Target
	Transform_t3275118058 * ___Target_2;
	// System.Single parabolicProjectile::firingAngle
	float ___firingAngle_3;
	// System.Single parabolicProjectile::gravity
	float ___gravity_4;
	// UnityEngine.Transform parabolicProjectile::Projectile
	Transform_t3275118058 * ___Projectile_5;
	// UnityEngine.Transform parabolicProjectile::myTransform
	Transform_t3275118058 * ___myTransform_6;

public:
	inline static int32_t get_offset_of_Target_2() { return static_cast<int32_t>(offsetof(parabolicProjectile_t1627885260, ___Target_2)); }
	inline Transform_t3275118058 * get_Target_2() const { return ___Target_2; }
	inline Transform_t3275118058 ** get_address_of_Target_2() { return &___Target_2; }
	inline void set_Target_2(Transform_t3275118058 * value)
	{
		___Target_2 = value;
		Il2CppCodeGenWriteBarrier(&___Target_2, value);
	}

	inline static int32_t get_offset_of_firingAngle_3() { return static_cast<int32_t>(offsetof(parabolicProjectile_t1627885260, ___firingAngle_3)); }
	inline float get_firingAngle_3() const { return ___firingAngle_3; }
	inline float* get_address_of_firingAngle_3() { return &___firingAngle_3; }
	inline void set_firingAngle_3(float value)
	{
		___firingAngle_3 = value;
	}

	inline static int32_t get_offset_of_gravity_4() { return static_cast<int32_t>(offsetof(parabolicProjectile_t1627885260, ___gravity_4)); }
	inline float get_gravity_4() const { return ___gravity_4; }
	inline float* get_address_of_gravity_4() { return &___gravity_4; }
	inline void set_gravity_4(float value)
	{
		___gravity_4 = value;
	}

	inline static int32_t get_offset_of_Projectile_5() { return static_cast<int32_t>(offsetof(parabolicProjectile_t1627885260, ___Projectile_5)); }
	inline Transform_t3275118058 * get_Projectile_5() const { return ___Projectile_5; }
	inline Transform_t3275118058 ** get_address_of_Projectile_5() { return &___Projectile_5; }
	inline void set_Projectile_5(Transform_t3275118058 * value)
	{
		___Projectile_5 = value;
		Il2CppCodeGenWriteBarrier(&___Projectile_5, value);
	}

	inline static int32_t get_offset_of_myTransform_6() { return static_cast<int32_t>(offsetof(parabolicProjectile_t1627885260, ___myTransform_6)); }
	inline Transform_t3275118058 * get_myTransform_6() const { return ___myTransform_6; }
	inline Transform_t3275118058 ** get_address_of_myTransform_6() { return &___myTransform_6; }
	inline void set_myTransform_6(Transform_t3275118058 * value)
	{
		___myTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___myTransform_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
