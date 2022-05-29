#include <stdio.h>
#include <math.h>

int myfunc(int x, int y)
{
	int sum = x + y;
	
	if (x > y)
	{
		sum = x + y * y;
	}
	else if(x < y)
	{
		sum = x * x + y;
	}
	
	return sum;
}


int interval(int start, int stop)
{
	int i;
	int total=0;
	
	for (i=start; i<stop; i++)
	{
		total += i;
	}
	
	return total;
}

int main()
{
	int a;
	int b;
	
	printf("Enter value 1: ");
	scanf("%d", &a);
	
	printf("Enter value 2: ");
	scanf("%d", &b);
	
	printf("The sum is: %d", myfunc(a, b));
	
	
	
	printf("\n\n");
	printf("Getting the sum of numbers in an interval:\n");
	
	int starty;
	int stopy;
	
	printf("Enter a number: ");
	scanf("%d", &starty);
	
	printf("Enter a second: ");
	scanf("%d", &stopy);
	
	printf("The total is: ", interval(starty, stopy));
	
	
	
	return 0;
}
