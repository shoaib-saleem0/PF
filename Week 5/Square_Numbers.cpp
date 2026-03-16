#include <iostream>
using namespace std;
main(){
    int number = 1;
    for(int i =1; i<= 3; i++){
        for(int p =1; p <=3; p++){
            cout<<number;
            number = number + 1;
        }
        number = 1;
        cout<<endl;
    }
}