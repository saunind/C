#include <stdio.h>

void multi(int* px, int y);

main()
{
    int x = 34;
    int y = 6; 

    multi(&x, 367);
    multi(&y, 91);
    
    printf("%d %d\n", x, y);

    return;
}

void multi(int *base, int pow)
{
    while(pow >= 10)
    {
        *base = *base * 10;
        pow = pow / 10;
    }
    return;
}
