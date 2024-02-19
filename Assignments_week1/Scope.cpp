#include<iostream>
using namespace std;

char studName[10] = "Ashok";
const int schoolRank = 2;               // declaring constant variables

int local() {
    int rollNum = 10;
    int studAge = 22;
    
    cout<<"Accessing main functions variables rollNum in other:" <<rollNum<<endl;
    cout<<"Printing student age global variable:"<<studAge<<endl;
    return 0;
} 
int main(){
    int rollNum = 10;                // here rollNum is local variable
    // int schoolRank = 1;
    cout<<"Trying to change schoolRank that is constant value: "<<schoolRank<<endl;
    cout<<"Student roll number is:"<<rollNum<<endl;
    cout<<"printing studName in main that is declared globally :" <<studName<<endl;
    local();       //calling local function in main 
    return 0;
}