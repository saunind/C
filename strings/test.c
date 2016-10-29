
#include <stdio.h>

int main(void)
{
    int i;
    char str[20];
    
    const char buf_size = 100;
    char buffer[]= "abcd";

    while(fgets(buffer, sizeof(buffer), stdin) != 0)
    {
        if(fgets(buffer, sizeof(buffer), stdin) == '\n')
            break;
        fputs(buffer, stdout);
    }

    return 112;
}
