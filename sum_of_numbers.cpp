//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main()
{
    cout<<"2.Sum of n mumbers"<<endl;
    int i=0,s=0,num;
    cout<<"Enter end value: ";
    cin>>num;
    while(i<=num)
    {
        s=s+i;
       i=i+1;
    }
    cout<<"The sum of first natural numbers is: "<<s;
    return 0;
}