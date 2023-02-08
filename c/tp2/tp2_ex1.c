
#include "tp2_ex1.h"
int main(void)
{
    int t[3] = {1,2,3};
    int s[3] = {1, 2, 3};
    somme(t, s, 3);
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", s[i]);
    }
    permute(s, 3);
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", s[i]);
    }
    printf("\n");
    return 0;
}

void    somme(int *t, int *s, size_t n)
{
    s[0] = t[0];
    for (int i = 1; i < n; i++)
    {
        t[i] += t[i - 1];
        s[i] = t[i];
    }
}

void    permute(int *t, size_t n)
{

    if (n <= 1)
        return ;
    int tmp1 = t[0];
    int tmp2;
    for (int i = 0; i < n - 1; i++)
    {
        tmp2 = t[i + 1];
        t[i + 1] = tmp1;
        tmp1 = tmp2;
    }
    t[0] = tmp1;
}