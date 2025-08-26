#include<iostream>
using namespace std;

int main(){
    cout << "Application of return statement\n";
    for(int i=1;i<=10;i++){
        if(i==4){
            return 0;
        }
        cout << i << endl;
    }
    cout << "Last line also gets printed\n";

    // now here when i becomes 4 program gets terminated as it is returning a value to the main function.So last line will also not get printed.
    return 0;
}