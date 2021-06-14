#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ofstream file;

float y, x;

void FileMakingANDfOrmula();

int main() {


	cout << "Imput x,y:";
	cin >> x >> y;

	FileMakingANDfOrmula();

	return(0);
}

void FileMakingANDfOrmula() {

	if ((y < sin(x)) and (y < 0.5)) {

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
