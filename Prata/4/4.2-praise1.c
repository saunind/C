/* praise1.c -- uses an assortment of strings */
#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];
    int size, length;
    int i = 0, n = 0;

    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);

    //while(name[i] != '\0')
    for(i = 0; name[i] != '\0'; i++)
    //        n++;

    size = sizeof(name) / 8 + 1;
    //size = sizeof(name) / sizeof(MAX_CHAR) + 1;

    printf("%d\n", i);
    printf("%d\n", size); 
    printf("%d\n", strlen(name));

    return 112;
}
