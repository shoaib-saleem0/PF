#include <iostream>
using namespace std;
main(){
    char character [100];
    int ascii [100];
    cout << "Enter Word: ";
    cin >> character;
    for(int i = 0; character[i] != '\0'; i++){
        ascii [i] = character [i];
        ascii[i]++;
        character [i] = ascii[i];
    }
    for(int p = 0; character[p] != '\0'; p++ ){
        cout<<character[p];
    }
}