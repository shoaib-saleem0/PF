#include <iostream>
using namespace std;
main(){
    int n;
    int numbers[50];
    int sum;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<< " numbers: \n";
    for(int i =0; i<n; i++){
        cin>>numbers[i];
        if(numbers[i] % 2 == 0){
            sum++;
            }
        }
        cout<<"The total even numbers are: "<<sum;
    }