#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N,n;

    while(scanf("%d%d",&N,&n)&&N&&n)
    {
        char big[N+1][N+1],little[n+1][n+1];
        for(int i=1;i<=N;i++)
            scanf("%s",big[i]);
        for(int i=1;i<=n;i++)
            scanf("%s",little[i]);

    for(int q=1;q<=4;q++)
            {
        if(q!=1) printf(" ");
        int cnt=0;
        for(int i=0;i<N-n+1;i++)
        {
            for(int j=0;j<N-n+1;j++)
            {
                int flag1=1,flag2=1;
                for(int a=1;a<=n;a++)
                {
                    for(int b=0;b<n;b++)
                    {
                        if(big[a+i][b+j]!=little[a][b])
                        {
                            flag1=0;
                            break;
                        }

                    }
                    if(!flag1)
                {
                    flag2=0;
                    break;
                }
                }
                if(flag2)cnt++;

            }
        }
        printf("%d",cnt);
        //rotate
        char tmp[n+1][n+1];
        int s=n-1;
        for(int i=1;i<=n;i++,s--)
        {
            for(int j=0;j<n;j++)
            {
                tmp[j+1][s]=little[i][j];
            }
        }
        for(int i=1;i<=n;i++)
        for(int j=0;j<n;j++)
            little[i][j]=tmp[i][j];

            }
            printf("\n");

    }
    return 0;
}
