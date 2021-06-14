#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int i, a;
int b = 0;
float c = 7;
float y, x;

void Formula();
void FileMaking();
ofstream file;


int main() {



	cout << "Wvedite chisla Che i X:";
	cin >> a >> x;

	Formula();
	FileMaking();

	return(0);
}

void Formula() {

	for (i = 0; i < a; i++) {

		y = (i / c * x) + (i / c * x) * i;
		c = c + 1;
		b = b * (-1) + y;
		cout << b << endl;


	}

}

void FileMaking() {

	file.open("file.txt");
	file << b;
	file.close();

}

