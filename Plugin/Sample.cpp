#include <windows.h>
#include "Sample.h"



EXPORT void	Wolf( HWND*    hWndMainWindow, WCHAR*    FileName, BYTE*    memBase )
{
	// Write whatever you want to do with the opened file or something else.

	MessageBox( *hWndMainWindow, FileName, TEXT("Sample plugin"), MB_OK );
}
