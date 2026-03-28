#include <iostream>
using namespace std;
main(){
    int n = n + 2;
    int number1[2];
    int size = 0;
    cout<<"Enter 2 elements for the first array: "<<endl;
    for(int i = 0; i < 2; i++){
        cin>>number1[i];
    }
    cout<<"Enter the number of elements for the second array: ";
    cin>>n;
    int number[n+2];
    for(int q = 0; q < n; q++){
        cin>>number[q+1];
        size++;
    }
    number[0] = number1[0];
    number[size+1] = number1[1];

    cout<<"Resulting array is: ";
    for(int p = 0; p < size+2; p++){
        cout<<number[p]<<" ";
    }
}