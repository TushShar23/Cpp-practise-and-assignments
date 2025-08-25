#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b and a >= c)
    {
        cout << a << " is the largest among them" << '\n';
    }
    else if (b >= a and b >= c)
    {
        cout << b << " is the largest among them" << '\n';
    }
    else
    {
        cout << c << " is the largest among them" << '\n';
    }
    return 0;
}
