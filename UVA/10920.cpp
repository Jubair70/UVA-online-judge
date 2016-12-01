#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,p;
    while(scanf("%d%d",&n,&p)==2,n||p)
    {
        int  counter=1,cnt=0;
        int a[1001][1001];
        a[n/2+1][n/2+1]=++cnt;
        if(cnt==p)
        {
            printf("Line = %d, column = %d.\n",n/2+1,n/2+1);
            continue;
        }
        int line=n/2+1,column=n/2+1;
        int loop=ceil(sqrt(n));
        bool f1=1,f2=1;
        while(loop--)
        {

            for(int i=1; i<=counter; i++)
            {
                column++;
                a[line][column]=++cnt;
                if(cnt==p)
                {
                    printf("Line = %d, column = %d.\n",column,line);
                    f1=0;
                    break;

                }
            }
            if(!f1)
            {

                break;
            }

            for(int i=1; i<=counter; i++)
            {
                line--;
                a[line][column]=++cnt;
                if(cnt==p)
                {

                    printf("Line = %d, column = %d.\n",column,line);
                    f1=0;
                    break;
                }

            }
            if(!f1)
            {
                break;
            }

            counter++;
            for(int i=1; i<=counter; i++)
            {
                column--;
                a[line][column]=++cnt;
                if(cnt==p)
                {

                    printf("Line = %d, column = %d.\n",column,line);
                    f1=0;
                    break;
                }
            }
            if(!f1)
            {

                break;
            }

            for(int i=1; i<=counter; i++)
            {
                line++;
                a[line][column]=++cnt;
                if(cnt==p)
                {

                    printf("Line = %d, column = %d.\n",column,line);
                    f1=0;
                    break;
                }
            }
            if(!f1)
            {
                break;
            }

            counter++;
        }

    }
    return 0;
}
