#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a number"<<endl;
    cin>>num;

    int lastNums1 = num % 10;
        int lastNums2 = (num /10) % 10;
        cout<<lastNums1<<" "<<lastNums2<<endl;
        // cout<<"last numbers"<<lastNums2<<endl;

    // if (num >= 100)
    // {
    //     int lastNums1 = num % 10;
    //     int lastNums2 = (num /10) % 10;
    //     cout<<"last numbers"<<lastNums1<<endl;
    //     cout<<"last numbers"<<lastNums2<<endl;
    // }
    // else
    // {
    //     cout<<"not found";
    // }
    return 0;
}