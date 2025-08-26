#include<iostream>
using namespace std;

int main(){
    cout << "Application of continue statement\n";
    for(int i=1;i<=10;i++){
        if(i==4){
            continue;
        }
        cout << i << endl;
    }
// Here the loop will not break but the moment i becomes 4 it will skip that iteration and moves forward.
    cout << "Final line also gets printed\n";
    return 0;

}