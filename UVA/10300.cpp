#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,i,a,b,c,sum,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            sum=sum+(a*c);
        }
        cout<<sum<<endl;

    }
    return 0;
}
