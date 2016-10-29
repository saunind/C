#include <stdio.h>

void main(void)
{
    int num = 100;
    int type;
    int i;

    /*printf("enter digit, dec as usual num, oct starts with \n");
    
    
        scanf("%s", num);
    if(num[0] == '0')
        printf("octal\n"); 
    */

        printf("enter digit to convert\n");
        scanf("%d", &type);

    switch(type)
         {
            case 1:
                printf("%d\n", num);
                break;

            case 2:
                printf("%o\n", num);
                break;

            case 3:
                printf("%X\n", num);
                break;

            default:
                printf("invalid argument\n");
        }
    
/* 
    if(num[0] != 0)
    {
        printf("number type is decimal\n");
        printf("enter D for decimal, O for octal, H for hex\n");
        scanf(&type);
  
        switch(type)
        {
            case 'D' :
            printf("%d", num);
            break;

            case 'O' :
            printf("%o", num);
            break;

            case 'H' :
            printf("%H", num);
            break;

            default:
            printf("invalid argument\n");
        }
    }
    
    if(num[0] == 0 && num[1] == 'x')
    {
        printf("number type is hex\n");         
        printf("enter d for decimal, o for octal, h for hex\n");
        scanf(&type);

    switch(type)
        {
            case 'd' :
            printf("%d", num);
            break;

            case 'o' :
            printf("%o", num);
            break;

            case 'h' :
            printf("%h", num);
            break;

            default:
            printf("invalid argument\n");
        }
    }
    else 
    {
        printf("number is ocatl\n");
        printf("enter d for decimal, o for octal, h for hex\n");
    
    switch(type)
        {
            case 'd' :
            printf("%d", num);
            break;

            case 'o' :
            printf("%o", num);
            break;

            case 'h' :
            printf("%h", num);
            break;

            default:
            printf("invalid argument\n");
        }
    }




*/
    return;
}
