#include <stdio.h>
#include <stdlib.h>

/**
 * chech which number is the biggest
 */

int max(int num1, int num2, int num3)
{
	int result;

	if(num1 >= num2 && num1 >= num3)
	{
		result = num1;
	}
	else if(num2 >= num1 && num2 >=num3)
	{
		result = num2;
	}
	else
	{
		result = num3;
	}
	return result;
}

int main(void)
{
	// using the or || operator
	
	// calling the max function printf("%d\n", max(4, 5, 2));
	
	if(1 > 2 || 2 >5)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	

	return (0);
}
