#include <iostream>
using namespace std;
main(){
    float speed;
    cout<<"Enter Speed: ";
    cin>> speed;
    if (speed <= 10){
        cout<< "SLOW";
    }
    if(speed > 10 && speed <= 50){
        cout<<"Average";
    }
    if(speed >50 && speed <= 150){
        cout<<"fast";
    }
    if (speed > 150 && speed <= 1000){
        cout<<"ultra fast";
    }
    if (speed >1000){
        cout<<"Extremely Fast";
    }
}