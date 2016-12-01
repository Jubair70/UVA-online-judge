#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int initial,first,second,third,sum=0;
    while(scanf("%d%d%d%d",&initial,&first,&second,&third)&&(initial||first||second||third))
    {
        sum=360-(120+(first-initial)-(second-first)+(third-second));
        if(initial>=first)
            sum-=40;
        if(second>=first)
            sum-=40;
        if(second>=third)
            sum-=40;
            printf("%d\n",sum*9);
    }
    return 0;

 }
