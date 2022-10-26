#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int m;
	bool max;
	printf("Will you like a seat: 1 for yes, 0 for false: \n");
	scanf("%d", &m);
	max = m;


	if(max && m <= 1)
	{
		printf("This is true\n");

	}
	else if(m > 1)
	{
		printf("Invalid input, try a number between 0 and 1\n");
	}
	else
	{
		printf("This is false");
	}
	return (0);
}
