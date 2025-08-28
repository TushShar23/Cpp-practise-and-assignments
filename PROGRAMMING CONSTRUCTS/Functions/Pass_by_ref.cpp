#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
// now we have taken the addresses of the parameters.We are manipulating the values in addresses.Because we have the address of the parameters any changes in the values will be reflected in the actual values passed as arguments.

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