//Static vars are initialised only once.Its value retained in the function calls.If it is not initialised then automatically initialised with 0.

#include<iostream>
using namespace std;

void increment(){
    static int a = 1;
    int z = 5;
    a++;
    z++;

    cout << "value of static variable : "<< a << endl;
    cout << "value of local variable : "<< z << endl;

}

int main(){
    increment();
    increment();
    increment();
    increment();
    increment();

    // in every function call the static variable's value is retained.But the local variable's value always start with 5 in every call.
}

