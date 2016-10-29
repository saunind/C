#include <stdio.h>
#include <string.h>

#define N 6

void sortlen(char **);

int main(void)
{
	char strings[N][30];
	char *strP[N]; // strP[N][]
	int i;

	for(i = 0; i < N; i++)
	{
		gets(strings[i]);
//		puts(strings);
		strP[i] = &strings[i][0];
	}

	printf("\n");
/*	sortlen(strP);
	
	for(i = 0; i < N; i++)
		printf("%s\n", strP[i]);
*/
	return 0;
}

void sortlen(char **s)
{
	// **s == *s[] == s[][] ???
	int i, j;
	char *str; // str[]

	for(i = 0; i < N - 1; i++)
		for(j = 0; j < N - i - 1; j++)
		{
			if(strlen(s[j]) > strlen(s[j + 1]))
			{
				str = s[j];
				s[j] = s[j + 1];
				s[j + 1] = str;
			}
		}
}
