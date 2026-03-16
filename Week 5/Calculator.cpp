#include <iostream>
using namespace std;
main(){
    int n1, n2;
    int cal;
    int choice;
    while (choice != 6){
        cout<<"----Simple Calculator----\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Clear Screen\n";
        cout<<"6. Exit\n";

        cout<<"Enter your choice (1-6): ";
        cin>> choice;
        if(choice < 5){
        cout<<"Enter First Number: ";
        cin>>n1;

        cout<<"Enter Second Number: ";
        cin>>n2;
        }
        if(choice == 1){
            cal = n1 + n2;
            cout<<"RESULT: "<<cal<<endl<<endl;

        }
        else if(choice == 2){
            cal = n1 - n2;
            cout<<"RESULT: "<<cal<<endl<<endl;
        }
        else if(choice == 3){
            cal = n1 * n2;
            cout<<"RESULT: "<<cal<<endl<<endl;
        }
        else if(choice == 4){
            cal = n1 / n2;
            cout<<"RESULT: "<<cal<<endl<<endl;
        }
        else if(choice == 5){
            cout<<"Screen Cleared\n";
        }
        else if(choice == 6){
            break;
        }

          
    }
}