#include<stdio.h>
#include<conio.h>
main()
{
	const float pi = 3.14;
	int r;
	int a;
	float perimeter;
	clrscr();
	r = 5;
	a = 2;
	perimeter = a*r*pi;
	printf("perimeter of circle = %.1f",perimeter);
	getch();
}