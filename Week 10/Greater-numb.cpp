#include <iostream>
#include <cmath>
using namespace std;
main(){
    int value1, value2;

    cout<<"Enter Number 1: ";
    cin >>value1;

    cout<<"Enter Number 2: ";
    cin>>value2;

    cout<<"the greater number is: " << max(value1,value2);
    return 0;
}