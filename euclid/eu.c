#include <stdio.h>

short greatestCommonDivisor(short a, short b)
{
	short t;
	
	while (b != 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

void main(void)
{
	int x, y;
	while (scanf("%d %d, &x, &y") != EOF)
		if (x>0 && y>0)
			printf("%d %d %d\n", x, y, greatestCommonDivisor(x, y));
}



			
