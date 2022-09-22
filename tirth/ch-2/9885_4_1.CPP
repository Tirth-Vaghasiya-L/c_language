#include<stdio.h>
#include<conio.h>
main()
{
	const float pi = 3.14;
	int r;
	float sum;
	clrscr();
	r=5;
	sum=pi*r*r;
	printf("area of circle = %.2f",sum);
	getch();
}