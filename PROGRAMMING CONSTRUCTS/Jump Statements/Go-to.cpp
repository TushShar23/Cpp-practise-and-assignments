// we don't see this very much in code now but it is a useful thingy.

#include<iostream>
using namespace std;

int main(){
    int ch,a,b,ans,ans2;
    cout << "Application of go-to statement\n";
    cout << "Choice 1 for addition and Choice 2 for subtraction\n";

    a= 18,b=10;

    cin >> ch ;

    if(ch==1){
        goto label_add;
    }
    else{
        goto label_diff;
    }

    label_add:
    cout << "You have chosen addition\n";
    ans = a+b;
    cout << ans << endl;
    return 0;

    label_diff:
    cout << "You have chosen subtraction\n";
    ans2 = a-b;
    cout << ans2 << endl;
    
}