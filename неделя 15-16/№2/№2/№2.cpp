#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

	ofstream file;


	srand(time(NULL));
	const int a = 10;
	const int b = 10;
	int m[a][b];

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			m[i][j] = rand() % 4;
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << m[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (m[i][j] != m[i][1])
				m[i][j] = m[i][2] * m[i][j];
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << m[i][j];
			file.open("file");
			file << m[i][j];
			file.close();
		}
		cout << endl;


	}

	return(0);
}