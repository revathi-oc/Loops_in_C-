//REVATHI OC
//23070123105
#include <iostream>
using namespace std;
int main() {
    cout<<"4.Floyd series"<<endl;
    int i,j,row,n=1;
    cout<<"Enter number of rows : ";
    cin>>row;
    for(i=0;i<row;i++){
        for(j=0;j<i+1;j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    return 0;
}