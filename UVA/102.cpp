#include<stdio.h>
#include<iostream>
#include<algorithm>
#include <iterator>
using namespace std;
int main()
{
    freopen("102.txt","r",stdin);
    int i,b[5],g[5],c[5],total,k,a[20];
    char bin1,bin2,bin3;
    while(scanf("%d%d%d%d%d%d%d%d%d",&b[1],&g[1],&c[1],&b[2],&g[2],&c[2],&b[3],&g[3],&c[3])!=EOF)
    {
    total=b[1]+g[1]+c[1]+b[2]+g[2]+c[2]+b[3]+g[3]+c[3];
cout<<total;
        a[0]=total-(b[1]+g[2]+c[3]);
        a[1]=total-(b[1]+g[3]+c[2]);
        a[2]=total-(b[2]+g[1]+c[3]);
        a[3]=total-(b[2]+g[3]+c[1]);
        a[4]=total-(b[3]+g[2]+c[1]);
        a[5]=total-(b[3]+g[1]+c[2]);
        cout<<*min_element(a,a+5);

    }
    return 0;
}
