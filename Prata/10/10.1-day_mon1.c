/* day_mon1.c - prints the days for each month */
#include <stdio.h>

#define MONTH 12

int main(void)
{
    const int days[MONTH] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    // array declaration of constant elements
    int index;

    for( index = 0; index < MONTH; ++index)
        printf("Month %d has %d days.\n", index + 1, days[index]);
    
//    days[0] = 0;

    return 0;
}
