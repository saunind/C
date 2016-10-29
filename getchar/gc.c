#include <stdio.h>

void main(void)
{
    int i;
    char str[20];

    for(i = 0; (str[i] = getchar()) != '\n'; i++);
        str[i] = '\0';
        printf("%d\n", i);
        printf("%d\n", str[i]);

    printf("\n%s\n", str);
}
