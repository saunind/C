#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[20] = "one three", s2[20] = "two";
    strcpy(s2+3, s1+3);
    strcpy(s1+4, s2);
    puts(s1); 

    return 0;
}
