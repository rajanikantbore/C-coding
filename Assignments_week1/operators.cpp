#include<iostream>
using namespace std;

int main(){
    int number1= 13, number2= 11;
    // number1++;
    // cout<<"post increment: "<<number1<<endl;
    // cout<<"pre increment: "<<++number2<<endl;
    number1++;      //to perfectly increment 
    int result = number1++ + ++number2;   // here will not increase 
    
    cout<<"the additon of incremented number are: "<<result<<endl; 
    return 0;
}
