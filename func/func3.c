#include <stdio.h>

unsigned fib(unsigned num);
unsigned long factorial(unsigned n);


main()
{
    unsigned long result;

    result = fib(10);
    printf("result of 10th element in fibonachi equals to %lu\n", result);

    result = fib(25);
    printf("result of 25th element in fibonachin equals to %lu\n", result);    

    result = factorial(5);
    printf("5! = %lu\n", result);

}

unsigned fib(unsigned num)
{
    unsigned i = 1, a = 0, b = 1, s;

    while (i++ < num-1)
    {
        s = a;
        a = b;
        b = s+a;
    }
    return b;
}

unsigned long factorial (unsigned n)
{
    unsigned long fact=1;

    while (n > 0) fact = fact * n--;

    return fact;
}












