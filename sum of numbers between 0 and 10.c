#include <stdio.h>

int main() {
	
	int x = 0;
	int sum = 0;
	
	while(x <= 10) {
		sum += x;
		x++;
	}
	
	printf("The sum is %d", sum);
	
	
	int y;
	int sum2 = 0;
	for(y=0; y<=20; y++) {
		sum2 += y;
	}
	printf("\nThe sum is: %d", sum2);
}
