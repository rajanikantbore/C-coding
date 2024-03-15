#include<iostream>
using namespace std;

int main(){
    int number;
    int givenNum = 30;
    while (number <= 20)
    {
        if(number == givenNum){
            cout<<"number is there";
            break;
        }else{
            cout<<"not";
            break;
        }
        number++;
    }
    
    return 0;
}