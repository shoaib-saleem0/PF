#include <iostream>
using namespace std;
main(){
    int pin [3];
    int choice;
    int current = 25000;
    int deposit;
    int withdraw;
    for (int i =0; i<3 ;i++){
        cout<<"Enter Pin: ";
        cin>>pin[i];
        if(pin[i] == 1234){
            cout<<"LOGIN SUCCESSFUL!\n";
            break;
        }else{
            cout<<"TRY AGAIN!"<<endl;
            if (i == 2){
                cout<<"TOO MANY ATTEMPTS! Program Ends.";
                return 0;
            }
        }
        }
        
        while(choice != 4){
            cout<<"-----ATM MENU-----\n";
            cout<<"1. Check Balance\n";
            cout<<"2. Deposit Money\n";
            cout<<"3. Withdraw Money\n";
            cout<<"4. EXIT\n";

            cin>>choice;

            if (choice == 1){
                cout<<"Your Current Balance is: "<<current<<endl;
            }else if(choice == 2){
                cout<<"Enter amount to be deposited: ";
                cin>>deposit;
                current = current + deposit;
                cout<<"Updated Balance is: "<<current<<endl;
            }
            else if(choice == 3){
                cout<<"Enter amount to withdraw: ";
                cin>>withdraw;
                if(withdraw <= current && withdraw > 0){
                    current = current - withdraw;
                    cout<<"Remaining Balance is: "<<current<<endl;

                }else{
                    cout<<"INSUFFICIENT BALANCE\n";
                }
            }else if(choice == 3){
                break;
            }else{
                cout<<"INVALID CHOICE!\n";
            }
        }
        cout<<"Thank you for using ATM";
    }