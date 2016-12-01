#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long int a,b,c,d,e;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        c=max(a,b);
        d=min(a,b);
        e=c-d;
        printf("%lld\n",e);
    }
    return 0;
}
