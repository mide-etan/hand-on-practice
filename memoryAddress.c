#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int age = 23;
	int gpa = 4.4;
	char grade = 'A';


	printf("age: %p\ngpa: %p\ngrade: %p\n", &age , &gpa, &grade);

	return (0);
}
