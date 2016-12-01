#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    long long a,b,sum,cnt;
    while(scanf("%lld%lld",&a,&b)&&(a||b))
    {
        sum=0;
        cnt=0;
        while(a||b)
        {
            sum=a%10+b%10;
            a=a/10;
            b=b/10;
            if(sum>9)
            {
                if(a!=9)a++;
                cnt++;
            }
        }
        if(cnt!=0)
            printf("%lld carry operations.\n",cnt);
        else printf("No carry operation.\n");
    }
    return 0;
}
