#include <stdio.h>

void main(void)
{
    char one = 1;
    char two = 2;
    char three = 3;
    char four = 4;
    char five = 5;
    
    char oneResult = 0;
    char twoResult = 0;
    char threeResult = 0;
    char fourResult = 0;
    char fiveResult = 0;

    char* onePointer = NULL;
    char* twoPointer = NULL;
    char* threePointer = NULL;
    char* fourPointer = NULL;
    char* fivePointer = NULL;

    onePointer = &one;
    twoPointer = &two;
    threePointer = &three;
    fourPointer = &four;
    fivePointer = &five;

    printf("onePointer is:%p\n", onePointer);
    printf("address of variable one is:%X\n", &one);
    printf("address of onePointer is:%X\n", &onePointer);
    printf("\n");
        
    oneResult = *onePointer;
    twoResult = *twoPointer;
    threeResult = *threePointer;
    fourResult = *fourPointer;
    fiveResult = *fivePointer;

    printf("oneResult is:");
    printf("%d\n", oneResult);
    
    printf("twoResult is:");
    printf("%d\n", twoResult);

    *onePointer = 10;
    *twoPointer = 20;
    *threePointer = 30;

    printf("now onePointer is:%d\n", *onePointer);
    printf("%d\n", *twoPointer);
    printf("%d\n", *threePointer);
    
    printf("%d\n", one);
    printf("%d\n", two);
    printf("%d\n", three);

    printf("now address of onePointer is:%p\n", &onePointer);


    //printf("five pointer is:%p\n", *fivePointer);
     
    return;
}
