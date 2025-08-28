// Its a very good question to test someones basic knowledge in c++

#include<iostream>
using namespace std;

int main(){
    int i=0;
    for(i=0;i<=3;i++){
        if(i==2){
            cout << "!\n";
            break;
        }
        cout << "AZ\n";
    }

    if(i==2){
        cout << "?\n";
        break; //this line will create an error
    }
    return 0;
}
// This code will give error coz we cannot use BREAK outside loops means break statements can only be used in loops and switch statements.