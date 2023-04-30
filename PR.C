#include<stdio.h>
#include<conio.h>
void main()
{
	float PR;
	clrscr();
	printf("Please enter your PR=");
	scanf("%f",&PR);
	if(PR>90.50 && PR<33.50)
	{
		printf("Your Grade is A1.");
	}
	else if(PR>80.50)
	{
		printf("Your grade is A2.");
	}
	else if(PR>70.50)
	{
		printf("Your grade is B1.");
	}
	else if(PR>60.50)
	{
		printf("Your grade is B2.");
	}
	else
	{
		printf("Your are fail in this Examnition.");
	}
	getch();
}