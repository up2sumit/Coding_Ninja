#include<iostream>
using namespace std;

void PushZeroesEnd(int a[], int n){

     int i=0,k=0,temp;
         while(i<n)
         {
             if(a[k]==0 && a[i]!=0)
             {
                 temp=a[k];
                 a[k]=a[i];
                 a[i]=temp;
                 i++;
                 k++;
             }
              if(a[k]!=0 && a[i!=0])
              {
                  i++;
                  k++;
              }
             if(a[i]==0 &&a[k]==0)
                 i++;
         }

}
int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	PushZeroesEnd(input,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";

	return 0;

}
