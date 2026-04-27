#include <iostream>
using namespace std;
char alphabet (char letter);
main(){
    char letter;
    cout<<"Enter Letter (A/a): ";
    cin>>letter;

    alphabet(letter);
}
char alphabet (char letter){
    if(letter = 'A'){
        cout<<"You have entered a capital "<<letter;
    }else if(letter = 'a'){
        cout<<"You have entered a small "<<letter;
    }
}