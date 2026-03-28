#include <iostream>
using namespace std;
main(){
    int n;
    int size = 0;
    int check;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int number[n];

    cout<<"Enter "<<n<<" numbers, one per line."<<endl;

    for(int i = 0; i < n; i++){
        cin>>check;
        bool duplicate = false;
        for(int p = 0; p<size; p++){
            if(check == number [p]){
                cout<<"Already Entered: "<<check<<endl;
                duplicate = true;
                break;

            }
        }
        if(!duplicate){
            number[size] = check;
                size++;
        }
        
    }
    cout<<"Unique Elements are: ";
    for(int q = 0; q < size; q++){
        cout<<number[q]<<" ";
    }
}