#include <iostream>
using namespace std;

main(){

int a,b,c;

cout<< " Number of square meters you can paint: ";
cin>> a;

cout<< " Width of the single wall (in Meters): ";
cin>> b;

cout<< " Height of the single wall (in meters): ";
cin>> c;

int cal = a/(b*c);

cout<< "Number of walls you can paint: "<<cal;

}

