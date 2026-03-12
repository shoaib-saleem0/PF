#include <iostream>
using namespace std;
main(){
    float city1, city2;
    cout<<"Enter temperature City 1: ";
    cin>> city1;

    cout<<"Enter temperature CIty 2: ";
    cin>> city2;
    
    float diff = city1 - city2;
    if (diff > 10){
        cout<<"Difference is too big\n";
        cout<<"Program Ends\n";
    }else{
        cout<< "program ends";
    }
}