#include <stdio.h> 

int main() {
	
	int x;
	
	for(x = 0; x<=100; x++) {
		if(x <= 10) {
			printf("%d, ", x);
		}
		else if(x != 20) {
			printf("%d, ", x);
		}
		else if(x <= 30) {
			printf("%d,", x);
		}
		else if(x <= 40) {
			printf("\n%d", x);
		}
		else if(x <= 50) {
			printf("\n%d", x);
		}
		else if(x <= 60) {
			printf("\n%d", x);
		}
		else if(x <= 70) {
			printf("\n%d", x);
		}
		else if(x <= 80) {
			printf("\n%d", x);
		}
		else if(x <= 90) {
			printf("\n%d", x);
		}
		else if(x <= 100) {
			printf("\n%d", x);
		}
	}
	
	return 0;
}
