#include<iostream>
using namespace std;
int length(char str[])
{
    int i;
    int count=0;
    for(i=0;str[i]!='\0';i++)
        count++;
    return count;
}
bool checkPalindrome(char str[]){
    int i=0,j=length(str)-1;
    while(i<j)
    {
        if(str[i]!=str[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main(){

  char str[10000];
  cin.getline(str,10000);

  if(checkPalindrome(str)){
  	cout << "true" << endl;
  }else{
  cout << "false" << endl;
  }
}
