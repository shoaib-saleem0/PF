#include <iostream>
using namespace std;
int symmetry(int number);
main(){
    int number;

    cout<<"Enter a Three-Digit Number: ";
    cin>>number;
    
    symmetry(number);


}
int symmetry(int number){
    int a = number % 10;
    number = number/10;
    int b = number % 10;
    number = number/10;
    int c = number % 10;
    number = number/10;

    if( a == c){
        cout<<"The number is symmetrical";
    }else {
        cout<<"The number is not symmetrical";
    }

}