#include <iostream>
using namespace std;

main(){

cout<< " Enter the size of the fertilizer bag in pounds: ";
float size;
cin>> size;

cout<< " Enter the cost of the bag: $";
float cost;
cin>> cost;

cout<< " Enter the area in square feet that can be covered by the bag: ";
float area;
cin>> area;

float per_pound = cost/size;
float per_squarefeet = cost/area;

cout<< " Cost of fertilizer per pound: $"<<per_pound <<endl;
cout<< " Cost of fertilizer per square foot: $"<<per_squarefeet;
}