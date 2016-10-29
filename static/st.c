#include <stdio.h>

int hello();

int main()
{
    printf(" - %d-й вызов\n", hello());
    printf(" - %d-й вызов\n", hello());
    //printf("%d\n", count);
    printf(" - %d-й вызов\n", hello());

    return 0;
}

int hello() 
{
    static int count = 10;
    printf("Hello world! %d", count);
    //count = count + 1;
    return count++; //returns 10 and then increases by 1, while ++count acts in reverse order !
}





