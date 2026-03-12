#include <iostream>
using namespace std;
main(){
    string name;
    cout<< "Enter type of geometry: ";
    cin>> name;

    if (name == "square"){
        float side;
        cout<<"Enter length of one side: ";
        cin>> side;

        float size = side*side;
        cout<< "the area of the square is: "<<size;
    }
    if(name == "rectangle"){
        float length, width;
        cout <<"Enter length: ";
        cin >> length;

        cout<<"Enter width: ";
        cin >> width;
        float size = length*width;
        cout<< "The area of rectangle is: "<<size;
    }
    if (name == "circle"){
        float radius;
        cout<< "Enter radius: ";
        cin>> radius;

        float size = 3.14*radius*radius;
        cout<< "The area of the circle is: "<<size;
    }
    if (name == "triangle"){
        float base, height;
        cout<< "Enter base: ";
        cin>> base;

        cout<<"Enter Height: ";
        cin>> height;
        float size = 0.5 * base * height;
        cout<<"the area of the triangle is: "<<size;
    }
}