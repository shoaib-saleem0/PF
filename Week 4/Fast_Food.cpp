#include <iostream>
using namespace std;
main(){
    int laptopprice = 50000;
    int salary = 10000;
    float advance = (10000*0.50);
    float total_adv = advance * 6;
    int required_months = laptopprice/advance;
    cout << "months required to buy laptop: "<<required_months;
}