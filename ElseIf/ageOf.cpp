#include <iostream>
using namespace std;

int main()
{
    int ageOfAshwini, ageOfRavula, ageOfPriyanka;
    cout << "age of ashwini" << endl;
    cin >> ageOfAshwini;
    cout << "age of ravula" << endl;
    cin >> ageOfRavula;
    cout << "age of priyanka" << endl;
    cin >> ageOfPriyanka;

    if (ageOfAshwini < ageOfRavula && ageOfAshwini < ageOfPriyanka)
    {
        cout << "ashwini is younger" << endl;
    }
    else if (ageOfRavula < ageOfAshwini && ageOfRavula < ageOfPriyanka)
    {
        cout << "ravula is younger" << endl;
    }
    else
    {
        cout << "priyanka is younger" << endl;
    }

    return 0;
}