/*  Write a program to initialize the array with 10 default values and print
the middle element. */

#include <iostream>
using namespace std;

int main()
{
    int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    cout << array[10 / 2] << endl;

    return 0;
}