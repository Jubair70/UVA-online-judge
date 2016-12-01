#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        while(b>0)
        {
            b=b-a;
            a++;

        }
        a--;
        printf("%lld\n",a);
    }
    return 0;
}
