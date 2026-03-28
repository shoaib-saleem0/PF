#include <iostream>
using namespace std;
main(){
    char word [100];

    cout<<"Enter Word: ";
    cin>>word;

    for(int i = 0; word[i] != '\0'; i++){
        cout<<word[i]<<" is stored at "<<i<<endl;    
    }
}