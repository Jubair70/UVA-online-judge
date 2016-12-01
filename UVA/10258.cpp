#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,totalsolve[101],flagsolve[101][10];
    scanf("%d",&t);
    memset(totalsolve,0,sizeof(totalsolve));
    memset(flagsolve,0,sizeof(flagsolve));
    getchar();
    while(t--)
    {

        getchar();
        int con,solved,penalty,solmin=-1,penalmax=10000000;
        char a;
        scanf("%d%d%d",&con,&solved,&penalty);
        getchar();
        scanf("%c",&a);

        if(a=='C'&&!flag[con][solved])
        {
            totalsolve[con]++;
            flagsolve[con][solved]=1;
            totalpenalty+=penalty;

        }
        else if(a=='I')
            totalpenalty+=20;
    }
    return 0;
}
