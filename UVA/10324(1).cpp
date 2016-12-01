#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{

    string a;
    int n,s,b,i=1;
    while(getline(cin,a))
    {
        if(a[0]=='\n') break;
        scanf("%d",&n);
        printf("Case %d:\n",i++);
        while(n--)
        {
            scanf("%d%d",&s,&b);
            getchar();
            int q =a.find("01",min(s,b),2);
            if(q>=min(s,b)&&q<max(s,b))
                printf("No\n");
            else printf("Yes\n");

        }

    }
    return 0;
}

