#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

bool isStrong(int number){
    int original = number;
    int sum = 0;

    while(number != 0){
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    return sum == original;
}

int main(){
    int number;

    cout << "Enter a Number: ";
    cin >> number;

    if(isStrong(number)){
        cout << "Strong Number";
    } else {
        cout << "Not Strong Number";
    }
}