#include<iostream>
using namespace std;


int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n,i,j;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        { ch='A'+i-1;
         cout<<ch;
        }
        cout<<endl;
    }
    return 0;
    
}