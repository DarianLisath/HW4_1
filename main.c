#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    i = 1;
    while(i<=n)
    {
        if(i%1==0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
