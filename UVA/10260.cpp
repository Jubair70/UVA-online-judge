#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s[21],res[21];


    while(scanf("%s",s)!=EOF)
    {
        int col=0,j=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='B'
               ||
               s[i]=='F'
               ||
               s[i]=='P'
               ||
               s[i]=='V'
                )
            {
                if(col!=1)
                {
                res[j++]='1';
                col=1;
                }
            }
            else if(
               s[i]=='C'
               ||
               s[i]=='G'
               ||
               s[i]=='J'
               ||
               s[i]=='K'
               ||
               s[i]=='Q'
               ||
               s[i]=='S'
               ||
               s[i]=='X'
               ||
               s[i]=='Z'
                    )
            {
                if(col!=2)
                {
                res[j++]='2';
                col=2;
                }
            }
            else if(
            s[i]=='D'
            ||
            s[i]=='T'
                    )
            {
             if(col!=3)
                {
                res[j++]='3';
                col=3;
                }
            }
            else if(
             s[i]=='L'
                    )
            {
                if(col!=4)
                {
                res[j++]='4';
                col=4;
                }
            }
            else if(
            s[i]=='M'
            ||
            s[i]=='N'
                    )
            {
                if(col!=5)
                {
                res[j++]='5';
                col=5;
                }
            }
            else if (
            s[i]=='R'
                     )
            {
                if(col!=6)
                {
                res[j++]='6';
                col=6;
                }
            }
            else col=0;

        }
        res[j]='\0';
        printf("%s\n",res);
    }
    return 0;
}
