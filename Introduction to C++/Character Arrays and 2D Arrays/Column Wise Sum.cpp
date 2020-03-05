#include<iostream>
using namespace std;


int main(){

    int a[1000][1000],row,col,i,j,sum;
    cin>>row>>col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            cin>>a[i][j];
    }
    for(i=0;i<col;i++)
    {
        sum=0;
        for(j=0;j<row;j++)
            sum=sum+a[j][i];
        cout<<sum<<" ";
    }
}
