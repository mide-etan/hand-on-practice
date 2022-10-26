#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//creating a struct
 struct Student
{
	char name[50];
	char major[50];
	int age;
	double gpa;
};


int main(void)
{
	struct Student student1;
	student1.age = 22;
	student1.gpa = 4.5;
	strcpy( student1.name, "Jude.oc");
	strcpy( student1.major, "Media");

	printf("%s\n %s\n", student1.name, student1.major);


	return (0);
}
