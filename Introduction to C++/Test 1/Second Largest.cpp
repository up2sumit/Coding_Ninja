#include<iostream>
using namespace std;
#include <climits>


int main(){

    // Write your code here
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int first,second;
    first=second=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>first)
        {  second=first;
            first=a[i];}
        if(a[i]>second && first>a[i])
            second=a[i];
    }
    cout<<second;
}
