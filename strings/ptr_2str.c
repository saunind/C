#include <stdio.h>

void main(void)
{
    char name[30];
    char *nP;

    printf("enter first and last name: ");
    gets(name);

    printf("name: ");
    for(nP = name; *nP != ' '; nP++)
        putchar(*nP);

    printf("\nSurname: ");
    puts(nP + 1);
}
