#include <iostream>
using namespace std;
int sum(int a, int b);
main(){
    int a,b;
    cout<<"Enter Number 1: ";
    cin>>a;

    cout<<"Enter Number 2: ";
    cin>>b;

    sum(a,b);

}
int sum(int a, int b){
    cout<<"sum: "<<a+b;
}