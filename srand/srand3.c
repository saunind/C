#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define RAND_MAX 999

void main(void)
{
    int a;
    int i;
    int b = 0;

 //   printf("%d\n new rand_max", RAND_MAX);

    srand(time(NULL));

    for (i = 1; i <= 50; i++)
    {
        printf("%15d", rand() % 35 - 35);
        if (i % 5 == 0)
            printf("\n");
    }
    
    return;
}
