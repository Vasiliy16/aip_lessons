//  Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
// равно номеру строки. Количество строк Н вводит пользователь

#include <iostream>

using namespace std;

int main()
{
    int lines;
    cout << "Enter the number of lines: ";
    cin >> lines;

    for (int i = 1; i <= lines; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
