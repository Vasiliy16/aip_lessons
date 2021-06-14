#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

int main() {

	srand(time(0));
	int mas[10];
	ofstream file;

	for (int i = 0; i < 10; i++) {
		mas[i] = rand() % 9;
		if (mas[i] < 0) {
			mas[i] = mas[i] + 5;
		}
		if (mas[i] > 0) {
			mas[i] = mas[i] - 1;
		}

		cout << mas[i] << endl;

		file.open("file");
		file << mas[i] << endl;
		file.close();

	}

	return(0);
}