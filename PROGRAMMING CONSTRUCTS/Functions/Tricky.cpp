#include<iostream>
using namespace std;

int global = 100;
int main()
{
    int local;
    {
        int internal;
        internal = 20;
        local = 35;
        global = 65;
        cout << internal << ' ' << local << ' ' << global << ' ';
    }
    local = 50;
    cout << local << ' ' << global;
    return 0;
}


// output : 20 35 65 40 65