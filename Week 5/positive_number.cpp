#include <iostream>
using namespace std;
main(){
    long long number;
    cout<<"Please Enter Positive Number: ";
    cin>> number;
    while(number < 0){
        cout<<"ERROR "<<number<<" is not a Positive Number."<<endl;
        cout<<"Please Enter Positive Number: ";
        cin>> number;
    }
    cout<<"Program Ends";
}