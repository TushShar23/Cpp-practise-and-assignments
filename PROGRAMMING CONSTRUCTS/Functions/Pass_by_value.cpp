#include<iostream>
using namespace std;

void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}


int main(){
    int a,b;
    cin >> a >> b;
    cout << "Before Swapping : \n";
    cout << "a : " << a << " b : " << b << endl;

    swap(a,b);

    cout << "After Swapping : \n";
    cout << "a : " << a << " b : " << b << endl;

    return 0;
}