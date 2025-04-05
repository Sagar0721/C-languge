#include<stdio.h>
#include<conio.h>

main()
{
int a,b,c;
clrscr();
	 printf("\n Enter A value=");
	 scanf("%d",&a);
	 printf("\n Enter B value=");
	 scanf("%d",&b);

	 c=a;
	 a=b;
	 b=c;

	 printf("\tA: %d \tB:%d",a,b);

getch();



}