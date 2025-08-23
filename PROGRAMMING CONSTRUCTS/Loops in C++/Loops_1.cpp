// Ques 1 - Good debug/predict output question.

#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    do
    {
        i++;
    } while ((++i) % 2);
    cout << i << endl;
    return 0;
}

// output : TLE