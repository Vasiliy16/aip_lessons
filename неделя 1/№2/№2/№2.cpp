#include <iostream> 
#include <fstream>
#include <string>

int main()
{
    int a, b;
    std::cout << "Vvedi storonu A: "  ;
    std::cin >> a;

    std::cout << "Vvedi storonu B: " ;
    std::cin >> b;

    std::cout << " P = " << (a + b) * 2  ;
    std::cout << " S = " << a * b << std::endl;

    std::getchar();
    std::getchar();

    std::fstream f("Otvet.txt", std::ios::out); 
    f << "P = " << (a + b) * 2 << "  " << " S = " << a * b;
    f.close(); 

    return 0;
}