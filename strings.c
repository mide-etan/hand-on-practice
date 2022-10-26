#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("What is your name? \n");
	char name[20];
	scanf("%19s", name);
	int letter = 0;
	while(name[letter] != '\0')
	{
		letter++;
	}
	printf("sixe of name is %d\n", letter);

	// or use printf("%lu", strlen(name))
	// this works because of the .h file 
	return (0);
}
