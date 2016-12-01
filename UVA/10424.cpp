#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{string s1,s2;
    int b,f;
    int sum1,sum2,i;
    double x;
    while(getline(cin,s1)&&getline(cin,s2))
    {
        for(i=0,sum1=0;i<s1.size();i++)
        {
            if(s1[i]>='a'&&s1[i]<='z')
            sum1=sum1+s1[i]-96;
            else if(s1[i]>='A'&&s1[i]<='Z')
            sum1=sum1+s1[i]-64;
            else continue;
        }
        for(i=0,sum2=0;i<s2.size();i++)
        {

            if(s2[i]>='a'&&s2[i]<='z')
            sum2=sum2+s2[i]-96;
            else if(s2[i]>='A'&&s2[i]<='Z')
            sum2=sum2+s2[i]-64;
        }
        for(;sum1>9||sum2>9;)
        {   if(sum1>9)
            sum1=((sum1/10)+(sum1%10));
            else if(sum2>9)
            sum2=((sum2/10)+(sum2%10));
            else break;
        }
        if(sum1>sum2)
        {
            x=((double)sum2/(double)sum1)*100;
            printf("%.2lf %%\n",x);
        }
        else
        {
            x=((double)sum1/(double)sum2)*100;
            printf("%.2lf %%\n",x);
        }
    }
    return 0;
}
