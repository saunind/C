#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    char a = 10;

    a = rand();
    printf("%d\n", a);
    a = sizeof(a);
    printf("%d\n", a);

    return;
}
