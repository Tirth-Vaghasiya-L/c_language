#include<stdio.h>
main()
{
	int a,b;
	
	printf("=> Enter The Value Of a :-");
	scanf("%d",&a);
	
	printf("=> Enter The Value Of b :- ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a = %d",a);
	printf("\nb = %d",b);
}
	