// Протабулировать функцию (шаг и диапазон задаёт пользователь)
// y = sqrt(15+4/x)+13x+sin(3x+13)


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float dx, min, max;
    cout << "Vvedite step: ";
    cin >> dx;
    cout << "Vvedite min i max znach (use space): ";
    cin >> min >> max;

    cout << "        " << endl;
    cout << "x" << "        " << "y" << endl;

    while (max > min)
    {
        float y;
        y = sqrt(15 + 4 / min) + 13 * min + sin(3 * min + 13);
        cout << min << "        " << y << endl;
        min = min + dx;
    }
    return 0;
}