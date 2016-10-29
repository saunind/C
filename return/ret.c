#include <stdio.h>

void main (void) {

    int a;
    double b; 
    char ch, str[30];

    ch = scanf("%d %lf %s", &a, &b, str);

    if (ch == 3)
        printf("%d %.3lf %s\n", a, b, str);
    else
        printf("error input\n");
        printf("%d\n", ch);
 
    return;
}
