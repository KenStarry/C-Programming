#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int y;
	FILE * fptr = fopen("fresh2.txt", "w");
	
	fscanf(fptr, "%d", &y);
	
	printf("The value of y is: %d", y);
	fclose(fptr);
	
	return 0;
}
