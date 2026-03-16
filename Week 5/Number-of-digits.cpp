#include <iostream>
using namespace std;
main(){
    int n;
    int number;
    cout<<"Enter Number: ";
    cin>> number;

    for (int i = 1; number > 0; i++){
        number = number / 10;
        n = n + 1;
    }
    cout<<n;
}