#include<iostream>
#include<limits.h>
using namespace std;

void findLargest(int a[][1000], int row, int col){
    int sum1=INT_MIN,sum2=INT_MIN,sum=0;
    int i,j,co,ro;
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
            sum=sum+a[i][j];
        if(sum>sum1)
        {
          sum1=sum;
          ro=i;
        }
    }


    for(i=0;i<col;i++)
    {
        sum=0;
        for(j=0;j<row;j++)
            sum=sum+a[j][i];
        if(sum>sum2)
        {
          sum2=sum;
          co=i;
        }
    }
    if(sum1>=sum2)
        cout<<"row "<<ro<<" "<<sum1;
    else
        cout<<"column "<<co<<" "<<sum2;

    }

int main() {
    int row, col;
    cin >> row >> col;

    int input[1000][1000];
    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    findLargest(input, row, col);
}
