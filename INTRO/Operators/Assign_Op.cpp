#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b ;

    cout << "The value of a before operation :" << a << endl;
    cout << "The value of b before operation :" << b << endl;

    a+=b;
    
    cout << "The value of a after operation a+=b :" << a << endl;
    cout << "The value of b after operation a+=b :" << b << endl;

    // second operation

    cout << "The value of a before operation :" << a << endl;
    cout << "The value of b before operation :" << b << endl;

    a*=b;

    cout << "The value of a after operation a*=b :" << a << endl;
    cout << "The value of b after operation a*=b :" << b << endl;

    // third operation

    cout << "The value of a before operation :" << a << endl;
    cout << "The value of b before operation :" << b << endl;

    a/=b;

    cout << "The value of a after operation a/=b :" << a << endl;
    cout << "The value of b after operation a/=b :" << b << endl;

    // fourth operation

    cout << "The value of a before operation :" << a << endl;
    cout << "The value of b before operation :" << b << endl;

    a%=b;

    cout << "The value of a after operation a%=b :" << a << endl;
    cout << "The value of b after operation a%=b :" << b << endl;

    //fifth operation

    cout << "The value of a before operation :" << a << endl;
    cout << "The value of b before operation :" << b << endl;

    a-=b;

    cout << "The value of a after operation a-=b :" << a << endl;
    cout << "The value of b after operation a-=b :" << b << endl;
    

    // we can do only a+=b,a*=b,a/=b,a%=b,a-=b;
    return 0;
}