// Fig. 5.13: fig05_13.c
// Randomizing the die-rolling program.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int i;
    unsigned int seed;

    printf("%s", "Enter seed: ");
    scanf("%u", &seed);

    srand(seed);

    for ( i = 1; i <= 10; ++i) {
	printf("%10d", 1 + ( rand() % 6 ));
	
	if ( 0 == i % 5 ) puts("");
    }

    return 0;
}
