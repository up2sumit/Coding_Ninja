#include <iostream>
using namespace std;


void removeConsecutiveDuplicates(char str[]) {
    int j=0,i;
    str[0]=str[j];
    for(i=1;str[i]!='\0';i++)
    {
        if(str[i]!=str[j])
        {
            str[j+1]=str[i];
            j++;
        }
    }
    str[j+1]='\0';

}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    removeConsecutiveDuplicates(input);
    cout << input << endl;
}
