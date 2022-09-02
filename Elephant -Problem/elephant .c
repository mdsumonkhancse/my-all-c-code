#include <stdio.h>
int main()
{
    int x, res;
    scanf("%d", &x);

    if (x % 5 == 0)
    {
        res = x / 5;
        printf("%d\n", res);
    }
    else
    {
        res = x / 5;
        res++;
        printf("%d\n", res);
    }
    return 0;
}