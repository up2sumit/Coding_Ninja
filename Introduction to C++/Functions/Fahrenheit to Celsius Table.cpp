
#include<iostream>
using namespace std;

void printTable(int start, int end, int step) {
  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Print output and don't return it.
   * Taking input is handled automatically.
   */
   int c;
  while(start<=end)
  {
     c = 5*(start-32)/9;
      cout<<start<<"\t"<<c<<endl;
      start = start+step;
  }
}

int main(){
    int start, end, step;
    cin >> start >> end >> step;

    printTable(start, end, step);

}
