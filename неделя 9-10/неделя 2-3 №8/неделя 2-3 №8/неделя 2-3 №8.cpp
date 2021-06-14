#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;
void FileMaking();
void Formula();

ofstream file;

float e = 2.71828182846;
float x = 3.6;
float y;


int main() {


	Formula();

	cout << y;

	FileMaking();

	return(0);

}

void FileMaking() {

	file.open("task8.txt");
	file << y;
	file.close();

}

void Formula() {

	y = pow(e, x - 2) + fabs(sin(x)) - pow(x, 4) * cos(1 / x);

}

