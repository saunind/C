#include <stdio.h>

char string_length(char string[]);
char * string_reverse(char string[], char min, char max, char buffer); 

int main(void)
{
    char str[] = "123 456 789";
    char min, max, buf;

    min = 0;
    max = string_length(str); 
    buf = 0;

    printf("Original string is: %s\n", str);
    printf("Length of string is: %d\n", max);
    max--;
    printf("New string is: %s\n", string_reverse(str, min, max, buf));

    return 112;
}

char string_length(char string[])
{
    char index = 0;

    while (string[index] != '\0')
        index++;

    return index;
}

char * string_reverse(char string[], char min, char max, char buf)
{
    while(min != max)
    {
        buf = string[min];
        string[min] = string[max];
        string[max] = buf;
        min++;
        max--;
   } 

    return string;
}        
    

