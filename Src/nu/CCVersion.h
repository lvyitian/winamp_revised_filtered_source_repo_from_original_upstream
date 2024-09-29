#ifndef NULLSOFT_CCVERSIONH
#define NULLSOFT_CCVERSIONH
#include <arch.h>
DWORD GetCommCtrlDllVersion(LPCTSTR);
#define PACKVERSION(major,minor) MAKELONG(minor,major)
#endif