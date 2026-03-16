#include <iostream>
using namespace std;
main(){
    int age; 
    double toy, money = 0; 
    int price;
    int toys = 0;
    int N = 0;
    cout<<"Enter Lilly's age: ";
    cin>> age;
    cout <<"Enter the price of the washing machine:  ";
    cin>> price;
    cout<<"Enter the unit price of each toy: ";
    cin>>toy;
    for(int i = 1; i <= age; i++){
        if(i % 2 == 0){
            
            money = money - 1;
            N = N + 10;
            money = money + N;}

        else{
            toys++;
        }

        }
        double toysmoney = toys * toy;
        double sum = toysmoney + money;
        if (sum >= price){
            cout<< "YES\n";
            double rem = sum - price;
            cout<<rem;
        }else{
            cout<<"NO!\n";
            double rem = price - sum;
            cout<<rem;
        }
    }