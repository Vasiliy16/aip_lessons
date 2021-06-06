// Вычислить факториал введенного числа

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned int factorial, N, i;
	for (cout << "N= ", cin >> N, factorial = 1, i = 2; i <= N; factorial *= i, i++);
	cout << "factorial= " << factorial << endl;

	return 0;
}