#include <stdio.h>

int addition(int, int);

int main(){
    int a,b,c;
    scanf("%d %d", &a, &b);
    printf("%d", addition(a,b));
}

int addition(int a, int b){
    return a+b;}

