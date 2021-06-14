#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
ofstream file;
int i, a;
int b = 0;

void FileMaking();
void Formula();

int main() {



	cout << "Wvedite chislo:";
	cin >> a;



	Formula();


	cout << "result:" << b << endl;

	FileMaking();

	return(0);
}

void FileMaking() {

	file.open("file.txt");
	file << b;
	file.close();

}

void Formula() {

	for (i = 100; i < 1000; i++) {

		if (i % 100 / 10 + i % 10 + i / 100 == a) {

			b = b + 1;

		}


	}

}
