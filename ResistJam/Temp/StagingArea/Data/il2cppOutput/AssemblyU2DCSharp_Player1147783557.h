#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GameManager
struct GameManager_t2252321495;
// Interactions
struct Interactions_t1761821947;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Player::movementSpeed
	float ___movementSpeed_2;
	// UnityEngine.Rigidbody Player::rb
	Rigidbody_t4233889191 * ___rb_3;
	// UnityEngine.GameObject Player::gameManager
	GameObject_t1756533147 * ___gameManager_4;
	// GameManager Player::gameManagerComponent
	GameManager_t2252321495 * ___gameManagerComponent_5;
	// Interactions Player::interactionManager
	Interactions_t1761821947 * ___interactionManager_6;
	// System.Boolean Player::canWalk
	bool ___canWalk_7;
	// System.Single Player::interactionThreshold
	float ___interactionThreshold_8;
	// System.Single Player::Acceptance
	float ___Acceptance_9;
	// System.Boolean Player::inMission
	bool ___inMission_10;
	// System.Boolean Player::keepPlaying
	bool ___keepPlaying_11;
	// UnityEngine.GameObject Player::gameOverPanel
	GameObject_t1756533147 * ___gameOverPanel_12;

public:
	inline static int32_t get_offset_of_movementSpeed_2() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___movementSpeed_2)); }
	inline float get_movementSpeed_2() const { return ___movementSpeed_2; }
	inline float* get_address_of_movementSpeed_2() { return &___movementSpeed_2; }
	inline void set_movementSpeed_2(float value)
	{
		___movementSpeed_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___rb_3)); }
	inline Rigidbody_t4233889191 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t4233889191 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}

	inline static int32_t get_offset_of_gameManager_4() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___gameManager_4)); }
	inline GameObject_t1756533147 * get_gameManager_4() const { return ___gameManager_4; }
	inline GameObject_t1756533147 ** get_address_of_gameManager_4() { return &___gameManager_4; }
	inline void set_gameManager_4(GameObject_t1756533147 * value)
	{
		___gameManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_4, value);
	}

	inline static int32_t get_offset_of_gameManagerComponent_5() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___gameManagerComponent_5)); }
	inline GameManager_t2252321495 * get_gameManagerComponent_5() const { return ___gameManagerComponent_5; }
	inline GameManager_t2252321495 ** get_address_of_gameManagerComponent_5() { return &___gameManagerComponent_5; }
	inline void set_gameManagerComponent_5(GameManager_t2252321495 * value)
	{
		___gameManagerComponent_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameManagerComponent_5, value);
	}

	inline static int32_t get_offset_of_interactionManager_6() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___interactionManager_6)); }
	inline Interactions_t1761821947 * get_interactionManager_6() const { return ___interactionManager_6; }
	inline Interactions_t1761821947 ** get_address_of_interactionManager_6() { return &___interactionManager_6; }
	inline void set_interactionManager_6(Interactions_t1761821947 * value)
	{
		___interactionManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___interactionManager_6, value);
	}

	inline static int32_t get_offset_of_canWalk_7() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___canWalk_7)); }
	inline bool get_canWalk_7() const { return ___canWalk_7; }
	inline bool* get_address_of_canWalk_7() { return &___canWalk_7; }
	inline void set_canWalk_7(bool value)
	{
		___canWalk_7 = value;
	}

	inline static int32_t get_offset_of_interactionThreshold_8() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___interactionThreshold_8)); }
	inline float get_interactionThreshold_8() const { return ___interactionThreshold_8; }
	inline float* get_address_of_interactionThreshold_8() { return &___interactionThreshold_8; }
	inline void set_interactionThreshold_8(float value)
	{
		___interactionThreshold_8 = value;
	}

	inline static int32_t get_offset_of_Acceptance_9() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___Acceptance_9)); }
	inline float get_Acceptance_9() const { return ___Acceptance_9; }
	inline float* get_address_of_Acceptance_9() { return &___Acceptance_9; }
	inline void set_Acceptance_9(float value)
	{
		___Acceptance_9 = value;
	}

	inline static int32_t get_offset_of_inMission_10() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___inMission_10)); }
	inline bool get_inMission_10() const { return ___inMission_10; }
	inline bool* get_address_of_inMission_10() { return &___inMission_10; }
	inline void set_inMission_10(bool value)
	{
		___inMission_10 = value;
	}

	inline static int32_t get_offset_of_keepPlaying_11() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___keepPlaying_11)); }
	inline bool get_keepPlaying_11() const { return ___keepPlaying_11; }
	inline bool* get_address_of_keepPlaying_11() { return &___keepPlaying_11; }
	inline void set_keepPlaying_11(bool value)
	{
		___keepPlaying_11 = value;
	}

	inline static int32_t get_offset_of_gameOverPanel_12() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___gameOverPanel_12)); }
	inline GameObject_t1756533147 * get_gameOverPanel_12() const { return ___gameOverPanel_12; }
	inline GameObject_t1756533147 ** get_address_of_gameOverPanel_12() { return &___gameOverPanel_12; }
	inline void set_gameOverPanel_12(GameObject_t1756533147 * value)
	{
		___gameOverPanel_12 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverPanel_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
