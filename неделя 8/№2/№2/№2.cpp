// Пользователь задаёт число Ч и Х. Посчитать y:

#include <iostream>

using namespace std;

int h;
int x;
float y = 0;

void Function(int h1, int x1)
{
	for (int i = 2; i < h; i += 2)
	{
		y = y + 1.0 / (i * x);
	}
	cout << y;
}

int main()
{
	cout << "Enter h and x: " << endl;
	cin >> h >> x;
	Function(h, x);

	return 0;
}
