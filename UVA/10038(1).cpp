#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    //freopen("file.txt","r",stdin);
    int n,j,flag=1,l,f,g;
    while(scanf("%d",&n)!=EOF)
    {
        int k[n+2];
        flag=1;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&k[i]);
            if(flag==0)continue;
            if(i>1)
            {
                j=abs(k[i]-k[i-1]);
                //cout<<j<<endl;
            }
            if(i==2)
            {
                l=j;
                if(l==n-1)
                    g=0;
                else
                    g=1;
            }
            if(i==3)
            {
                if(l>j)
                {
                    l--;
                    f=0;
                }
                else
                {
                    l++;
                    f=1;
                }
            }
            if(i>2)
            {
                if(l!=j)
                    flag=0;
                if(f==1)l++;
                else l--;
            }


        }
        if(i>1)
        {
            if(g==0)
            {
                if(f==1)
                {
                    if(l)
                }
            }
        }
        if(flag==0)
        {
            printf("Not jolly\n");
        }
        else
        {
            printf("Jolly\n");
        }
    }

    return 0;
}
