#include <stdio.h>

int main()
{
	int number;
	int sum;
	int i;
	
	for(number=1; number<=10000; number++)
	{
		sum = 0;
		for(i=1; i<number; i++)
		{
			if(number % i == 0)
			{
				sum += i;
			}
		}
		if (sum == number)
		{
			printf("%d is perfect!\n", number);
		}
	}
}
