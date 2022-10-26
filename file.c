#include <stdio.h>

int main(void)
{
	//a - append 
	//w - write
	//r - readonly
	FILE * fpointer = fopen("employees.txt", "w");
	fprintf(fpointer, "Jim, sales\nPam, reception\nSam Manager");

	fclose(fpointer);
	return (0);

}
