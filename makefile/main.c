#include <stdio.h>
#include "functions.h"

/*void print_hello(void) 
{
	printf("hello, world!\n"); 
}

int factorial(int n)
{
	int c;
  	int fact = 1;

	for (c = 1; c <=n; c++)
                  fact = fact * c;

	return fact;
}
*/
main()
{
	int c,n, fact = 1;

	printf("enter a number\n");
	scanf("%d", &n);


	printf("factorial of %d = %d\n", n, factorial(n));
	print_hello();
	return 0;
}
