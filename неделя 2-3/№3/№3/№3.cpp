// Вводятся два целых числа. Проверить делится ли первое на второе. 
// Вывести на экран сообщение об этом, а также остаток (если он есть) и частное (в любом случае).


#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <cmath>

int main()
{
    int a, b;

    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;


    if (b == 0)
    {
        std::cout << "Chislo  ne delitsya" << std::endl;
    }

    else
    {
        std::cout << "celaya chast': " << a / b << std::endl;
        std::cout << "ostatok: " << a % b << std::endl;
    }

    std::getchar();
    std::getchar();

    return 0;
}