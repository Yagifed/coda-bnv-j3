#include <stdlib.h>
#include <stdio.h>

int main()
{
	int nb;
	int count = 0;
	printf("Entrer un nombre different de zero\n");
	scanf("%d", &nb);
	while (count <= nb)
	{
		printf("%d\n", count);
		count = count + 1;
	}
	exit(0);
}
