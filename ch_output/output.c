#include <stdio.h>

void main(void)
{

    int i = 0;
    char str[] = "Hello";

for (i = 0; str[i] != '\0'; i++)
        printf("%c-", str[i]);
    if (str[i] == '\0')
        printf("\b \b \n");

return;
}
