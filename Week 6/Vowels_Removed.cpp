#include <iostream>
using namespace std;
main(){
    char sent[100];
    char result[100];
    int j = 0;
    cout<<"Enter a string: ";
    cin.getline(sent,100);

    for(int i =0; sent[i] != '\0';i++){
        if(sent [i] != 'a' && sent[i] != 'e' && sent[i] != 'i' && sent[i] != 'o' && sent[i] != 'u' &&
           sent [i] != 'A' && sent[i] != 'E' && sent[i] != 'I' && sent[i] != 'O' && sent[i] != 'U'){
            result[j] = sent[i];
            j++;

        } 
    }
    for(int p =0; p < j; p++){
        cout<<result[p];
    }


    
}