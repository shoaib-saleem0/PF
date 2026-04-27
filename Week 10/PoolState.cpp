#include <iostream>
using namespace std;
int calculatePool(float P1, float P2, float H);
float percentage(float T, float V);
float Pipe1_contributions(float P1, float P2, float H, float T);
float pipe2_contributions(float P1, float P2, float H, float T);
main()
{
    float V, P1, P2, H;
    cout << "Enter Volume of the Pool in liters: ";
    cin >> V;

    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> P1;

    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> P2;

    cout << "Enter hours that the worker is absent: ";
    cin >> H;
    float total_water = calculatePool(P1, P2, H);
    float percent = percentage(total_water, V);
    float Pipe1 = Pipe1_contributions(P1, P2, H, total_water);
    float Pipe2 = pipe2_contributions(P1, P2,H,total_water);
    cout<<"the pool is "<<percent<< "'%' Full. "<<"Pipe 1: "<<Pipe1<< ". Pipe 2: "<<Pipe2;
    return 0;

}
int calculatePool(float P1, float P2, float H)
{
    float totalWater = (P1 + P2) * H;
    return totalWater;
}
float percentage(float T, float V)
{
    float perc = (T / V) * 100;
    return perc;
}
float Pipe1_contributions(float P1, float P2, float H, float T)
{
    float P1_contri = ((P1 * H)/T)*100;
    return P1_contri;
}
float pipe2_contributions(float P1, float P2, float H, float T){
    float P2_contri = ((P2 * H)/T)*100;
    return P2_contri;
}