#include <stdio.h>
#include <string.h>

void HTML()
{
	printf("");
}

int main()
{
	FILE * textFile = fopen("trial.txt", "w");
	FILE * pdfFile = fopen("trial.pdf", "w");
	FILE * docFile = fopen("trial.docx", "w");
	FILE * HTMLFile = fopen("trial.html", "a");
	
	fprintf(textFile, "Hello I'm Kenneth Njoroge");
	fprintf(docFile, "Hello I'm Kenneth Njoroge");
	
	fprintf(HTMLFile, "<ul><li>Item 1</li><li>Item 2</li><li>Item 3</li><li>Item 4</li><li>Item 5</li><li>Item 6</li></ul>");
	
	/*YOU CAN ONLY WORK WITH TEXT and HTML FILES*/
	
	
	fclose(textFile);
	fclose(pdfFile);
	fclose(docFile);
	return 0;
}
