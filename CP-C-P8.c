//Increment decrement operator

#include <stdio.h>
 
 int main (){
    int a =1;
    printf("POSTFIX INCREMENT\na's value is now %d\n", a++);
    printf("a's value is now %d\n\n", a);
    a=1;
    printf("PREFIX INCREMENT\na's value is not %d\n", ++a);
    printf("a's value is not %d\n\n", a);
    a=1;
    printf("POSTFIX DECREMENT\na's value is not %d\n", a--);
    printf("a's value is not %d\n\n", a);
    a=1;
    printf("PREFIX DECREMENT\na's value is not %d\n", --a);
    printf("a's value is not %d\n\n", a);
  return 0;
 }
