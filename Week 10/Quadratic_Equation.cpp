#include <iostream>
#include <cmath>
using namespace std;
float determinant(int a,int b,int c);
main(){
    float a,b,c;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    cout<<"Enter c: ";
    cin>>c;
    determinant(a,b,c);

}
float determinant(int a,int b,int c){
    float determinantC = b*b - 4*a*c;
    cout<<"determinant is: "<<determinantC<<endl;
    if (determinantC > 0){
        float x1 = ((-1*b) + sqrt(determinantC))/(2*a);
        float x2 = ((-1*b) - sqrt(determinantC))/(2*a);
        cout<<"x = "<<x1<<" and x = "<<x2;
    }
    else if (determinantC < 0){
        float x1 = ((-1*b)/(2*a)) + (sqrt(-1*determinantC))/(2*a);
        float x2 = ((-1*b)/(2*a)) - (sqrt(-1*determinantC))/(2*a);
        cout<<"x = "<<x1<<"i"<<" and x = "<<x2<<"i";
    }
    else if(determinantC == 0){
        int x = (-1*b)/(2*a);
        cout<<x;
    }
}