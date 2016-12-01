#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{

   char a[1000001];
    int n,s,b,i=1,sum[1000001];
    while(scanf("%s",&a)!=EOF)
    {
        if(a[0]=='\n') break;
        scanf("%d",&n);
        printf("Case %d:\n",i++);
        sum[0]=a[0]-'0';
        for(int i=1;a[i]!='\0';i++)
            sum[i]=sum[i-1]+a[i]-'0';
        while(n--)
        {
            scanf("%d%d",&s,&b);
            getchar();
            if(sum[min(s,b)]==sum[max(s,b)])
                printf("Yes\n");
            else printf("No\n");

        }

    }
    return 0;
}

