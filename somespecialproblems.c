#include <stdio.h>

void palindrome(){
    int n, k, remainder, q;
    scanf("%d", &n);
    k=n;
    q=0;
    while (n>0){
        remainder=n%10;
        n/=10;
        q=q*10+remainder;        
    }
    (q==k)? printf("palindrome"): printf("not a palindrome");
}



int main(){

    int a=10;
    printf("%d",a);
    // palindrome();
}