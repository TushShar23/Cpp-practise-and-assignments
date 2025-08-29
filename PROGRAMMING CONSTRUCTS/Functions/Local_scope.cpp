#include<iostream>
using namespace std;

void func(){
    int check;
    check = 12;
    cout << check << endl;
}

int main(){
    func();
    cout << check ;
    return 0;
}

// this will create error as check is local variable and its scope is local and limited to the func()