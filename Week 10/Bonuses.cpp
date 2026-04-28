#include <iostream>
using namespace std;
float salary (int base, int score, int experience);

main(){
    int base, score, experience;

    cout<<"Enter Base, Score, Experience in Years: ";
    
    cin>>base;
    cin>>score;
    cin>>experience;
   
    cout<<"Final Salary: "<<base + (base*salary(base,score,experience));
}
float salary (int base, int score, int experience){
    float bonus_rate = 0;
    if(score >= 90){
        bonus_rate = 0.20;
    }else if (score >= 75 && score <= 89){
        bonus_rate = 0.10;
    }else if (score < 75) {
        bonus_rate = 0.05;
    }
    if(experience >= 5){
        bonus_rate += 0.05;
    }
    return bonus_rate;
}