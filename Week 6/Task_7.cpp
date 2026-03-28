#include <iostream>
using namespace std;
main(){
    string word;
    char letter;
    bool check = false;

    cout<<"Enter Word: ";
    cin>>word;

    cout<<"Enter character you wanna find: ";
    cin>>letter;

    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] == letter){
            check = true;
            break;
        }
    }
        if(check == true){
            cout<<letter<<" is found in "<<word;
        }else{
            cout<<letter<<" is not found in "<<word;
        }
    

}