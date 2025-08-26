#include<iostream>
using namespace std;

int main(){
    cout << "Application of break statement\n";
    for(int i=1;i<=10;i++){
        if(i==4){
            break;
        }
        cout << i << endl;
    }
// before 4 all numbers will be printed the moment i becomes 4 it will break the loop and last line will be executed.
    cout << "Final line is also printed\n";
    return 0;
}