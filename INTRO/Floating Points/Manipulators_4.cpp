// Manipulating mathematical functions

#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    // floor
    cout << "floor in C++" << '\n';
    cout << "floor of 12.4 -> " << floor(12.4) << '\n';
    cout << "floor of 12.6 -> " << floor(12.6) << '\n';
    cout << "floor of 12 -> " << floor(12) << '\n';
    cout << "floor of -12.4 -> " << floor(-12.4) << '\n';

    cout << endl;
    // ceil
    cout << "ceil in C++" << '\n';
    cout << "ceil of 12.4 -> " << ceil(12.4) << '\n';
    cout << "ceil of 12.6 -> " << ceil(12.6) << '\n';
    cout << "ceil of 12 -> " << ceil(12) << '\n';
    cout << "ceil of -12.4 -> " << ceil(-12.4) << '\n';

    cout << endl;
    // trunc
    cout << "trunc in C++" << '\n';
    cout << "trunc of 12.4 -> " << trunc(12.4) << '\n';
    cout << "trunc of 12.6 -> " << trunc(12.6) << '\n';
    cout << "trunc of 12 -> " << trunc(12) << '\n';
    cout << "trunc of -12.4 -> " << trunc(-12.4) << '\n';

    cout << endl;
    // round
    cout << "round in C++" << '\n';
    cout << "round of 12.4 -> " << round(12.4) << '\n';
    cout << "round of 12.6 -> " << round(12.6) << '\n';
    cout << "round of 15.5 -> " << round(15.5) << '\n';
    cout << "round of 12 -> " << round(12) << '\n';
    cout << "round of -12.4 -> " << round(-12.4) << '\n';
    cout << "round of -12.6 -> " << round(-12.6) << '\n';

    return 0;
}

// trunc() - it truncates the fractional part of the floating point number and returns the nearest integer to that number.