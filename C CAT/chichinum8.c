#include <stdio.h>

int main()
{
	int numb;
	int sum;
	int k;
	
	for(numb=1; numb<=10000; numb++)
	{
		sum = 0;
		for(k=1; k<numb; k++)
		{
			if(numb % k == 0)
			{
				sum += k;
			}
		}
		if (sum == numb)
		{
			printf("%d is a perfect one \n", numb);
		}
	}
	
	
	return 0;
}
