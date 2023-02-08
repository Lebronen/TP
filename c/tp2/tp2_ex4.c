#include "tp2_ex4.h"

int main(void)
{
    fraction    ex_fractions[7] = {build(1,1), 
    build(1,2), build(2,4), build(-9,3), build(8,-20), 
    build(-5,-1), build(1,-4)};
    printf("%d\n", eq_fraction(ex_fractions[1], ex_fractions[2]));
    aff_frac(sum(ex_fractions[0], ex_fractions[1]));
    aff_frac(sub(ex_fractions[0], ex_fractions[2]));
    aff_frac(mul(ex_fractions[2], ex_fractions[3]));
    aff_frac(reduce(ex_fractions[3]));
    return 0;
}

void    aff_frac(fraction f)
{
    printf("%ld/%ld\n",f.num, f.den);
}

fraction    build(long int n, long int d)
{
    fraction f;
    assert(d != 0);
    f.num = n;
    f.den = d;
    return f;
}

bool    eq_fraction(fraction f, fraction g)
{
    return f.num * g.den == f.den * g.num;
}

bool    is_int(fraction f)
{
    return !(f.num % f.den);
}

fraction    sum(fraction f, fraction g)
{
    fraction    h;
    
    h.den = f.den * g.den;
    h.num = f.num * g.den + g.num * f.den;
    return h;
}

fraction    sub(fraction f, fraction g)
{
    fraction    h;
    
    h.den = f.den * g.den;
    h.num = f.num * g.den - g.num * f.den;
    return h;
}

fraction    mul(fraction f, fraction g)
{
    fraction    h;
    h.num = f.num * g.num;
    h.den = f.den * g.den;
    return h;
}

long    pgcd(long a, long b)
{
    long x =a;
    long y = b;
    int r;

    while (y)
    {
        r = x%y;
        x = y;
        y = r;
    }
    return x;
}

fraction    reduce(fraction f)
{
    fraction    h;
    h.num = f.num / pgcd(f.num, f.den);
    h.den = f.den / pgcd(f.num, f.den);
    if (h.num >= 0 && h.den < 0)
    {
        h.num = -h.num;
        h.den = -h.den;
    }
    return h;
}