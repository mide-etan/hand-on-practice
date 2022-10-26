#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char grade;

	printf("Enter a grade between A-F to know your performance:\n");
	
	scanf(" %c", &grade);

	switch (grade)
	{
		case 'A' :
			printf("You did awesome\n");
			break;
		case 'B' :
			printf(" You did okay\n");
			break;
		case 'C' :
			printf("You did poorly\n");
			break;
		case 'D' :
			printf("You did very poorly\n");
			break;
		case 'F' :
			printf("You failed\n");
			break;
		default :
			printf("invalid grade\n");
	}


	return (0);
}
