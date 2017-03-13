#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Player
struct Player_t1147783557;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Collider
struct Collider_t3497673348;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"

// System.Void Player::.ctor()
extern "C"  void Player__ctor_m1986401168 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C"  void Player_Start_m3139373552 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C"  void Player_Update_m717746161 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Movement()
extern "C"  void Player_Movement_m3664110267 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Player::GetClosestNPC()
extern "C"  GameObject_t1756533147 * Player_GetClosestNPC_m3740240245 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::CheckAcceptance()
extern "C"  void Player_CheckAcceptance_m4077651539 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Player_OnTriggerEnter_m3976017644 (Player_t1147783557 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
