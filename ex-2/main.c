#include <stdlib.h>
#include <stdio.h>

int main()
{
	char symbol;
	printf("Choisissez une operation: +, -, *, /, %%\n");
	scanf(" %c", &symbol);
	if (symbol == '+')
	{
		printf("Vous avez choisi d'effectuer une addition\n");
	}
	else if (symbol == '-')
	{
		printf("Vous avez choisi d'effectuer une soustraction\n");
	}
	else if (symbol == '*')
	{
		printf("Vous avez choisi d'effectuer une multiplication\n");
	}
	else if (symbol == '%')
	{
		printf("Vous avez choisi d'effectuer un modulo\n");
	}
	else if (symbol == '/')
        {
                printf("Vous avez choisi d'effectuer une division\n");
        }
	exit(0);
}
