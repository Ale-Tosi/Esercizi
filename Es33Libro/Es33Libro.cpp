#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString(double);
int toInt(string);
double toDouble(string);

int main() {
    int min, max, c;

    cout << "numero minimo: " ;
    cin >> min;
    cout << "numero massimo: " ;
    cin >> max;
    do {
        cout << min << endl;
        min = min + 2;
    } while (min < max);
    return 0;
}

// The following implements type conversion functions.
string toString(double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt(string text) {
    return atoi(text.c_str());
}

double toDouble(string text) {
    return atof(text.c_str());
}
