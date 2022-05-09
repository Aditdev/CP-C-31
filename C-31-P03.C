//Function to Add two numbers

#include<stdio.h>
#include<conio.h>
int add(int a,int b)  {
       //	int c;
       //	c=a+b;
	return a+b;
}

int main(){
	int addn,a,b;
//	clrscr();
	printf("This is the program to add two numbers using Functions\nEnter two integer value numbers:\n");
	scanf("%d %d",&a,&b);
	addn=add(a,b);
	printf("Sum of the above two Numbers is %d\n\nPress any key to exit",addn);
	getch();
	return 0;
}
