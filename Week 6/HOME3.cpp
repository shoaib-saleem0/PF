#include <iostream>
using namespace std;
main(){
    int n;
    int number[50];
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers: ";
    for(int i =0;i<=n;i++){
         cin>>number[i];
        }
         int largest = number[0];
         int smallest = number[0];

        for(int p =0; p<=n;p++){
            if(number[p] > largest){
                largest = number[p];}
            if(number[p] < smallest){
                smallest = number[p];
            }

        }
    
    cout<<"Largest number: "<<largest<<"\n";
    cout<<"Smallest number: "<<smallest;
}