#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

ofstream file;
float a, b, c;
void FileMaking();

int main() {



	cout << "Imput 2 numbers:";

	cin >> a;
	cin >> b;

	c = a;
	a = b;
	b = c;

	cout << "result:" << "\n" << a << "\n" << b;

	FileMaking();

	return(0);

}

void FileMaking() {

	file.open("task4.txt");
	file << a << b;
	file.close();

}
