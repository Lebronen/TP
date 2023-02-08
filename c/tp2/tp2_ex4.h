#ifndef TP2_EX4_H
#define TP2_EX4_H

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct s_fraction
{
    long int num;
    long int den;
} fraction;

fraction    build(long int n, long int d);
bool    eq_fraction(fraction f, fraction g);
bool    is_int(fraction f);
fraction    sum(fraction f, fraction g);
void    aff_frac(fraction f);
fraction    sub(fraction f, fraction g);
fraction    mul(fraction f, fraction g);
fraction    reduce(fraction f);

#endif