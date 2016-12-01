#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int ma=max(a,max(b,max(c,d)));
        float res=a+b+c+d;
        if(ma>res-ma)
        {
        printf("banana\n");
        }
        else if(ma<=res-ma)
        {
            if(res/4==a)
                printf("square\n");
            else if( (a==b && c==d) || (b==c && d==a) || (a==c&& b==d))
                printf("rectangle\n");
            else printf("quadrangle\n");

        }
    }
    return 0;
}
