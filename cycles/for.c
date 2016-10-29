#include <stdio.h>

void main(void)
{
    char x; 
    char y;

    for (x = 0; x <= 9; ++x)
    {
        printf("\n");
        for (y =1; y < 9; ++y)
        {
            printf("%d ", x * y);
        }
    
    printf("\n");
    }    

return;
}
