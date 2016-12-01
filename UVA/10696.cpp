#include<iostream>
#include<cstdio>
using namespace std;
long long f91(long long n)
{
    if(n<=100)
    {
        n=f91(f91(n+11));
    }
    if(n>=101)
    {
        n=n-10;
    }
    return n;
}
int main()
{
    long long n,s;
    while(scanf("%lld",&n)&&n)
    {
        s=f91(n);
        printf("f91(%lld) = %lld\n",n,s);
    }
    return 0;
}
