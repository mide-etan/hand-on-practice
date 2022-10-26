#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	printf("This is a basic calculator to add intergers!\n");
	printf("Enter your first number\n");
	scanf("%d", &num1);
	printf("Enter your second number\n");
	scanf("%d", &num2);
	printf("Your answer = %d\n", num1 + num2);

	return (0);
}

