#include <iostream>
using namespace std;
string timeTravel(int hours, int minutes);
main(){
    int minutes, hours;

    cout<<"Enter Hours (0 - 23): ";
    cin>>hours;

    cout<<"Enter Minutes (0 - 59): ";
    cin>>minutes;

    cout<<timeTravel (hours,minutes);
}
string timeTravel(int hours, int minutes){
    minutes += 15;
    if(minutes >=60){
        hours += 1;
        minutes -= 60;
    }
    string result = to_string(hours) + ":" + to_string(minutes);
    return result;
}