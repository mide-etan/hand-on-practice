#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int age = 30;
	int *pAge = &age;
	double gpa = 3.4;
	double * pGpa = &gpa;
	char grade = 'A';
	char * pGrade = &grade;

	printf("%p\n", &age);

	//dereferencing a pointer
	
	printf("%d\n", *pAge);
	//also this works for dereferencing
	printf("%d\n", *&age);
	



	return (0);
}
