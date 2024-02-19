#include<iostream>
using namespace std;

int main(){
    int number; 
    int min_number = 20;
    int max_number = 30;

    cout<<"enter a number "<<endl;
    cin>>number;
    if (number > min_number && number < max_number)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"Not"<<endl;
    }
    return 0;
}