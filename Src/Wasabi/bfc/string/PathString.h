#ifndef NULLSOFT_BFC_PATHSTRING_H
#define NULLSOFT_BFC_PATHSTRING_H


#ifdef _WIN32
#include <arch.h>
class PathString
{
public:
	PathString(const wchar_t *directory, const wchar_t *filename);
private:
	wchar_t path[MAX_PATH];
};

#else

#error port me!

#endif

#endif