#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

long float CandyPrice, CookiePrice, taska, taskb;
ofstream file;

void Tasks();
void FileMaking();


int main() {


	cout << "Imput Candy and Cookie price of kg:" << endl;

	cin >> CandyPrice;
	cin >> CookiePrice;



	Tasks();

	FileMaking();




	return(0);
}

void Tasks() {

	//TaskA

	taska = 1.0 * ((CandyPrice * 0.3) + (CookiePrice * 0.4));
	cout << "Odna pokubka 300gr candy i 400gr cookie:" << "\n" << taska << endl;

	//TaskB

	taskb = 3.0 * ((CandyPrice * 1.8) + (CookiePrice * 2));
	cout << "Tri pokypki 1.8kg Candy i 2kg Cookie:" << "\n" << taskb << endl;


}
