#include <iostream>
using namespace std;
main(){
    string user, pass;
    int age; string name, course;
    int choice;
    for (int i = 1; i <= 3; i++){
        cout<< "Enter Username: ";
        cin>>user;
        cout<<"Enter Password: ";
        cin>>pass;
        if (user == "admin" && pass == "1234"){
            break;
        }else{
            cout<<"WRONG CREDENTIALS"<<endl;
        }
        if (i == 3 && (user != "admin" && pass != "1234")){
            cout<<"TOO MANY ATTEMPTS. PROGRAM ENDS"<<endl;
            return 0;    
        }
        
    }
    cout<<"LOGIN SUCCESSFUL"<<endl;

    for (int p = 1; p <= 5; p++){
        cout<<endl<<"---------University Management System-------"<<endl;
        cout<<"1. Add Student\n";
        cout<<"2. View Student\n";
        cout<<"3. Add Course\n";
        cout<<"4. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        if(choice == 1){
            
            cout<<"Enter Student Name: ";
            cin>>name;

            cout<<"Enter Student age: ";
            cin>>age;

            cout<<"Student Added Successfully";
        }
        if(choice == 2){
            if(name != ""){
            cout<<"Student Name: "<<name<<endl;
            cout<<"Student Age: "<<age<<endl;
        }

        else {
            cout<<"No Student Record Found\n";

        }
    }
        if (choice == 3){
            cout<<"Enter Course Name: ";
            cin>>course;
            cout<<"Course Added "<<course;
        }
        else if (choice == 4){
            cout<<"Program Exit";
        
            break;
        }
    }
    }