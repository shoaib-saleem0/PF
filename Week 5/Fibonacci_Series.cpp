#include <iostream>
using namespace std;
main(){
    int a = 0;
    int b = 1;
    int next;
    int n;
    cout<< "Enter number: ";
    cin>>n;

        if (n == 1){
            cout<<"0";
        }
        else if(n == 2){
            cout<<"0,1";}
        else{
            cout<<"0,1,";
    for (int i = 3; i <= n; i++){
        
        next = a + b;
        cout<<next<<",";
        a = b;
        b = next;
    }
}
}