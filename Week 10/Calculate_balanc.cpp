#include <iostream>
using namespace std;
float bonus(int balance,int years){
    float interest;
    if(balance < 10000){
        interest += 0.05;
    }else if(balance >= 10000 && balance <= 50000){
        interest += 0.07;
    }else if(interest > 50000){
        interest += 0.1;
    }
    if (years >= 3){
        interest += 0.02;
    }
    return interest;
    }
main(){
    float balance, years;

    cout<<"Enter Balance and Years: \n";
    cin>>balance;
    cin>>years;
    float final = balance + (balance * bonus(balance, years));

    cout<<"Updated Balance: "<<final;
}