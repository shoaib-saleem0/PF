#include <iostream>
using namespace std;
main(){
    int n;
    int number [n];
    int length = 0;

    cout<<"Enter the number of elements: ";
    cin>>n;
    if(n <= 0){
        cout<<"Invalid input. number of elements must be greater than 0.";
        return 0;
    }

    cout<<"Enter "<<n<<" numbers, one per line."<<endl;

    for(int i = 0; i < n; i++){
        cin>>number[i];
        length++;
    }
    cout<<"Numbers in Reverse Order: ";
    for(int p = 0; p < n;p++){
        cout<<number[length - 1]<<" ";
        length--;
        
    }


}