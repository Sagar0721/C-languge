#include<stdio.h>
#include<conio.h>

main()
{
int a,b;
clrscr();
	 printf("\n Enter A value=");
	 scanf("%d",&a);

	 printf("\n Enter B Value=");
	 scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("%d %d",a,b);
getch();



}