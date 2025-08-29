#include<iostream>
using namespace std;

int score = 100;

int main(){
    int score = 50;
    cout << "If program has 2 vars with the same name and we try to access it.It gives precedence to the local variable : " << score << endl;

    cout << "If you want to access the global variable then use scope resolution operator : " << ::score << endl;

    return 0;
}