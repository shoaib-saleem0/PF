#include <iostream>
using namespace std;

main(){

cout<< " Enter vegetable price per kilogram (in coins): ";
float veg_price;
cin>> veg_price;

cout<< " Enter fruit price per kilogram (in coins): ";
float fruit_price;
cin>> fruit_price;

cout<< " Enter total kilograms of vegetables: ";
int veg;
cin>> veg;

cout<< " Enter total kilograms of fruits: ";
int fruits;
cin>> fruits;

float cal = (veg_price/1.94)*veg + (fruit_price/1.94)*fruits;

cout<< " Total earnings in Rupees (Rps): "<<cal;


}