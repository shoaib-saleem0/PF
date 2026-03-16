#include <iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter Number of ROWS: ";
    cin>>n;
    for (int rows = 1; rows <= n; rows++){
        for(int columns = 1; columns <= rows; columns++){
            cout<<"*";
        }
        cout<<endl;
    }
}