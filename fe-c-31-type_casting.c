// Type casting
#include <stdio.h>

int main(){
    int x, y;
    float z;
    x=5;
    y=2;
    z=x/y;
    printf("Value of integer division of %d/%d is %.2f\n", x,y,z);
    z=(float)x/y;
    printf("Value of real division of %d/%d is %.2f\n", x,y,z);
    return 0;
}