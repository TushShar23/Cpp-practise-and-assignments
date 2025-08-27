#include<iostream>
using namespace std;

int add(int x, int y = 0)
{
    return x + y;
}
// we gave a default value in y parameter.If user does not provide y's values then it takes 0 automatically
int main()
{
    cout << add(2) << '\n';
    cout << add(3, 5) << '\n';
    return 0;
}