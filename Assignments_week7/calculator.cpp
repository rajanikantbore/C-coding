/* Design the basic calculator, read two integers numbers. Display
the below menu for operation to be performed.
Enter an option from the below list.
1 for addition
2 for subtraction
3 for multiplication
4 for division
5 to exit the application.
Based on input the operation should be performed.
The program should run until the user enters 5 from the menu.  */

#include <iostream>
using namespace std;
int main()
{
    int number1, number2, options;
    cout << "Enter the two integer numbers. :";
    cin >> number1 >> number2;

    cout<<"Choose an option from below menu "<<endl;
    cout<<"1 for addition"<<endl;
    cout<<"2 for substraction"<<endl;
    cout<<"3 for mutliplication"<<endl;
    cout<<"4 for division"<<endl;
    cout<<"5 to exit the application"<<endl;
    cin>>options;

    int addition = number1 + number2;
    int substraction = number1 - number2;
    int mutliplication = number1 * number2;
    int division = number1 / number2;


    switch (options)
    {
    case 1:
        cout << addition;
        break;
    case 2:
        cout << substraction;
        break;
    case 3:
        cout << mutliplication;
        break;
    case 4:
        cout << division;
        break;
    case 5:
        return 0;
        break;    
    default:
        cout<<"Choose correct option";
        break;
    }

    return 0;
}