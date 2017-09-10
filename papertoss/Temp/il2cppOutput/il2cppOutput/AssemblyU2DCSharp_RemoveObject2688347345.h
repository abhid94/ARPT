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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RemoveObject
struct  RemoveObject_t2688347345  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject RemoveObject::gameObject
	GameObject_t1756533147 * ___gameObject_2;
	// UnityEngine.GameObject RemoveObject::currentBin
	GameObject_t1756533147 * ___currentBin_3;
	// System.Double RemoveObject::removeHeight
	double ___removeHeight_4;

public:
	inline static int32_t get_offset_of_gameObject_2() { return static_cast<int32_t>(offsetof(RemoveObject_t2688347345, ___gameObject_2)); }
	inline GameObject_t1756533147 * get_gameObject_2() const { return ___gameObject_2; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_2() { return &___gameObject_2; }
	inline void set_gameObject_2(GameObject_t1756533147 * value)
	{
		___gameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_2, value);
	}

	inline static int32_t get_offset_of_currentBin_3() { return static_cast<int32_t>(offsetof(RemoveObject_t2688347345, ___currentBin_3)); }
	inline GameObject_t1756533147 * get_currentBin_3() const { return ___currentBin_3; }
	inline GameObject_t1756533147 ** get_address_of_currentBin_3() { return &___currentBin_3; }
	inline void set_currentBin_3(GameObject_t1756533147 * value)
	{
		___currentBin_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentBin_3, value);
	}

	inline static int32_t get_offset_of_removeHeight_4() { return static_cast<int32_t>(offsetof(RemoveObject_t2688347345, ___removeHeight_4)); }
	inline double get_removeHeight_4() const { return ___removeHeight_4; }
	inline double* get_address_of_removeHeight_4() { return &___removeHeight_4; }
	inline void set_removeHeight_4(double value)
	{
		___removeHeight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
