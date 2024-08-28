//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main()
{
   cout<<"3.Asterick centre pattern"<<endl;
   int i,j,k,rows;
   cout<<"Enter number of rows: ";
   cin>>rows;
   for(i=0;i<rows;i++)
   {
    for(j=rows-1;j>i;j--)
    {
        cout<<" ";
    }
    for(k=0;k<(2*i+1);k++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
}