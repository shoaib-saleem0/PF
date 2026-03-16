#include <iostream>
using namespace std;
main(){
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;
        int n;
        cout<<"Enter Numbers Count: ";
        cin>>n;

        for (int i = 1; i <= n; i++){
            int number;
            cout<<"Enter a Number: ";
            cin>>number;

            if (number > 0 && number < 200){
                n1++;
            }
            else if (number > 200 && number < 400){
                n2++;
            }
            else if (number >= 400 && number < 600){
                n3++;
            }
            else if (number >= 600 && number <800){
                n4++;
            }
            else if (number >=800 && number <= 1000){
                n5++;
            }
                
            }
                float cal1 = (n1 * 100.)/n;
                float cal2 = (n2 * 100.)/n;
                float cal3 = (n3 * 100.)/n;
                float cal4 = (n4 * 100.)/n;
                float cal5 = (n5 * 100.)/n;

                cout<<cal1<<"%"<<endl;
                cout<<cal2<<"%"<<endl;
                cout<<cal3<<"%"<<endl;
                cout<<cal4<<"%"<<endl;
                cout<<cal5<<"%"<<endl;
            }