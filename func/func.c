#include <stdio.h>

char cube(char);

void main(char aa)
{
//    char aa = 3;
    char res;

    
    if(aa == 3)
    printf("result is:%d\n", res = cube(aa));
    else 
    {
        printf("arg expected");
    }

    return;
}

char cube(char a)
{
    char res;

    res = a * a * a;
    
    return res;
}
