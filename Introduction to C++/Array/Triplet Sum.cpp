#include<iostream>
using namespace std;

void sort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
void FindTriplet(int a[], int n, int x) {

    int i,j,k;
    sort(a,n);
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(i!=j && j!=k && i!=k && a[i]+a[j]+a[k]==x)
                {
                   printf("%d %d %d",a[i],a[j],a[k]);
                    printf("\n");
                }
            }

        }

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

	FindTriplet(input,size,x);

	return 0;
}
