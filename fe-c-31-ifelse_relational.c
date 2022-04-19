// A program to know the use of if-else ladder
// A program to know the range in which a number lies
#include <stdio.h>

int main(){
    int x;
    printf("Enter a number in the range 0 to 39:\n");
    scanf("%d", &x);
    if (x>= 0 && x<10)
            printf("%d is in the range of 0 to 9", x);
    else if (x>= 10 && x<20)
            printf("%d is in the range of 10 to 19", x);
    else if (x>= 20 && x<30)
            printf("%d is in the range of 20 to 29", x);
    else if (x>= 30 && x<40)
            printf("%d is in the range of 30 to 39", x);
    else
            printf("%d is out of range", x);
    return 0;
}
