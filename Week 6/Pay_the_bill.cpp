#include <iostream>
using namespace std;
main(){
    float due[4];
    float amount;
    cout<<"Enter Quarters: ";
    cin>>due[0];
    cout<<"Enter Dimes: ";
    cin>>due[1];
    cout<<"Enter Nickles: ";
    cin>>due[2];
    cout<<"Enter Pennies: ";
    cin>>due[3];

    float cal = (due[0]*0.25) + (due[1]*0.10) + (due[2]*0.05) + (due[3]*0.01);
    
    cout<<"Enter the total amount due: ";
    cin>>amount;
    cout<<"Can you pay the amount? ";
    if(cal >= amount){
        cout<<"YES";

    }else if(cal < amount){
        cout<<"NO";
    }
}