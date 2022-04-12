// Function to find Square of any number

#include<stdio.h>
#include<conio.h>
int sqr (int n){
 return (n*n);
}


int main(){
	int subtraction,a,b,square;
	clrscr();
	printf("This is the program to find the square of any number using Functions\nEnter one integer value number:\n");
	scanf("%d",&a);
	//subtraction=sub(a,b);
	square= sqr (a);
	printf("The square of %d is %d\n\nPress any key to exit",a,square);
	getch();
	return 0;
}
