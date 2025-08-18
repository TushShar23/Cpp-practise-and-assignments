
#include<iostream>
using namespace std;

int main(){
    const int a=10; // we have to initialise a const variable
    int b = 8;

    //a = a+2; 

    // gives error coz its a const variable that cannot be modified
    // error: assignment of read-only variable ‘a’


    b = b+2;
    
    cout << a << " " << b << endl;

    //only b was modified

    return 0;
}