#include<bits/stdc++.h>
using namespace std;
#define SIZE 1000010
//vector<int> prime; /*Stores generated primes*/
char sieve[SIZE]; /*0 means prime*/
void primeSieve ( int n ) {
    sieve[0] = sieve[1] = 1; /*0 and 1 are not prime*/
    for ( int i = 4; i <= n; i += 2 ) sieve[i] = 1; /*Remove multiples of 2*/
    int sqrtn = sqrt ( n );
    for ( int i = 3; i <= sqrtn; i += 2 ) {
        if ( sieve[i] == 0 ) {
            for ( int j = i * i; j <= n; j += 2 * i ) sieve[j] = 1;
        }
    }
}
int main()
{
   // freopen("out.txt","w",stdout);
    primeSieve(SIZE);
    long n,max;
    while(scanf("%ld",&n),n)
    {
        long res[2];
        memset(res,-1,sizeof(res));
        long maxa=-1000;
        long s=n>>1;
        for(long i=2;i<=s;i++)
        {
            if(sieve[i]==0&&sieve[n-i]==0)
            {

                if(maxa<n-2*i)
                {

                    res[0]=i;
                    res[1]=n-i;
                    maxa=n-2*i;
                }
            }

        }


        if(res[1]==-1)
        {
            printf("%ld:\nNO WAY!\n",n);
        }
        else printf("%ld:\n%ld+%ld\n",n,res[0],res[1]);
    }
    return 0;
}
