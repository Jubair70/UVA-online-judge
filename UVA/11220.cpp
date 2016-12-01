#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    char a[1001];
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
   for(int j=1;j<=t;j++)
   {
       printf("Case #%d:\n",j);
       while(gets(a)&&a[0])
       {
            int wp=1,word=0,wordcount=1;
                for(int i=0;a[i];i++)
                {
                    if(a[i]==' ')
                    {
                        wordcount=1;
                        word=0;
                    }
                else
                   {
                        if(wp==wordcount&&!word)
                        {
                            printf("%c",a[i]);
                            wp++;
                            word=1;
                        }
                        wordcount++;
                    }
                    }
                    printf("\n");
       }
        if(j<t)printf("\n");
   }
    return 0;

}
