#include <stdio.h>

int main()
{
	int rows;
	for(rows=1; rows<=6; rows++)
	{
		int cols;
		for(cols=1; cols<=6; cols++)
		{
			if(cols==1 || rows==6 || cols==rows)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
