#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long t,x,y,a,b;
    while(scanf("%lld",&t)&&t)
    {
        scanf("%lld%lld",&x,&y);
        while(t--)
        {
            scanf("%lld%lld",&a,&b);
            if(x==a||y==b)
            {
                printf("divisa\n");
            }
            if(a>x&&b>y)
            {
                printf("NE\n");
            }
            if(a<x&&b<y)
            {
                printf("SO\n");
            }
            if(a<x&&b>y)
            {
                printf("NO\n");
            }
            if(a>x&&b<y)
            {
                printf("SE\n");
            }
        }
    }

    return 0;
}
