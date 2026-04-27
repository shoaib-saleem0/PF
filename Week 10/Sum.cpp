#include <iostream>
using namespace std;
int sum(int number);
main(){
    int number;
    cout<<"Enter Number: ";
    cin>>number;

    cout<<sum(number);
}
int sum(int number){
    int cal = number + 5;
    return cal;
}