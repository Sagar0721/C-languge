#include<stdio.h>
#include<conio.h>

main()
{
int p,r,n,ans;
 clrscr();
	 printf("Enter P value=");
	 scanf("%d",&p);

	printf("Enter r value=");
	scanf("%d",&r);

	printf("Enter n value=");
	scanf("%d",&n);
	 ans=p*r*n/100;

	 printf("The simple interest=%2f",ans);


 getch();

}