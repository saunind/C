#include <stdio.h>

int main(void)
{
    int i = 0;
    char str[20];

    for(i = 0; (str[i] = getchar()) != '\n'; i++)
        str[i] = '\0';

    printf("\n%s\n", str);

    return 112;
}
