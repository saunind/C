#include <stdio.h>

#define N 10

void main(void)
{
    float arr[N] = {1.0, 0.9, 0.5, 0.6, 0.7, 1.1, 0.7, 0.4, 1.2, 0.9};
    float *p;
    char i;

    for (i = 0; i < N; i++)
    printf("%p\n %f\n", arr+i, *(arr + i));

    return;
}
