#ifndef _CC0001DEFS_H_
#define _CC0001DEFS_H_
#if CC0001
#define CC0001_API __declspec(dllexport)
#else
#define CC0001_API __declspec(dllimport)
#endif
#define CC0001_CALL __stdcall
#endif
