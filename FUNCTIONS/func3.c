#include <stdio.h>
#include <math.h>

void greetings();
int area();


int main()
{
	int a;
	int b;
	
	printf("Enter the length: ");
	scanf("%d", &a);
	
	printf("Enter the height: ");
	scanf("%d", &b);
	
	greetings();
	printf("The area of the triangle is: %d", area(a, b));
	
	return 0;
}


void greetings()
{
	printf("Hello there!\n");
}

int area(int x, int y)
{
	int total;
	
	total = (x * y)/2;
	
	return total;
}
