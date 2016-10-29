#include <stdio.h>

void main(void)
{

   int myArray[3][3] = {15, 7, 13, 10, 0, 6, 4, 8, 5};
   int i, x, j, tmp;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        { 
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(x = 0; x < 3; x++)
    {
        for(i = 0; i < 2; i++)
        {
            //intro cycle
            for(j = 0; j < 2; j++)
            {
                if(myArray[x][j] > myArray[x][j+1]) 
                    {
                    tmp = myArray[x][j];
                    myArray[x][j] = myArray[x][j+1]; 
                    myArray[x][j+1] = tmp;
                    }
            }
        } 
    }
    
    for(i = 0; i < 3; i++)
    { 
        for(j = 0; j < 3; j++)
        { 
            printf("%d ", myArray[i][j]); 
        }
        printf("\n");
    }

    for(x = 0; x < 3; x++)
    {
        for(i = 0; i < 2; i++)
        {
            //intro cycle
            for(j = 0; j < 2; j++)
            {
                if(myArray[j][x] > myArray[j+1][x]) 
                {
                    tmp = myArray[j][x]; 
                    myArray[j][x] = myArray[j+1][x]; 
                    myArray[j+1][x] = tmp;
                }
            }
        } 
    }

printf("\n sorted\n");
 
        for(i = 0; i < 3; i++)
        { 
            for(j = 0; j < 3; j++)
            { 
                printf("%d ", myArray[i][j]); 
            }
            printf("\n");
        }

return;
}
