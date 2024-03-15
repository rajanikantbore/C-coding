#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (char alphabet = 'a'; alphabet <= 'z'; alphabet++)
        {
            cout << alphabet << " ";
        }
        cout << endl;
        cout << "This is outer loop " << i << endl;
    }

    return 0;
}