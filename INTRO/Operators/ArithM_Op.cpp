#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    cout << "a+b:" << a+b << endl;
    cout << "a-b:" << a-b << endl;
    cout << "a*b:" << a*b << endl;
    cout << "a/b:" << a/b << endl;
    cout << "a%b:" << a%b << endl;

    // when we try to run last two lines with input 5 and 0 it throws a floating point exception as denominator cannot be zero.
    
    return 0;
}