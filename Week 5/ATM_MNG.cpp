#include <iostream>
using namespace std;
main(){
    int pin, choice;
    int balance = 26000;
    int deposit = 0;
    int withdraw;
    for (int i = 1; i<=3; i++){
        cout<<"Enter Pin: ";
        cin>> pin;
        if (pin == 1234){
            cout<<"Login Successful\n";
            break;
            
        }else{
            cout<<"WRONG PIN! TRY AGAIN\n";}
            if (i == 3){
                return 0;
            }
        }
        while (choice != 4){
            if(pin == 1234){
            cout<<"-----ATM MENU-----\n";
            cout<<"1. Check Balance\n";
            cout<<"2. Deposit Money\n";
            cout<<"3. Withdraw Money\n";
            cout<<"4. Exit\n";

            cin>>choice;

        if (choice == 1){
            cout<<"Your Current Balance is: "<<balance<<endl;

        }
        else if (choice == 2){
            cout<<"Enter Amount to deposit: ";
            cin>>deposit;
            balance = balance + deposit;

        }
        else if(choice == 3){
            cout<<"Enter Amount to Withdraw: ";
            cin>>withdraw;
            if(withdraw <= balance){
            balance = balance - withdraw;
        }else{
            cout<<"INSUFFICIENT BALANCE\n";

        }
    }
    else if(choice == 4){
        cout<<"Program Exit\n";
        break;
    }
}
}
}