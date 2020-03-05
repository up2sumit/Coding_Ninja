#include <iostream>
using namespace std;
int length(char str[])
{
    int count=0,i;
    for(i=0;str[i];i++)
        count++;
        return count;
}
void reverse(char str[])
{
    int i=0,j=length(str)-1;
    char temp;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
void revWord(char str[],int i,int j)
{
    char temp;
     while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}
void reverseStringWordWise(char str[]) {
     reverse(str);
    int start=0,i;
    for(i=0;i<length(str);i++)
    {
        if(str[i]==' ')
        {
         revWord(str,start,i-1);
         start=i+1;
        }

    }
    revWord(str,start,length(str)-1);
}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
