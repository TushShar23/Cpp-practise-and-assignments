#include<iostream>
using namespace std;

int global_var = 75;

void func(){
    cout << "Global variable access inside func(): " << global_var << endl;
}

int main(){
    func();
    cout << "Global variable access inside main(): " << global_var << endl;

}

// Global variable is accessible anywhere in the program.Its scope is global.