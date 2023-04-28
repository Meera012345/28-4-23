#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter the value of A :");
	scanf("%d",&a);
	if(a==0)
	{
	  printf("This number is Neutral.");
	}
	else if(a<0)
	{
	  printf("This number is Nagetive.");
	}
	else if(a<0)
	{
	  printf("This number is Positive.");
	}
	getch();
}

