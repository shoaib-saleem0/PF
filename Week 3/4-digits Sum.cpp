#include <iostream>
using namespace std;

main(){

cout<< " Enter a 4-digit number: ";
int number;
cin>> number;

int dig1 = number % 10;
number = number / 10;

int dig2 = number % 10;
number = number / 10;

int dig3 = number % 10;
number = number / 10;

int dig4 = number % 10;
number = number / 10;

int cal = dig1 + dig2 + dig3 + dig4;

cout<< " Sum of digits is " <<cal;
}