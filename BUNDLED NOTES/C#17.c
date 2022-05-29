#include <stdio.h>

int maximum(int a, int b)
{
	int max;
	
	if(a > b)
		max = a;
	else
		max = b;
		
	return max;
}

int main()
{
	/*CALCULATING LCM*/
	
	int x;
	int y;
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	printf("Enter another number: ");
	scanf("%d", &y);
	
	int mx = maximum(x, y);
	int LCM = mx;
	int i;
	
	for(i=mx; i>=mx; i++)
	{
		if(i%x == 0 && i%y == 0)
		{
			LCM = i;
			break;
		}
	}
	
	printf("LCM is: %d", LCM);
	
	return 0;
}
