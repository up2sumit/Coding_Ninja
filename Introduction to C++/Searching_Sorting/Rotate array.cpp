#include<iostream>
using namespace std;

void Rotate(int a[], int d, int n) {

    int i,j,temp;
    int b[d];
    for(i=0;i<d;i++)
        b[i]=a[i];
    for(i=0;i<n-d;i++)
        a[i]=a[i+d];
    j=0;
    for(i=n-d;i<n;i++)
    {
        a[i]=b[j];
        j++;
    }
}

int main() {

	int size;
	int d;
	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];
	cin >> d;

    Rotate(input,d,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	return 0;
}
