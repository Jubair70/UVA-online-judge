#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("105.txt","r",stdin);
    int a,b,c,i=1,s[10002],k=1,n,m,l;
    while(cin>>a>>b>>c)
    {
        if(a<0&&b<0)
            continue;


        if(k==1)
        {
            if(a<0)
            {
                s[i++]=0;
                s[i++]=b;
                s[i++]=c;
            }
        else
        {

                s[i++]=a;
                s[i++]=b;
                s[i++]=c;

        }


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
                else if(a>s[i-3]&&c<s[i-1])
            {
                if(b>s[i-2])
                {
                    n=s[i-1];
                    m=s[i-2];
                    l=s[i-3];
                    s[i-1]=a;
                    s[i++]=b;
                    s[i++]=c;
                    s[i++]=m;
                    s[i++]=n;

                }
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
                else if(b==s[i-2])
                {
                    s[i-1]=c;
                //    i++;
                }
            }
        else if(a==s[i-3]&&c<s[i-1])
            {
                if(b>s[i-2])
                {
                    n=s[i-3];
                    m=s[i-2];
                    l=s[i-1];
                    s[i++]=m;
                    s[i++]=l;
                    s[i-1]=c;
                    s[i-2]=b;
                    s[i-3]=a;

                }
            }
            else if(a==s[i-3]&&c>s[i-1])
            {
                 if(b>s[i-2])
                {
                    s[i-2]=b;
                    s[i-1]=c;
                 //   i++;
                }
                else if(b<s[i-2])
                {
                    s[i++]=b;
                    s[i++]=c;
                }
                else
                {
                    s[i-3]=c;
                //    i++;
                }
            }
            else if(a>s[i-3]&&c==s[i-1])
            {
                if(b>s[i-2])
                {

                    s[i-1]=a;
                    s[i++]=b;
                    s[i++]=c;
                }
            }
            else if(a==s[i-3]&&c==s[i-1])
            {
                if(b>s[i-2])
                {
                    s[i-2]=b;
                  //  i++;
                }
            }
            else if(a<s[i-3]&&c>s[i-1])
            {
                if(b<s[i-2])
                {
                    n=s[i-3];
                    m=s[i-2];
                    l=s[i-1];
                    s[i-3]=a;
                    s[i-2]=b;
                    s[i-1]=n;
                    s[i++]=m;
                    s[i++]=l;
                    s[i++]=b;
                    s[i++]=c;


                }
                else if(b==s[i-2])
                {
                    s[i-3]=a;
                    s[i-1]=c;
                }
                else if(b>s[i-2])
                {
                    s[i-3]=a;
                    s[i-2]=b;
                    s[i-1]=c;
                }
            }
             else if(a<s[i-3]&&c<s[i-1])
             {
                if(b>s[i-2])
                {
                    m=s[i-2];
                    l=s[i-1];
                    s[i-3]=a;
                    s[i-2]=b;
                    s[i-1]=c;
                    s[i++]=m;
                    s[i++]=l;

                }
                else if(b<s[i-2])
                {
                    n=s[i-3];
                    m=s[i-2];
                    l=s[i-1];
                    s[i-3]=a;
                    s[i-2]=b;
                    s[i-1]=n;
                    s[i++]=m;
                    s[i++]=l;
                }
                else if(b==s[i-2])
                {
                    s[i-3]=a;
                //    i++;
                }

             }
             else if(a<s[i-3]&&c==s[i-1])
             {
                 if(b>s[i-2])
                {
                    s[i-3]=a;
                    s[i-2]=b;
                }
                else if(b<s[i-2])
                {
                    n=s[i-3];
                    m=s[i-2];
                    l=s[i-1];
                    s[i-3]=a;
                    s[i-2]=b;
                    s[i-1]=n;
                    s[i++]=m;
                    s[i++]=l;
                }
                else if (b==s[i-2])
                {
                   s[i-3]=a;
                }
             }


        }
        k++;
    }

    for(int j=1;j<i;j++)
        {

            cout<<s[j]<<" ";
        }
        cout<<'0'<<endl;
    return 0;
}
