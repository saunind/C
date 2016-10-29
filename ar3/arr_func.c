#include <stdio.h>
#include <time.h>

//#define N 10

void arr_make(int *arr, int min, int max, int n);

int main(void)
{
//    const int N = 10;
    int arrI[10];
    int i = 0;

    arr_make(arrI, 30, 90, 10);

    for(i = 0; i < 10; i++)
        printf("%d ", arrI[i]);
    printf("\n");

    return 112;
}

void arr_make(int *arr, int min, int max, int n)
{
    int i;
//    const int N = 10;

    srand(time(NULL));

    for(i = 0; i < n; i++)
        arr[i] = rand() % (max - min + 1);
}    








 







