#include<iostream>
using namespace std;

int main(){

  // Write your code here

  int n,i,j,k,l;
   cin>>n;
    for(i=1;i<=n;i++)
  {
      for(j=1;j<=n-i;j++)
          cout<<" ";
      for(k=i;k>=1;k--)
          cout<<k;
      for(l=2;l<=i;l++)
          cout<<l;
      cout<<endl;
  }

}
