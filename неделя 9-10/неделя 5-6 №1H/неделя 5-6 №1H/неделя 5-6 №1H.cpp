#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ofstream file;

float y, x;

void FileMaking();
void Formula();

int main() {



	cout << "Imput x:";
	cin >> x;


	Formula();


	cout << y;



	FileMaking();

	return(0);
}

void FileMaking() {

	file.open("file.txt");
	file << y;
	file.close();

}

void Formula() {

	if (x > 3) {

		y = 2 * x - 10;

	}

	if (x == 3) {

		y = 10;

	}

	if (x < 3) {

		y = pow(2 * x + 1, 2) - 1;

	}

}