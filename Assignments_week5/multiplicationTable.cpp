//1. Write a program to produce the multiplication tables from 1 to 20.
#include<iostream>
using namespace std;

int main(){
    int multiply ;
    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            multiply = i * j;
            cout<<" "<< multiply<<" ";
        }
        cout<<endl;
    }
    return 0;
}