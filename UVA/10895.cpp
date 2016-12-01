#include <iostream>
using namespace std;
#include <cstdio>
#include <cstring>

int main()
{
    //freopen("file.txt","r",stdin);
    int m,n;
    scanf("%d%d",&m,&n);
    int mat[n+2][m+2];
    memset(mat, 0, sizeof(mat));
    for(int i=1;i<=m;i++)
    {
        int x;
        scanf("%d",&x);
        if(x==0)
        {
            getchar();
            continue;
        }
        int a[x+1];
        for(int j=1;j<=x;j++)
        {
            scanf("%d",&a[j]);
        }
        int k;
        for(int j=1;j<=x;j++)
        {
            scanf("%d",&k);
            mat[a[j]][i]=k;
        }
    }
    printf("%d %d\n",n,m);
    for(int i=1;i<=n;i++)
    {
        int res=0;
        int a[1010];
        memset(a, 0, sizeof(a));
        for(int j=1;j<=m;j++)
        {
            if(mat[i][j]!=0)
            {
                res++;
                a[res]=j;
            }
        }
        if(res==0)
        {
            printf("0\n\n");
        }
        else{
            printf("%d",res);
            for(int k=1;k<=res;k++)
            {
                printf(" %d",a[k]);
            }
            printf("\n");
            for(int k=1;k<=res;k++)
            {
                printf("%d",mat[i][a[k]]);
                if(k!=res)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}

