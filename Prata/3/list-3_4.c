/* print2.c-more printf() properties */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(void)
{
    unsigned int un = 3000000000;
    short int end = 200;
    long int big = 65537;
    long long int verybig = 12345678908642;
    _Bool bo = true;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);
    printf("bo = %d\n", bo);

    return EXIT_SUCCESS;
}













 
