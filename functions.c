#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age)
{
	printf("Hello %s you are %d\n", name, age);
}


int main(void)
{
	sayHi("Tom", 25);
	sayHi("Dave", 24);
	return (0);
}

