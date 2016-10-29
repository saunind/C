#include <stdio.h>
#include <time.h>

#define N 10

void arr_make(int *arr, int min, int max);

void arr_inc_dec(int arr[], char sign);

void arr_print(int *arr);

void main(void)
{
    int arrI[N], i, minimum, maximum;
    char ch;
    
    i = 0;

    printf("Enter minimum & maximum: ");
    scanf("%d %d",&minimum, &maximum);
//    minimum = 10;
 //   maximum = 20;
    scanf("%*c");
    scanf("%*c");

    arr_make(arrI, minimum, maximum);
    arr_print(arrI);


    printf("Enter sign (+,-): ");
    scanf("%c", &ch);

    arr_inc_dec(arrI, ch);
    arr_print(arrI);

    return;
}

void arr_make(int *arr, int min, int max)
{
    int i;
    
    srand(time(NULL));

    for(i = 0; i < N; i++)
        *arr++ = rand() % (max - min + 1) + min;
}

void arr_inc_dec(int *arr, char sign)
{
    int i;

    for(i = 0; i < N; i++)
    {
        if(sign == '+') arr[i]++;
        if(sign == '-') arr[i]--;
    }
}

void arr_print(int *arr)
{
    int i;

    printf("The array is: ");
    for(i = 0; i < N; i++)
        printf("%d ", *arr++);
    printf("\n");
}
