#include <iostream>
using namespace std;
int evenish(int number);
main()
{
    int number;

    cout << "Enter a Five-Digit Number: ";
    cin >> number;

    int sum = evenish(number);
    if(sum % 2 == 0){
        cout<<"The Number is evenish!";
    }else{
        cout<<"The Number is Oddish!";
    }
}
int evenish(int number)
{
    int D1 = number % 10;
    number = number / 10;

    int D2 = number % 10;
    number = number / 10;

    int D3 = number % 10;
    number = number / 10;

    int D4 = number % 10;
    number = number / 10;

    int D5 = number % 10;
    number = number / 10;

    return D1+D2+D3+D4+D5;

  
}