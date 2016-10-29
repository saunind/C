#include <stdio.h>

float median (int *a, int *b);

main ()
{
    int num1 = 18;
    int num2 = 35;
    float result;

    printf("%10.2f\n", median(&num1, &num2));
    printf("%10.d\n", num1);
    printf("%10.2f\n", median(&num1, &num2));

//    result = median(121, 346);
 //   printf("%10.1f\n", result);
  //  printf("%10.1f\n", median(1032, 1896));
}

float median (int *n1, int *n2)
{
    float m;

    m = (float)(*n1 + *n2) / 2;
    *n1 = 20;
    return m;
}
