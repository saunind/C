#include <stdio.h>

#define N 6

void sort_print(char **);
void sort_alph(char **);

int main(void)
{
	char strings[N][30]; 

	char *strP[N];
	int i, j;
	printf("\n");

// Create array from user input
	printf("Enter user strings\n");
	for(i = 0; i < N; i++)       
	{
		gets(strings[i]);
		strP[i] = &strings[i];
	}

	sort_alph(strP);
	printf("\n");
	sort_print(strP);

	return 0;
}

void sort_print(char **printP)
{
	int i = 0;
	
	for(i = 0; i < N; i++)
		printf("%d %s\n",i ,printP[i]);

	return;
}

void sort_alph(char **strP)
{
	int i, j;
	char *buf[N];	

	for(j = 0; j < N - 1; j++)
	{
		for(i = 0; i < N - j - 1; i++)
		{
			if(*strP[i] > *strP[i + 1]) // compare first symbols in each word
			{	
				buf[0] = strP[i];
				strP[i] = strP[i + 1];
				strP[i + 1] = buf[0];
			}
		}	
	}
}

