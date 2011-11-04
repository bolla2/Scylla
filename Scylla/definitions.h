
#pragma once

#define APPNAME "Scylla"

#ifdef _WIN64

#define ARCHITECTURE "x64"
#define PRINTF_DWORD_PTR "%I64X"
#define PRINTF_DWORD_PTR_FULL "%016I64X"
#define PRINTF_DWORD_PTR_HALF "%08I64X"
#define PRINTF_INTEGER "%I64u"
#define MAX_HEX_VALUE_EDIT_LENGTH 16

#else

#define ARCHITECTURE "x86"
#define PRINTF_DWORD_PTR "%X"
#define PRINTF_DWORD_PTR_FULL "%08X"
#define PRINTF_DWORD_PTR_HALF "%08X"
#define PRINTF_INTEGER "%u"
#define MAX_HEX_VALUE_EDIT_LENGTH 8

#endif

#define APPVERSION "v0.5a"

#define PLUGIN_MENU_BASE_ID 0x10