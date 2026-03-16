#include <iostream>
using namespace std;
main(){
    int number = 5;
    for (int i = 5; i >= 1;i--){
        for(int p = 5; p >= i; p--){
            cout<<p;
        }
        cout<<endl;
    }
}