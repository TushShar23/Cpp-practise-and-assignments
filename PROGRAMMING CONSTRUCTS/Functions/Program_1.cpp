#include<iostream>
using namespace std;

void incr_num(int &n){
    n = n+2;
}

int main(){
    int a = 2;
    cout << "Before incrementing : " << a << endl;
    incr_num(a);
    cout << "After incrementing : " << a << endl;
    return 0;
}