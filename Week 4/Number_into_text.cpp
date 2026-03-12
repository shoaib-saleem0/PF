#include <iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter Number: ";
    cin>> n;

    if (n == 0) cout<<"zero";
    if (n == 1) cout<<"one";
    if (n == 2) cout<<"two";
    if (n == 3) cout<<"three";
    if (n == 4) cout<<"four";
    if (n == 5) cout<<"five";
    if (n == 6) cout<<"six";
    if (n == 7) cout<<"seven";
    if (n == 8) cout<<"eight";
    if (n == 9) cout<<"nine";
    if (n == 10) cout<<"ten";
    if (n == 11) cout<<"eleven";
    if (n == 12) cout<<"twelve";
    if (n == 13) cout<<"thirteen";
    if (n == 14) cout<<"fourteen";
    if (n == 15) cout<< "fifteen";
    if (n == 16) cout<< "sixteen";
    if (n == 17) cout<< "seventeen ";
    if (n == 18) cout<< "eighteen";
    if (n == 19) cout<< "nineteen";

    if (n >= 20 && n <= 99){
        int t = n/10;

        if (t == 2) cout<< "twenty ";
        if (t == 3) cout<< "thirty ";
        if (t == 4) cout<< "fourty ";
        if (t == 5) cout<< "fifty ";
        if (t == 6) cout<< "sixty ";
        if (t == 7) cout<< "seventy ";
        if (t == 8) cout<< "eighty ";
        if (t == 9) cout<< "ninety ";
    int o = n%10;

    if (o > 0){
        if (o == 1) cout<<"one";
        if (o == 2) cout<<"two";
        if (o == 3) cout<<"three";
        if (o == 4) cout<<"four";
        if (o == 5) cout<<"five";
        if (o == 6) cout<<"six";
        if (o == 7) cout<<"seven";
        if (o == 8) cout<<"eight";
        if (o == 9) cout<<"nine";
    }
    }
    if (n == 100) cout<<"hundred";

    
}