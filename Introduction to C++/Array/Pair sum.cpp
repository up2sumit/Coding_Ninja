#include<iostream>
#include <algorithm>
using namespace std;
void pairSum(int a[], int n, int x) {
     int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j && a[i]+a[j]==x)
            {
                if(a[i]>a[j])
                  printf("%d %d",a[j],a[i]);
                else
                 printf("%d %d",a[i],a[j]);
                 printf("\n");
            }

        }
        a[i]=-999999;

    }
}
int main() {

	int size;
	int x;

	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];
	cin>>x;
	pairSum(input,size,x);

	return 0;
}
