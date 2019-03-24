
#ifndef EXPORT
#ifdef __cplusplus
#define EXPORT extern "C" __declspec (dllexport)
#else
#define EXPORT __declspec (dllexport)
#endif
#endif


//
//  FUNCTION: Wolf(HWND*, WCHAR*, BYTE*)
//
//  PURPOSE:  Perform the plugin's main idea
//
//  hWndMainWindow	- Handle of the PPEE main window
//  FileName		- Opened file name in PPEE
//  memBase			- Address of the opened file in memory
//
EXPORT void	Wolf( HWND*     hWndMainWindow, WCHAR*     FileName, BYTE*     memBase );