#include <iostream>
using namespace std;
main(){
    int number;
    int i = 0;
    
    cout<<"Enter Number: ";
    cin>> number;

if (number < 0){
    number = -number;
}
else if (number == 0){
    i = 1;
}
    while (number > 0){ 
        number = number / 10;
        i++;
    }
    cout<<i;
}
