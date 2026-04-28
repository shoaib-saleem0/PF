#include <iostream>
using namespace std;
int sorting(int number[],int size);
main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter Elements: ";
    int number[100];
    for(int i= 0; i<n; i++){
    cin>>number[i];
    }
    sorting(number,n);

}
int sorting(int number[],int size){
    int check =0;
    int array[100];

    for(int i =0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if (number[i] > number[j]){
                array[check] = number[i];
                check++;
            }
        }
    }
    for(int i= 0; i<=check; i++){
        cout<<array[i]<<" ";
    }
}

