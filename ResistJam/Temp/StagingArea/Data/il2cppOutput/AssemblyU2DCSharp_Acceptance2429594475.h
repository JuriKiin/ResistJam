#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Acceptance
struct  Acceptance_t2429594475  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image Acceptance::thisImage
	Image_t2042527209 * ___thisImage_2;

public:
	inline static int32_t get_offset_of_thisImage_2() { return static_cast<int32_t>(offsetof(Acceptance_t2429594475, ___thisImage_2)); }
	inline Image_t2042527209 * get_thisImage_2() const { return ___thisImage_2; }
	inline Image_t2042527209 ** get_address_of_thisImage_2() { return &___thisImage_2; }
	inline void set_thisImage_2(Image_t2042527209 * value)
	{
		___thisImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___thisImage_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
