#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number :"<<endl;
    cin>>number;

    if (number >= 0)
    {
        cout<<"Positive number"<<endl;
    }
    else
    {
        cout<<"Negative number "<<endl;
    }
     return 0;
}

// Output-->
// Enter a number :
// 1002
// Positive number

// Enter a number :
// -2543
// Negative number

// Enter a number :
// 0
// Positive number