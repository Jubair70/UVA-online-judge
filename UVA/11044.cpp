#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long t,n,m,s,p;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
            s=n/3;
            p=m/3;

        printf("%lld\n",p*s);
    }
    return 0;
}
