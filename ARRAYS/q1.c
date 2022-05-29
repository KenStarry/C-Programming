#include <stdio.h>

int main()
{
	int x;
	for (x=1; x <= 6; x++)
	{
		int y;
		for (y=1; y<=6; y++)
		{
			if (x == y || y == 1 || x == 6)
			{
				printf("* ");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	
	
}
