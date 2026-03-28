#include <iostream>
using namespace std;
main(){
    int number[5] = {1,2,3,4,5};
    int sum;
    for(int i = 0; i<5; i++){
        sum = sum + number[i];
    }
    int avg = sum/5;

    cout<<"The sum of the numbers is: "<<sum<<endl;
    cout<<"THe average of the numbers is: "<<avg<<endl;

}