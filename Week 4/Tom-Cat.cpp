#include <iostream>
using namespace std;
main(){
    int holidays;
    cout<<"enter number of holidays: ";
    cin>> holidays;

    int wdays = 365 - holidays;
    int time = (wdays * 63) + (holidays * 127);
    
    if (time > 30000){
        int diff = time - 30000;
        int hour = diff/60;
        int min = diff % 60;
    cout<< "TOM will run away\n";
    cout<<hour<<" hours and "<<min<<" minutes for play";

    }else {
        int diff = 30000 - time;
        int hours = diff/60;
        int min = diff % 60;

        cout<<"Tom will sleep well\n";
        cout<<hours<<" hours and "<<min<< " minutes less for play\n";
    }
}