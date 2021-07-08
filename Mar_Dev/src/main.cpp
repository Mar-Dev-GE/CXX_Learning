#include <iostream>

#include <windows.h>

bool GameOver = false;
constexpr UINT Screen_Width = 120;
constexpr UINT Screen_Height = 30;
constexpr UINT Screen_Resolution = Screen_Width * Screen_Height;

int main()
{
    /*
    WCHAR* Screen = new WCHAR[Screen_Resolution];
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE,
		0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(hConsole);
	DWORD dwBytesWritten = 0;

	while (!GameOver)
	{
        for (UINT x = 0; x < Screen_Width; ++x)
        {
            for (UINT y = 0; y < Screen_Height; ++y)
            {
                if (x == Screen_Width && y == Screen_Height)
                {
                    Screen[y * Screen_Width + x] = L'F';
                }
                else
                {
                    Screen[y * Screen_Width + x] = L'M';
                }
            }

        }
		
		WriteConsoleOutputCharacterW(hConsole, Screen , Screen_Resolution, { 0, 0 }, &dwBytesWritten);
    }
    */
   while (1)
    std::cout << "Hello World! " << std::endl;
    
    return 0;
}