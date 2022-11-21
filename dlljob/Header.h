#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>
#define PATH L"dllcode.dll"
typedef int(_cdecl* MyFunc)();
