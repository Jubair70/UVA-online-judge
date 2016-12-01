#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,cnt=1;
    scanf("%d",&t);
    while(t--)
    {
        int d1,d2,m1,m2,y1,y2;
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        int age=y1-y2;
        if(m1<m2)age--;
        else if (m1==m2)
                if(d1<d2) age--;
        if(age<0)
            printf("Case #%d: Invalid birth date\n", cnt++);
        else if(age>130) printf("Case #%d: Check birth date\n", cnt++);
        else  printf("Case #%d: %d\n",cnt++,age);

   }
    return 0;
}
