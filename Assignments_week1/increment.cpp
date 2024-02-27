#include<iostream>
using namespace std;

int main(){
    int number1= 10, number2= 20;
    cout<<"this is post increment "<<number1++ <<endl;  //postinc
    cout<< number1 <<endl;   //calling
    cout<< number1 <<endl;   //calling

    cout<<"This is pre increment: " <<++number2 <<endl;
    // cout<<"post increment: "<<number1<<endl;
    // cout<<"pre increment: "<<++number2<<endl;
    // number1++;      //to perfectly increment 
    // int result = number1++ + ++number2;   // here will not increase 
    
    // cout<<"the additon of incremented number are: "<<result<<endl; 
    return 0;
}
