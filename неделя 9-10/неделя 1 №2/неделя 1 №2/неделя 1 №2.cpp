#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

ofstream file;

float PI = 3.1415926535;
float r1, r2;
float A;

void Formula();
void FileMaking();

int main() {





	cout << "Vvedite r1, r2 to find S of salinon" << endl;
	cin >> r1;
	cin >> r2;

	Formula();

	cout << A;

	FileMaking();


	return(0);
}

void FileMaking() {

	file.open("task2.txt");
	file << A;
	file.close();


}


void Formula() {

	A = (PI * (r1 + r2) * (r1 + r2)) / 4;

}
