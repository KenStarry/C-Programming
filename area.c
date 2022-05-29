#include <stdio.h>

int main() {
	
	int length, width, Area;
	
	printf("Enter Length: ");
	scanf("%d", &length);
	
	printf("Enter width: ");
	scanf("%d", &width);
	
	Area = length * width;
	
	printf("%d", Area);
	
	return 0; 
}
