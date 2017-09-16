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
// UnityEngine.Canvas
struct Canvas_t209405766;




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
	// System.Int32 ProjectileShooter::firingVelocity
	int32_t ___firingVelocity_5;
	// System.Boolean ProjectileShooter::forTouch
	bool ___forTouch_6;
	// System.Double ProjectileShooter::swipeDistance
	double ___swipeDistance_7;
	// UnityEngine.GameObject ProjectileShooter::projectile
	GameObject_t1756533147 * ___projectile_8;
	// System.Boolean ProjectileShooter::throwInMotion
	bool ___throwInMotion_9;
	// System.Single ProjectileShooter::currFire
	float ___currFire_10;
	// UnityEngine.Canvas ProjectileShooter::gameplayCanvas
	Canvas_t209405766 * ___gameplayCanvas_11;
	// UnityEngine.Canvas ProjectileShooter::startCanvas
	Canvas_t209405766 * ___startCanvas_12;
	// UnityEngine.Canvas ProjectileShooter::titleCanvas
	Canvas_t209405766 * ___titleCanvas_13;
	// UnityEngine.GameObject ProjectileShooter::startPlayButton
	GameObject_t1756533147 * ___startPlayButton_14;
	// UnityEngine.GameObject ProjectileShooter::resetBinButton
	GameObject_t1756533147 * ___resetBinButton_15;
	// UnityEngine.GameObject ProjectileShooter::binBasket
	GameObject_t1756533147 * ___binBasket_16;
	// System.Boolean ProjectileShooter::gameStarted
	bool ___gameStarted_17;

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

	inline static int32_t get_offset_of_firingVelocity_5() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___firingVelocity_5)); }
	inline int32_t get_firingVelocity_5() const { return ___firingVelocity_5; }
	inline int32_t* get_address_of_firingVelocity_5() { return &___firingVelocity_5; }
	inline void set_firingVelocity_5(int32_t value)
	{
		___firingVelocity_5 = value;
	}

	inline static int32_t get_offset_of_forTouch_6() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___forTouch_6)); }
	inline bool get_forTouch_6() const { return ___forTouch_6; }
	inline bool* get_address_of_forTouch_6() { return &___forTouch_6; }
	inline void set_forTouch_6(bool value)
	{
		___forTouch_6 = value;
	}

	inline static int32_t get_offset_of_swipeDistance_7() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___swipeDistance_7)); }
	inline double get_swipeDistance_7() const { return ___swipeDistance_7; }
	inline double* get_address_of_swipeDistance_7() { return &___swipeDistance_7; }
	inline void set_swipeDistance_7(double value)
	{
		___swipeDistance_7 = value;
	}

	inline static int32_t get_offset_of_projectile_8() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___projectile_8)); }
	inline GameObject_t1756533147 * get_projectile_8() const { return ___projectile_8; }
	inline GameObject_t1756533147 ** get_address_of_projectile_8() { return &___projectile_8; }
	inline void set_projectile_8(GameObject_t1756533147 * value)
	{
		___projectile_8 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_8, value);
	}

	inline static int32_t get_offset_of_throwInMotion_9() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___throwInMotion_9)); }
	inline bool get_throwInMotion_9() const { return ___throwInMotion_9; }
	inline bool* get_address_of_throwInMotion_9() { return &___throwInMotion_9; }
	inline void set_throwInMotion_9(bool value)
	{
		___throwInMotion_9 = value;
	}

	inline static int32_t get_offset_of_currFire_10() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___currFire_10)); }
	inline float get_currFire_10() const { return ___currFire_10; }
	inline float* get_address_of_currFire_10() { return &___currFire_10; }
	inline void set_currFire_10(float value)
	{
		___currFire_10 = value;
	}

	inline static int32_t get_offset_of_gameplayCanvas_11() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___gameplayCanvas_11)); }
	inline Canvas_t209405766 * get_gameplayCanvas_11() const { return ___gameplayCanvas_11; }
	inline Canvas_t209405766 ** get_address_of_gameplayCanvas_11() { return &___gameplayCanvas_11; }
	inline void set_gameplayCanvas_11(Canvas_t209405766 * value)
	{
		___gameplayCanvas_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameplayCanvas_11, value);
	}

	inline static int32_t get_offset_of_startCanvas_12() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___startCanvas_12)); }
	inline Canvas_t209405766 * get_startCanvas_12() const { return ___startCanvas_12; }
	inline Canvas_t209405766 ** get_address_of_startCanvas_12() { return &___startCanvas_12; }
	inline void set_startCanvas_12(Canvas_t209405766 * value)
	{
		___startCanvas_12 = value;
		Il2CppCodeGenWriteBarrier(&___startCanvas_12, value);
	}

	inline static int32_t get_offset_of_titleCanvas_13() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___titleCanvas_13)); }
	inline Canvas_t209405766 * get_titleCanvas_13() const { return ___titleCanvas_13; }
	inline Canvas_t209405766 ** get_address_of_titleCanvas_13() { return &___titleCanvas_13; }
	inline void set_titleCanvas_13(Canvas_t209405766 * value)
	{
		___titleCanvas_13 = value;
		Il2CppCodeGenWriteBarrier(&___titleCanvas_13, value);
	}

	inline static int32_t get_offset_of_startPlayButton_14() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___startPlayButton_14)); }
	inline GameObject_t1756533147 * get_startPlayButton_14() const { return ___startPlayButton_14; }
	inline GameObject_t1756533147 ** get_address_of_startPlayButton_14() { return &___startPlayButton_14; }
	inline void set_startPlayButton_14(GameObject_t1756533147 * value)
	{
		___startPlayButton_14 = value;
		Il2CppCodeGenWriteBarrier(&___startPlayButton_14, value);
	}

	inline static int32_t get_offset_of_resetBinButton_15() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___resetBinButton_15)); }
	inline GameObject_t1756533147 * get_resetBinButton_15() const { return ___resetBinButton_15; }
	inline GameObject_t1756533147 ** get_address_of_resetBinButton_15() { return &___resetBinButton_15; }
	inline void set_resetBinButton_15(GameObject_t1756533147 * value)
	{
		___resetBinButton_15 = value;
		Il2CppCodeGenWriteBarrier(&___resetBinButton_15, value);
	}

	inline static int32_t get_offset_of_binBasket_16() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___binBasket_16)); }
	inline GameObject_t1756533147 * get_binBasket_16() const { return ___binBasket_16; }
	inline GameObject_t1756533147 ** get_address_of_binBasket_16() { return &___binBasket_16; }
	inline void set_binBasket_16(GameObject_t1756533147 * value)
	{
		___binBasket_16 = value;
		Il2CppCodeGenWriteBarrier(&___binBasket_16, value);
	}

	inline static int32_t get_offset_of_gameStarted_17() { return static_cast<int32_t>(offsetof(ProjectileShooter_t2443052695, ___gameStarted_17)); }
	inline bool get_gameStarted_17() const { return ___gameStarted_17; }
	inline bool* get_address_of_gameStarted_17() { return &___gameStarted_17; }
	inline void set_gameStarted_17(bool value)
	{
		___gameStarted_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
