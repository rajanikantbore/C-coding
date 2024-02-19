#include<iostream>
using namespace std;

int main(){
    char alphabet = 'A';
    int num;

    cout<<"Enter a number :"<<endl;
    cin>>num;
    int asciiValue = int(alphabet);
   
    if (asciiValue == num )
    {
        cout<<"Yes, it is"<<endl;
    }
    else
    {
        cout<<"No... it is not"<<endl;
    }
 return 0;   
}

// Output -->
// Enter a number :
// 45
// No... it is not

// Enter a number :
// 65
// Yes, it is