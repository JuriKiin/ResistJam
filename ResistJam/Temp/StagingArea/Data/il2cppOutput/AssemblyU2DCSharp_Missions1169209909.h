#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// NPC
struct NPC_t3691621115;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_MissionType2427198318.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Missions
struct  Missions_t1169209909  : public MonoBehaviour_t1158329972
{
public:
	// MissionType Missions::currentMission
	int32_t ___currentMission_2;
	// System.Boolean Missions::missionComplete
	bool ___missionComplete_3;
	// UnityEngine.UI.Text Missions::missionText
	Text_t356221433 * ___missionText_4;
	// UnityEngine.GameObject Missions::missionItem
	GameObject_t1756533147 * ___missionItem_5;
	// System.Boolean Missions::haveItem
	bool ___haveItem_6;
	// NPC Missions::currentNPC
	NPC_t3691621115 * ___currentNPC_7;
	// NPC Missions::secondaryCurrentNPC
	NPC_t3691621115 * ___secondaryCurrentNPC_8;

public:
	inline static int32_t get_offset_of_currentMission_2() { return static_cast<int32_t>(offsetof(Missions_t1169209909, ___currentMission_2)); }
	inline int32_t get_currentMission_2() const { return ___currentMission_2; }
	inline int32_t* get_address_of_currentMission_2() { return &___currentMission_2; }
	inline void set_currentMission_2(int32_t value)
	{
		___currentMission_2 = value;
	}

	inline static int32_t get_offset_of_missionComplete_3() { return static_cast<int32_t>(offsetof(Missions_t1169209909, ___missionComplete_3)); }
	inline bool get_missionComplete_3() const { return ___missionComplete_3; }
	inline bool* get_address_of_missionComplete_3() { return &___missionComplete_3; }
	inline void set_missionComplete_3(bool value)
	{
		___missionComplete_3 = value;
	}

	inline static int32_t get_offset_of_missionText_4() { return static_cast<int32_t>(offsetof(Missions_t1169209909, ___missionText_4)); }
	inline Text_t356221433 * get_missionText_4() const { return ___missionText_4; }
	inline Text_t356221433 ** get_address_of_missionText_4() { return &___missionText_4; }
	inline void set_missionText_4(Text_t356221433 * value)
	{
		___missionText_4 = value;
		Il2CppCodeGenWriteBarrier(&___missionText_4, value);
	}

	inline static int32_t get_offset_of_missionItem_5() { return static_cast<int32_t>(offsetof(Missions_t1169209909, ___missionItem_5)); }
	inline GameObject_t1756533147 * get_missionItem_5() const { return ___missionItem_5; }
	inline GameObject_t1756533147 ** get_address_of_missionItem_5() { return &___missionItem_5; }
	inline void set_missionItem_5(GameObject_t1756533147 * value)
	{
		___missionItem_5 = value;
		Il2CppCodeGenWriteBarrier(&___missionItem_5, value);
	}

	inline static int32_t get_offset_of_haveItem_6() { return static_cast<int32_t>(offsetof(Missions_t1169209909, ___haveItem_6)); }
	inline bool get_haveItem_6() const { return ___haveItem_6; }
	inline bool* get_address_of_haveItem_6() { return &___haveItem_6; }
	inline void set_haveItem_6(bool value)
	{
		___haveItem_6 = value;
	}

	inline static int32_t get_offset_of_currentNPC_7() { return static_cast<int32_t>(offsetof(Missions_t1169209909, ___currentNPC_7)); }
	inline NPC_t3691621115 * get_currentNPC_7() const { return ___currentNPC_7; }
	inline NPC_t3691621115 ** get_address_of_currentNPC_7() { return &___currentNPC_7; }
	inline void set_currentNPC_7(NPC_t3691621115 * value)
	{
		___currentNPC_7 = value;
		Il2CppCodeGenWriteBarrier(&___currentNPC_7, value);
	}

	inline static int32_t get_offset_of_secondaryCurrentNPC_8() { return static_cast<int32_t>(offsetof(Missions_t1169209909, ___secondaryCurrentNPC_8)); }
	inline NPC_t3691621115 * get_secondaryCurrentNPC_8() const { return ___secondaryCurrentNPC_8; }
	inline NPC_t3691621115 ** get_address_of_secondaryCurrentNPC_8() { return &___secondaryCurrentNPC_8; }
	inline void set_secondaryCurrentNPC_8(NPC_t3691621115 * value)
	{
		___secondaryCurrentNPC_8 = value;
		Il2CppCodeGenWriteBarrier(&___secondaryCurrentNPC_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
