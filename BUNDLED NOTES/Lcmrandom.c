#include <stdio.h>

int maximum(int a, int b)
{
	int max;
	max = a;
	
	if (b > a)
		max = b;
}
int minimum(int a, int b)
{
	int min;
	min = a;
	
	if (b < a)
		min = b;
}

int LCM(int x, int y)
{
	int mx = maximum(x, y);
	int lcm = mx;
	int i;
	
	for(i=mx; i>=mx; i++)
	{
		if(i%x == 0 && i%y == 0)
		{
			lcm = i;
			break;
		}
	}
	
	return lcm;
}

int GCD(int x, int y)
{
	int min = minimum(x, y);
	int gcd = 1;
	int i;
	
	for(i=1; i<=min; i++)
	{
		if(x%i == 0 && y%i == 0)
		{
			gcd = i;
		}
	}
	
	return gcd;
}

int main()
{
	int c;
	int d;
	
	printf("Enter integer 1: ");
	scanf("%d", &c);
	
	printf("Enter integer 2: ");
	scanf("%d", &d);
	
	printf("The LCM of %d and %d is: %d", c, d, LCM(c, d));
	printf("\nThe GCD of %d and %d is: %d", c, d, GCD(c, d));
	
	
	return 0;
}
