#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cout<<"Enter a two numbers"<<endl;
    cin>>num1 >>num2;

    if (num1 > num2)
    {
        cout<<num1 <<" is maximum number"<<endl;
    }
    else
    {
        cout<<num2<<" is maximum number"<<endl;
    }
    return 0;
}

// Output --->
// Enter a two numbers
// 20
// 50
// 50 is maximum number