#include<iostream>
using namespace std;


int main(){

  // Write your code here
    int n,i,j,k,l;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
            cout<<j;
        for(k=1;k<=2*(i-1);k++)
            cout<<"*";
        for(l=n-i+1;l>=1;l--)
            cout<<l;
        cout<<endl;
    }

}
