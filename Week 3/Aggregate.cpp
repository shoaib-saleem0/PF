#include<iostream>
using namespace std;

main()
{
cout << " Enter the student's name: ";
string name;
cin>> name;

cout<< " Enter matriculation marks (out of 1100): ";
float matric;
cin>> matric;

cout << " Enter intermediate marks (out of 550): ";
float inter;
cin>> inter;

cout << " Enter ECAT Marks (out of 400): ";
float ECAT;
cin >> ECAT;

float aggregate = (10.0*matric)/1100+(40.0*inter)/550+(50.0*ECAT)/400;

cout<< "YOUR AGGREGATE IS: " <<aggregate<< "%";
}
