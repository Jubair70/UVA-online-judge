#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct team{
    int id;
    int solved[10];
    int totalpenalty;
    int totalsolve;
    bool submit;

    team()
    {
    submit=false;
    totalpenalty=0;
    totalsolve=0;
    memset(solved,0,sizeof(solved));
    }

} all[101];
bool comp(team a,team b)
{
    if(a.totalsolve>b.totalsolve)
        return 1;
    if(a.totalsolve==b.totalsolve&&a.totalpenalty<b.totalpenalty)return 1;
    if(a.totalsolve==b.totalsolve&&a.totalpenalty==b.totalpenalty&&a.id<b.id)return 1;
    return 0;
}
int main()
{
    int t;
    char input[200];
     bool blank = false;
    scanf("%d",&t);
    getchar();
    gets(input);
    while(t--)
    {
memset(&all, 0, sizeof(all));
        int a,b,c;char d;
        while(gets(input)&&strlen(input))
        {
        sscanf(input,"%d %d %d %c",&a,&b,&c,&d);
        all[a].id=a;
        all[a].submit=true;
        if(!all[a].solved[b]&&d=='C')
        {
            all[a].totalsolve++;
            all[a].solved[b]=1;
            all[a].totalpenalty+=c;
        }
        else if (!all[a].solved[b]&&d=='I')
        {
            all[a].totalpenalty+=20;
        }

        }
        sort(all,all+101,comp);
         if ( blank )
            printf ("\n");
        blank = true;
        for ( int i = 0; i <= 105; i++ ) {
            if ( all [i].submit )
                printf ("%d %d %d\n", all[i].id, all[i].totalsolve, all[i].totalpenalty);
        }
    }
    return 0;
}
