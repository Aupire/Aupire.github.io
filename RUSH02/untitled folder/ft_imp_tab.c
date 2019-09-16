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

