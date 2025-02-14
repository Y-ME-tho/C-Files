#include <stdio.h>
void pattern1(int n){
    for( int i=0; i<=n; i++){
        for ( int j =0; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }
}
void pattern2(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
void pattern3(int n){
    for (int i=1; i<=n; i++){
        for( int j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}
void pattern4(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
}
void pattern(int n){
    int k=1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("%d", k++);
        }
        printf("\n");
    }
}
void pattern5(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}
void pattern6(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i+1; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}
void pattern7(int n){

}


void pattern14(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n");

    }
}
int main(){
    int n; 
    scanf("%d", &n);
    pattern14(n);
}