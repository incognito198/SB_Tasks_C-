#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
    std::string strVar = "Task 14 test string";
    SetConsoleOutputCP(1251);
    std::cout << "Строка: " << strVar << "\n" << "Длина строки: " << strVar.length() << "\n" << "Первый символ строки : " << strVar.front() << "\n" << "Последний символ строки : " << strVar.back();
}

