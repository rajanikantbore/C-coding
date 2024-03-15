// Write a program to read a number and print its reverse number.

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number :";
    cin>>number;

    while (number > 0)
    {
        int reverse = (number % 10);
         cout<<reverse <<" ";
         number = number / 10;
    }
    return 0;
}