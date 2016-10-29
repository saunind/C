#include <stdio.h>
main () {
char str[20], *ps = str, n=0;
printf("Enter word: ");
scanf("%s", str);
while(*ps++ != '\0') n++;
printf("%d\n", n);
}
