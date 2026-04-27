#include <iostream>
using namespace std;
float taxF(float price, char code);
string type(char code);
main(){
    char code;
    float price;

    cout<<"Enter Type Code (M/E/S/V/T): ";
    cin>>code;

    cout<<"Enter Vehicle Price: ";
    cin>>price;

    float final = price + taxF(price,code);
    cout<<"The final price on a vehicle of type "<<type(code)<<" after adding tax is $"<<final;
    
}
float taxF(float price, char code){
    if (code == 'M'){
        float cal = price * 6/100;
        return cal;
    } else if (code == 'E'){
        float cal =  price * 0.08;
        return cal;
}else if (code == 'S'){
        float cal = price *0.06;
        return cal;
}else if (code == 'V'){
        float cal = price * 0.12;
        return cal;
}else if (code == 'T'){
        float cal = price * 0.15;
        return cal;
}
}
string type(char code){
    if (code == 'M'){
       cout<<"Motorcycle";
    } else if (code == 'E'){
        cout<<"Electric";
}else if (code == 'S'){
        cout<<"Sedan";
}else if (code == 'V'){
        cout<<"Can";
}else if (code == 'T'){
        cout<<"Truck";
}
}