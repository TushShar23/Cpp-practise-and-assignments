// Good question for analytical ability and usecase of switch.
// we need to focus on the inputs.we can check the sign using switch case and then implement the same case.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    char s,q;
    cin >> a >> s >> b >> q >> c ;

   switch(s){
    case '+' :
        if(a + b == c){
        cout << "Yes\n";
        }
        else{
        cout << a + b << endl;
        }
         break;

     case  '-' :
        if(a-b==c){
            cout << "Yes\n";
        }
        else{
            cout << a-b << endl;
        }
        break;

        case '*' :
        if(a*b==c){
            cout << "Yes\n";
        }
        else{
            cout << a*b << endl;
        }
        break;

        case '/':
        if(a/b==c){
            cout << "Yes\n";
        }
        else{
            cout << a/b << endl;
        }
        break;
   }

}

// 5 + 10 = 15  "YES"
// 2 * 10 = 19 " 20"