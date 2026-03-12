#include <iostream>
using namespace std;
main(){
    string name;
    int price;

    cout<<"Enter the name of the country: ";
    cin>> name;

    cout<<"Enter ticket price in dollars: ";
    cin>> price;

    if (name == "ireland"){
        int discount = price - (price*0.1);
        cout<< "Discounted price is: "<<discount;
    }else{
        int discount = price - (price*0.05);
        cout<<"the discounted price is: "<<discount;
    }
}