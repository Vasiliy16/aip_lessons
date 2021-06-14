#include <iostream>
#include <fstream>
#include <cmath>
#include <windows.h>
#include <conio.h>

using namespace std;

float func(float x);
void FileMaking();
void Formula();

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


	return(0);
}

float func(float fx) {
	return sqrt(5 + 4 * fx) + 13 * fx + cos(12 * fx + 91);
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