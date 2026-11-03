#include <stdlib.h>
#include <stdio.h>

int main()
{
	char symbol;
	int nb;
	printf("saisissez un symbole entre + et -\n");
	scanf("%c", &symbol);
	printf("saisissez un nombre different de zero\n");
	scanf("%d", &nb);
	if (symbol == '+')
	{
		int count = 0;
		while (count < nb)
		{
			printf("%d\n", count);
			count = count + 1;
		}
	}
	else if (symbol == '-')
	{
		int count = 0;
		while (count > nb)
		{
			printf("%d\n", count);
			count = count - 1;
		}
	}
	exit(0);
}
