#include<stdio.h>
#include<conio.h>
main()
{
	int p;
	int r;
	int t;
	int interest;
	int b;
	clrscr();
	p = 25000;
	r = 25;
	t = 2;
	b = 100;
	interest = p*r*t/b;
	printf("simple interest is = %d",interest);
	getch();
}