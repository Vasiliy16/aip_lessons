#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main() {

	int max = 0;
	int non = 0;
	string m;
	getline(cin, m);

	for (int i = 0; i < m.length(); i++)
		if (m[i] != ' ') {
			if (m[i + 1] != ' ') {
				non = 0;
				if (m.length() > max) {
					max = non + 1;
				}
			}
		}
	cout << max;
	return(0);
}
