#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
//#define INT_MAX 2147483647
//#define INT_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL unsigned long long
using namespace std;

int mytime;
bool palindrome (int t)
{
    char a [10];
    char rev_a [10];

    sprintf (a, "%d", t);
    strcpy (rev_a, a);

    reverse (rev_a, rev_a + strlen (rev_a));

    if ( strcmp (a, rev_a) == 0 ) return true;
    return false;
}

int main ()
{
   // freopen("out.txt","w",stdout);
    vector<int>a;
   for(int i=0;i<2359;)
   {
       if(palindrome(i))
           a.push_back(i);
            i++;
       if(i%100==60)i+=40;

   }

   int t;
   scanf("%d",&t);
   while(t--)
   {
       int h,m;
        scanf("%d:%d",&h,&m);
        int total=100*h+m;
        if(total>=2332)
        {
        printf ("00:00\n");
        continue;
        }
        for(int s=0;s<a.size();s++)
        {
            if(a[s]>total)
            {
                m = a[s] % 100;
                h = a[s] / 100;
                printf("%02d:%02d\n", h, m);
                break;
            }

        }


   }
    return 0;
}
