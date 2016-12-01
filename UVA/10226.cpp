#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    scanf("%d\n\n",&t);
    while(t--)
    {
        map<string,float>res;
        string a;
        float cnt=0;

        while(getline(cin,a))
        {
            if(a.length()==0)
                break;
            res[a]++;
            cnt++;
        }
        map<string,float>::iterator it=res.begin();
        while(it!=res.end())
        {
            cout<<(*it).first<<" "<<fixed<<setprecision(4) <<(*it).second/cnt*100.00<<endl;
            it++;
        }
        if(t>0)printf("\n");
    }
    return 0;
}
