#include <stdio.h>

int main() {
    long int a=10;
    long int *ptr;
    printf("Enter a Number\n");
    scanf("%d",&a);
    ptr= &a;
    printf("ENtered Number is: %ld", a);
    printf("\nAddress is %p", ptr);
    printf("\nSize of pointer is %p\n", sizeof(ptr));
    return 0;
}