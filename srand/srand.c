#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int i;
    int res;
    int array[10];

    i = time(NULL);
    printf("%d\n", i);
    printf("%d\n", sizeof(i));

    srand((int) i);

    for (res = 0; res < 10; res++)
    {
        array[res] = rand() % 50;
        //printf("%d\n", array[res]);
    }
    
    printf("%d %d %d", array[0], array[1], array[2]);

    return 0;
}
