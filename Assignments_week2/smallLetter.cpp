#include <iostream>
using namespace std;

int main()
{
    char smallLetter;
    char startSmall = 'a';
    char endSmall = 'z';

    cout << "Enter a character :" << endl;
    cin >> smallLetter;

    if (smallLetter >= startSmall && smallLetter <= endSmall)
    {
        cout << "Yes, it is small letter.." << endl;
    }
    else
    {
        cout << "NO, not a small letter.... " << endl;
    }

    // int asciiValRange = int(smallLetter);

    // if (asciiValRange >= 97 && asciiValRange <= 122)
    // {
    //     cout<<"Yes, it is small letter.."<<endl;
    // }
    // else{
    //     cout<<"NO, not a small letter.... "<<endl;
    // }
    return 0;
}

// Enter a character :
// A
// NO, not a small letter....

// Enter a character :
// a
// Yes, it is small letter..