#include<stdio.h>
#include<conio.h>

main()
{
int sal,Hra,Da,Ta,grossalary;
clrscr();
	 printf("\n Enter the Base=",sal);
	 scanf("%d",&sal);

	 Hra=sal*10/100;
	 printf("\n \thra\t=%d",Hra);

	 Da=sal*5/100;
	 printf("\n \tDa\t=%d",Da);

	 Ta=sal*8/100;
	 printf("\n \tTa\t=%d",Ta);

	 printf("\n \t Grosssalary=%d",sal+Hra+Da+Ta);
getch();

}