#include <iostream>
using namespace std;
main(){
    int n;
    float resistance;

    cout<<"Enter the number of resistors in the series circuit: ";
    cin>>n;
    float number[n];

    cout<<"Enter the resistance values (in ohms) of the "<<n<< " resistors, one per line.";

    for(int i = 0; i<n; i++){
        cin>>number[i];
        resistance += number[i];

    }
    cout<<"The total resistance of the series circuit is "<<resistance<<" ohms.";

    
}