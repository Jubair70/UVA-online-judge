#include<iostream>
using namespace std;
#include<string.h>
#include<stdio.h>
const int SIZE=100;
class Bonus
{
    char A[SIZE];
    int len;
public:
    Bonus(char AR[],int size)
    {   size=len;
        for(int i=0;i<len;i++)
            AR[i]=A[i];
    }
    int count_words()
    {int c;
    int i=0;
    while(A[i]!='\0')
        {c++;
        i++;}

        c=c+1;
    }
    int reverse_words()
    {
        int i,j,tmp;
        for (i=0,j=len;i<(len/2);i++,j--)
            int tmp=A[i];
        A[i]=A[j];
        A[j]=tmp;
    }
    void PRINT()
    {
        for(int i=0;i<len;i++)
            cout<<A[i]<<endl;
    }
};
int main()
{
    char A[]="I can code";
    Bonus a(A,strlen(A));
    a.PRINT();
    cout<<a.count_words()<<endl;
    a.reverse_words();
    a.PRINT();
    char B[]="My country is Bangladesh";
    Bonus b(B,strlen(B));
    b.PRINT();
    cout<<b.count_words()<<endl;
    b.reverse_words();
    b.PRINT();
    return 0;
}
