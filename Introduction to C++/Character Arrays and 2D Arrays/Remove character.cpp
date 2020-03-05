#include <iostream>
using namespace std;


void removeAllOccurrencesOfChar(char str[], char c) {
    int j=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=c)
        {
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(input, c);
    cout << input << endl;
}
