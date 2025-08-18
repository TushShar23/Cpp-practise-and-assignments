
#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    auto a = 2;
    auto b = 3.59;
    auto c = "Hey";
    auto d = 'a';
    auto e = true;
    auto f = 042;
    auto g = 0x1B;
    int b = 10;

    cout << typeid(a).name() << " " << typeid(b).name() << " " << typeid(c).name() << " " << typeid(d).name() << " " << typeid(e).name() << " " << typeid(f).name() << " " << typeid(g).name() << " " << endl;
    return 0;
}

// when we want to see the type of any datatype we need to use typeid().name() which is in <typeinfo> header file.
// PKc stands for const pointer char * (const character pointer) means string is constant character pointer
