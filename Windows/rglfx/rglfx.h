// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the RGLFX_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// RGLFX_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef RGLFX_EXPORTS
#define RGLFX_API __declspec(dllexport)
#else
#define RGLFX_API __declspec(dllimport)
#endif

// This class is exported from the rglfx.dll
class RGLFX_API Crglfx {
public:
	Crglfx(void);
	// TODO: add your methods here.
};

extern RGLFX_API int nrglfx;

RGLFX_API int fnrglfx(void);
