#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct arr
{
    int main,rem;
}s[10001];
int cmp(const arr &a,const arr &b)
{
    if(a.rem==b.rem)
    {
            if(a.main%2&&b.main%2)
                return a.main>b.main;
            else if(!(a.main%2)&&!(b.main%2))
                return a.main<b.main;
             else if (a.main%2&&!(b.main%2))
                return 1;
            else if (!(a.main%2)&&b.main%2)
                return 0;
    }
            else return a.rem<b.rem;


}
int main()
{
    int n,m;
   // freopen("in.txt","r",stdin);
    while(scanf("%d%d",&n,&m))
    {
        if(!n||!m)
        {
           printf("%d %d\n",n,m);
           break;
        }
        memset(s,0,sizeof(s));
        int a;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            s[i].main=a;
            s[i].rem=a%m;
        }
        sort(s,s+n,cmp);
        printf("%d %d\n",n,m);
        for(int i=0;i<n;i++)
            printf("%d\n",s[i]);

    }
    return 0;
}
