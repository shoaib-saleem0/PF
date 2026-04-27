#include <iostream>
#include <cmath>
using namespace std;
float cal(int base, int angle){
    float radian = angle/57.2958;
    float height = base * tan(radian);
    
}

main(){
    int base, angle;

    cout<<"Enter Horizontal Distance: ";
    cin>>base;

    cout<<"Enter Angle of Elevation: ";
    cin>>angle;

    cout<<cal(base,angle);

    
}