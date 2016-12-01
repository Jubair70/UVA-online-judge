#include <stdio.h>

int main()
{
   long long  t,m,n,i,j,a[100000],b;
    m=1;
   while(scanf("%lld",&n)&&n)
   {
        int count=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i-1;j>=0;j--)
            {
                if(a[j]>a[i])
                    count++;
            }
        }

        if(count%2!=0)
        printf("Marcelo\n");
        else printf("Carlos\n");
    }

    return 0;
}
