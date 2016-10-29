#include <stdio.h>
#include <string.h>
 
int main() {

   char s[5] = { 1, 2, 3, 4, 5};


   int c, l;
    char a = '5';
    char b = '3'; 

    char not_num[] = "528"; 
    short  num;

    num = (not_num[0] - '0') * 100 + (not_num[1] - '0') * 10 + (not_num[2] - '0') * 1;

      printf("%d\n", not_num[0]);

   return 0;
}
