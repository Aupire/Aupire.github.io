#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_imp_tab(int tab[4][4])
{
	int tabX = 0;
	int tabY = 0;
	while (tabY <= 3)
	{
		while (tabX < 3)
		{

			ft_putchar(tab[tabY][tabX] + '0');
			ft_putchar(' ');

			tabX++;

		}
		if (tabX == 3)
		{
			ft_putchar(tab[tabY][tabX] + '0');
			ft_putchar('\n');
			tabX = 0;
		}
		tabY++;
	}
}

int	**ft_tab_entree(char *tab_char_param)
{
	int i = 0; // incrémentation pour le tableau tab_int_param
	int j = 0; // incrémentation pour le tableau tab_int_param
	int k = 0; // incrémentation pour la chaine de caractères tab_char_param

	int tab_int_param[4][4];

	while (tab_char_param[k])
	{
		while (j < 4)
		{
			while (i < 4)
			{
				if (tab_char_param[k] == ' ') // Si il y a un espace, on passe au caractère suivant
				{
					k++;
				}
				else // Si il n'y a pas d'espace, on intègre le char en int dans le tableau de résultat tab_int_param et on passe au caractère suivant
				{
					tab_int_param[j][i] = tab_char_param[k] - '0';
					k++;
					i++;
				}
			}
			j++;
			i = 0;
		}

		return (tab_int_param);
	}
}

#include <stdio.h>

int	main()
{
	char *c;
	c = "4 1 2 3 5 7 9 2 2 3 5 2 1 4 4 4";
	ft_imp_tab(ft_tab_entree(c));
	return (0);
}
