#include<iostream>
using namespace std;

int main(){
    int a=12;
    cout << "a++(post increment) : " << a++ << endl;
    cout << "a--(post decrement) : " << a-- << endl;
    cout << "++a(pre increment) : " << ++a << endl;
    cout << "--a(pre decrement) : " << --a << endl;

    // first a++ expression is evaluated but incremented in next line so in a-- it is 13 and now again expression evaluated but decremented in the next line so in next line after -- it will be 12 but we have now ++a so it turns to be 13 then in next line --a gives 12.
   
    return 0;
}