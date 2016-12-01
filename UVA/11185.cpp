#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    long long a,b[100],s;
    while(scanf("%lld",&a)&&a>=0)
    {
        int i=0;
        if(a==0)
        {
            printf("0\n");
            continue;
        }
        while(a!=0)
        {
            b[i]=a%3;
            a=a/3;
            i++;

        }

        for(s=i-1; s>=0; s--)
        {
            printf("%lld",b[s]);
        }

        printf("\n");
    }
    return 0;
}
