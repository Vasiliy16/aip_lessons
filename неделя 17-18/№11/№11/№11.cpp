#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main() {

	string str;
	getline(cin, str);

	int maximum = 0;
	int max[10];
	string m[10];
	int most;

	for (int i = 0; i < 10; i++)
		getline(cin, m[i]);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (m[i] == m[j]) {
				max[i] = max[i] + 1;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		if (max[i] > maximum) {
			maximum = max[i];
		}
	}

	cout << endl;
	cout << m[maximum] << endl;




	return(0);
}
