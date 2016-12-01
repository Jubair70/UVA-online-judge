#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char a[10001];
    map<string,int>pro;

    while(gets(a))
    {

       if(a[0]>="A"&&a[0]<="Z")
       {
           string a1=a;
            pro[a1]=0;
            set<string>s;
       }
       else if (a[0]>="a"&&a[0]<="z")
       {
           pro[a1]++;
       }
    }
    return 0;
}
