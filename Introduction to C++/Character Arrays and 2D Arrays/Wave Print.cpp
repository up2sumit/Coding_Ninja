#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

void wavePrint(int a[][1000], int row, int col){
    int i,j;
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            if(i%2==0)
            cout<<a[j][i]<<" ";
            if(i%2==1)
                cout<<a[row-j-1][i]<<" ";
        }
    }

}
int main() {
    int input[1500][1000];
    int row, col;
    cin >> row >> col;

    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    wavePrint(input, row, col);
}
