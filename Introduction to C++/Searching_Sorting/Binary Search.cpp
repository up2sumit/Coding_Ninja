#include<iostream>
using namespace std;

int BinarySearch(int a[], int n, int val){

    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==val)
            return mid;
        else if(a[mid]>val)
            end=mid-1;
        else
            start=mid+1;
    }
    return -1;

}
int main() {

	int size,val;
	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	cin>>val;
	cout<<BinarySearch(input,size,val);
	return 0;
}
