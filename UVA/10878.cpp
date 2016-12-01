#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main()
{
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    char a[30],res[1000000];
    int intr[20]={128,64,32,16,8,4,2,1};
    int start=1,finish=0,in=0;
    while(gets(a))
    {
        if(!start&&!strcmp(a,"___________"))
        {
            in=0;
            start=1;
        }
        else if(start&&!strcmp(a,"___________"))
        {
            res[in]='\0';
            cout<<res;
            start=1;
        }
        else
        {
            int sum=0;
            for(int i=1;i<=5;i++)
            {
                if(a[i]=='o')
                    sum+=intr[i-1];
            }
           for(int i=7;i<=9;i++)
                if(a[i]=='o')
                    sum+=intr[i-2];
            res[in++]=(char)sum;
         }

    }
    return  0;
}
