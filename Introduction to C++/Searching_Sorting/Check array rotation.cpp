#include<iostream>
#include <algorithm>
using namespace std;

int FindSortedArrayRotation(int a[], int n) {

     int i;
     int k=0;
     for(i=0;i<n-1;i++)
     {
         if(a[i]<=a[i+1])
             k++;
         if(a[i]>a[i+1])
             break;
     }
    if(k==n-1)
        return 0;
    return k+1;
}
int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	cout<<FindSortedArrayRotation(input,size);

	return 0;

}
