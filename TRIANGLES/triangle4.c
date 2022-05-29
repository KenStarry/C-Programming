#include <stdio.h>

int main()
{
	int row;
	int col;
	
	for(row=0; row<=4; row++)
	{
		for(col=4; col>=0; col--)
		{
			if(col<=row)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
