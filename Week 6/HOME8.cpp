#include <iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter number of flights: ";
    cin>>n;

    int flight_num[100], seats[100];
    string name[100];
    for(int i = 0; i<n; i++){
        cout<<"Enter flight number for flight "<<i+1<< " : ";
        cin>>flight_num[i];

        cout<<"Enter destination for flight "<<flight_num[i]<<": ";
        cin>>name[i];

        cout<<"Enter seats available for flight "<<flight_num[i]<<" :";
        cin>>seats[i];
        cout<<endl<<endl;
    }

    cout<<"Flight Information:\n";
    cout<<"-------------------\n";
    for (int i = 0; i<n; i++){
            cout<<"Flight "<<flight_num[i]<<" to "<<name[i]<<" has "<<seats[i]<<" seats available.\n";}
            cout<<endl;   
            cout<<"Flights with less than 5 seats available: \n";
            cout<<"------------------------------------------\n"; 
    for (int i = 0; i<n; i++){
        if(seats[i] < 5){
            cout<<"Flight "<<flight_num[i]<<" to "<<name[i]<<" has "<<seats[i]<<" seats available.\n";
        }else{
                cout<<"No flights with less than 5 seats available";
            }
        }
    }