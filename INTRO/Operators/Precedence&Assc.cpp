#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 2, b = 3, c = 4, d = 5, e = 6;
    int ans = a + b * c / d - e;
    cout << ans << '\n';

    ans = d > c < b > a;
    cout << ans << '\n' ;

    return 0;
}

// when same PRECEDENCE operator comes in the same line then the ASSOCIATIVITY(order of execution) comes into the picture.

// 2 + 3 * 4 / 5 - 6; // * and / have the same precedence so associativity.
// = 2 + 12 / 5 - 6;
// = 2 + 2 - 6 ; - and + have the same precedence so associativity
// = 4 - 6 
// = -2 (ans)