#include <stdio.h>
main() {
    int dd1, dd2, mm1, mm2, yy1, yy2;
    int i;
    printf("Enter first date (dd.mm.yyyy): ");
    scanf("%d.%d.%d", &dd1, &mm1, &yy1);
    printf("Enter second date (dd.mm.yyyy): ");
    scanf("%d.%d.%d", &dd2, &mm2, &yy2);

    printf("%d %d %d\n", dd1, mm1, yy1);

}

