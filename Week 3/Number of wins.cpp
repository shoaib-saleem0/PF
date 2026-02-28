#include<iostream>
using namespace std;

main()
{
cout<< " Enter the number of wins : ";
int wins;
cin>> wins;

cout<< " Enter the number of wins: ";
int draws;
cin>> draws;

cout<< " Enter the number of losses: ";
int losses;
cin>> losses;

int cal = (wins*3)+(draws*1)+(losses*0);

cout<< " Pakistan has obtained " <<cal<< " in Asia Cup Tournament";
}