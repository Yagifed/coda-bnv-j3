#include <stdlib.h>
#include <stdio.h>

int main()
{
	int count = 0;
	char mot[30];
	printf("saisissez un mot de moins de 50 caracteres\n");
	scanf("%s", mot);
	while (count < 5)
	{
		printf("%d: %s\n", count, mot);
		count = count + 1;
	}
}
