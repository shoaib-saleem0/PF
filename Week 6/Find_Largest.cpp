#include <iostream>
using namespace std;
main(){
    int n, largest = 0;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int number[n];
    cout<<"Enter "<<n<<" numbers one per line"<<endl;
    for(int p =0; p < n; p++){
        cin>>number[p];

    }
    for(int q = 0; q < n; q++){
        if(number[q] > largest){
            largest = number[q];
        }
    }
        cout<<"The largest number is: "<<largest;

}