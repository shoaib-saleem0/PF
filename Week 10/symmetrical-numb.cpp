#include <iostream>
using namespace std;

bool symmetrical(int number);

int main()
{
    int number;

    cout << "Enter a Three-Digit number: ";
    cin >> number;

    bool check = symmetrical(number);

    if (check == true)
    {
        cout << "The number is symmetrical";
    }
    else
    {
        cout << "The number is not symmetrical";
    }
}

bool symmetrical(int number)
{
    int digit1 = number % 10;
    number = number / 10;

    int digit2 = number % 10;
    number = number / 10;

    int digit3 = number % 10;

    if (digit1 == digit3)
    {
        return true;
    }
    else
    {
        return false;
    }
}