// A program to know the use of if-else ladder
// A program to know the range in which a number lies
#include <stdio.h>

int main(){
    int ch, x;
    printf("Enter a number in the range 0 to 39:\n");
    scanf("%d", &x);
    ch = x/10;
    if (ch == 0)
            printf("%d is in the range of 0 to 9", x);
    else if (ch == 1)
            printf("%d is in the range of 10 to 19", x);
    else if (ch == 2)
            printf("%d is in the range of 20 to 29", x);
    else if (ch == 3)
            printf("%d is in the range of 30 to 39", x);
    else
            printf("%d is out of range", x);
    
    return 0;
}
