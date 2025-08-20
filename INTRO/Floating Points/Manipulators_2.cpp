// now we will see how compiler rounds off the number if no. exceeds the default no.of precisions.

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float a = 12.52476;
    double b = 342.11289;

    cout << "Default precision of float is 6\n";
    cout << "But the precision of 12.52476 is 7\n";
    cout << "So round off takes place after 6th digit i.e. 7 in this case\n";
    cout << a << endl;

    cout << "\n";
    
    cout << "Default precision of float is 6\n";
    cout << "But the precision of 342.11289 is 8\n";
    cout << "So round off takes place after 6th digit i.e. 2 in this case\n";
    cout << b << endl;

    return 0;
}

// so if the current precision value is greater than the default precision then round off after the default precision value.