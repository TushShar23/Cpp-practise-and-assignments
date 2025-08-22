// here if the person age is given in days we will calculate it in years months and days.

#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin >> t ;

    while(t--){
        cin >> n;
        int years = n/365;
        if(years >= 1){
            cout << years << " years\n";
        }
        else{
            cout << "0 years\n";
        }
        n=n%365 ; 
        int months= n/30;
        if(months >= 1){
            cout << months << " months\n";
        }
        else{
            cout << "0 months\n";
        }
        n=n%30 ;
        cout << n << " days\n";
    }
    return 0;
}