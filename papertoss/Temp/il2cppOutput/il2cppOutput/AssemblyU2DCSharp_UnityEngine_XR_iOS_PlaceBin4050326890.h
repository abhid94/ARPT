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
// UnityEngine.Renderer
struct Renderer_t257310565;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.PlaceBin
struct  PlaceBin_t4050326890  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.PlaceBin::m_HitTransform
	Transform_t3275118058 * ___m_HitTransform_2;
	// System.Boolean UnityEngine.XR.iOS.PlaceBin::binPlaced
	bool ___binPlaced_3;
	// UnityEngine.Renderer UnityEngine.XR.iOS.PlaceBin::rend
	Renderer_t257310565 * ___rend_4;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(PlaceBin_t4050326890, ___m_HitTransform_2)); }
	inline Transform_t3275118058 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3275118058 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3275118058 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_HitTransform_2, value);
	}

	inline static int32_t get_offset_of_binPlaced_3() { return static_cast<int32_t>(offsetof(PlaceBin_t4050326890, ___binPlaced_3)); }
	inline bool get_binPlaced_3() const { return ___binPlaced_3; }
	inline bool* get_address_of_binPlaced_3() { return &___binPlaced_3; }
	inline void set_binPlaced_3(bool value)
	{
		___binPlaced_3 = value;
	}

	inline static int32_t get_offset_of_rend_4() { return static_cast<int32_t>(offsetof(PlaceBin_t4050326890, ___rend_4)); }
	inline Renderer_t257310565 * get_rend_4() const { return ___rend_4; }
	inline Renderer_t257310565 ** get_address_of_rend_4() { return &___rend_4; }
	inline void set_rend_4(Renderer_t257310565 * value)
	{
		___rend_4 = value;
		Il2CppCodeGenWriteBarrier(&___rend_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
