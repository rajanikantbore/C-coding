#include<iostream>
using namespace std;

int main(){
    int cpp_points;
    int java_points;

    cout<<"Enter cpp points :"<<endl;
    cin>>cpp_points;
    cout<<"Enter java points :"<<endl;
    cin>>java_points;

    if (cpp_points >= 40 && java_points >= 40)
    {
        cout<<"Get certificate "<<endl;
    }
    else
    {
        cout<<"not eligible to get certificate"<<endl;
    }
    
    return 0;
}