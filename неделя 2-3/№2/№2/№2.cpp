//Информация(байты, килобайты, мегабайты)

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    float  a;

    std::cout << "Enter the value: ";
    std::cin >> a;
    std::cout << a << " Mb = " << a * 1048576 << " b " << std::endl;
    std::cout << a << " Mb = " << a * 1024 << " Kb  " << std::endl;
    std::cout << a << " b = " << a / 1048576 << " Mb " << std::endl;
    std::cout << a << " b = " << a / 1024 << " Kb  " << std::endl;
    std::cout << a << " Kb  = " << a / 1024 << " Mb " << std::endl;
    std::cout << a << " Kb  = " << a * 1024 << " b " << std::endl;

    std::getchar();
    std::getchar();

    return 0;
}
