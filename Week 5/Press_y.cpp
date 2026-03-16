#include <iostream>
using namespace std;
main(){
    char a = 'y';
    while (a == 'y'){
        cout<<"I am Happy!\n";
        cout<<"press y to continue or any key to exit: ";
        cin>>a;
    }
}