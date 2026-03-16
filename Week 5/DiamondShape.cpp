#include <iostream>
using namespace std;
main(){
    for (int rows = 1; rows <= 5; rows++){
        for(int columns = 1; columns <= rows; columns ++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int rows2 = 5; rows2 >= 1; rows2--){
        for (int col2 = rows2; col2 >= 1; col2--){
            cout<<"*";
        }
        cout<<endl;
    }
}