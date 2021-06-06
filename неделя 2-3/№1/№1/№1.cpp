// Вычислите значение выражения: (x+1)^2+3(x+1) при а) x=1.7; б) x=3. Ответ: а) 15.39 б) 28

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

int main()
{
    float x, F;

    x = 3;
    F = (x + 1) * (x + 1) + 3 * (x + 1);
    std::cout << "funkcia F(3) = " << F << std::endl;

    x = 1.7;
    F = (x + 1) * (x + 1) + 3 * (x + 1);
    std::cout << "funkcia F(1.7) = "<< F   ;


    std::getchar();
    std::getchar();

    return 0;
}
