#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    //freopen("file.txt","r",stdin);
    long long t,b,sum,m,n,a[100],i,j;
    scanf("%lld",&t);
    while(t--)
        {
            sum=0;
        scanf("%lld%lld",&b,&m);
        while(m--)
        {
            scanf("%lld",&n);
            for(i=0;i<n;i++)
            {
                scanf("%lld",&a[i]);
            }
            sort(a,a+i);
            i--;
            sum=sum+a[i];
            label:

            if(sum>b)
            {
                i--;
                sum=sum+a[i];
                goto label;
            }

        }
        if(sum>b)
            printf("no solution\n");
        else printf("%lld\n",sum);

    }
    return 0;

}
