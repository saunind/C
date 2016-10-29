void print_hello(void)
{
        printf("hello, world!\n");
	return;
}



int factorial(int n)
{
        int c;
        int fact = 1;

        for (c = 1; c <=n; c++)
                  fact = fact * c;

        return fact;
}


