#include <stdio.h>

#define N 10

void main(void)
{

    int arr[N] = {6, 5, -4, 3, -7, 2, 7, 0, 3, 9};
    int new_arr[N], i, j;
    for (i=0; i<N; i++) {
        printf("%d", i); // просто проверка
        if (arr[i] == 0) {
            printf("Stop. Array contains zero\n");
            break;
        }
    }
printf("\n");
for (i=0, j=0; i<N; i++) {
if (arr[i] <= 0)
continue;
new_arr[j] = arr[i];
printf("%d", new_arr[j]); // проверка
j++;
}
printf("\n");
return;
}
