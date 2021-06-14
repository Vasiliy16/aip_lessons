#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

	ofstream file;


	srand(time(NULL));
	const int a = 2;
	const int b = 20;
	int max = 0;
	int motor = 0;
	int m[a][b];

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			m[i][j] = rand() % 4;
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (m[i][j] == 3 and m[i][j + 1] > max) {
				max = m[i][j];
				motor = m[i][j];
			}
		}

	}


	cout << motor << " " << max;


	file.open("file");
	file << motor << " " << max;
	file.close();

	return(0);
}
