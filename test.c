#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main(void)
{
    unsigned char a = 255;
    a = a + 1;
    //printf("%d", a);

	for ( int i = 0; i < 10;) {
		printf("%d\n", a);
		i++;
	}

   return 0;

}
