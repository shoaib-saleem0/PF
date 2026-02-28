#include <iostream>
using namespace std;

main(){

cout<< " Enter the number of sides of the polygon: ";
int sides;
cin>> sides;

int cal = (sides - 2)*180;

cout<< "The total sum of internal angles of a : "<<sides<<"-sided polygon is : "<<cal<< " degrees";
}