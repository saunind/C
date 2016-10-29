#include<stdio.h>
#include<math.h>

int main()
{
    int num,power,result;

    printf("\nEnter the numaber and its Power : ");
    scanf("%d%d",&num,&power);

    result = pow(num,power);
    printf("\nResult : %d",result);

    return(0);
}
