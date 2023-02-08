 #include <iostream>
#include <Windows.h>
#include <time.h>
 
int main()
{
    int width = GetSystemMetrics(SM_CXSCREEN);
    int height = GetSystemMetrics(SM_CYSCREEN);
 
    while (true) {
        int x = rand() % (width - 0);
        int y = rand() % (5 - 0);
        HDC hdcDesk = GetDC(GetDesktopWindow());
 
        BitBlt(hdcDesk, x, y, width, height, hdcDesk, x, 0, SRCCOPY);
        Sleep(50);
    }
    return 0;
}
