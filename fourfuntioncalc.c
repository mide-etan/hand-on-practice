#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double num1;
	double num2;
	char op;

	printf("Enter a number: ");
	scanf("%lf", &num1);
	printf("Enter operator: ");
	scanf(" %c", &op);
	printf("Enter another number: ");
	scanf("%lf", &num2);
	
	if(op == '+')
	{
		printf("%f", num1 + num2);
	}
	else if(op == '-')
	{
		printf("%f", num1 - num2);
	}
	else if(op == '*')
	{
		printf("%f\n", num1 * num2);
	}
	else if (op == '/')
	{
		printf("%f\n", num1 / num2);
	}
	else
	{
		printf("Invalid input for an operator\n");
	}

	return (0);
}
