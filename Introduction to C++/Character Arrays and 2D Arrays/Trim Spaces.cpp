#include <iostream>
using namespace std;


void trimSpaces(char str[]) {
    int i,count=0;
    for(i=0;str[i];i++)
    {
       if(str[i]!=' ')
           str[count++]=str[i];

    }
      str[count]='\0';

}


int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
