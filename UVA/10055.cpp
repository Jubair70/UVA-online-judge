#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    long long int a,b;

    while(scanf("%lld %lld",&a,&b)==2)
    cout<<abs(a-b)<<endl;
    return 0;
}
