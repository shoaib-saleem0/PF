#include<iostream>
using namespace std;

main()
{
cout<< "Enter the size in megabytes (MB): ";
int size;
cin>> size;

int bits = (size*1024)*1024*8;
cout<<size<<" MB is equivalent to " <<bits<< "bits";
}
