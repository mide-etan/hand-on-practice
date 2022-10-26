#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double num1;
	double num2;
	printf("This is a calculator for decimal numbers\n");
	printf("Enter your first number\n");
	scanf("%lf", &num1);
	printf("Enter your second number\n");
	scanf("%lf", &num2);
	printf("This is your answer: %f\n", num1 + num2);

	return (0);
}
