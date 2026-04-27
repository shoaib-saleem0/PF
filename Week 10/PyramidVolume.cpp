#include <iostream>
using namespace std;
float volumeF(float length, float width, float height);
double centimeters(float volume);
double kilometers(float volume);
double millimeters(float volume);
main()
{
    float length, width, height;
    string unit;

    cout << "Enter Length, Width, Height of Pyramid(in meters): ";
    cin >> length;
    cin >> width;
    cin >> height;

    cout << "Enter output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    float volume = volumeF(length, width, height);

    if (unit == "meters")
    {
        cout << volume<<" Cubic Meters";
    }
    if (unit == "centimeters")
    {
        cout << centimeters(volume) <<" Cubic Centimeters";
    }
    if (unit == "kilometers")
    {
        cout << kilometers(volume)<<" Cubic Kilometers";
    }
    else if (unit == "millimeters")
    {
        cout << millimeters(volume)<<" Cubic Millimeters";
    }
}
float volumeF(float length, float width, float height)
{
    float vol = (length * width * height) / 3;
    return vol;
}
double centimeters(float volume)
{
    long double vol = (volume * 100);
    return vol;
}
double kilometers(float volume)
{
    double vol = volume / 1000*1000;
    return vol;
}
double millimeters(float volume)
{
    double vol = volume * 1000;
    return vol;
}