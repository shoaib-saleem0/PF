#include <iostream>
using namespace std;
main(){
    string books[100];
    string names[50];
    int count = 0;
    int choice;

    while(choice != 5){
        cout<<"------Library MENU------\n";
        cout<<"1.Add Books\n";
        cout<<"2.View Books\n";
        cout<<"3.Borrow Books\n";
        cout<<"5.Exit\n";
        cout<<"Choose from (1-5): ";

        cin>>choice;
        if(choice == 1){
            int n;
            cout<<"enter number of books you wanna add: ";
            cin>>n;
            cin.ignore();
            if(n < 0){
                cout<<"INVALID NUMBER!";
                break;
            }
            for(int i =0; i<n; i++){
                cout<<"Enter book name "<<i+1<<" :";
                getline (cin, books[i]);
                count++;

            }
            }
            
            if (choice == 2){
                cout<<"Books present in inventory are: \n";
                for (int i =0; i < count; i++){
                    cout<<books[i]<<endl;
                    if (books[0] == "\0"){
                        cout<<"no books available in inventory\n";
                    }
                }
            }else if(choice == 3){
                int n;
                cout<<"enter number of books to bowrrow: ";
                cin>>n;
            for (int i =0; i<n; i++){
                cout<<"enter book names: ";
                cin>>names[i];
            }
            for(int q = 0; q < n; q++){
            for(int p =0; p < count; p++){
                if(names[q] == books[p]){
                    cout<<"Book Borrowed\n";
                    for(int k = q; k < count-1; k++){
                        books[k] = books[k+1];}
                        count--;
                }else{
                    cout<<"NOT FOUND!";
                }
            }
            }
    }else{
        cout<<"WRONG CHOICE!";
    }
}
}