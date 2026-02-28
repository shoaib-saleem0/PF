#include <iostream>
using namespace std;

main(){

cout<< " Number of Minutes: ";
int minutes;
cin>> minutes;

cout<< " Frames per second: ";
float frames;
cin>> frames;

int cal = (minutes*60)*frames;

cout<< " Total Number of Frames: "<<cal;
}