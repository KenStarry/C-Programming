#include <stdio.h>

int main() {
	
	int x;
	int y;
	
	printf("Enter a value: ");
	scanf("%d", &x);
	
	printf("Enter value 2: ");
	scanf("%d", &y);
	
	float sum = x + y;
	
	if(x == y) {
	  sum = sum * 3;
	  printf("Thats a good number");
	}
	  
	printf("%f", sum);
	
	return 0;
}
