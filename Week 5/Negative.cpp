#include <iostream>
using namespace std;
main(){
    int number = 0;
    int sum = 0;
    while (number >= 0){
        sum = sum + number;
        cout<<"enter number: ";
        cin>> number;
        
    }
    cout<<"the sum is: "<<sum;
}