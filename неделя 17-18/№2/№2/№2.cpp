#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    string m;
    getline(cin, m);
    int colichestvo = 0;


    for (int i = 0; i < m.length(); i++) {
        if (m[i] == 'w' and m[i + 1] == 'o' and m[i + 2] == 'r' and m[i + 3] == 'l' and m[i + 4] == 'd')
        {
            colichestvo++;
        }
    }

    cout << colichestvo;
    return(0);
}
