
#include<bits/stdc++.h>
using namespace std;
map<vector<int>,int>m;
int main()
{
   // freopen("in.txt","r",stdin);
    int t;
    while(scanf("%d",&t),t)
    {
        int mx=-1;
        int s;
        m.clear();
        for(int i=0;i<t;i++)
        {

            vector<int>a;
            for(int j=0;j<5;j++)
            {
              scanf("%d",&s);
                a.push_back(s);

            }
            sort(a.begin(),a.end());
            m[a]++;
            mx=max(m[a],mx);
        }
        int cnt=0;
        for(map<vector<int>, int>::iterator it=m.begin(); it!=m.end(); ++it)
	    if(it->second == mx) cnt++;
	    printf("%d\n",mx*cnt);
}
    return 0;
}
