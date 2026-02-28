#include <iostream>
using namespace std;

main(){

cout<< " Enter he name of the person: ";
string name;
cin>> name;

cout<< " Enter the target weight loss in kilograms: ";
float weight;
cin>> weight;

float cal = weight*15;

cout<< " Fatima will need " <<cal<< " to lose " <<weight<< " kg of weight by following the doctor's suggestions"; 
}