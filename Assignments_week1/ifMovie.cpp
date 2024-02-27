#include <iostream>
using namespace std;

int main()
{
    int ticketPrice = 400;
    int ashokHasMoney;
    cin>>ashokHasMoney;
    if (ashokHasMoney >= ticketPrice)
    {
        cout << "buy a ticket" << endl;
        cout << "wathch the movie" << endl;
    }
    else
    {
        cout << "eat a biryani" << endl;
    }
    cout << "go home";
    return 0;
}