#include <string>
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
//#include <random>

//Пишем функцию для вывода четных или нечетных цифр в зависимости от (псевдо)случайно сгенерированного условия
void FindOddOrEvenNumbers(int CycleTwoLimit = 0, bool IsOdd = false)
{

    int MinimumValue = 0, MaximumValue = 0; //Инициируем переменные для минимума и максимума рандомайзера

    //Задаём первое число для рандомайзера
    std::cout << "Введите первое число рандомайзера ";
    std::string FirstValueString;
    std::cin >> FirstValueString;

    //Задаём второе число для рандомайзера
    std::cout << "Введите второе число рандомайзера ";
    std::string SecondValueString;
    std::cin >> SecondValueString;

    //Присваиваем введеные значения для граничных порогов рандомайзера
    if (std::stoi(FirstValueString) > std::stoi(SecondValueString))
    {
        MinimumValue = std::stoi(SecondValueString);
        MaximumValue = std::stoi(FirstValueString);
    }
    else
    {
        MinimumValue = std::stoi(FirstValueString);
        MaximumValue = std::stoi(SecondValueString);
    }

    CycleTwoLimit = rand() % (MaximumValue - MinimumValue + 1) + MinimumValue;
        IsOdd = (CycleTwoLimit % 2 == 0);
        std::cout << "Великий рандом решил выбрать число " << CycleTwoLimit << " в качестве предела второго цикла " << '\n';
        std::cout << "Цикл пройдет от " << MinimumValue << " до " << CycleTwoLimit << '\n';
        std::cout << "Выводить будем ";
        if (IsOdd == 1)
        {
            std::cout << "четные числа" << '\n';
        }
        else
        {
            std::cout << "нечетные числа" << '\n';
        }
    std::cout << "В результате выполнения второго цикла найдены следующие числа " << '\n';
   
    //Вывод четных или нечетных чисел в зависимости от условия
    for (int i = MinimumValue; i <= CycleTwoLimit; ++i)
    {
        if (IsOdd == 0 && i % 2 != 0)
        {
            std::cout << i << ' ';
        }
        if (IsOdd == 1 && i % 2 == 0)
        {
            std::cout << i << ' ';
        }
    }
}

    //Вывод четных чисел из цикла и вызов функции второго задания
int main()
{
    SetConsoleOutputCP(1251);
    std::cout << "Введите предел для цикла вывода четных чисел ";
    std::string FirstCycleLimitString;
    std::cin >> FirstCycleLimitString;
    int CycleOneLimit = std::stoi(FirstCycleLimitString);
    int n = 1;
    std::cout << "В результате выполнения первого цикла найдены следующие четные числа " << '\n';
    for (int i = 1; i <= CycleOneLimit/2; ++i)
    {
        std::cout << 2 * n << ' ';
        n++;        
    }
    std::cout << '\n' << "Переходим ко второму циклу " << '\n' << '\n';
    FindOddOrEvenNumbers ();
}
