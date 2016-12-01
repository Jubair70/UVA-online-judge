#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
long long reverse(long long a)
{
    int ma=a,r=0;
    while(a!=0)
    {
        r=r*10+(a%10);
        a/=10;
    }
    return r;
}
string s;
    bool palindrome(long long  a)
    {
    	s=to_string(a);
        if(s.compare( string(s.rbegin(), s.rend()))==0)
            return 1;
            return 0;

    }
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long i=1;
 		while(palindrome(n+reverse(n))!=1)
 		{
 			n=n+reverse(n);
 		i++;
 		}
 		printf("%s",s);
 	//	cout<<i<<" "<<s<<endl;
    }
    return 0;
}
