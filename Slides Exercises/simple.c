#include <stdio.h>

int sum(){
    int a, b;
    printf("enter 2 nos \n");
    scanf("%d %d", &a, &b);
    return a+b;
}

int fibonacci(int n){
    if (n==0 || n==1) return n;
    else return fibonacci(n-1)+ fibonacci(n-2);
}


int main(){
    printf("hi");
    return 'a';
}