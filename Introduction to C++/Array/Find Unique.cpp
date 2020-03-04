#include<iostream>
#include <algorithm>
#include<climits>
using namespace std;

int FindUnique(int *arr, int size)
{
  for(int i=0;i<size; i++)
  {
    int j;
    for(j=0;j<size;j++)
    {
      if(i!=j)
      {
        if(arr[i]== arr[j])
        {
          break;
        }
      }
    }
    if(j==size)
    {
      return arr[i];
    }
  }
    return INT_MIN;
}

int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	cout<<FindUnique(input,size)<<endl;

	return 0;
}
