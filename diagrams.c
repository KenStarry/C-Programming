#include <stdio.h>

int main() {
	
	//DIAGRAM 1
	int x;
	
	for(x = 0; x<=5; x++) {
		int y;
		for(y = 0; y<=5; y++) {
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	//DIAGRAM 2
	int rows;
	
	for(rows=0; rows<=5; rows++) {
		int cols;
		for(cols=0; cols<=rows; cols++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
