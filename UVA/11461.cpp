#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long a,b,i,cnt;
    while(scanf("%lld%lld",&a,&b)&&a&&b)
    {
        cnt=0;
        for(i=1;i<=b;i++)
        {
            if((i*i)>=a&&(i*i)<=b)
                cnt++;
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
