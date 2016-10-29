:wq#include <stdio.h>

#define N 5

void main(void)
{
    int i;
    int arrI[N];
    int *pI;

    pI = &arrI[0];

    for(i = 0; i < N; i++)
        printf("%p\n", pI + i);

    return;
}
