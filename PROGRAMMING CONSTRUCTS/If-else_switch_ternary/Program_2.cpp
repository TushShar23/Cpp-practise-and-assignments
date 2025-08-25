//switch case

#include<iostream>
using namespace std;

int main()
{
    char alphabet;
    cin >> alphabet;
    switch (alphabet)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Alphabet \"" << alphabet << "\" is a vowel" << '\n';
        break;
    default:
        cout << "Alphabet \"" << alphabet << "\" is a consonant" << '\n';
    }
    return 0;
}