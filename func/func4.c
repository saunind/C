#include <stdio.h>

unsigned long fact (unsigned n);

void main (void)
{
    unsigned long res;

    printf("fact is %lu\n", res = fact (5));
    return;
}

unsigned long fact (unsigned n)
{
    unsigned long factr = 1;    

    while (n > 0) 
    {   factr = factr * n--;
        printf("stage %lu\n", factr);
    }
    
    return factr;
}
