#include<iostream>
#include <algorithm>
#include<cmath>
using namespace std;
  void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *sum){
    int carry=0;
    int l1= size1-1;
    int l2 = size2-1;
    int l3 = max(size1,size2);
    while(l3>=0){
        if(l1>=0 && l2>=0){
         sum[l3] = carry+ input1[l1] + input2[l2];
            if(sum[l3]>9){
                carry = 1;
                sum[l3]%=10;

            }
            else{
                carry = 0;
            }
            l1--;
            l2--;
            l3--;
         }
        else if(l1<0 && l2>0){
            sum[l3]= carry + input2[l2];
            if(sum[l3]>9){
                carry =1;
                sum[l3]%=10;
            }
            else{
                carry = 0;
            }
            l2--;
            l3--;
        }
        else if(l2<0 && l1>=0){
            sum[l3] = carry + input1[l1];
            if(sum[l3]>9){
                carry = 1;
                sum[l3]%=10;
            }
            else{
                carry =0;
            }
            l1--;
            l3--;
        }
        else{
            sum[l3] = carry;
            l3--;
        }
    }
  }
  int main(){
  	int size1,size2;
  	cin>>size1;
  	int * input1=new int[1+size1];

  	for(int i=0;i<size1;i++)
  		cin>>input1[i];

     	 cin>>size2;
  	 int * input2=new int[1+size2];

  	for(int i=0;i<size2;i++)
  		cin>>input2[i];

  	int *output=new int[1+max(size1,size2)];
  	int outsize = 1+max(size1,size2);
  	sumOfTwoArrays(input1,size1,input2,size2,output);

  	for(int i=0;i<outsize;i++)
  		cout<<output[i]<<" ";


  }
