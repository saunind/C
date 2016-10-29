#include <stdio.h>

#define N 5

void main(void)
{
    int arrI[N], i;
    int* pI;

    for (i=0; i<N; i++)
    printf("%p\n", &arrI[i]);

    pI = &arrI[0];

    for (i = 0; i < N; i++)
        printf("%p\n", pI + i);

    printf("\n");
    printf("%p = %p\n", arrI, &arrI[0]);

    for (i=0; i<N; i++)
        printf("%d\n", *(arrI + i));

    return;
}
