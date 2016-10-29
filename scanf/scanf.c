#include <stdio.h>

void main(void)
{
    char ch;

    printf("Please enter a character.\n");
    //scanf("%*c");
    scanf("%c", &ch);
    printf("character is %c\n", ch);

    return;
}
