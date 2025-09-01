
#include<iostream>
using namespace std;

int main(){
    // ptr is pointer of int type and it contains the address of variable a
    int *ptr,a;
    a= 45;
    ptr = &a;

    cout << "Address of a:"<< ptr << endl;
    cout << "Value in a:"<< *(ptr) << endl;

}