#include <stdio.h>
#include <string.h>

#define N 6

void sortlen(char *s[]);

int main(void)
{
	char strings[N][30];
	char *strPointer[N];
	int i;

	for(i = 0; i < N; i++)
	{
		gets(strings[i]);
		strPointer[i] = &strings[i][0];
	}

	printf("\n");
	sortlen(strPointer);

	for(i = 0; i < N; i++)
		printf("%s\n", strPointer[i]);

	return 0;
}

void sortlen(char **s) // **s == *s[] -- array of pointers [ pointer0, pointer1, ..., pointerN ]
{
	int i, j;
	char *str;

	for(i = 0; i < N - 1; i++)
		for(j = 0; j < N - i -1; j++)
		{
			if(strlen(s[j]) > strlen(s[j + 1]))
			{
				str = s[j];
				s[j] = s[j + 1];
				s[j + 1] = str;
			}
		}
}




















