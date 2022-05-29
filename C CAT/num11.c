#include <stdio.h>

int main()
{
	int i = 1;
	
	while (i <= 10) 
	{
		if (i > 3 && i != 6 || i % 3 == 0)
		{
			printf("%d\t", --i);
			break;
		}
		i++;
	}
	
	return 0;
	
}
