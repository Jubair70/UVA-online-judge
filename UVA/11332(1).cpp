#include<stdio.h>
#include<cstring>

int main()
{
    //char a[15];
    long long int a,x;
    int sum,k;
    while(scanf("%lld",&a)&&a)
    {
        //cout<<a<<endl;
        while(a>9)
        {
            sum=0;
            x=a;
            while(x!=0)
            {
                k=x%10;
                x=x/10;
                sum+=k;
            }
            a=sum;
        }
        printf("%lld\n",a);
    }
    return 0;
}
