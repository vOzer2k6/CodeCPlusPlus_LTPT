# CodeC-LTPT
Code_cac_bai_tren_ltpt

#include <bits/stdc++.h>
#include <fcntl.h>
#include <string>
#include <windows.h>
using namespace std;

void Khoitaocodecodau(){
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    HANDLE hdlConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX consoleFont;
    consoleFont.cbSize = sizeof(consoleFont);
    GetCurrentConsoleFontEx(hdlConsole, FALSE, &consoleFont);
    memcpy(consoleFont.FaceName, L"Consolas", sizeof(consoleFont.FaceName));
    SetCurrentConsoleFontEx(hdlConsole, FALSE, &consoleFont);
}
int main(){
  khoitaocodecodau();
  wcout << L" Chào mừng các bạn đến với trang github của mình";
  return 0;
}
