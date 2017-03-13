#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;
// Player
struct Player_t1147783557;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Interactions
struct  Interactions_t1761821947  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Interactions::interactionWindow
	GameObject_t1756533147 * ___interactionWindow_2;
	// System.Boolean Interactions::activeInteraction
	bool ___activeInteraction_3;
	// UnityEngine.UI.Text Interactions::nameText
	Text_t356221433 * ___nameText_4;
	// UnityEngine.UI.Text Interactions::greetingText
	Text_t356221433 * ___greetingText_5;
	// UnityEngine.UI.Button[] Interactions::options
	ButtonU5BU5D_t3071100561* ___options_6;
	// Player Interactions::player
	Player_t1147783557 * ___player_7;
	// UnityEngine.GameObject Interactions::Manager
	GameObject_t1756533147 * ___Manager_8;
	// UnityEngine.GameObject Interactions::currentNPC
	GameObject_t1756533147 * ___currentNPC_9;

public:
	inline static int32_t get_offset_of_interactionWindow_2() { return static_cast<int32_t>(offsetof(Interactions_t1761821947, ___interactionWindow_2)); }
	inline GameObject_t1756533147 * get_interactionWindow_2() const { return ___interactionWindow_2; }
	inline GameObject_t1756533147 ** get_address_of_interactionWindow_2() { return &___interactionWindow_2; }
	inline void set_interactionWindow_2(GameObject_t1756533147 * value)
	{
		___interactionWindow_2 = value;
		Il2CppCodeGenWriteBarrier(&___interactionWindow_2, value);
	}

	inline static int32_t get_offset_of_activeInteraction_3() { return static_cast<int32_t>(offsetof(Interactions_t1761821947, ___activeInteraction_3)); }
	inline bool get_activeInteraction_3() const { return ___activeInteraction_3; }
	inline bool* get_address_of_activeInteraction_3() { return &___activeInteraction_3; }
	inline void set_activeInteraction_3(bool value)
	{
		___activeInteraction_3 = value;
	}

	inline static int32_t get_offset_of_nameText_4() { return static_cast<int32_t>(offsetof(Interactions_t1761821947, ___nameText_4)); }
	inline Text_t356221433 * get_nameText_4() const { return ___nameText_4; }
	inline Text_t356221433 ** get_address_of_nameText_4() { return &___nameText_4; }
	inline void set_nameText_4(Text_t356221433 * value)
	{
		___nameText_4 = value;
		Il2CppCodeGenWriteBarrier(&___nameText_4, value);
	}

	inline static int32_t get_offset_of_greetingText_5() { return static_cast<int32_t>(offsetof(Interactions_t1761821947, ___greetingText_5)); }
	inline Text_t356221433 * get_greetingText_5() const { return ___greetingText_5; }
	inline Text_t356221433 ** get_address_of_greetingText_5() { return &___greetingText_5; }
	inline void set_greetingText_5(Text_t356221433 * value)
	{
		___greetingText_5 = value;
		Il2CppCodeGenWriteBarrier(&___greetingText_5, value);
	}

	inline static int32_t get_offset_of_options_6() { return static_cast<int32_t>(offsetof(Interactions_t1761821947, ___options_6)); }
	inline ButtonU5BU5D_t3071100561* get_options_6() const { return ___options_6; }
	inline ButtonU5BU5D_t3071100561** get_address_of_options_6() { return &___options_6; }
	inline void set_options_6(ButtonU5BU5D_t3071100561* value)
	{
		___options_6 = value;
		Il2CppCodeGenWriteBarrier(&___options_6, value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(Interactions_t1761821947, ___player_7)); }
	inline Player_t1147783557 * get_player_7() const { return ___player_7; }
	inline Player_t1147783557 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(Player_t1147783557 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}

	inline static int32_t get_offset_of_Manager_8() { return static_cast<int32_t>(offsetof(Interactions_t1761821947, ___Manager_8)); }
	inline GameObject_t1756533147 * get_Manager_8() const { return ___Manager_8; }
	inline GameObject_t1756533147 ** get_address_of_Manager_8() { return &___Manager_8; }
	inline void set_Manager_8(GameObject_t1756533147 * value)
	{
		___Manager_8 = value;
		Il2CppCodeGenWriteBarrier(&___Manager_8, value);
	}

	inline static int32_t get_offset_of_currentNPC_9() { return static_cast<int32_t>(offsetof(Interactions_t1761821947, ___currentNPC_9)); }
	inline GameObject_t1756533147 * get_currentNPC_9() const { return ___currentNPC_9; }
	inline GameObject_t1756533147 ** get_address_of_currentNPC_9() { return &___currentNPC_9; }
	inline void set_currentNPC_9(GameObject_t1756533147 * value)
	{
		___currentNPC_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentNPC_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
