#include<iostream>
using namespace std;

#include<cstring>
void printSubstrings(char str[]){
int i,j,k;
   for(i=0;i<strlen(str);i++)
   {
     for(j=i;j<strlen(str);j++)
     {
         for(k=i;k<=j;k++)
         {
             cout<<str[k];
         }
         cout<<endl;
     }
   }

}

int main(){

  char str[10000];
  cin.getline(str,10000);

  printSubstrings(str);
}
