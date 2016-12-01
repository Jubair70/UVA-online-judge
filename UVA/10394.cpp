#include<bits/stdc++.h>
#define SIZE 18409900
using namespace std;
long long int prime[100001]; /*Stores generated primes*/
char   sieve[18409900]; /*0 means prime*/
void primeSieve ( long long int n ) {
    sieve[0] = sieve[1] = 1; /*0 and 1 are not prime*/

    for ( long long int i = 2; i <= n; i += 2 ) sieve[i] = 1; /*Remove multiples of 2*/

    long long int sqrtn = sqrt(n);
    for ( long long int i = 3; i <= sqrtn; i += 2 ) {
        if ( sieve[i] == 0 ) {
            for ( long long int j = i * i; j <= n; j += 2 * i ) sieve[j] = 1;
        }
    }

    for ( long long int i = 3,k=1; i <= n; i += 2 ) if ( sieve[i] == 0 && sieve[i+2] == 0  ) prime[k++]=i;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    primeSieve(18409900);
    long long int n;
    while(cin>>n)
    {

        cout<<"("<<prime[n]<<", "<<prime[n]+2<<")"<<endl;
    }
    return 0;
}
