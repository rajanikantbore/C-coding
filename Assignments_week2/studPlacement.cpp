#include<iostream>
using namespace std;
int main(){
    int studID;
    bool isStudent = true;
    bool isStudAllClear = true;

    cout<<"Enter a Student ID Number"<<endl;
    cin>> studID;
    cout<<"Enter a Student is All Clear press 1 for YES, 0 for NO" <<endl;
    cin>>isStudAllClear;

    if (isStudent && isStudAllClear)
    {
        cout<<"Eligible for Palcements"<<endl;
    }
    else{
        cout<<"Not eligible for Placements"<<endl;
    }
    return 0;
}
