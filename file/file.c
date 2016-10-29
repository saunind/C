#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    FILE* fPointer = NULL;

    fPointer = fopen("123", "w");
    fprintf(fPointer, "test message\n");


    fclose(fPointer);
    return;
}
