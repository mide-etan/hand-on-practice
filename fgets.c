#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[20];
	printf("enter your name: ");
	fgets(name, 20, stdin);
	printf("Your name is %s", name);

	return (0);
}
