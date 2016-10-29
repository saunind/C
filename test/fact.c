#include <stdio.h>

long int factorial(int n);

int main(void)
{
    int counter;
    int fact = 1;

    for ( counter = 1; counter <= 10; counter++) {
	fact = fact * counter;
    }

    printf("%d\n", fact);
    printf("%d\n", factorial(10));

    return 0;
}

long int factorial(int num)
{
    long int sum;

    if (0 == num)
	sum = 1;
    else
	sum = factorial(num - 1) * num; /*  factorial(3) = factorial(2) * 3
					    factorial(2) = factorial(1) * 2
					    factorial(1) = factorial(0) * 1
					    factorial(0) = 1	
					*/
    return sum;
}
