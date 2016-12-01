#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[1000000];
bool leapyear(long s)
{
    long mod1=0,mod2=0,mod3=0;
    for(int i=0;i<s;i++)
    {
    mod1=((mod1*10)+(a[i]-'0'))%4;
    mod2=((mod2*10)+(a[i]-'0'))%100;
    mod3=((mod3*10)+(a[i]-'0'))%400;
    }
    return((!mod1&&mod2)||!mod3);

}
bool bulu(long s )
{
    long mod1=0;
    for(int i=0;i<s;i++)
    {
    mod1=((mod1*10)+(a[i]-'0'))%55;
    }
    if(mod1==0)
        return 1;
        return 0;
}
bool hulu(long s)
{
    long mod1=0;
    for(int i=0;i<s;i++)
    {
    mod1=((mod1*10)+(a[i]-'0'))%15;
    }
    if(mod1==0)
    return 1;
    return 0;
}
int main()
{
    int cnt=0;

    while(scanf("%s",a)!=EOF)
    {
        if(cnt!=0)printf("\n");
        cnt++;

    long s=strlen(a);
    int leap=0,f=0;
    if(leapyear(s)==1)
    {
        printf("This is leap year.\n");
        leap = 1;
        f=1;
    }
    if(hulu(s))
    {
        printf("This is huluculu festival year.\n");
        f=1;
    }
    if(bulu(s)&&leap)
    {
        printf("This is bulukulu festival year.\n");
    }
    if(!f) printf("This is an ordinary year.\n");
    }
    return 0;
}
