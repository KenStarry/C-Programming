#include <stdio.h>

int main() {
	
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	float dif = -(n - 51);
	
	if(n > 51) {
		dif = -(dif * 3);
	}
	
	printf("The absolute difference is %f", dif);
}

