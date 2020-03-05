#include <iostream>
#include<string.h>
using namespace std;


void reverse(char str[],int i,int j)
{

    char temp;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;j--;
    }
}
void reverseEachWord(char str[]) {
    int j=0,i;
    for(i=0;str[i]!='\0';i++)
    {
      if(str[i]==' ')
      {
          reverse(str,j,i-1);
          j=i+1;
      }
    }
    reverse(str,j,strlen(str)-1);
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseEachWord(input);
    cout << input << endl;
}
