#include <stdio.h>

void main(void)
{
    int i, j;

    printf("\n");
    
    for (i = 1; i < 10; i++)
        {
            for (j = 1; j < 10; j++)
                printf("%4d", i*j);
            printf("\n");
        }
printf("\n");
return;
}
