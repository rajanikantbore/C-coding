#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 97; i <= 122; i++)
    {
        cout <<char(i) << "" << i <<" " ;
    }
    cout << "\n";
    for (j = 122; j >= 97; j--)
    {
        cout <<char(j) << "" << j << " ";
    }

    return 0;
}