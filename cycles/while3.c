#include <stdio.h>

void main(void)
{
    char a = 0;
    char b = 1;

    while ( a <= 8)
    {
//        printf("%d ", a * b);
        ++a;
        while ( b <= 9)
        {
            printf("%d ", a * b);
            ++b;
        //    printf("\n");
        }
        b = 1;
        printf("\n");
    }
 
        
return;
}
