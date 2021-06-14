#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ofstream file;

float y, x;
float r = 1;
float rc = sqrt(x * x + y * y);

void FormulaANDfileMaking();

int main() {



	cout << "Imput x,y:";
	cin >> x >> y;



	FormulaANDfileMaking();





	return(0);
}


void FormulaANDfileMaking() {



	if ((rc < r) and (y > (-x)) and (y > x)) {

		file.open("file.txt");
		file << "Da, popadaet";
		file.close();

		cout << "Da, popadaet";
	}
	else {

		file.open("file.txt");
		file << "Net, ne popadaet";
		file.close();

		cout << "Net, ne popadaet";
	}


}
