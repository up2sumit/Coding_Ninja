#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout<<" ";
        for(k=1;k<=2*i-1;k++)
            cout<<"*";
        cout<<endl;
    }
    return 0;

}
