#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        stringstream ss;
        scanf("%d",&n);
        printf("%d",__builtin_popcount(n));
        ss << n;
        ss >> hex >> n;
        printf(" %d\n",__builtin_popcount(n));

    }
    return 0;
}
