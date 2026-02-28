#include<iostream>
using namespace std;

main()
{
cout << "Enter Weight in Pounds : ";
int weight;
cin>>weight;

float kg = 0.45;

float kilograms;
kilograms = weight*kg;

cout <<weight<< " pounds is equal to " <<kilograms;
}