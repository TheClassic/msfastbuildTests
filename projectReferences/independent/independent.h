#ifdef INDEPENDENT_EXPORTS
#define IMPEXP _declspec(dllexport)
#else
#define IMPEXP _declspec(dllimport)
#endif

void IMPEXP function();