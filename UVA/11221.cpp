#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
string process(string a)
{
    int i=0;
    string f;

    while(a[i]!='\0')
    {
        if(a[i]>='a'&&a[i]<='z')
            f+=a[i];
        i++;
    }
    return f;
}
string process2(string a,int size)
{
    string f;
    int j=0;
    while(j<size)
    {

        int i=0;
        while(a[i]!='\0'&&i<size)
        {
            f+=a[i*size+j];
            i++;
        }
        j++;
    }
    return f;
}
int main()
{
    int t,i=1;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        string a;
        getline(cin,a);
        string f=process(a);
        int size=ceil(sqrt(f.length()));
        if(size!=floor(sqrt(f.length())))
        {
            printf("Case #%d:\nNo magic :(\n",i++);
            continue;

        }



        int f1=0,f2=0,f3=0;
        if(f.compare(string(f.rbegin(), f.rend()))==0
           &&
           f.compare(process2(f,size))==0
           &&
           f.compare(process2(string(f.rbegin(), f.rend()),size))==0
           )
        {
        printf("Case #%d:\n%d\n",i++,size);
        }
        else printf("Case #%d:\nNo magic :(\n",i++);
    }
    return 0;
}

