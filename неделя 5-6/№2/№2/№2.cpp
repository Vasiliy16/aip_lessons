// Дана функция y=f(x). Найти значение функции по x:

//y = 2x^2-3, если x > 7
//y = 0, если x = 7
//y = 2 * |x| + 3, если x < 7

#include <iostream>
#include <math.h>

int main()
{
    int x;
    std::cout << "Enter X: " << std::endl;
    std::cin >> x;

    if (x > 7)
        std::cout << "y = " << 2 * x * x - 3;

    if (x == 7)
        std::cout << "y = " << 0;

    if (x < 7)
        std::cout << "y = " << 2 * fabs(x) + 3;

    std::getchar();
    std::getchar();

    return 0;

}