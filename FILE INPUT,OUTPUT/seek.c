#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct threeNum
{
	int n1, n2, n3;
};

int main()
{
	int n;
	struct threeNum num;
	
	FILE * fptr = fopen("seek.bin", "w");
	
	//Moves the cursor to the end of the file
	fseek(fptr, -sizeof(struct threeNum), SEEK_END);
	
	for (n=1; n<5; n++)
	{
		fread(&num, sizeof(struct threeNum), 1, fptr);
		printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
		fseek(fptr, -2*sizeof(struct threeNum), SEEK_CUR);
	}
	fclose(fptr);
	
	return 0;
}
