#include <stdio.h>
#include <time.h>

#define N 10

void arr_make(int arr[], int min, int max);

void main(void)
{
    int arrI[N];
    int i = 0;

    arr_make(arrI, 30, 90);

    for(i = 0; i < N; i++)
        printf("%d ", arrI[i]);
    printf("\n");
}

void arr_make(int arr[], int min, int max)
{
    int i;

    srand(time(NULL));

    for(i = 0; i < N; i++)
        *arr++ = rand() % (max - min + 1) + min;
}
