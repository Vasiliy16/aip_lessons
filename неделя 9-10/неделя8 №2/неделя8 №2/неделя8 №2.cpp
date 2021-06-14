#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void FileMaking();
void Formula();
ofstream file;

int i, a;
int b = 0;
float y, x;

int main() {




	cout << "Wvedite chisla Che i X:";
	cin >> a >> x;


	Formula();


	FileMaking();

	return(0);
}

void FileMaking() {


	file.open("file.txt");
	file << b;
	file.close();


}

void Formula() {

	for (i = 0; i < a; i++) {

		y = x + x * i;
		b = b + y;
		cout << b << endl;


	}

}