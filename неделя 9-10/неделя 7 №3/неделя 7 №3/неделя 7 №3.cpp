#include <iostream>
#include <fstream>
#include <cmath>
#include <windows.h>
#include <conio.h>

using namespace std;

float func(float x);
void FileMaking();

ofstream file;

float x, xf;
float dx;
float f;

int main() {



	cout << "Diapozone:";
	cin >> x >> xf;
	cout << "Step size:";
	cin >> dx;


	Formula();

	FileMaking();

	return(0);
}

float func(float fx) {
	return sqrt(-(1 + 3 * fx) / 2) + 3 * fx;
}

void FileMaking() {

	file.open("file.txt");
	file << f;
	file.close();

}

void Formula() {

	while (x < xf) {
		f = func(x);
		cout << f << endl;
		x += dx;
	}

}