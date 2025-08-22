// very imp yet easy question for basic maths 
// for using max() and min() we have used bits/stdc++.h

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long l1,r1,l2,r2;
    
    cin >> t;

    while(t--){
        cin >> l1 >> r1 >> l2 >> r2;
        
        if((r1 < l2) || (r2 < l1)){
            cout << "-1\n";
        }
        else{
            // we find here the intersection of two intervals
            int l = max(l1,l2);
            int r = min(r1,r2);
            
            cout << l << " " << r << endl;
        }
    }

    return 0;
}

// here we need to calculate the intersection of two intervals.If there is an intersection then print it else print "-1".

// If you have studied WAVY CURVE METHOD then its a cakewalk for you.