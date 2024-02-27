#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,num4;
    int result;

    cout<<"Enter four numbers to multiply: "<<endl;
    cin>>num1 >>num2 >>num3 >>num4;
    result = num1 * num2 * num3* num4;
    cout<<num1<< "*"<<num2<<"*"<<num3<<"*"<<num4<<"="<<result;
    return 0;
}