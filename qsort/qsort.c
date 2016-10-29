#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
void main(void)
{
    
    int n, j, x;
    int arr[] = {2, 4, 6, 10, 0, 21};
    int new[6];
    
    for ( n = 0; n < 6; n++)
    printf("%d\n", arr[n]);

    qsort(arr, 6, sizeof(int), cmpfunc);
    
     for( n = 0 ; n < 6; n++ ) 
   {   
      printf("%d\n ", arr[n]);
   }
return;
}
