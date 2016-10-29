#include <stdio.h>

void main(void)
{
    char ch = 'c';
    char str[] = "Hello";
    char i;
 
    putchar('a');
    putchar(98);
    putchar('\n');
    putchar(ch);
    putchar('\n');

    printf("%s\n", str);

        i = 0;
        for (i = 0; i != '\0'; i++)
        {        
            putchar(str[i]);
        }

    putchar('\n');
     
    printf("enternumber");
    
    char a, b, c;
    
    a = getchar();
    putchar(a);

    b = getchar();
    putchar(b);

    c = getchar();
    putchar(c);

    putchar('\n'); 
    return;
}








