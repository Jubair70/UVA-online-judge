
#include<bits/stdc++.h>
#define SIZE 48000
using namespace std;

char   sieve[48000]; /*0 means prime*/
long long int prime[48000],k=1;
void primeSieve ( long long int n )
{
    sieve[0] = sieve[1] = 1; /*0 and 1 are not prime*/
    long long int sqrtn = sqrt(n);
    for ( long long int i = 4; i <= n; i += 2 ) sieve[i] = 1; /*Remove multiples of 2*/

    for ( long long int i = 3; i <= sqrtn; i += 2 )
    {
        if ( sieve[i] == 0 )
        {
            for ( long long int j = i * i; j <= n; j += 2 * i ) sieve[j] = 1;
        }
    }
    prime[k++]=2;
    for ( long long int i = 3; i <= n; i += 2 )
    {
        if ( sieve[i] == 0 ) prime[k++]=i;
    }
//    cout<<k<<endl;
}
bool check (long long a)
{

                for(long long j=2; j<k; j++)
                {
                    if(a%prime[j]==0)
                        return 0;

                }
                return 1;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    primeSieve(SIZE);

    long long int l,u;
    while(scanf("%lld%lld",&l,&u)!=EOF)
    {

        // cout<<prime[k-1]<<endl;
        long long maxa=-100000000001,min=100000000001,kom1,kom2,basi1,basi2,s=1,primes[48000],i,j;
      // ` long long int sqrtn = sqrt(n);
        if(u<=SIZE)
        {
            for(i=l; i<=u; i++)
            {
                if(sieve[i]==0)
                    primes[s++]=i;
            }
        }
        else if(u>SIZE)
        {
            for(i=l; i<=u; i++)
            {
              //  cout<<i<<endl;
                if(i<=48000)
                {
                    if(sieve[i]==0)
                    primes[s++]=i;
                }
                else
                {
                if(check(i))
                     primes[s++]=i;

                }
            }
        }
//        for(int i=1;i<s;i++)
//        {
//            if(primes[i]==1357201||primes[i]==1357333||primes[i]==1098847||primes[i]==1098953)
//                cout<<primes[s-1]<<endl;
//        }
        if(s<3)
            printf("There are no adjacent primes.\n");
        else
        {
            for(i=1,j=2; j<s; i++,j++)
            {
                if(maxa<primes[j]-primes[i])
                {
                    basi1=i;
                    basi2=j;
                    maxa=primes[j]-primes[i];
                }
                if(min>primes[j]-primes[i])
                {
                    kom1=i;
                    kom2=j;
                    min=primes[j]-primes[i];
                }
            }
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",primes[kom1],primes[kom2],primes[basi1],primes[basi2]);
        }

    }


    return 0;
}


