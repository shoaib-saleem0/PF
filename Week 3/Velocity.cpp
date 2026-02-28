#include <iostream>
using namespace std;

main(){

cout<< " Enter Initial Velocity (m/s): ";
float velocity;
cin>> velocity;

cout<< " Enter Acceleration (m/s^2): ";
float acc;
cin>> acc;

cout<< " Enter Time: ";
float time;
cin>> time;

float cal = (acc*time)+velocity;

cout<< "Final Velocity (m/s): " <<cal;
}