#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char str[] = "one, two, three, four, five";
	char *strPointer = NULL;

	strPointer = strtok(str, ", ");
	puts(strPointer);

	while(strPointer)
	{
		puts(strPointer);
		strPointer = strtok(NULL, ", ");
	}

	return 0;
}




