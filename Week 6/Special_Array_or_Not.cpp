#include <iostream>
using namespace std;
main(){
    int n;


    cout<<"Enter the size of array: ";
    cin>>n;
    int number [n];
bool check = true;
    for(int i = 0; i < n; i++){
        cout<<"Enter elements of the array: ";
        cin>>number[i];
        
    }
    for(int p = 0; p < n; p++){
        if(p % 2 == 0){
            if(number[p] % 2 != 0){
                check = false;
            }
            }
        }
        if(check == true){
            cout<<"The array is special";
        }else{
            cout<<"The array is not special";
        }
        }