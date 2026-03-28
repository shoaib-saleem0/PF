#include <iostream>
using namespace std;
main(){
    int n;
    
    char chord [100][10];
    cout<<"Enter the number of chords: ";
    cin>>n;
    for (int i = 0; i < n; i++){
        cout<<"Enter chords: ";
        cin>>chord[i];
        int size = 0;
        
        while(chord[i][size] != '\0'){
        size++;
        }
        if(chord[i][size - 1] != '7'){
            chord [i][size] = '7';
        }
    }
    cout<<"Jazzified Chords: "; 
    for(int q =0; q < n; q++){
        cout<<chord[q]<<" ";
    }
}