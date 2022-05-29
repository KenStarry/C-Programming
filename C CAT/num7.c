#include <stdio.h>

void time(int h, int m, int s)
{
	if (h==00 && m==00 && s==00)
	{
		h = 23;
		m = 59;
		s = 59;
	}
	else if (h != 00 && m==00 & s==00)
	{
		h--;
		m = 59;
		s = 59;
	}
	else if (m != 00 && s==00)
	{
		m--;
		s = 59;
	}
	else if (s != 00)
	{
		s--;
	}
	
 	printf("%d %d %d ", h, m, s);
}

int main()
{
	int hour;
	int min;
	int sec;
	
	printf("Enter hour: ");
	scanf("%d", &hour);
	
	printf("Enter minute: ");
	scanf("%d", &min);
	
	printf("Enter second: ");
	scanf("%d", &sec);
	
	time(hour, min, sec);
	
	
	return 0;
}
