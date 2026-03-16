#include <iostream>
using namespace std;
main(){
    long long money;
    int year, age = 18;
    int even = 0, odd = 0;
    cout<<"Enter Money: ";
    cin>> money;
    cout<<"Enter Year: ";
    cin>> year;
for (int i = 1800; i <= year; i++){
    if(i % 2 == 0){
        even = even + 12000;
    }else{
        int mod = year % 10;
        odd = odd + 12000 + 50*(age);
    }
    age++;
}
int total = (even + odd);

if (total < money){
    int rem = money - total;
 cout<<"Yes! He will live a carefree life and will have "<<rem<<" Dollars left";
}else{
    int rem = total - money;
    cout<<"He will need "<<rem<<" dollars to survive";
}
}