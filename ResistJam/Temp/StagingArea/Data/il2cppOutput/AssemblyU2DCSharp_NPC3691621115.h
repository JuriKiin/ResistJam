#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// NPC
struct NPC_t3691621115;
// System.Collections.Generic.List`1<NPC>
struct List_1_t3060742247;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_MissionType2427198318.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NPC
struct  NPC_t3691621115  : public MonoBehaviour_t1158329972
{
public:
	// System.String NPC::characterName
	String_t* ___characterName_2;
	// System.String NPC::greeting
	String_t* ___greeting_3;
	// System.String[] NPC::dialogueOptions
	StringU5BU5D_t1642385972* ___dialogueOptions_4;
	// System.String[] NPC::followUpOptions
	StringU5BU5D_t1642385972* ___followUpOptions_5;
	// System.Single NPC::acceptanceValue
	float ___acceptanceValue_6;
	// System.Int32[] NPC::responseValue
	Int32U5BU5D_t3030399641* ___responseValue_7;
	// System.Int32 NPC::minAcceptance
	int32_t ___minAcceptance_8;
	// UnityEngine.GameObject NPC::missionItem
	GameObject_t1756533147 * ___missionItem_9;
	// MissionType NPC::mission
	int32_t ___mission_10;
	// System.String NPC::missionText
	String_t* ___missionText_11;
	// System.String NPC::missionInProgressPlayerText
	String_t* ___missionInProgressPlayerText_12;
	// System.String NPC::missionInProgressNPCText
	String_t* ___missionInProgressNPCText_13;
	// System.Boolean NPC::missionInProgress
	bool ___missionInProgress_14;
	// System.Boolean NPC::hasCompleted
	bool ___hasCompleted_15;
	// System.Boolean NPC::missionComplete
	bool ___missionComplete_16;
	// System.String NPC::missionStartText
	String_t* ___missionStartText_17;
	// System.String NPC::missionCompletedText
	String_t* ___missionCompletedText_18;
	// System.String NPC::endText
	String_t* ___endText_19;
	// System.Boolean NPC::interactVar
	bool ___interactVar_20;
	// NPC NPC::secondaryNPC
	NPC_t3691621115 * ___secondaryNPC_21;
	// System.Collections.Generic.List`1<NPC> NPC::talkableNPC
	List_1_t3060742247 * ___talkableNPC_22;
	// System.Boolean NPC::talkedTo
	bool ___talkedTo_23;
	// System.Boolean NPC::talkable
	bool ___talkable_24;
	// System.String NPC::talkMissionText
	String_t* ___talkMissionText_25;
	// System.String NPC::talkResponseText
	String_t* ___talkResponseText_26;
	// UnityEngine.GameObject NPC::player
	GameObject_t1756533147 * ___player_27;
	// System.String NPC::taskText
	String_t* ___taskText_28;

public:
	inline static int32_t get_offset_of_characterName_2() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___characterName_2)); }
	inline String_t* get_characterName_2() const { return ___characterName_2; }
	inline String_t** get_address_of_characterName_2() { return &___characterName_2; }
	inline void set_characterName_2(String_t* value)
	{
		___characterName_2 = value;
		Il2CppCodeGenWriteBarrier(&___characterName_2, value);
	}

	inline static int32_t get_offset_of_greeting_3() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___greeting_3)); }
	inline String_t* get_greeting_3() const { return ___greeting_3; }
	inline String_t** get_address_of_greeting_3() { return &___greeting_3; }
	inline void set_greeting_3(String_t* value)
	{
		___greeting_3 = value;
		Il2CppCodeGenWriteBarrier(&___greeting_3, value);
	}

	inline static int32_t get_offset_of_dialogueOptions_4() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___dialogueOptions_4)); }
	inline StringU5BU5D_t1642385972* get_dialogueOptions_4() const { return ___dialogueOptions_4; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogueOptions_4() { return &___dialogueOptions_4; }
	inline void set_dialogueOptions_4(StringU5BU5D_t1642385972* value)
	{
		___dialogueOptions_4 = value;
		Il2CppCodeGenWriteBarrier(&___dialogueOptions_4, value);
	}

	inline static int32_t get_offset_of_followUpOptions_5() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___followUpOptions_5)); }
	inline StringU5BU5D_t1642385972* get_followUpOptions_5() const { return ___followUpOptions_5; }
	inline StringU5BU5D_t1642385972** get_address_of_followUpOptions_5() { return &___followUpOptions_5; }
	inline void set_followUpOptions_5(StringU5BU5D_t1642385972* value)
	{
		___followUpOptions_5 = value;
		Il2CppCodeGenWriteBarrier(&___followUpOptions_5, value);
	}

	inline static int32_t get_offset_of_acceptanceValue_6() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___acceptanceValue_6)); }
	inline float get_acceptanceValue_6() const { return ___acceptanceValue_6; }
	inline float* get_address_of_acceptanceValue_6() { return &___acceptanceValue_6; }
	inline void set_acceptanceValue_6(float value)
	{
		___acceptanceValue_6 = value;
	}

	inline static int32_t get_offset_of_responseValue_7() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___responseValue_7)); }
	inline Int32U5BU5D_t3030399641* get_responseValue_7() const { return ___responseValue_7; }
	inline Int32U5BU5D_t3030399641** get_address_of_responseValue_7() { return &___responseValue_7; }
	inline void set_responseValue_7(Int32U5BU5D_t3030399641* value)
	{
		___responseValue_7 = value;
		Il2CppCodeGenWriteBarrier(&___responseValue_7, value);
	}

	inline static int32_t get_offset_of_minAcceptance_8() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___minAcceptance_8)); }
	inline int32_t get_minAcceptance_8() const { return ___minAcceptance_8; }
	inline int32_t* get_address_of_minAcceptance_8() { return &___minAcceptance_8; }
	inline void set_minAcceptance_8(int32_t value)
	{
		___minAcceptance_8 = value;
	}

	inline static int32_t get_offset_of_missionItem_9() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___missionItem_9)); }
	inline GameObject_t1756533147 * get_missionItem_9() const { return ___missionItem_9; }
	inline GameObject_t1756533147 ** get_address_of_missionItem_9() { return &___missionItem_9; }
	inline void set_missionItem_9(GameObject_t1756533147 * value)
	{
		___missionItem_9 = value;
		Il2CppCodeGenWriteBarrier(&___missionItem_9, value);
	}

	inline static int32_t get_offset_of_mission_10() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___mission_10)); }
	inline int32_t get_mission_10() const { return ___mission_10; }
	inline int32_t* get_address_of_mission_10() { return &___mission_10; }
	inline void set_mission_10(int32_t value)
	{
		___mission_10 = value;
	}

	inline static int32_t get_offset_of_missionText_11() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___missionText_11)); }
	inline String_t* get_missionText_11() const { return ___missionText_11; }
	inline String_t** get_address_of_missionText_11() { return &___missionText_11; }
	inline void set_missionText_11(String_t* value)
	{
		___missionText_11 = value;
		Il2CppCodeGenWriteBarrier(&___missionText_11, value);
	}

	inline static int32_t get_offset_of_missionInProgressPlayerText_12() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___missionInProgressPlayerText_12)); }
	inline String_t* get_missionInProgressPlayerText_12() const { return ___missionInProgressPlayerText_12; }
	inline String_t** get_address_of_missionInProgressPlayerText_12() { return &___missionInProgressPlayerText_12; }
	inline void set_missionInProgressPlayerText_12(String_t* value)
	{
		___missionInProgressPlayerText_12 = value;
		Il2CppCodeGenWriteBarrier(&___missionInProgressPlayerText_12, value);
	}

	inline static int32_t get_offset_of_missionInProgressNPCText_13() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___missionInProgressNPCText_13)); }
	inline String_t* get_missionInProgressNPCText_13() const { return ___missionInProgressNPCText_13; }
	inline String_t** get_address_of_missionInProgressNPCText_13() { return &___missionInProgressNPCText_13; }
	inline void set_missionInProgressNPCText_13(String_t* value)
	{
		___missionInProgressNPCText_13 = value;
		Il2CppCodeGenWriteBarrier(&___missionInProgressNPCText_13, value);
	}

	inline static int32_t get_offset_of_missionInProgress_14() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___missionInProgress_14)); }
	inline bool get_missionInProgress_14() const { return ___missionInProgress_14; }
	inline bool* get_address_of_missionInProgress_14() { return &___missionInProgress_14; }
	inline void set_missionInProgress_14(bool value)
	{
		___missionInProgress_14 = value;
	}

	inline static int32_t get_offset_of_hasCompleted_15() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___hasCompleted_15)); }
	inline bool get_hasCompleted_15() const { return ___hasCompleted_15; }
	inline bool* get_address_of_hasCompleted_15() { return &___hasCompleted_15; }
	inline void set_hasCompleted_15(bool value)
	{
		___hasCompleted_15 = value;
	}

	inline static int32_t get_offset_of_missionComplete_16() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___missionComplete_16)); }
	inline bool get_missionComplete_16() const { return ___missionComplete_16; }
	inline bool* get_address_of_missionComplete_16() { return &___missionComplete_16; }
	inline void set_missionComplete_16(bool value)
	{
		___missionComplete_16 = value;
	}

	inline static int32_t get_offset_of_missionStartText_17() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___missionStartText_17)); }
	inline String_t* get_missionStartText_17() const { return ___missionStartText_17; }
	inline String_t** get_address_of_missionStartText_17() { return &___missionStartText_17; }
	inline void set_missionStartText_17(String_t* value)
	{
		___missionStartText_17 = value;
		Il2CppCodeGenWriteBarrier(&___missionStartText_17, value);
	}

	inline static int32_t get_offset_of_missionCompletedText_18() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___missionCompletedText_18)); }
	inline String_t* get_missionCompletedText_18() const { return ___missionCompletedText_18; }
	inline String_t** get_address_of_missionCompletedText_18() { return &___missionCompletedText_18; }
	inline void set_missionCompletedText_18(String_t* value)
	{
		___missionCompletedText_18 = value;
		Il2CppCodeGenWriteBarrier(&___missionCompletedText_18, value);
	}

	inline static int32_t get_offset_of_endText_19() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___endText_19)); }
	inline String_t* get_endText_19() const { return ___endText_19; }
	inline String_t** get_address_of_endText_19() { return &___endText_19; }
	inline void set_endText_19(String_t* value)
	{
		___endText_19 = value;
		Il2CppCodeGenWriteBarrier(&___endText_19, value);
	}

	inline static int32_t get_offset_of_interactVar_20() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___interactVar_20)); }
	inline bool get_interactVar_20() const { return ___interactVar_20; }
	inline bool* get_address_of_interactVar_20() { return &___interactVar_20; }
	inline void set_interactVar_20(bool value)
	{
		___interactVar_20 = value;
	}

	inline static int32_t get_offset_of_secondaryNPC_21() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___secondaryNPC_21)); }
	inline NPC_t3691621115 * get_secondaryNPC_21() const { return ___secondaryNPC_21; }
	inline NPC_t3691621115 ** get_address_of_secondaryNPC_21() { return &___secondaryNPC_21; }
	inline void set_secondaryNPC_21(NPC_t3691621115 * value)
	{
		___secondaryNPC_21 = value;
		Il2CppCodeGenWriteBarrier(&___secondaryNPC_21, value);
	}

	inline static int32_t get_offset_of_talkableNPC_22() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___talkableNPC_22)); }
	inline List_1_t3060742247 * get_talkableNPC_22() const { return ___talkableNPC_22; }
	inline List_1_t3060742247 ** get_address_of_talkableNPC_22() { return &___talkableNPC_22; }
	inline void set_talkableNPC_22(List_1_t3060742247 * value)
	{
		___talkableNPC_22 = value;
		Il2CppCodeGenWriteBarrier(&___talkableNPC_22, value);
	}

	inline static int32_t get_offset_of_talkedTo_23() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___talkedTo_23)); }
	inline bool get_talkedTo_23() const { return ___talkedTo_23; }
	inline bool* get_address_of_talkedTo_23() { return &___talkedTo_23; }
	inline void set_talkedTo_23(bool value)
	{
		___talkedTo_23 = value;
	}

	inline static int32_t get_offset_of_talkable_24() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___talkable_24)); }
	inline bool get_talkable_24() const { return ___talkable_24; }
	inline bool* get_address_of_talkable_24() { return &___talkable_24; }
	inline void set_talkable_24(bool value)
	{
		___talkable_24 = value;
	}

	inline static int32_t get_offset_of_talkMissionText_25() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___talkMissionText_25)); }
	inline String_t* get_talkMissionText_25() const { return ___talkMissionText_25; }
	inline String_t** get_address_of_talkMissionText_25() { return &___talkMissionText_25; }
	inline void set_talkMissionText_25(String_t* value)
	{
		___talkMissionText_25 = value;
		Il2CppCodeGenWriteBarrier(&___talkMissionText_25, value);
	}

	inline static int32_t get_offset_of_talkResponseText_26() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___talkResponseText_26)); }
	inline String_t* get_talkResponseText_26() const { return ___talkResponseText_26; }
	inline String_t** get_address_of_talkResponseText_26() { return &___talkResponseText_26; }
	inline void set_talkResponseText_26(String_t* value)
	{
		___talkResponseText_26 = value;
		Il2CppCodeGenWriteBarrier(&___talkResponseText_26, value);
	}

	inline static int32_t get_offset_of_player_27() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___player_27)); }
	inline GameObject_t1756533147 * get_player_27() const { return ___player_27; }
	inline GameObject_t1756533147 ** get_address_of_player_27() { return &___player_27; }
	inline void set_player_27(GameObject_t1756533147 * value)
	{
		___player_27 = value;
		Il2CppCodeGenWriteBarrier(&___player_27, value);
	}

	inline static int32_t get_offset_of_taskText_28() { return static_cast<int32_t>(offsetof(NPC_t3691621115, ___taskText_28)); }
	inline String_t* get_taskText_28() const { return ___taskText_28; }
	inline String_t** get_address_of_taskText_28() { return &___taskText_28; }
	inline void set_taskText_28(String_t* value)
	{
		___taskText_28 = value;
		Il2CppCodeGenWriteBarrier(&___taskText_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
