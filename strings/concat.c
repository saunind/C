#include <stdio.h>

void concat(const char *, const char *, char *);

int main(int argc, char *argv[])
{
	char str0[3];
	char str1[3];
	char str2[5];

	printf("Enter first string\n");
	gets(str0);
	puts(str0);

	printf("Enter second string\n");
	gets(str1);
	puts(str1);

	concat(str0, str1, str2);
	puts(str2);
 
	return 0;
}

void concat(const char *s0, const char *s1, char *s)
{
	int i, j;

	for(i = 0; s0[i] != '\0'; i++)
		s[i] = s0[i];

	for(j = 0; s1[j] != '\0'; j++, i++)
		s[i] = s1[j];
	s[i] = '\0';
}













	
