#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i=1;
    while(scanf("%d",&t))
    {
        int hour,mint,time;
        int initial=600;
        int final=1080;
        while(t--)
        {
            int h1,m1,h2,m2;
            char s[1000];
            scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
            gets(s);
            int c1=((h1*60+m1)-initial);
            int c2=final-(h2*60+m2);
            if(c1>c2)
            {
                    hour=initial/60;
                    mint=initial%60;
                    time=c1;
            }
            else
            {
                    hour=h2;
                    mint=m2;
                    time=c2;
            }
            initial=h2*60+m2;
        }
        if(time<60)
        printf("Day #%d: the longest nap starts at %02d:%02d and will last for %d minutes.\n",i++,hour,mint,time);
        else
        printf("Day #%d: the longest nap starts at %02d:%02d and will last for %d hours and %d minutes.\n",i++,hour,mint,time/60,time%60);
 }
    return 0;
}
