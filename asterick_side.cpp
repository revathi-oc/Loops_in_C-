//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main()
{
    cout<<"3.Asterick side pattern"<<endl;
    int i,j,n;
    cout<<"Enter number of rows for your pattern: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}