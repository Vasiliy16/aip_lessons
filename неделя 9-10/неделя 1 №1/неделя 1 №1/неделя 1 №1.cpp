#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

ofstream file;

void FileMaking();


int main() {

	cout << " TaskNumber1   " << endl;
	cout << "  \n " << endl;
	cout << "  ****    " << endl;
	cout << "  *   *   " << endl;
	cout << "  *****   " << endl;
	cout << "  *   *   " << endl;
	cout << "  *****   " << endl;
	cout << "  \n " << endl;


	FileMaking();


	return 0;
}

void FileMaking() {

	file.open("task1.txt");
	cout << "  ****    " << endl;
	cout << "  *   *   " << endl;
	cout << "  *****   " << endl;
	cout << "  *   *   " << endl;
	cout << "  *****   " << endl;
	cout << "  \n " << endl;
	file.close();


}
