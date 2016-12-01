#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    long long   t,i,j,k,c,a[10000],s,f=0;
    while(scanf("%lld",&t)!=EOF)
    {
        c=0;
        for(i=0; i<t; i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+t);
        for(i=0; i<t; i++)
        {
            for(j=i+1; j<t; j++)
            {
                s=a[i]+a[j];
                for(k=j+1; k<t; k++)
                {
                    if(s==a[k])
                    {
                        c++;
                        break;

                    }
                }
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}
