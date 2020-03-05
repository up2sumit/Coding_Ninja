#include <iostream>
using namespace std;


void stringCompression(char input[]) {
  int count = 1;
  int currentChar = input[0];
  int i;
  int nextIndex = 1;

  for(i=1; input[i]!='\0'; i++){
    if(input[i] == currentChar){
      count++;
    }
    else{
      if(count>1){
        input[nextIndex] = char(count+48);
        nextIndex++;
      }
      currentChar = input[i];
      input[nextIndex] = input[i];
      nextIndex++;
      count = 1;
    }
  }
  if(count>1){
    input[nextIndex] = char(count+48);
    nextIndex++;
  }
  input[nextIndex] = '\0';
}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    stringCompression(input);
    cout << input << endl;
}
