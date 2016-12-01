#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    //freopen()
    int n,p;
    double a;int b,c=1;
    string temp="";
    while(scanf("%d%d",&n,&p)&&(n||p))
    {
       for(int i=0;i<=n;i++)
        getline(cin,temp);
        string result="";
        int maxa=-1; double price=10000000000;
        while(p--)
        {
            getline(cin,temp);
            scanf("%lf%d",&a,&b);
            if(b>maxa)
            {
                maxa=b;
                result=temp;
                price=a;
            }
            else if (b==maxa&&a<price)
            {
                result=temp;
                price=a;
            }
             for(int i=0;i<=b;i++)
                getline(cin,temp);
        }
        if(c>1) printf("\n");
        printf("RFP #%d\n",c++);
        cout<<result<<endl;
    }
    return 0;
}
