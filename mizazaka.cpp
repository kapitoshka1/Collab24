#include <iostream>
#include<windows.h>


int main(int argc, char const *argv[])
{
    for(size_t i = 65; i <= 90; i++)
    {
        std::cout << (char)i <<std::endl;
    }

    SYSTEMTIME lptime;
    GetSystemTime(&lptime);

    std::cout << "started at " << lptime.wHour << ":" << lptime.wMinute << ":" << lptime.wSecond << std::endl;
    std::cout << "<=======================>" << std::endl;
    std::cout << "<= Powered by Miyazaki =>" << std::endl;
    std::cout << "<=======================>" << std::endl;
    Sleep(3000);
    std::cout << "you will be log off from 10seconds";
    Sleep(10000);
    ExitWindowsEx(EWX_LOGOFF, 0);
    system("PAUSE");
    return 0;
}
