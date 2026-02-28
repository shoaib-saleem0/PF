#include<iostream>
using namespace std;

main()
{
int dollarprice = 280;

cout << "Enter Amount in Dollars : " ;
int dollars;
cin >> dollars;

int ans;
ans = dollars * dollarprice;

cout << "Dollars "<<dollars<<" Into Rupees are " <<ans;
}