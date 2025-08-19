#include<iostream>
using namespace std;

int main(){
    int a=7,b=5,c=13,d=2;

    //bitwise & gives you a number not 0 or 1.It works on individual bit.First convert integer to binary then peforms AND on every bit.In last gives the integer from the combination of bits.
    cout << "a & b : " << (a&b) << endl;

    //bitwise OR
    cout << "a | b : " << (a|b) << endl;

    //bitwise XOR.Same = 0 ,different = 1;
    cout << "a ^ b : " << (a^ b) << endl;

    //bitwise NOT
    cout << "~ a : " << (~a) << endl;
    cout << "~ b : " << (~b) << endl;

    //Shift operators

    //right shift 
    cout << "13 >> 2 : " << (c >> d) << endl; // right shift 13 by 2 bits
    // 13 -  0000000000001101 = 13
    // 13 >> 2 - 0000000000000011 = 3

    // left shift 
    cout << "5 << 2 : " << (b << d ) << endl;
    // 5 - 0000000000000101 = 5
    // 5 << 2 - 0000000000010100 = 20



    return 0;
}