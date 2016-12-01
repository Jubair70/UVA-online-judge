#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,g;
    while(scanf("%lld",&n),n)
    {
        g=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                g+=__gcd(i,j);
            }
        }
        printf("%lld\n",g);
    }
    return 0;
}
