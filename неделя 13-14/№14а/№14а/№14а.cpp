#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

int main() {

	srand(time(0));
	int mas[20];
	int mas1[20];
	int mas2[20];
	ofstream file;

	for (int i = 0; i < 20; i++) {
		mas[i] = rand() % 9;
		cout << mas[i];
	}

	cout << endl;

	for (int i = 0; i < 20; i++) {
		mas1[i] = rand() % 9;
		cout << mas1[i];
	}

	cout << endl;

	for (int i = 0; i < 20; i++) {
		mas2[i] = mas[i] * mas1[i];
		cout << mas2[i];
	}



	return(0);
}
