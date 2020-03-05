#include<iostream>
#include <algorithm>
using namespace std;
void BubbleSort(int a[], int n){
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){

	int size;
	cin>>size;

	int * input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	BubbleSort(input,size);

	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";

}	
