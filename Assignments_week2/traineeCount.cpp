#include<iostream>
using namespace std;

int main(){
    int traineeCount = 10;
    // with if-else loop 
    // if (traineeCount >= 20)
    // {
    //     cout<<"Yes count is :"<<traineeCount<<endl;
    // }
    // else
    // {
    //     cout<<"No, the count is lessor than :"<<traineeCount<<endl;
    // }
    
    // with ternary operator
    // (condition)? expression1 : expression2
    (traineeCount >= 20) ? cout<<"YES, count is :"<<traineeCount<<endl 
    : cout<<"No, the count is lessor than :"<<traineeCount; 
    return 0;
}
