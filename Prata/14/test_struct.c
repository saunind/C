#include <stdio.h>
#include <string.h>

#define MAXTITL 41
#define MAXAUTL 31

char *s_gets(char *st, int n);

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library;

    printf("enter title\n");
    s_gets(library.title, MAXTITL);
    printf("%s", library.title);

    return 0;
}





char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);        
/*    if(ret_val != NULL)
    {
        find = strchr(st, '\n');
        if(find != NULL)
            *find = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
*/
    return ret_val;
}    
