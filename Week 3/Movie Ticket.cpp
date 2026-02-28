#include <iostream>
using namespace std;

main(){

cout<< " Enter the movie name: ";
string name;
cin>> name;

cout<< " Enter the adult ticket price: $";
int adult;
cin>> adult;

cout<< " Enter the child ticket price: $";
int child;
cin>> child;

cout<< " Enter the number of adult tickets sold: ";
int adult_tic;
cin>> adult_tic;

cout<< " Enter the number of child tickets sold: ";
int child_tic;
cin>> child_tic;

cout<< " Enter the percentage of amount to be donated to charity: ";
int amount;
cin>> amount;

float net_amount = (adult*adult_tic)+(child*child_tic);
float cal = (net_amount/100)*amount;
float rem = net_amount - cal;

cout<< "------------------------------------------------------\n";
cout<< "Movie: "<<name<<endl;
cout<< " Total amount generated from ticket sales: "<<net_amount<<endl;
cout<< " Donation to charity(" <<amount<< "%): "<<cal<<endl; 
cout<< " Remaining amount after donation: "<<rem<<endl;
}