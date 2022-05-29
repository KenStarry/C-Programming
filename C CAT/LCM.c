#include <stdio.h>

int LCM(int a, int b)
{
	int max;
	int y;
	
	if (a > b)
		max = a;
	else
		max = b;
	
	int x = max;
		
	for (y = max; y>=max; y++)
	{
		if(y%a==0 && y%b==0)
		{
			x = y;
			break;
		}
	}
	return x;
}


int main()
{
	int x;
	int y;
	
	printf("Enter Value 1: ");
	scanf("%d", &x);
	
	printf("Enter value 2: ");
	scanf("%d", &y);
	
	printf("The LCM is: %d", LCM(x, y));
	
	
	return 0;
}
