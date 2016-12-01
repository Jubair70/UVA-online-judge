#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("105.txt","r",stdin);
    int a,b,c,i=1,s[5000],k=1,n;
    while(cin>>a>>b>>c)
    {
        if(k==1)
        {
            s[i++]=a;
            s[i++]=b;
            s[i++]=c;
        }
        else
        {
            if(a>s[i-1])
            {
                s[i++]=0;
                s[i++]=a;
                s[i++]=b;
                s[i++]=c;
            }
            else if(a==s[i-3]&&c==s[i-1])
            {
                if(b>s[i-2])
                {
                    s[i-2]=b;
                    i++;
                }
            }
            else if(a==s[i-3]&&c>s[i-1])
            {
                 if(b>s[i-2]||b<s[i-2])
                {
                    s[i-2]=b;
                    s[i-1]=c;
                    i++;
                }
                else
                {
                    s[i-3]=c;
                    i++;
                }
            }
            else if(a<s[i-3]&&c>s[i-1])
            {

            }
            else if(a>s[i-3]&&c>s[i-1])
            {
                if(b>s[i-2])
                {
                    s[i-1]=a;
                    s[i++]=b;
                    s[i++]=c;

                }
                else if(b<s[i-2])
                {
                    s[i++]=b;
                    s[i++]=c;
                }
                else
                {
                    s[i-1]=c;
                    i++;
                }
            }
            else if(a==s[i-3]&&c<s[i-1])
            {
                if(b>s[i-2])
                {
                    s[i++]=s[i-2];
                    s[i++]=s[i-3];
                    s[i-4]=b;
                    s[i-3]=c;

                }
            }
            else if(a>s[i-3]&&c<s[i-1])
            {
                if(b>s[i-2])
                {
                    n=s[i-1];
                    s[i-1]=a;
                    s[i++]=b;
                    s[i++]=c;
                    s[i++]=s[i-5];
                    s[i++]=n;

                }
            }
           // else if(a<s[i-3]&&)
        }

        k++;
    }
    for(int j=1;j<i;j++)
        {
            cout<<s[j]<<" ";
        }
    return 0;
}
