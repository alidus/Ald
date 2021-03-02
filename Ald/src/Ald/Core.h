#pragma once

#ifdef ALD_PLATFORM_WINDOWS
	#ifdef ALD_BUILD_DLL
		#define ALD_API __declspec(dllexport)
	#else
		#define ALD_API __declspec(dllimport)
	#endif
#else
	#error Ald only supports windows
#endif