#include <stdio.h>
#include <string.h>

int main(void)
{
    const char const *string = "abcde";
    int i;

    printf("%s\n", string);
    printf("%d\n", strlen(string));

    for (i = 0; i < strlen(string); i++) {
	if (string[i] == string[i + 1])
	    printf("Equal chars are %d %d", i, i++');
	    break;
    }

    return 0;
}
