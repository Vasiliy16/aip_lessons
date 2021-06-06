// Дана функция y=f(x). Найти значение функции по x:

//y = 5x - 10, если x > 3
//y = 1, если x = 3
//y = 2 * | x | -5, если x < 3

#include <iostream>
#include <math.h>

int main()
{
    int x;
    std::cout << "Enter X: " << std::endl;
    std::cin >> x;

    if (x > 3)
        std::cout << "y = " << 5 * x - 10;

    if (x == 3)
        std::cout << "y = " << 1;

    if (x < 3)
        std::cout << "y = " << 2 * fabs(x) - 5;

    std::getchar();
    std::getchar();

    return 0;

}
