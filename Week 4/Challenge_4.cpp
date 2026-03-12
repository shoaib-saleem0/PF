#include <iostream>
using namespace std;
main(){
    string my_pass, user;
    cout<< " Enter the password: ";
    cin>> user;

    my_pass = "pass@123";

    if (user == my_pass){
        cout<<"WOW!, Your have cracked the code";
    }else{
        cout<<"It is not that simple, Try Again.";
    }
}