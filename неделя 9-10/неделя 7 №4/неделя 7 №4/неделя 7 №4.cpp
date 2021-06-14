#include <iostream>
#include <fstream>
#include <cmath>
#include <windows.h>
#include <conio.h>

using namespace std;

ofstream file;
void FileMakingAndFormula();

float x, xf;
float dx;


int main() {


	cout << "Diapozone:";
	cin >> x >> xf;
	cout << "Step size:";
	cin >> dx;


	FileMakingAndFormula();

	return(0);
}

void FileMakingAndFormula() {

	for (int i = x; i < xf; i + 0) {

		i = i + dx;
		cout << i << endl;


		file.open("file.txt");
		file << i;
		file.close();

	}

}
