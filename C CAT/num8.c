#include <stdio.h>

int main()
{
	int i;
	int j;
	int sum;

	for (i=1; i<=10000; i++)
	{
		sum = 0;
		
		for (j=1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
			printf("%d is a perfect number\n", i);
	}
	
	return 0;
}
