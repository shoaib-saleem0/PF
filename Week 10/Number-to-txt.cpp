#include <iostream>
using namespace std;
void ones(int number);
void teens(int number);
void tensF(int number);
main()
{
    int number;
    cout << "Enter number (1-99): ";
    cin >> number;

    if (number <= 10)
    {
        ones(number);
    }
    else if (number > 10 && number < 20)
    {
        number = number % 10;
        teens(number);
    }
    else if (number > 19 && number < 100)
    {
        int one = number % 10;
        number = number / 10;
        int tens = number % 10;

        tensF(tens);
        cout << " ";
        ones(one);
    }
}
void ones(int number)
{
    if (number == 1)
    {
        cout << "One";
    }
    else if (number == 2)
    {

        cout << "Two";
    }
    else if (number == 3)
    {
        cout << "Three";
    }
    else if (number == 4)
    {
        cout << "Four";
    }
    else if (number == 5)
    {
        cout << "Five";
    }
    else if (number == 6)
    {
        cout << "Six";
    }
    else if (number == 7)
    {
        cout << "Seven";
    }
    else if (number == 8)
    {
        cout << "Eight";
    }
    else if (number == 9)
    {
        cout << "Nine";
    }
    else if (number == 10)
    {
        cout << "Ten";
    }
}
void teens(int number)
{
    if (number == 1)
    {
        cout << "Eleven";
    }
    else if (number == 2)
    {
        cout << "Twelve";
    }
    else if (number == 3)
    {
        cout << "Thirteen";
    }
    else if (number == 4)
    {
        cout << "Fourteen";
    }
    else if (number == 5)
    {
        cout << "Fifteen";
    }
    else if (number == 6)
    {
        cout << "Sixteen";
    }
    else if (number == 7)
    {
        cout << "Seventeen";
    }
    else if (number == 8)
    {
        cout << "Eighteen";
    }
    else if (number == 9)
    {
        cout << "Nineteen";
    }
}
void tensF(int number)
{
    if (number == 2)
    {
        cout << "twenty";
    }
    else if (number == 3)
    {
        cout << "Thirty";
    }
    else if (number == 4)
    {
        cout << "Fourty";
    }
    else if (number == 5)
    {
        cout << "Fifty";
    }
    else if (number == 6)
    {
        cout << "Sixty";
    }
    else if (number == 7)
    {
        cout << "Seventy";
    }
    else if (number == 8)
    {
        cout << "Eighty";
    }
    else if (number == 9)
    {
        cout << "Ninety";
    }
}