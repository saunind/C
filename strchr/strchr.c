#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str = "abcdf";
	char c;
	char *res;

	c = 'a';
	puts(str);
//	c =	getchar;

	res = strchr(str, 'c');
	printf("%d\n", res);

	return 0;
}
