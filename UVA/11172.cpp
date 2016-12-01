#include<iostream>
using namespace std;
int main()
{
    long long  t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        if(a>b)
            printf(">\n");
        if(a<b)printf("<\n");
        if(a==b)printf("=\n");
    }
    return 0;
}
