#include <iostream>
using namespace std;
float Total_days(float hours, float days, float workers);
main(){
    float hours, days, workers;

    cout<<"Enter needed hours: ";
    cin>>hours;

    cout<<"Enter Number of days of firm: ";
    cin>>days;

    cout<<"Enter number of workers: ";
    cin>>workers;


    float workingDays = Total_days(hours, days,workers);
    if (workingDays > days){
        cout<<"NOT ENOUGH TIME!";
    }else if (workingDays < days){
        int remaining = ((days*24) - hours);
        cout<<"YES! "<<remaining<<" Hours Left";
        
    }
}
float Total_days(float hours, float days, float workers){
    float workingdays = hours/10;
    workingdays = workingdays / workers;
    float cal = workingdays - (workingdays*0.1);
    return cal;
}
