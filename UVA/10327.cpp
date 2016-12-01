#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
   int t,m,n,i,j,a[1009],b;
    m=1;
   while(scanf("%d",&n)!=EOF)
   {
        int count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i-1;j>=0;j--)
            {
                if(a[j]>a[i])
                    count++;
            }
        }
        printf("Minimum exchange operations : %d\n",count);
   }
return 0;
}
