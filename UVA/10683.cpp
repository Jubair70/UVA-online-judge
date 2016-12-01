#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int h,m,s,c;
    while(scanf("%2d%2d%2d%2d",&h,&m,&s,&c)!=EOF)
    {
     long long int a=c+s*100+m*6000+h*360000;
        printf("%07lld\n",a*1000/864);
    }
    return 0;
}
