#include <stdio.h>

char powoftwo (num)
{
	char res;
	res = num * num;
	return res;
}

int main (void)

{
	char num;
	scanf("%c", &num);
	printf("%c\n", powoftwo()); 
	return 0;
}

