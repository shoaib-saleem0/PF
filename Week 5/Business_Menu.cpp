#include <iostream>
using namespace std;
main(){
    int choice;
    string select;
    while(true){

        cout<<"--RESTAURANT MANAGEMENT SYSTEM--\n";
        cout<<"1. View Food Menu\n";
        cout<<"2. Place Order\n";
        cout<<"3. View Order Status\n";
        cout<<"4. Generate Bill\n";
        cout<<"5. Contact Staff\n";
        cout<<"6. Exit\n";
        cout<<"Enter your choice (1-6): ";
        cin>>choice;
        
        if (choice == 1){
            select = "View Food Menu";
        }
        else if(choice == 2){
            select = "Place Order";
        }
        else if(choice == 3){
            select = "View Order Status";
        }
        else if(choice == 4){
            select = "Generate Bill";
        }
        else if(choice == 5){
            select = "Contact Staff";
        }
        else if(choice == 6){
            break;
        }
        cout<<"You Selected: "<<select<<"\n"<<endl;
        }
        cout<<"PROGRAM ENDS\n\n";
    }