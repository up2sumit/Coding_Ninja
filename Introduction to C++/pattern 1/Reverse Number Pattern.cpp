#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
            cout<<j;
        cout<<endl;
    }
    return 0;
  
}