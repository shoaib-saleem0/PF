#include <iostream>
using namespace std;
main(){
    int rrose, wrose, tulips;
    
    cout<<"Enter Number of red rose: ";
    cin>> rrose;

    cout<<"Enter number of white rose: ";
    cin>> wrose;

    cout<<"Enter Number of Tulips: ";
    cin>> tulips;

    float prrose = rrose * 2.0;
    float pwrose = wrose * 4.10;
    float ptulips = tulips * 2.50;

    float total = prrose + pwrose + ptulips;

    if (total > 200){
        float discount = total - (total*0.2);
        cout<<"original Price is: "<<total<<endl;
        cout<<"Price after discount is: "<<discount;
    }else{
        cout<< "the price of is: "<<total;
    }

}