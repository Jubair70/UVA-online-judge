#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a,i,j,s,z;
    while(scanf("%d",&a)&&a)
    {
        for(i=1;i<a;i++)
        {
            for(j=1;j<i;j++)
            {
                if(a==(i*i*i-j*j*j)){s=i;z=j;}
            }

        }
        cout<<s<<" "<<z;
    }
    return 0;

}
