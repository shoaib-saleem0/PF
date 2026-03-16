#include <iostream>
using namespace std;
main(){
    int choice;
    string name;
    while (true){
        cout<<"---Library System---\n";
        cout<<"1. Add Book\n";
        cout<<"2. View Book\n";
        cout<<"3. Borrow Book\n";
        cout<<"4. Issue Book\n";
        cout<<"5. Exit\n";
        cout<<"Enter Your Choice (1-5): ";
        cin>> choice;

        if(choice == 1){
            cout<<"Enter Book Name: ";
            cin>> name;
            cout<<"you added a book: "<<name<<endl;
        }
        else if(choice == 2){
            cout<<"Enter book name: ";
            cin>>name;
        }
        else if(choice == 3){
            cout<<"Enter book name: ";
            cin>>name;
        }
        else if(choice == 4){
            cout<<"Enter book name: ";
            cin>>name;
        }
        else if(choice == 5){
            break;
        }
    }
    cout<<"Exiting Library System\n";
}