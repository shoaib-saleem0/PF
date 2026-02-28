#include<iostream>
using namespace std;

main()
{
cout<< " Enter Voltage (in volts): ";
int volts;
cin>> volts;

cout << " Enter Current";
int current;
cin>> current;

int power = current * volts;

cout<< " The power is " <<power<< " watts ";
}