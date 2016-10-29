#include <stdio.h>

#define N 100

void arr_change(const char a[], char b[]);

void main(void)
{
    char arr[N] = "2 3 4 5 12 13 14 15 22 23";
    char arrI[N], i;

    arr_change(arr, arrI);
    
    printf("Original array is: %s", arr);

    for(i = 0; i < N; i++)
    {
        if(arrI[i] = ' ')
        {    i++;
        printf("%d ", arrI[i]); }
    }

    printf("\n");

    return;
}

void arr_change(const char m1[], char m2[])
{
    int i;

    for(i = 0; i < N; i++)
    {
        if(m2[i] = ' ')
            i++;
            m2[i] = -m1[N-i-1] * 2;
    }
}
