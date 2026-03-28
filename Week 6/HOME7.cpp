#include <iostream>
using namespace std;
main(){
    int n;
    string name[10];
    float price[4];
    int quantity[4];
    cout<<"Enter number of products: ";
    cin>>n;
    for (int i=0; i<n; i++){
        cout<<"Enter name of product "<<i+1<<": ";
        cin>>name[i];
        cout<<"Enter price of "<<name[i]<<": $";
        cin>>price[i];
        cout<<"Enter quantity of "<<name[i]<<": ";
        cin>>quantity[i];
        cout<<endl<<endl;
    }
    cout<<"Product Inventory Report\n";
    cout<<"------------------------\n";
    for(int i =0; i<n; i++){
        int total = quantity[i] * price[i];

    cout<<name[i]<<": $"<<price[i]<<", "<<quantity[i]<<" in stock, Total value: $"<<total<<endl;

    }
}