#include<iostream>
#include<climits>
using namespace std;

void Leaders(int* arr,int len)
{
    int i,j;
    for(i=0;i<len-1;i++){
        int flag=0;
        for(j=i+1;j<len;j++)
        {
            if(arr[j]>arr[i] )
            {
                flag=1;
              break;}
        }
        if(flag==0)
            cout<<arr[i]<<" ";
    }
    cout<<arr[len-1];
}

int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];

	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
