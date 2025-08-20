// Using some manipulators with floating points

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float a = 12.5200;
    cout << "No trailing zeros\n";
    cout << a << endl;

    return 0;
}

// PRECISION means total no of digits.
//By default, the precision value is 6 for float.
// No trailing zeros when output.