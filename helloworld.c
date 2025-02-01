// #include <stdio.h>
// int main() {
//     int i = 10;
//     printf("This is %d \n", i);
//     //%d
//     //%f
//     //%c
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int b, l;
//     scanf("%d", &b);
//     scanf("%d", &l);
//     printf("%d", b*l);
// }

#include <stdio.h>

long int factorial (long int n) {
    if (n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

long int main(){
    long int n;
    scanf("%ld", &n);
    printf("%ld", factorial(n));
    return 0; 
}
