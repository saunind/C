#include <stdio.h>

#define N 100

void main (void)
{

	char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};
	float f_arr[6];
	short nums[N];
	
	f_arr[1] = 200;

	printf("%s\n", vowels);
	printf("   %2.2f\n", f_arr[1]);
	printf("%i", N);

	return;

}
