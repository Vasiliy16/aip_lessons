#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main() {

	ofstream file;

	float Itogi;
	float i = pow(-1, (1 / 2));

	struct Point {

		float Re, Im;

	};

	Point A, B;

	cout << "Imput Real and Imedj parts of A and B:" << endl;
	cout << "A:" << endl;
	cin >> A.Re >> A.Im;
	cout << "B:" << endl;
	cin >> B.Re >> B.Im;


	Itogi = (A.Re * B.Re - A.Im * B.Im) + (A.Re * B.Im + A.Im * B.Re) * i;

	cout << "Itogi:" << Itogi << endl;

	file.open("file");
	file << Itogi << endl;
	file.close();

	return(0);
}
