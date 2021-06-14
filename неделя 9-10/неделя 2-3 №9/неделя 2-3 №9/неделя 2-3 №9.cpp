#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

float a, b, c, d, e, f, sysbreack;
ofstream file;


float bit = 1;
float byte = bit * 8;
float KB = byte * 1024;
float MB = KB * 1000;
float DDD = KB * 720;
float DHD = KB * 1474;

void FileMaking();
void Formula();

int main() {





	cout << "Press 1 to bit" << endl;
	cout << "Press 2 to byte" << endl;
	cout << "Press 3 to KB" << endl;
	cout << "Press 4 to MB" << endl;
	cout << "Press 5 to Diskette DD" << endl;
	cout << "Press 6 to Diskette HD" << endl;


	cout << "Iz kakoy velichni?:" << endl;

	cin >> a;

	cout << "W kakyy velichiny?:" << endl;

	cin >> b;


	Formula();

	FileMaking();



	return 0;
}

void Formula() {

	if (a == 1) c = bit;
	if (a == 2) c = byte;
	if (a == 3) c = KB;
	if (a == 4) c = MB;
	if (a == 5) c = DDD;
	if (a == 6) c = DHD;

	if (b == 1) d = bit;
	if (b == 2) d = byte;
	if (b == 3) d = KB;
	if (b == 4) d = MB;
	if (b == 5) d = DDD;
	if (b == 6) d = DHD;




	if (c < d) {

		cout << "Imput Vhod meaning:" << endl;
		cin >> e;
		c = c * e;

		f = c / d;

		cout << "result" << "\n" << f << endl;


	}

	if (c > d) {

		cout << "Imput Vhod meaning:" << endl;
		cin >> e;
		c = c * e;

		f = c * d;

		cout << "result" << "\n" << f << endl;


	}

}

void FileMaking() {

	file.open("task9.txt");
	file << f;
	file.close();


}