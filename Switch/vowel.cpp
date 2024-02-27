#include <iostream>
using namespace std;
int main()
{
    char vowel;
    cout<<"Enter a character : ";
    cin >> vowel;
    switch (vowel)
    {
    case 'a':
        cout << "Entered character " << vowel << " is a vowel" << endl;
        break;
    case 'e':
        cout << "Entered character " << vowel << " is a vowel" << endl;
        break;
    case 'i':
        cout << "Entered character " << vowel << " is a vowel" << endl;
        break;
    case 'o':
        cout << "Entered character " << vowel << " is a vowel" << endl;
        break;
    case 'u':
        cout << "Entered character " << vowel << " is a vowel" << endl;
        break;

    default:
        cout << "Entered character " << vowel << " is a not vowel" << endl;
        break;
    }
    return 0;
}