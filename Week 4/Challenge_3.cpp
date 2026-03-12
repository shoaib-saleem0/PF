#include <iostream>
using namespace std;
main(){
    string a,b;
    cout<< "Enter The First Word: ";
    cin>> a;

    cout<< "Enter the second Word: ";
    cin>> b;

    if (a == b){
        cout<< "Yes, The words are same";
    }else{
        cout<< "No, The words are different";
    }
}