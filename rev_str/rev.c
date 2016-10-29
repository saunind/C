#include <stdio.h>

#define N 20

int main(void)
{
    char str[N] = "abcd";
    int i = 0;
    char buf;

    while(str[i] != '\0')
        i++;

    printf("%d\n", i);

    str[0] = str[3];
    buf = str[1];
    str[1] = str[2];
    str[2] = buf;
    str[3] = 'a';
    printf("%s\n", str);

    :wq
\
    return 113;
}
