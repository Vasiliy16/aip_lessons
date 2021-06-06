// Протабулировать функцию (шаг и диапазон задаёт пользователь)
// y = -x(3+2x)^2 + 3x+sin(2x)


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float dx, min, max;
    cout << "Enter size of a step: ";
    cin >> dx;
    cout << "Enter minimum and maximum of a function (use space): ";
    cin >> min >> max;

    cout << "        " << endl;
    cout << "x" << "        " << "y" << endl;

    while (max > min)
    {
        float y;
        y = (-min * pow(3 + 2 * min, 2)) + (3 * min + sin(2 * min));
        cout << min << "        " << y << endl;
        min = min + dx;
    }

    return 0;
}
