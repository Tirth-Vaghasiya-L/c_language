#include<stdio.h>
main()
{
	int a,b,c;
	printf("=> Enter The Value Of a :-");
	scanf("%d",&a);
	
	printf("=> Enter The Value Of b :-");
	scanf("%d",&b);
	
	c = a;
	a = b;
	b = c;
	
	printf("a = %d",a);
	printf("\nb = %d",b);
}