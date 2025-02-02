// #include<stdio.h>
// int main()
// {
// float f;
// printf("Sizeof (char) = %lu bytes\n", sizeof(char)); // datatype
// printf("Sizeof (short)= %lubytes\n", sizeof(short));
// printf("Sizeof (int)= %lu bytes\n", sizeof(int));
// printf("Sizeof (long)= %lu bytes\n", sizeof(long));
// printf("Sizeof (float)= %lu bytes\n", sizeof(f)); // variable
// printf("Sizeof (double)= %lu bytes\n", sizeof(double));
// printf("Sizeof (1.55)= %lu bytes\n", sizeof(1.55)); // constant
// printf("Sizeof (1.55L)= %lu bytes\n", sizeof(1.55L));
// printf("Sizeof (str)= %lu bytes\n", sizeof("Hello")); // string
// return 0;
// }


#include <stdio.h>

int main() {
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of long double: %lu bytes\n", sizeof(long double));
    return 0;
}
