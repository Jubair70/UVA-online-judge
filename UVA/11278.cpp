#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;
int main()
{
  //  freopen("in.txt","r",stdin);
  //  freopen("out.txt","w",stdout);
    map<char,char>a;
   a['`']='`'; a['~']='~'; a['1']='1'; a['!']='!'; a['2']='2'; a['@']='@';
   a['3']='3'; a['#']='#'; a['4']='q'; a['$']='Q'; a['5']='j'; a['6']='l';
   a['7']='m'; a['8']='f'; a['9']='p'; a['0']='/'; a['-']='['; a['=']=']';
   a['q']='4'; a['w']='5'; a['e']='6'; a['r']='.'; a['t']='o'; a['y']='r';
   a['u']='s'; a['i']='u'; a['o']='y'; a['p']='b'; a['[']=';'; a[']']='=';
   a['\\']='\\'; a['a']='7'; a['s']='8'; a['d']='9'; a['f']='a'; a['g']='e';
   a['h']='h'; a['j']='t'; a['k']='d'; a['l']='c'; a[';']='k'; a['\'']='-';
   a['z']='0'; a['x']='z'; a['c']='x'; a['v']=','; a['b']='i'; a['n']='n';
   a['m']='w'; a[',']='v'; a['.']='g'; a['/']='\'';

   a['%']='J'; a['^']='L'; a['&']='M'; a['*']='F'; a['(']='P'; a[')']='?';
   a['_']='{'; a['+']='}'; a['Q']='$'; a['W']='%'; a['E']='^'; a['R']='>';
   a['T']='O'; a['Y']='R'; a['U']='S'; a['I']='U'; a['O']='Y'; a['P']='B';
   a['{']=':'; a['}']='+'; a['A']='&'; a['S']='*'; a['D']='('; a['F']='A';
   a['G']='E'; a['H']='H'; a['J']='T'; a['K']='D'; a['L']='C'; a[':']='K';
   a['"']='_'; a['Z']=')'; a['X']='Z'; a['C']='X'; a['V']='<'; a['B']='I';
   a['N']='N'; a['M']='W'; a['<']='V'; a['>']='G'; a['?']='"'; a[' ']=' ';
    a['|']='|';
    char s[100000];
    while(gets(s))
    {
        for(int i=0;i<strlen(s);i++)
            cout<<a[s[i]];
        printf("\n");
    }
    return 0;
}
