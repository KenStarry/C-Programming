#include <stdio.h>
#include <string.h>

int main()
{
	FILE * studDetails = fopen("marks.csv", "w");
	
	/*Headers for each column*/
	fprintf(studDetails, "%s %s %s %s %s", "Name", "English", "Math", "Kiswahili", "Chem" );
	
	int i;
	
	/*Reading marks from the keyboard*/
	for(i=0; i<2; i++)
	{
		printf("Marks for student %d\n", (i+1));
		char name[256];
		
		printf("\nWhat's the name of the Student? ");
		scanf("%s", &name);
		fprintf(studDetails, "%s,", name);
		
		int j;
		for (j=0; j<5; j++)
		{
			int mark;
			printf("Enter mark %d: ", (j+1));
			scanf("%d", &mark);
			
			fprintf(studDetails, "%d ", mark);
		}
		
		fprintf(studDetails, "\n");
	}
	
	
	fclose(studDetails);
	return 0;
}
