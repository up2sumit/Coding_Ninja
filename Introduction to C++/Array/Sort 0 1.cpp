#include<iostream>
#include <algorithm>
using namespace std;
void SortZeroesAndOne(int input[], int size){
  int ptr =0;
  for(int i=0;i<size;i++)
  {
    if(input[i]==0){
      int temp= input[ptr];
      input[ptr] = input[i];
      input[i] = temp;
      ptr++;
    }
  }
}
int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	SortZeroesAndOne(input,size);

	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	return 0;
}
