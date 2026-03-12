#include <iostream>
using namespace std;
main(){
    int number;
    cout<< "Please Enter the Number: ";
    cin>> number;

    float cal = number % 2;

    if (cal == 0){
        cout<< "The given number is even";
    }else{
        cout<< "The given number is odd";
    }
}