#include<iostream>
#include<limits.h>

using namespace std;
int FindSecondLargest(int a[], int n){

    int flag,i,j,large1,large2;
    flag=0;
    if(n<=1)
      return -2147483648;
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        return -2147483648;
    large1=INT_MIN;
    large2=INT_MIN;

    for(i=0;i<n;i++)
    {
      if(a[i]>large1)
      {
          large2=large1;
          large1=a[i];
      }
        if(a[i]>large2 && a[i]<large1)
            large2=a[i];
    }
    return large2;
}
int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	cout<<FindSecondLargest(input,size);

	return 0;

}
