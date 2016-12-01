#include<iostream>
#include<cstring>
#include<cstdio>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,d,a,f,n,s,c,b;
    while(scanf("%d%d",&i,&j)==2)
    {   f=0;
        a=max(i,j);
        b=min(i,j);
        for(n=b;n<=a;n++)
        {   c=1;
            s=n;
            while(s>1)
            {
                if(s%2==1)s=s*3+1;
                else s=s/2;
                c++;
            }
            if(c>=f)
                f=c;
        }
printf("%d %d %d\n",i,j,f);
    }
    return 0;
}

