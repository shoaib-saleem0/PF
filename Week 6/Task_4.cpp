#include <iostream>
using namespace std;
main(){
    int number [5];
    for(int i = 0; i<5; i++){
        cout<<"Enter input " <<i +1<<" : ";
        cin>>number[i];
    }
    cout<<"The first element in the array is: "<<number[0]<<endl;
    cout<<"The last element in the array is: "<<number[4]<<endl;
}