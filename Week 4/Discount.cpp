#include <iostream>
using namespace std;
main(){
    int amount;
    cout<< "Enter Your Bill: ";
    cin>> amount;

    if (amount > 1500){
        int cal = amount - (amount*0.1);
        cout<<" Your discounted bill is: "<<cal;
    }else{
        int cal = amount - (amount*0.05);
        cout<< "Your discounted bill is: "<<cal;
    }
    }
