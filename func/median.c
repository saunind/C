#include <stdio.h>

float median(int* a, int* b);

void main(void)
{
    int num1 = 18;
    int num2 = 35;
    float result;

    printf("%1.3f\n", median(&num1, &num2));
    num1 = 123;
    num2 = 346;
    result = median(&num1, &num2);
    printf("%10.f\n", result);
    /*printf("%10.2f\n", result);
    printf("%10.2f\n", median(1032, 1896));*/ 

    return;
}

float median(int* n1, int* n2)
{
    float m;

    m = (float)(*n1 + *n2) / 2;
    
    return m;
}
