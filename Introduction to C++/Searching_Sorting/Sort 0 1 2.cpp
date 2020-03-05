#include<iostream>
#include <algorithm>
using namespace std;

void sort012(int a[], int n)  {

    int i=0,zero=0,two=n-1,temp;
    while(i<=two)
    {
        if(a[i]==0)
        {
            //swap(a[i],a[zero]);
            temp=a[i];
            a[i]=a[zero];
            a[zero]=temp;
                zero++;

        }
        if(a[i]==2)
        {
            //swap(a[i],a[two]);
            temp=a[i];
            a[i]=a[two];
            a[two]=temp;
            two--;
            i--;
        }
        i++;
    }
}

int main() {

	int size_first;

	cin>>size_first;
	int *arr_first=new int[1+size_first];

	for(int i=0;i<size_first;i++)
		cin>>arr_first[i];

	sort012(arr_first,size_first);

	for(int i=0;i<size_first;i++)
		cout<<arr_first[i]<<" ";
	return 0;
}
