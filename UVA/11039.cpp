#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
struct aloha
{
    int nm;
    int sign;
};
int cmp(const aloha a,const aloha b)
{
    return a.nm<b.nm;
}
int main()
{
  //  freopen("in.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
        {
            printf("0\n");
            continue;
        }
        int f;aloha a[n+2];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&f);
            if(f<0) a[i].sign=0;
            else a[i].sign=1;
            a[i].nm=abs(f);
        }
        sort(a,a+n,cmp);
        int stat=a[0].sign,cnt=0;
        for(int i=1;i<n;i++)
        {
            if(a[i].sign!=stat)
            {
                cnt++;
            }
                stat=a[i].sign;
        }
        cnt++;
        printf("%d\n",cnt);
    }
    return 0;
}
