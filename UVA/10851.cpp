#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    char a[81];
    int value[10]={1,2,4,8,16,32,64,128};
    int start=1,t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int sum[81];
        memset(sum,0,sizeof(sum));
        char a[81];
        int start=10,j=0;
        while(start--&&gets(a))
        {
        if(start==9||start==0)continue;
        for(int i=1;i<strlen(a)-1;i++)
            {
                if(a[i]=='\\')
                    sum[i]+=value[j];
            }
            j++;

        }
        if(t>=1)getchar();
        for(int i=1;i<strlen(a)-1;i++)
            {
                printf("%c",(char)sum[i]);
            }
            printf("\n");
    }
    return 0;
}
