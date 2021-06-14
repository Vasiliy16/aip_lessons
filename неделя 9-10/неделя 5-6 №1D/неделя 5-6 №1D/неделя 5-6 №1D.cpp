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





	cout << y;

	Formula();
	FileMaking();


	return(0);
}


void FileMaking() {

	file.open("file.txt");
	file << y;
	file.close();


}

void Formula() {

	if (x > 1) {
		y = 3 * x - 7;
	}

	if (x == 1) {
		y = 3;
	}

	if (x < 1) {

		y = 3 * fabs(x + 2) - 7;

	}

}