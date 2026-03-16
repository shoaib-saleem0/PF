#include <iostream>
using namespace std;
main(){
    long long number; 
    int check;
    int freq;
    cout<<"Enter Number: ";
    cin>> number;
    cout<<"Enter Digit to check frequency: ";
    cin>> check;

    for (int i = 0; number > 0; i++){
    long long mode = number % 10;
    if (mode == check){
        freq++;
    }
    number = number / 10;
}
cout<<"Frequency of the digit is: "<<freq;
}