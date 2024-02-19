#include<iostream>
using namespace std;

const float inch = 2.54;
// float inch = 3.12; -->  if anyone try to change inch value then below eror occures
// Error:  note: previous declaration as 'const float inch'
// 4 | const float inch = 2.54;
// because of const keyword 

int main() {
    cout<<"Two inches in centimeters :"<<inch * 2 <<endl; 
    return 0;
}