// Fig. 5.16: fig05_16.c
// Scoping.

#include <stdio.h>

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1;

int main(void)
{
    int x = 5;

    printf("local x in outer scope of main is %d\n", x);

{
    int x = 7;

    printf("local x in inner scope of main is %d\n", x);
}
    printf("local x in outer scope of main is %d\n", x);

    useLocal();
    useStaticLocal();
    useGlobal();

    useLocal();
    useStaticLocal();
    useGlobal(); 

    return 0;
}

void useLocal(void)
{
    int x = 25;
    printf("\nlocal x in useLocal is %d after entering useLocal\n" , x);
    ++x;
    printf("local x in useLOcal is %d before exiting useLocal\n", x);
}

void useStaticLocal(void)
{
    static int x = 50;

    printf("\n local static x is %d on entering useStaticLocal\n", x);
    ++x;
    printf("local static x is %d on exiting useStaticLocal\n", x);
}

void useGlobal(void)
{
    printf("\nglobal x is %d on entering useGlobal\n", x);
    x *= 10;
    printf("global x is %d on exiting useGlobal\n", x);
}
