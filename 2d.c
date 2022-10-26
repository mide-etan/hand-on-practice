#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	for(int i = 0; i < 10; i++)
	{
		for(int j = i; j >= 0; j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	return (0);
}
