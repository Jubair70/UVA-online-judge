#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include <algorithm>
using namespace std;
void reverse_string(char *str)
{
    /* skip null */
    if (str == 0)
    {
    	return;
    }

    /* skip empty string */
    if (*str == 0)
    {
    	return;
    }

    /* get range */
    char *start = str;
    char *end = start + strlen(str) - 1; /* -1 for \0 */
    char temp;

    /* reverse */
    while (end > start)
    {
    	/* swap */
    	temp = *start;
    	*start = *end;
    	*end = temp;

    	/* move */
    	++start;
    	--end;
    }
}

int main()
{
    int t;
    while(scanf("%d",&t),t)
    {
        getchar();
        string s;
        char buffer[101];
        getline(cin,s);
        int d=s.size()/t;
        while(t--)
        {
        int length=s.copy(buffer,d,0);
        buffer[length]='\0';
        reverse_string(buffer);
        printf("%s",buffer);
        s.erase(0,d);
        }
        printf("\n");

    }
    return 0;
}
