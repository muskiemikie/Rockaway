#pragma once

#ifdef ROCKAWAY_PLATFORM_WINDOWS
	#ifdef ROCKAWAY_BUILD_DLL
		#define ROCKAWAY_API __declspec(dllexport)
	#else
		#define ROCKAWAY_API __declspec(dllimport)
	#endif
#else 
	#error Rockaway only supports Windows!
#endif