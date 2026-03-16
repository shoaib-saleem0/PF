#include <iostream>
using namespace std;
main(){
    int number, check, nofreq = 0;
    cout<<"Enter Number: ";
    cin>>number;
    cout<<"Enter the digit to check Frequency: ";
    cin>>check;

    while(number > 0){
        int freq;
        freq = number % 10;
        number = number / 10;
        if (freq == check){
        nofreq++;
        }
    }
    cout<<"Frequency: "<<nofreq;
}