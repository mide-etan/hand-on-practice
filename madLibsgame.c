#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char color[10];
	char pluralNoun[20];
	char celebrityF[20];
	char celebrityG[20];

	printf("Enter a color: ");
	scanf("%s", color);
	printf("Enter a plural noun: ");
	scanf("%s", pluralNoun);
	printf("Enter the name of a celebrity first and second name: ");
	scanf("%s %s", celebrityF, celebrityG);
	printf("\n");

	printf("Roses are %s\n", color);
	printf("%s are blue\n", pluralNoun);
	printf("I love %s %s\n", celebrityF, celebrityG);
	printf("end of story\n");

	return (0);
}
