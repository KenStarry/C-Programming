#include <stdio.h>

int maximum(int x, int y)
{
	int max = x;
	
	if (y > x)
		max = y;
		
	return max;
}

int minimum(int x, int y)
{
	int min = x;
	
	if (y < x)
		min = y;
		
	return min; 
}

int LCM(int a, int b)
{
	int mx = maximum(a, b);
	int lcm = mx;
	int i;
	
	for(i=mx; i>=mx; i++)
	{
		if(i%a == 0 && i%b == 0)
		{
			lcm = i;
			break;
		}
	}
	
	return lcm;
}

int GCD(int a, int b)
{
	int min = minimum(a, b);
	int gcd = 1;
	int i;
	
	for(i=gcd; i<=min; i++)
	{
		if(a%i == 0 && b%i == 0)
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
	
	printf("Enter a number: ");
	scanf("%d", &c);
	
	printf("Enter a second number: ");
	scanf("%d", &d);
	
	printf("The LCM is: %d", LCM(c, d));
	printf("\nThe GCD is: %d", GCD(c, d));
	
		
	
	
	
	return 0;
}
