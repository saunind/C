#include <stdio.h>

#define EOL '\n'

void main(void)
{
    char var;
    char* varPtr = NULL;
    char* ptr_varPtr = NULL;

    var = 10;
    printf("VAR is: %d\n", var);
    printf("VAR address is: %x\n\n", &var);

    varPtr = &var;
    printf("*varPtr is: %d\n", *varPtr);
    printf("Address of varPtr is: %p\n", &varPtr);
    printf("\n");

    ptr_varPtr = &*varPtr; // ptr_varPtr includes address of VAR variable 
    printf("ptr_varPtr is: %p\n\n", *ptr_varPtr);

    *ptr_varPtr = 11;

    printf("Now VAR is: %d\n", var);
    printf("Now varPtr is: %d %c %c", *varPtr, EOL, EOL);

    return;
}
