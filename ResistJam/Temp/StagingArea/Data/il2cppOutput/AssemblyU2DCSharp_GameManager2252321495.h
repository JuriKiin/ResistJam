#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] GameManager::npcs
	GameObjectU5BU5D_t3057952154* ___npcs_2;

public:
	inline static int32_t get_offset_of_npcs_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___npcs_2)); }
	inline GameObjectU5BU5D_t3057952154* get_npcs_2() const { return ___npcs_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_npcs_2() { return &___npcs_2; }
	inline void set_npcs_2(GameObjectU5BU5D_t3057952154* value)
	{
		___npcs_2 = value;
		Il2CppCodeGenWriteBarrier(&___npcs_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
