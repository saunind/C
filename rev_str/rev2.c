#include <stdio.h>

int main(void)
{
    char str[] = "abcde";
    char buf;
    char min, max = 0;

    while(str[max] != '\0')
        max++;

    printf("Original string is: %s\n", str);
    printf("Length of string is: %d\n", max);
    max = max - 1;
    min = 0;

    while(min != max)
    {
        buf = str[min];
        str[min] = str[max];
        str[max] = buf;

        min++;
        max--;
    }

    printf("New string is: %s\n", str);

    return 112;
}



