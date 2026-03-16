#include <iostream>
using namespace std;
main(){
    int number,modulus;
    int sum;
    cout<<"Enter Number: ";
    cin>>number;

    while (number > 0){
        modulus = number % 10;
        sum = sum + modulus;
        number = number/10;
    }
    
    cout<<"Sum of the numbers is: "<<sum;
    }