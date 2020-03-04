#include<iostream>
#include <algorithm>
using namespace std;

void intersection(int a1[], int a2[], int n1, int n2) {

    int i,j;
     for(i=0;i<n1;i++)
     {
         for(j=0;j<n2;j++)
         {
             if(a1[i]==a2[j])
             {
                 a2[j]=-999999;
                 printf("%d\n",a1[i]);
                 break;
             }
         }
     }
}
int main() {

	int size1,size2;

	cin>>size1;
	int *input1=new int[1+size1];

	for(int i=0;i<size1;i++)
		cin>>input1[i];

	cin>>size2;
	int *input2=new int[1+size2];

	for(int i=0;i<size2;i++)
		cin>>input2[i];


	intersection(input1,input2,size1,size2);


	return 0;
}
