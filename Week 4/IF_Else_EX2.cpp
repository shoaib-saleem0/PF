#include <iostream>
using namespace std;
main(){
    char a;
    cout<< "are your friends going (press y for yes): ";
    cin>> a;

    if (a == 'y'){
        cout<< "you are also going";
    }else{
        cout<<"you are not going";
    }
}