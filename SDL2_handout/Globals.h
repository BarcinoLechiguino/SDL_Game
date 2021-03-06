#ifndef __GLOBALS_H__
#define __GLOBALS_H__

//#include <windows.h>
//#include <stdio.h>

#include <windows.h>
#include <stdio.h>

#define LOG(txt) OutputDebugString(txt)

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

enum update_status
{
	UPDATE_CONTINUE = 1,
	UPDATE_STOP,
	UPDATE_ERROR
};

// Configuration -----------
#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 768
#define FULLSCREEN 0
#define LOOP_OGN true
#define LOOP_END false

#endif // __GLOBALS_H__
