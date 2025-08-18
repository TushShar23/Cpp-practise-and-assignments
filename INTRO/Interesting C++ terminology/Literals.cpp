//Literals are constant values and there are 5 types literals we use c++

#include<iostream>
using namespace std;

int main(){
    int a = 56;
    int b = 042;
    int c = 0b1010;
    int d = 0x1B;

    cout << a << " " << b << " " << c << " " << d << " " << endl;
    return 0;
}

// whats this ?
// so 042 means it is an octal
// 0b1010 means it is binary
// 0x1B means it hexa 
// so compiler converts all other bases into integer/decimal base 