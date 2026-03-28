#include <iostream>
using namespace std;
main(){
    char word [100];
    int length = 0;

    cout<<"Enter a string: ";
    cin>>word;

    for (int i = 0; word[i] != '\0'; i++){
        length++;
        
    }
    cout<<"Reversed String: ";

    for (int p = 0; word[p] != '\0'; p++){
        cout<<word[length - 1];
        length--;
    }
}