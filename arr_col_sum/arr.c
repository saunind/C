#include <stdio.h>

int main(void)
{
	int arr[3][3] = { {1, 2, 16}, {4, 5, 25} };
	int i = 0, j = 0, sum0;
	int arrI[4];

	printf("element 0,0 = %d\n", arr[0][0]);
	printf("element 0,1 = %d\n", arr[0][1]);
	printf("element 0,2 = %d\n", arr[0][2]);

	printf("element 1,0 = %d\n", arr[1][0]);
	printf("element 1,1 = %d\n", arr[1][1]);
	printf("element 1,2 = %d\n", arr[1][2]);

	arrI[0] = 0;

	for(i = 0; i < 2; i++)
{
    for(j = 0; j < 2; j++)
    {    
		arrI[j] += arr[i][j]; 
		printf("%d\n", arr[i][j]);
		printf("%d\n", arrI[i]);
//sum0 = sum0 + arr[i][j];
//        printf("%d\n", sum0);
    } 
		   printf("arrI j0: %d\n", arrI[j]);
		   printf("arrI j1: %d\n", arrI[j]);	
		
}
	printf("\n");
	

	return 0;
}
