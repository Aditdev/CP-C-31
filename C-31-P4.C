// Function to find the absolute difference b/w 2 numbers


#include<stdio.h>
#include<conio.h>
int sub(int a,int b)  {
	if (a>b)
		return (a-b);
	else
		return (b-a);
}

int main(){
	int subtraction,a,b;
	clrscr();
	printf("This is the program to subtract and find the absolute difference of any two numbers using Functions\nEnter two integer value numbers:\n");
	scanf("%d %d",&a,&b);
	subtraction=sub(a,b);
	printf("The absolute difference of the above two Numbers is %d\n\nPress any key to exit",subtraction);
	getch();
	return 0;
}
