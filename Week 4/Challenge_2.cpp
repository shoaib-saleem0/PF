#include <iostream>
using namespace std;
main(){
    int number1;
    cout<< "Please enter the first number: ";
    cin>> number1;
    
    int number2;
    cout<< "Please enter the second number: ";
    cin>> number2;

    if (number1>number2){
        cout<<number1<< " is greater than "<<number2;

    }else{
        cout<<number2<< " is Greater Than "<<number1;
    }
}