void printPatt(int n)
{
    //write your code here
    int i,k,j,s1,s2;
    s1=(n/2+1);
    for(i=1;i<=s1;i++)
    {
        for(j=1;j<=s1-i;j++)
            cout<<" ";
        for(k=1;k<=2*i-1;k++)
            cout<<"*";
        cout<<endl;
    }
    s2=n-s1;
    {
        for(i=1;i<=s2;i++)
        {
            for(j=1;j<=i;j++)
                cout<<" ";
            for(k=2*(s2-i)+1;k>=1;k--)
                cout<<"*";
            cout<<endl;
        }
    }
}
