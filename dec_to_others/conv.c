#include <stdio.h>

void main (void)
{

	int num;
	printf("enter decimal number:");
	scanf("%d", &num);
	printf("dec = %d; octal = %c; hex = %x\n", num, num, num);
	printf("dec = %d; octal = %#c; hex = %#x\n", num, num, num);
	return;
}
	
