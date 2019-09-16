#include <stdio.h>

void	fff(int	*pointeur_sur_varible)
{
	*pointeur_sur_varible += 2;
}

int main()
{
	int a = 10;

	int *pointeur = NULL;
	int **pointeur2 = NULL;

	pointeur = &a;
	pointeur2 = &pointeur;

	printf("%d\n", **pointeur2);

	fff(&a);

	printf("%d\n", **pointeur2);
	return (0);
}
