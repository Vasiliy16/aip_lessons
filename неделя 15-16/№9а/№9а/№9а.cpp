#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

	srand(time(NULL));

	struct Pixels {
		int r, g, b;
	};

	const int n = 2;
	const int m = 2;

	Pixels a[n][m];


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; i++) {
			a[i][j].r = rand() % 3;
			a[i][j].g = rand() % 3;
			a[i][j].b = rand() % 3;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; i++) {
			if (a[i][j].r < a[i][j].b) {
				cout << a[i][j].b;
			}
			else {
				if (a[i][j].r < a[i][j].g) {
					cout << "g";
				}
				else {
					if (a[i][j].r < a[i][j].b) {
						cout << "b";

					}
					else {
						cout << "r";
					}
				}
			}
		}
	}

	return(0);
}