#include <stdio.h>

void main(void)
{
    char ar[10];
    int i;

    printf("enter number\n");
    scanf("%s", ar);

    if(ar[0] == 1)
    {
        printf("male\n");
    }
    else if(ar[1] == 'h')
    {
        printf("hex\n");
    } 
    for(i = 2; i < 10; i++)
    {
        printf("%X\n", ar[i]);
    }
    return;
}
