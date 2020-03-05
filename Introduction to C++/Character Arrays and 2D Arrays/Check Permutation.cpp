#include <iostream>
#include<string.h>
using namespace std;

bool isPermutation(char str1[], char str2[]) {
    int i,j;
    if(strlen(str1)!=strlen(str2))
        return false;
    for(i=0;i<strlen(str1);i++)
    {
        int f=0;
        for(j=0;j<strlen(str2);j++)
        {
            if(str1[i]==str2[j])
            {
                str2[j]=8;
                f=1;
                break;
            }
        }
        if(f==0)
            return false;

    }
    return true;

}


int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
