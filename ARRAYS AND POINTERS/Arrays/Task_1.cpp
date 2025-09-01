// taking input n values.Method is not legit but ok.

#include<iostream>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> x;
        arr[i]=x;
    }
    for(int i=0;i<n;i++){
        cout << "value at index " << i << " is:"<<arr[i] << endl;
    }
    return 0;
}