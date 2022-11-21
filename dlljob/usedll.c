#include "Header.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	HINSTANCE hMyDll;
	if ((hMyDll = LoadLibrary(PATH)) == NULL) return 1;
	MyFunc myf = GetProcAddress(hMyDll, "MyFunc");
	myf();


	FreeLibrary(hMyDll);

	return 0;
}