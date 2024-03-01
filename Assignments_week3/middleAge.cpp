#include <iostream>
using namespace std;

int main()
{
    int person_1Age, person_2Age, person_3Age;
    cout << "Enter ages of 3 persons :";
    cin >> person_1Age >> person_2Age >> person_3Age;

    if ((person_1Age > person_2Age && person_1Age < person_3Age) || (person_1Age > person_3Age && person_1Age < person_2Age))
    {
        cout << "The person with age" << person_1Age << " (A) is the middle one among three." << endl;
    }
    else if ((person_2Age > person_1Age && person_2Age < person_3Age) || (person_2Age > person_3Age && person_2Age < person_1Age))
    {
        cout << "The person with age " << person_2Age << " (B) is the midddle one among three." << endl;
    }
    else
    {
        cout << "The person with age " << person_3Age << " (C) is the midddle one among three." << endl;
    }
    return 0;
}