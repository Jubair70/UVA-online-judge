#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
   freopen("out.txt","w",stdout);
    map<string,char>input;
    input[".-"] = 'A'; input["-..."] = 'B'; input["-.-."] = 'C';
    input["-.."] = 'D'; input["."] = 'E'; input["..-."] = 'F';
    input["--."] = 'G'; input["...."] = 'H'; input[".."] = 'I';
    input[".---"] = 'J'; input["-.-"] = 'K'; input[".-.."] = 'L';
    input["--"] = 'M'; input["-."] = 'N'; input["---"] = 'O';
    input[".--."] = 'P'; input["--.-"] = 'Q'; input[".-."] = 'R';
    input["..."] = 'S'; input["-"] = 'T'; input["..-"] = 'U';
    input["...-"] = 'V'; input[".--"] = 'W'; input["-..-"] = 'X';
    input["-.--"] = 'Y'; input["--.."] = 'Z';
    input["-----"] = '0'; input[".----"] = '1'; input["..---"] = '2';
    input["...--"] = '3'; input["....-"] = '4'; input["....."] = '5';
    input["-...."] = '6'; input["--..."] = '7'; input["---.."] = '8';
    input["----."] = '9';
    input[".-.-.-"] = '.'; input["--..--"] = ','; input["..--.."] = '?';
    input[".----."] = '\''; input["-.-.--"] = '!'; input["-..-."] = '/';
    input["-.--."] = '('; input["-.--.-"] = ')'; input[".-..."] = '&';
    input["---..."] = ':'; input["-.-.-."] = ';'; input["-...-"] = '=';
    input[".-.-."] = '+'; input["-....-"] = '-'; input["..--.-"] = '_';
    input[".-..-."] = '"'; input[".--.-."] = '@';

    int t;
    scanf("%d",&t);
    getchar();
    for(int i=1;i<=t;i++)
    {
        string a;
        if(i!=1)printf("\n");
        printf("Message #%d\n",i);
        getline(cin,a);
        stringstream ss;
        string s;
        int cnt=0,word=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=' ')
            {
                s+=a[i];
                word=1;
                cnt=0;
            }
            else
            {
                if(word)
                {
                    word=0;
                    cout<<input[s];
                    s="";
                    cnt=1;
                }
                else if(cnt==1)
                {
                    cnt=2;
                    printf(" ");
                }

            }
        }
        if(s!="")
        cout<<input[s];
        printf("\n");
    }

    return 0;
}

