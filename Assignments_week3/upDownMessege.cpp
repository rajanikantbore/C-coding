#include<iostream>
using namespace std;

int main (){
    int num1, num2;

    cout<<"enter 2 nums :";
    cin>> num1>>num2;

    if (num1 < num2 )
    {
        cout<<"message up";
    }
    else if (num2 < num1)
    {
        cout<<"messege down";
    }
    else 
    {
        cout<<"both are equal";
    }
    return 0;   
}