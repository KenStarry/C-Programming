#include <stdio.h>

double volume(double a, double r)
{
	double PI = 3.14159265;
	
	double outer = PI * r * r;
	double inner = ((4 * r)/3.0) + a;
	
	double vol = outer * inner;
	return vol;
}

int main()
{
	double length;
	double rad;
	
	printf("Enter Length: ");
	scanf("%lf", &length);
	
	printf("Enter radius: ");
	scanf("%lf", &rad);
	
	printf("The volume is: %lf", volume(length, rad));
}
