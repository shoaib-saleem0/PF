#include <iostream>
using namespace std;
main(){
    int choice;
        int pin[10];
        string pass[3];
        string name[100];
        string course[3];
        int age[10];

        for(int i =0; i < 3;i++ ){
            cout<<"ENTER USERNAME: ";
            cin>>pass[i];
            cout<<"ENTER PASSWORD: ";
            cin>>pin[i];
            if(pin[i] == 1234 && pass[i] == "admin"){
                cout<<"LOGIN SUCCESSFUL!\n";
                break;
            }else{
                cout<<"WRONG Credentials\n";
                cout<<"TRY AGAIN!\n";
            }
            if(i == 2){
                cout<<"TOO MANY ATTEMPTS!\n";
            }
        }

        while(choice != 5){
            cout<<"-----MENU-----\n";
            cout<<"1. Add Student\n";
            cout<<"2. View Students\n";
            cout<<"3. Add Course\n";
            cout<<"4. View Course\n";
            cout<<"5. EXIT\n\n";

            cout<<"Enter a number to select (1-5): ";
            cin>>choice;

            if(choice == 1){
                int n;
                
                cout<<"Enter Number of students: ";
                cin>>n;
                if(n <= 3){
                for(int p =0; p<n; p++){
                    cout<<"Enter Student Name: ";
                    cin>>name[p];

                    cout<<"Enter Student Age: ";
                    cin>>age[p];
                    cout<<"Student Added Successfully.\n";

                }
            }else{
                cout<<"INVALID CHOICE\n";
            }
            }else if(choice == 2){
                int m;
                cout<<"Enter Your Choice: ";
                cin>>m;
                for(int q =0; q<m; q++){
                    cout<<"Student "<<q+1<<":"<<endl;
                    cout<<"Name: "<<name[q]<<endl;
                    cout<<"Age: "<<age[q]<<endl;
                }

            }else if(choice == 3){
                
                int n;
                cout<<"Enter Your Choice: ";
                cin>>n;
                if(n > 3 || n < 0){
                    cout<<"INVALID CHOICE!\n";
                }else{
                for(int r = 0; r<n;r++){
                    cout<<"Enter Course Name: ";
                    cin >> course[r];}

                }
            }else if(choice == 4){
                int n;
                cout<<"Enter Your Choice: ";
                cin>>n;
                if(n > 3 || n < 0){
                    cout<<"INVALID CHOICE!\n";
                }else{
                for (int s = 0; s<n; s++){
                    cout<<"Course "<<s+1<<" \n";
                    cout<<course[s]<<endl;}}
                }

        }
    }