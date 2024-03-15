#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (j == 3)
                break;
            cout << "Inner loop = " << j<<endl;
        }
        cout << endl;
        cout << "Outer loop i = " << i<<endl;
    }
    return 0;
}