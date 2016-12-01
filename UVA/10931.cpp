#include<iostream>
#include<cstdio>
#include<cstring>
#include<bitset>
using namespace std;
int main()
{
    int a;
    while(scanf("%d",&a)&&a)
    {
    string binary = bitset<31>(a).to_string();
    int i=0;
    while(binary[i]!='1')
    i++;
    binary.erase(0,i);
    cout<<"The parity of "<<binary<<" is "<<__builtin_popcount(a)<<" (mod 2)."<<endl;
    }
    return 0;
}
