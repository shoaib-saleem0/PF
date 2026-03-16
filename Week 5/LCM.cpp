#include <iostream>
using namespace std;
main(){
    int a, b, gcd, lcm;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    int less;
    if (a > b){
        less = a;
    }else{
        less = b;
    }

    for(int i = 1; i <= less; i++ ){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    cout<<"The GCD is: "<<gcd<<endl;

    lcm = (a * b)/gcd;

    cout<<"LCM: "<<lcm;
}