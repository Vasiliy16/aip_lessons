#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

	const int n = 4;
	const int m = 4;

	int a[n][m];
	int b[n][m];
	int c[n][m];
	int d[n][m];
	int e[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = rand() % 2;
			b[i][j] = rand() % 2;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << b[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c[i][j] = (a[i][j] * b[j][i]);
		}

	}
	cout << "Umn:" << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			d[i][j] = (a[i][j] + b[i][j]);
		}

	}
	cout << "Sum:" << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << d[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			e[i][j] = (a[i][j] - b[i][j]);
		}

	}
	cout << "Raz:" << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << e[i][j] << " ";
		}
		cout << endl;
	}

	return(0);
}
