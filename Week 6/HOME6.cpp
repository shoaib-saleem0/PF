#include <iostream>
using namespace std;
main(){
    int n;
    string names[50], check;

    cout<<"Enter number of students: ";
    cin>>n;
    cout<<"Enter names of "<<n<<" students: ";
    for(int i =0; i<n; i++){
        cin>>names[i];
    }
    for(int p =0; p<n; p++){
        
    }
    for (int i =0; i<n; i++){
        for(int p =0; p<n; p++){
            if(names[p] > names [p + 1]){
                check = names[p];
                names[p] = names[p + 1];
                names[p + 1] = check;

            }
        }
    }
    cout<<"Names in alphabetical order: \n";
    for (int i =0; i<=n;i++){
        cout<<names[i]<<endl;
    }

}