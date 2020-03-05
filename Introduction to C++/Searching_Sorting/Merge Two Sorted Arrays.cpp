#include<iostream>
using namespace std;
void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
    int a,b,c,k,j,i;
    a=0,b=0;
    for(i=0;i<(size1+size2);i++)
    {
        if(a>=size1 || b>=size2)
            break;
       else if(arr1[a]<=arr2[b])
        {
            ans[i]=arr1[a];
            a++;
        }
        else
        {
            ans[i]=arr2[b];
            b++;
        }
    }
    for(k=a;k<size1;k++)
    {
        ans[i]=arr1[k];
        i++;
    }
    for(k=b;k<size2;k++)
    {
        ans[i]=arr2[k];
            i++;
    }
}

int main(){
  int size1;
  cin >> size1;
  int* arr1 = new int[size1];
  for(int i = 0; i < size1; i++){
    cin >> arr1[i];
  }
  int size2;
  cin >> size2;
  int* arr2 = new int[size2];
  for(int i = 0; i < size2; i++){
    cin >> arr2[i];
  }

  int* ans = new int[size1 + size2];

  merge(arr1, size1, arr2, size2, ans);

  for(int i = 0; i < size1 + size2; i++){
			cout << ans[i] <<  " ";
		}
  delete arr1;
  delete arr2;
  delete ans;
}
