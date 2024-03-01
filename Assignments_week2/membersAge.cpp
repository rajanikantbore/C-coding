#include <iostream>
using namespace std;

int main()
{
    int member1Age, member2Age;

    cout << "Enter ages of 2 members :" << endl;
    cin >> member1Age >> member2Age;
    int elderOne = (member1Age > member2Age) ? member1Age : member2Age;

    cout << "Person with age " << elderOne << " is elder one" << endl;

    return 0;
}