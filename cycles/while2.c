#include <stdio.h>


void main(void)
{
    unsigned char a = 31;
    printf("\n");
    while (a < 128)
    {
        printf("%d - %c\n", a, a);
        if ( a % 10 == 0) printf("\n"); 
        ++a;
    }
printf("\n");
return;
}
