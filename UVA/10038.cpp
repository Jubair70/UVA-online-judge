#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    //freopen("file.txt","r",stdin);
    int t,a[10000],s[10000],i,cnt[10000];
    while(scanf("%d",&t)!=EOF)
    {
        //memset(cnt,0,sizeof(cnt));

        for(i=0; i<t; i++)
        {
            scanf("%d",&a[i]);
        }
        if(t==1)
        {
            printf("Jolly\n");
            continue;
        }
        if(t==2)
        {
            printf("Not Jolly\n");
            continue;
        }
        for(i=1; i<=t; i++)
        {
            s[i]=abs(a[i]-a[i-1]);
            if(i>1&&(s[i]==s[i-1]-1||s[i]==s[i-1]))
            {
                cnt[i]=1;
            }
            else cnt[i]=0;

            //cout<<cnt[i]<<endl;
        }
        for(i=2; i<t; i++)
        {
            if(cnt[i]!=1)
            {
                //cout<<i;
                printf("Not Jolly\n");
                break;
            }
        }
        i++;
        if(i>t)printf("Jolly\n");

    }
    return 0;
}
