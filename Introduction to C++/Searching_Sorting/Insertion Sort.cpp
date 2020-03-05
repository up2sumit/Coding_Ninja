#include<iostream>
#include <algorithm>
using namespace std;
void InsertionSort(int a[], int n){  
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i],j=i-1;
        while(j>=0 && a[j]>key)
        {

            a[j+1]=a[j];
            j--;
        }
        j++;
        a[j]=key;
    }

}
int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	InsertionSort(input,size);

	for(int i=0;i<size;i++)
		cout << input[i]<<" ";

	return 0;
}
