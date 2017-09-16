#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CollisionDetection
struct  CollisionDetection_t3254576111  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text CollisionDetection::scoreText
	Text_t356221433 * ___scoreText_2;
	// UnityEngine.UI.Text CollisionDetection::highScoreText
	Text_t356221433 * ___highScoreText_3;
	// UnityEngine.UI.Text CollisionDetection::multiplyerText
	Text_t356221433 * ___multiplyerText_4;
	// System.Single CollisionDetection::score
	float ___score_5;
	// System.Single CollisionDetection::highScore
	float ___highScore_6;
	// System.Single CollisionDetection::distanceFromBin
	float ___distanceFromBin_7;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(CollisionDetection_t3254576111, ___scoreText_2)); }
	inline Text_t356221433 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t356221433 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t356221433 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}

	inline static int32_t get_offset_of_highScoreText_3() { return static_cast<int32_t>(offsetof(CollisionDetection_t3254576111, ___highScoreText_3)); }
	inline Text_t356221433 * get_highScoreText_3() const { return ___highScoreText_3; }
	inline Text_t356221433 ** get_address_of_highScoreText_3() { return &___highScoreText_3; }
	inline void set_highScoreText_3(Text_t356221433 * value)
	{
		___highScoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreText_3, value);
	}

	inline static int32_t get_offset_of_multiplyerText_4() { return static_cast<int32_t>(offsetof(CollisionDetection_t3254576111, ___multiplyerText_4)); }
	inline Text_t356221433 * get_multiplyerText_4() const { return ___multiplyerText_4; }
	inline Text_t356221433 ** get_address_of_multiplyerText_4() { return &___multiplyerText_4; }
	inline void set_multiplyerText_4(Text_t356221433 * value)
	{
		___multiplyerText_4 = value;
		Il2CppCodeGenWriteBarrier(&___multiplyerText_4, value);
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(CollisionDetection_t3254576111, ___score_5)); }
	inline float get_score_5() const { return ___score_5; }
	inline float* get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(float value)
	{
		___score_5 = value;
	}

	inline static int32_t get_offset_of_highScore_6() { return static_cast<int32_t>(offsetof(CollisionDetection_t3254576111, ___highScore_6)); }
	inline float get_highScore_6() const { return ___highScore_6; }
	inline float* get_address_of_highScore_6() { return &___highScore_6; }
	inline void set_highScore_6(float value)
	{
		___highScore_6 = value;
	}

	inline static int32_t get_offset_of_distanceFromBin_7() { return static_cast<int32_t>(offsetof(CollisionDetection_t3254576111, ___distanceFromBin_7)); }
	inline float get_distanceFromBin_7() const { return ___distanceFromBin_7; }
	inline float* get_address_of_distanceFromBin_7() { return &___distanceFromBin_7; }
	inline void set_distanceFromBin_7(float value)
	{
		___distanceFromBin_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
