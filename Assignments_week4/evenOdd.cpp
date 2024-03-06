#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number :";
    cin >> num;
    if (num % 2 == 0)
    {
        cout<<"even number"<<endl;
    }
    else{
        cout<<"not even nmber";
    }
    return 0;
}