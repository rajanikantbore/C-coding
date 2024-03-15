/* Write a program to read two integer numbers (number1, number2)
and swap their values.  */

#include <iostream>
using namespace std;

int main()
{
     int num1, num2, swap;

     cout << "Enter two numbers a : ";
     cin >> num1 >> num2;
     cout << "Before swapping Number1 " << num1 << ","
          << " Number2 " << num2 << endl;

     swap = num1;
     num1 = num2;
     num2 = swap;

     cout << "After swapping  Number1 " << num1 << ","
          << " Number2 " << num2;
     return 0;
}