#include <stdio.h>

int maximum(int a, int b)
{
	int max = a;
	
	if(b > a)
		max = b;
		
	return max;
}

int minimum(int a, int b)
{
	int min = a;
	
	if(b < a)
		min = b;
	
	return min;
}

int GCD(int x, int y)
{
	int mn = minimum(x, y);
	int G = mn;
	int j;
	
	for(j=mn; j>0; j--)
	{
		if(x%j == 0 && y%j == 0)
		{
			G = j;
			break;
		}
	}
	return G;
}

int LCM(int x, int y)
{
	int mx = maximum(x, y);
	int L = mx;
	int i;
	
	for(i=mx; i>=mx; i++)
	{
		if(i%x == 0 && i%y == 0)
		{
			L = i;
			break;
		}
	}
	return L;
}

int main()
{
	int j;
	int k;
	
	printf("Enter a number: ");
	scanf("%d", &j);
	
	printf("Enter a second number: ");
	scanf("%d", &k);
	
    printf("The LCM is: %d", LCM(j, k));
    printf("\nThe GCD is: %d", GCD(j, k));
	
	
	
	
	
	
	return 0;
}
