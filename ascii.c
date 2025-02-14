#include <stdio.h>

int main(){
    char c1;
    signed int y = 2147483647;
    y = y + 1;
    printf("%d\n", y);  // Undefined! (Might print -2147483648)

    scanf("%d", &c1);
    printf("%d", c1);
}