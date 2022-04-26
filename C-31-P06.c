// Nested if-else

#include <stdio.h>

int a,b,n;
int main(){
    printf("Enter two Numbers: ");
    scanf("%d%d",&a,&b);
    n=a+b;
    printf("Sum of %d and %d is %d\n",a,b,n);
    if (n>20){
        printf("Sum is greater than 20");
    }
    else if (n>10 && n<20) {
        printf("Sum is between 10 and 20");
    }
    else if (n<10 && n>0){
        printf("Sum is less than 10");
    }
    return 0;
}

//Output:
//Enter two Numbers : 67 78
//Sum of 67 and 78 is 145
//Sum is greatr than 20
