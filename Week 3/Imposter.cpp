#include <iostream>
using namespace std;

main(){

cout<< " Enter Imposter Count: ";
float imposter;
cin>> imposter;

cout<< " Enter Player Count: ";
float player;
cin>> player;

float cal = 100*(imposter/player);

cout<< " Chance of being an imposter: "<<cal<< "%";
}