#include<iostream>
#include<cstdio>
#include<vector>
#include <string>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
int main()
{
    int t;

    while(scanf("%d",&t)&&t)
    {

    map<set<int>,int>res;
        while(t--)
        {
            int s;
            set<int>a;
           // string res;
            for(int i=0;i<5;i++)
            {
                scanf("%d",&s);
                a.insert(s);
            }
            res[a]++;
        }
        for(map<set<int>,int>::iterator it=res.begin();it!=res.end();it++)
        {
            cout<<"  "<<(*it).second<<endl;
        }
    }
    return 0;
}
