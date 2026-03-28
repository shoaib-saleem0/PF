#include <iostream>
using namespace std;
main(){
    string names [50];
    cout<<"Enter Name of 5 students: \n";
    for(int i =0; i<5; i++){
        cin>>names[i];
    }cout<<"Student names are: \n";
    for(int p=0;p<5;p++){
        cout<<names[p]<<endl;
    }

}