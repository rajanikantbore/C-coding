#include<iostream>
using namespace std;

int main(){
    int cppMarks;
    int javaMarks;
    cout<< "Enter obtained c++ and Java marks :"<<endl;
    cin>> cppMarks;
    cin>> javaMarks;

    if (cppMarks >= 40 || javaMarks >= 40)
    {
        cout<<"Congratulations.. Get certificate"<<endl;
    }
    else
    {
        cout<<"Not eligible.. Better luck next time"<<endl;
    }
    return 0;
}