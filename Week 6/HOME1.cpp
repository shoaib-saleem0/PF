#include <iostream>
using namespace std;
main(){
    int n;
    int number [50];
    int sum;
    cout<<"Enter Number of elements: ";
    cin>>n;
    cout<<"Enter 4 numbers: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>number[i];
        sum = sum + number[i];
    }
    cout<<"Sum of all elements: "<<sum;
}