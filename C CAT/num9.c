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
	int length;
	int radius;
	
	printf("Enter the length: ");
	scanf("%d", &length);
	
	printf("Enter the radius: ");
	scanf("%d", &radius);
	
	printf("The volume of the Capsule is: %lf cm3", volume(length, radius));
	
	
	return 0;
}
