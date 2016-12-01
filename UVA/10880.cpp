#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int arr[1000009];
int main()
{
   // freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    int s=1;
    while(t--)
    {
        int total,baki;
        scanf("%d%d",&total,&baki);
        int khaise=total-baki;

        printf("Case #%d:",s++);
        if(khaise>baki)
        {
            int root=sqrt(khaise);
            int i,j;
            for(i=1,j=0;i<=root;i++)
            {
                if(khaise%i==0)
                {
                    if(i>baki)
                    arr[j++]=i;
                    if(khaise/i>baki&&khaise/i!=i)
                    arr[j++]=khaise/i;
                }
            }
            sort(arr,arr+j);
            for(i=0;i<j;i++)
                printf(" %d",arr[i]);
        }
        if(baki==total) printf(" 0");
        printf("\n");
    }
    return 0;
}
