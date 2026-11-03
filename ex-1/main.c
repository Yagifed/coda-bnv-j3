#include <stdlib.h>
#include <stdio.h>

int main()
{
	int nb;
	printf("Ecrivez un nombre entier\n");
	scanf("%d", &nb);
	if (nb < 42)
	{
		printf("le nombre est inferieur a 42\n");
	}
	else if (nb > 42)
	{
		printf("le nombre est superieur a 42\n");
	}
	else
	{
		printf("le nombre est 42\n");
	}
	exit(0);
}
