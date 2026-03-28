#include <iostream>
using namespace std;
main(){
    int n;
    string customer[50];
    char check;
    int total;

    cout<<"Enter number of customers: ";
    cin>>n;

    cout<< "Enter tha names of "<<n<<" customers: \n";
    for(int i =0; i<n; i++){
        cin>>customer[i];
    }
    cout<<"Enter letter to check: ";
    cin>>check;
    for(int p = 0; p<n; p++){
        if(customer[p][0] == check){
            total++;
        }
    }
    cout<<"Total names starting with '"<<check<<"': "<<total;
}