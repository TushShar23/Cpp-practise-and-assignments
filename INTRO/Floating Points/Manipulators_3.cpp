// Using some manipulators provided by <iomanip> library to manipulate floating points

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float a = 12.5200;

    //showpos and noshowpos
    cout << "showpos and noshowpos\n";
    cout << a << endl;
    // showpos()
    cout << showpos << endl;
    cout << a << endl;
    //noshowpos()
    cout << noshowpos << endl;
    cout << a << endl;

    cout << "\n";

    //showpoint and noshowpoint
    cout << "showpoint and noshowpoint\n";
    cout << a << endl;
    //showpoint()
    cout << showpoint<< endl;
    cout << a << endl;
    //noshowpoint()
    cout << noshowpoint<< endl;
    cout << a << endl;

    cout << "\n";
    
    //setprecision() and fixed
    cout << "setprecision() and fixed\n";
    cout << a << endl;
    //setprecision()
    cout << setprecision(4) << fixed << endl;
    cout << a << endl;

    // showpos - used to show sign of positive numbers.
    //showpoint - used to show the trailing zeros
    //setprecision - depicts the total no of digits user wants to see
    // setprecision(n) << fixed - shows the exact n digits after the decimal 




    return 0;
}