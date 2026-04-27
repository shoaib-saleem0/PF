#include <iostream>
#include <cmath>
using namespace std;
main(){
    float distance, angle;

    cout<<"Enter Horizontal Distance: ";
    cin>>distance;

    cout<<"Enter Angle: ";
    cin>>angle;
    float hDistance = distance/57.2958;

    cout<<"The height of the tree is: "<<angle*tan(hDistance);
}