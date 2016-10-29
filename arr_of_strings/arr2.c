#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	for(i = 0; i < argc - 1; i++)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}

	char **states; 
	int num_states = 4;

	states[0] = "first";
	states[1] = "secon";

	for(i = 0; i < num_states; i++)
	{
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}	
