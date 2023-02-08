#include "tp2_ex2.h"

int main(void)
{
    bool t[10];
    afficheNbPremier(t, SUP);
    return 0;
}

void    initialisation(bool *t, size_t n)
{
     for (int i = 0; i < n; i++)
     {
        t[i] = true;
     }
}

void    remplissage(bool *t, size_t n)
{
    t[0] = false;
    t[1] = false;
    for (int i = 2; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (j % i == 0)
                t[j] = false;
        }
    }
}

void    afficheNbPremier(bool *t, size_t n)
{
    initialisation(t, n);
    remplissage(t, n);
    for (int i = 0; i < n; i++)
    {
        if (t[i])
            printf("%d\n", i);
    }
}

