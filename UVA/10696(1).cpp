#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long n,s;
    while(scanf("%lld",&n)&&n)
    {
        if(n<=100)
        printf("f91(%lld) = 91\n",n);
        if(n>=101)
        printf("f91(%lld) = %lld\n",n,n-10);
    }
    return 0;
}

