#include <stdio.h>

int main()
{
	int row;
	for(row=1; row<=5; row++)
	{
		int col;
		for(col=1; col<=5; col++)
		{
			if(row==1 || col==1 || row==3 && col<=row)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	int rowy;
	for(rowy=1; rowy<=5; rowy++)
	{
		int coly;
		for(coly=1; coly<=5; coly++)
		{
			if(rowy==1 || coly==1 || rowy==5)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
