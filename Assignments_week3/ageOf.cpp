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

    if ((ageOfAshwini < ageOfRavula) && (ageOfAshwini < ageOfPriyanka))
    {
        cout << "Ashwini is younger" << endl;
    }
    else if ((ageOfRavula < ageOfAshwini) && (ageOfRavula < ageOfPriyanka))
    {
        cout << "Ravula is younger" << endl;
    }
    else
    {
        cout << "Priyanka is younger" << endl;
    }

    return 0;
}