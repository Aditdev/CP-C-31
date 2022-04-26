#include<stdio.h>
#include<conio.h>

// Function to find square of any number;
int sqr (int n){
 return (n*n);
}


int main(){
	int subtraction,a,b,square;
	clrscr();
	printf("This is the program to find the square of any number using Functions\nEnter one integer value number:\n");
	scanf("%d",&a);
	square= sqr (a);
	printf("The square of %d is %d\n\nPress any key to exit",a,square);
	getch();
	return 0;
}
