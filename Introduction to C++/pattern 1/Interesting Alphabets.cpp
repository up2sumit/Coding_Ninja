void printPatt(int n)
{
    //write your code here
    int i,j;
    char ch;
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
           ch='A'+j-1;
            cout<<ch;
        }
        cout<<endl;
    }
}
