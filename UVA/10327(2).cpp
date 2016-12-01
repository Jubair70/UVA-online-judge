#include <stdio.h>

int main()
{
    int i, j, n, v[100000], x, a;
    while(scanf("%d", &n) != EOF)
    {
        x = 0;
        for(i = 0; i < n; i ++)
            scanf("%d", &v[i]);
        for(i = 1; i < n; i ++)
        {
            if(v[i - 1] > v[i])
            {
                for(j = i; j > 0; j --)
                {
                    if(v[j - 1] <= v[j]) break;
                    a = v[j];
                    v[j] = v[j - 1];
                    v[j - 1] = a;
                    x ++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", x);
    }

    return 0;
}
