#include <iostream>
using namespace std;

main(){

cout<< " Enter the current world population: ";
int pop;
cin>> pop;

cout<< " Enter the monthly birth rate (number of births per month): ";
int birth;
cin>> birth;

int cal = (birth*12)*3 + pop;

cout<< " Population in three decades will be: "<<cal;
}