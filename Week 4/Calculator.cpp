#include <iostream>
using namespace std;
main(){
    int a,b;
    char c;
    cout<< "Enter First Number: ";
    cin>> a;

    cout<< "Enter the Operator: ";
    cin>> c;

    cout<< "Enter the second number:" ;
    cin>> b;

    if (c == '+'){
        int d = a - b;
        cout<<a<<" - "<<b<< " = "<<d;
    }
    if (c == '-'){
        int e = a + b;
        cout<<a<< " + "<<b<< " = " <<e;
    }
    if (c == '*'){
        int f = a/b;
        cout<<a<< " / "<<b<< " = "<<f;
    }
    if(c == '/'){
        int g = a*b;
        cout<<a<<" * "<<b<< " = "<<g;
    }
}