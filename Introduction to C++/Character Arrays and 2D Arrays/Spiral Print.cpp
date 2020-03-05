#include <iostream>
using namespace std;

void spiralPrint(int input[][1000], int row, int col){
  int i;
  int rowStart = 0;
  int colStart=0;
  int numElements = (row*col);
  int count = 0;
  while(count<numElements){
    for(i = colStart; count < numElements && i < col; ++i){
      cout<<input[rowStart][i]<<" ";
      count++;
    }
    rowStart++;
    for(i=rowStart; count< numElements && i < row; ++i){
      cout<<input[i][col-1]<<" ";
      count++;
    }
    col--;
    for(i = col-1; count < numElements && i>= colStart; --i){
      cout<<input[row-1][i]<<" ";
      count++;
    }
    row--;
    for(i = row-1; count < numElements && i>= rowStart; --i){
      cout<<input[i][colStart]<<" ";
      count++;
    }
    colStart++;
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
    spiralPrint(input, row, col);
}
