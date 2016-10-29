#include <stdio.h>

#define N 6

void sortalph(char **);

int main(void)
{
	int i;
	char *strP[N];
	char strings[N][30];

	for(i = 0; i < N; i++)
	{
		gets(strings[i]);
		strP[i] = &strings[i][0];
	}

	printf("\n");
	sortalph(strP);

	for(i = 0; i < N; i++)
		printf("%s\n", strP[i]);

	return 0;
}

void sortalph(char **s)
{
	int i, j;
	char *str;
	char buf;

	for(i = 0; i < N - 1; i++)
		for(j = 0; j < N - i - 1; j++)
		{
			if(*s[j] > *s[j + 1])
			{
				buf = s[j];
				s[j] = s[j + 1];
				s[j + 1] = buf;
			}
		}
}				
